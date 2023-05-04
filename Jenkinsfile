pipeline {
	agent any
	stages {
		stage('Build') {
			steps {
				sh 'echo "Building..."'
				sh 'chmod +x scripts/linux-build.sh'
				sh 'script/linux-build.sh'
				archiveArtifacts artifacts: 'dist/Debug/*', fingerprint:true
				}
			}
		stage('Test'){
			steps {
				sh 'echo "Running..."'
				sh 'chmod +x scripts/linux-run.sh'
				sh 'script/linux-run.sh'
				}	
			}
		}
	}

