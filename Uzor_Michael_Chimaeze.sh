#!/bin/bash
gcloud compute networks create mynetwork --project=qwiklabs-gcp-01-f5204e2da81b --subnet-mode=auto --mtu=1460 --bgp-routing-mode=regional
gcloud compute firewall-rules create mynetwork-allow-custom --project=qwiklabs-gcp-01-f5204e2da81b --network=projects/qwiklabs-gcp-01-f5204e2da81b/global/networks/mynetwork --description=Allows\ connection\ from\ any\ source\ to\ any\ instance\ on\ the\ network\ using\ custom\ protocols. --direction=INGRESS --priority=65534 --source-ranges=10.128.0.0/9 --action=ALLOW --rules=all
gcloud compute firewall-rules create mynetwork-allow-icmp --project=qwiklabs-gcp-01-f5204e2da81b --network=projects/qwiklabs-gcp-01-f5204e2da81b/global/networks/mynetwork --description=Allows\ ICMP\ connections\ from\ any\ source\ to\ any\ instance\ on\ the\ network. --direction=INGRESS --priority=65534 --source-ranges=0.0.0.0/0 --action=ALLOW --rules=icmp
gcloud compute firewall-rules create mynetwork-allow-rdp --project=qwiklabs-gcp-01-f5204e2da81b --network=projects/qwiklabs-gcp-01-f5204e2da81b/global/networks/mynetwork --description=Allows\ RDP\ connections\ from\ any\ source\ to\ any\ instance\ on\ the\ network\ using\ port\ 3389. --direction=INGRESS --priority=65534 --source-ranges=0.0.0.0/0 --action=ALLOW --rules=tcp:3389
gcloud compute firewall-rules create mynetwork-allow-ssh --project=qwiklabs-gcp-01-f5204e2da81b --network=projects/qwiklabs-gcp-01-f5204e2da81b/global/networks/mynetwork --description=Allows\ TCP\ connections\ from\ any\ source\ to\ any\ instance\ on\ the\ network\ using\ port\ 22. --direction=INGRESS --priority=65534 --source-ranges=0.0.0.0/0 --action=ALLOW --rules=tcp:22
gcloud compute instances create mynet-us-vm --project=qwiklabs-gcp-01-f5204e2da81b --zone=us-central1-c --machine-type=f1-micro --network-interface=network-tier=PREMIUM,subnet=mynetwork --metadata=enable-oslogin=true --maintenance-policy=MIGRATE --provisioning-model=STANDARD --service-account=118356236623-compute@developer.gserviceaccount.com --create-disk=auto-delete=yes,boot=yes,device-name=mynet-us-vm,image=projects/debian-cloud/global/images/debian-11-bullseye-v20221102,mode=rw,size=10,type=projects/qwiklabs-gcp-01-f5204e2da81b/zones/us-central1-c/diskTypes/pd-balanced --no-shielded-secure-boot --shielded-vtpm --shielded-integrity-monitoring --reservation-affinity=any
gcloud compute instances create mynet-eu-vm --project=qwiklabs-gcp-01-f5204e2da81b --zone=europe-west1-c --machine-type=e2-micro --network-interface=network-tier=PREMIUM,subnet=mynetwork --metadata=enable-oslogin=true --maintenance-policy=MIGRATE --provisioning-model=STANDARD --service-account=118356236623-compute@developer.gserviceaccount.com --create-disk=auto-delete=yes,boot=yes,device-name=mynet-eu-vm,image=projects/debian-cloud/global/images/debian-11-bullseye-v20221102,mode=rw,size=10,type=projects/qwiklabs-gcp-01-f5204e2da81b/zones/europe-west1-c/diskTypes/pd-balanced --no-shielded-secure-boot --shielded-vtpm --shielded-integrity-monitoring --reservation-affinity=any
gcloud compute ssh --zone "us-central1-c" "mynet-us-vm" --project "qwiklabs-gcp-01-f5204e2da81b"
