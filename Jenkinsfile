pipeline {
	agent any
	stages {
		stage('Build') {
			steps {
				sh 'echo "Building..."'
				sh 'chmod +x script/linux-build.sh'
				sh 'script/linux-build.sh'
				archiveArtifacts artifacts: '/dist/Debug/GNU-Linux/*', fingerprint:true
				}
			}
		stage('Test'){
			steps {
				sh 'echo "Running..."'
				sh 'chmod +x script/linux-run.sh'
				sh 'script/linux-run.sh'
				}	
			}
		}
	}

