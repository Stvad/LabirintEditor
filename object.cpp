#include "object.h"

Object::Object()
{
}

void Object::Show()
{
    glPushMatrix();
    glTranslatef(Position.x, Position.y, Position.z);
    glRotatef(Angle, 0, 1, 0);
    glColor3f(Color.redF(), Color.greenF(), Color.blueF());
    glInterleavedArrays(GL_T2F_N3F_V3F, 0, m_points);
    glDrawElements(GL_TRIANGLES, m_IndexSize, GL_UNSIGNED_SHORT, m_indexes);
    glPopMatrix();
}
