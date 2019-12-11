#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	shader.load("mengerGlass");

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	camera.begin();

	glm::mat4 MVPMat = camera.getModelViewProjectionMatrix();
	glm::mat4 InvMVPMat = glm::inverse(MVPMat);

	shader.begin();
	shader.setUniformMatrix4f("InvMVEP", InvMVPMat);
	shader.setUniform3f("moonlight.direction", glm::vec3(-0.2f, -1.0f, -0.3f)); 
	shader.setUniform3f("material.ambient", glm::vec3(0.1f, 0.1f, 0.1f));
	shader.setUniform3f("material.diffuse", glm::vec3(0.2f, 0.2f, 0.2f));
	shader.setUniform3f("material.specular", glm::vec3(1.0f, 1.0f, 1.0f));
	shader.setUniform1f("material.shininess", 256.0f); 
	shader.setUniform3f("ground.colour", glm::vec3(0.0f, 0.0f, 0.0f));
	shader.setUniform3f("ground.ambient", glm::vec3(0.1f, 0.1f, 0.1f));
	shader.setUniform3f("ground.diffuse", glm::vec3(0.2f, 0.2f, 0.2f));
	shader.setUniform3f("ground.specular", glm::vec3(0.2f, 0.2f, 0.2f));
	shader.setUniform1f("ground.shininess", 8.0f);
	ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
	shader.end();
	camera.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
