package moneda;
import com.jogamp.opengl.util.gl2.GLUT;
import com.jogamp.opengl.util.texture.Texture;
import javax.media.opengl.GL2;
import javax.media.opengl.glu.GLU;

public class Moneda {
    private static final int X = 0;
    private static final int Y = 1;
    private static final int Z = 2;
    private static final int SIZE = 10;

    static float AnguloX = 0;
    //private Texture moneda2;
    //private Texture moneda;

    private Texture benito2;
    private Texture benito;
    
    
     public static void benito2(GL2 gl, float R, float Cx, float Cy, float Cz, int numv,Texture benito2){
    gl.glTexEnvi(gl.GL_TEXTURE_ENV, gl.GL_TEXTURE_ENV_MODE, gl.GL_DECAL);
    benito2.enable(gl);
    benito2.bind(gl);
    float angulo = 0.0f;
    float Dx, Dy,Ax, Ay;
    
    benito2.disable(gl);
    
    }
     
    public static void benito(GL2 gl, float R, float Cx, float Cy, float Cz, int numv,Texture benito){
    gl.glTexEnvi(gl.GL_TEXTURE_ENV, gl.GL_TEXTURE_ENV_MODE, gl.GL_DECAL);
    benito.enable(gl);
    benito.bind(gl);
    float angulo = 0.0f;
    float Dx, Dy,Ax, Ay;
    gl.glBegin(GL2.GL_POLYGON);
    gl.glColor3f(0,0,0);
        for(int i = 0; i < numv; ++i){
        Dx = (float) (R* Math.cos(angulo*Math.PI/180));
        Dy = (float) (R* Math.sin(angulo*Math.PI/180));

        Ax = (float) (0.5f* Math.cos(angulo*Math.PI/180)+0.5f);
        Ay = (float) (0.5f* Math.sin(angulo*Math.PI/180)+0.5f);
        gl.glTexCoord2f(Ax,Ay);
        gl.glVertex3f(Cx+Dx, Cy+Dy, Cz);
        angulo = angulo + 360.0f/numv;
        }
    gl.glEnd();
    benito.disable(gl);
   
    }
     
     
    
}    