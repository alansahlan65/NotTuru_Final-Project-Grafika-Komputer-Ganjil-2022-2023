#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint VBO0, VAO0, EBO0, texture0; //Ruangan
	GLuint shaderProgram, VBO, VAO, EBO, texture; //Meja
	GLuint VBO2, VAO2, EBO2, texture2; //Lantai
	GLuint VBO3, VAO3, EBO3, texture3; //Kursi
	GLuint VBO4, VAO4, EBO4, texture4; //Kasur
	GLuint VBO5, VAO5, EBO5, texture5; //Bantal
	GLuint VBO6, VAO6, EBO6, texture6; //PenyanggaKasur
	GLuint VBO7, VAO7, EBO7, texture7; //Pintu
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow* window);
	//Ruangan
	void BuildColoredRoom();
	void DrawColoredRoom();
	//Jendela
	void BuildColoredJendela();
	void DrawColoredJendela();
	//Meja
	void BuildColoredCube();
	void DrawColoredCube();
	//Kursi
	void BuildColoredKursi();
	void DrawColoredKursi();
	//Kasur
	void BuildColoredKasur();
	void DrawColoredKasur();
	//Bantal
	void BuildColoredBantal();
	void DrawColoredBantal();
	//PenyanggaKasur
	void BuildColoredPenyanggakasur();
	void DrawColoredPenyanggakasur();
	//Pintu
	void BuildColoredPintu();
	void DrawColoredPintu();
	//Lantai
	void BuildColoredPlane();
	void DrawColoredPlane();
	//Camera
	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();
};

