/*
 * Texture.h
 *
 *  Created on: 10 ���. 2020 �.
 *      Author: Anastasiya
 */

#ifndef TEXTURE_H_
#define TEXTURE_H_
#include <GL/gl.h>
#include <GL/glu.h>

class Texture {
protected:
	GLuint _texture;
public:
	Texture(const char * filename);
	virtual ~Texture();

	void bind();
};

#endif
