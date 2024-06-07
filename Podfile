# Uncomment the next line to define a global platform for your project
platform :ios, '13.0'

target 'DialogGRPC' do
    use_frameworks!

  pod 'gRPC-ProtoRPC', '=1.64.1'
  pod 'Protobuf', '=3.23.3'

end

post_install do |installer|
    installer.pods_project.targets.each do |target|
        target.build_configurations.each do |config|
            config.build_settings['BUILD_LIBRARY_FOR_DISTRIBUTION'] = "YES"
        end
    end
end
