# -*- mode: ruby -*-
# vi: set ft=ruby :

Vagrant.configure("2") do |config|
  config.vm.box = "ubuntu/trusty64"
  config.vm.network :private_network, ip: "192.168.37.99"
  config.vm.synced_folder "futsu-linux", "/home/vagrant/futsu-linux",
                          create: true, owner: "vagrant", group: "vagrant"
end
