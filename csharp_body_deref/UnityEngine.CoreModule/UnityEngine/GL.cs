using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;

namespace UnityEngine;

[Token(Token = "0x20000AD")]
[UnityEngine.Bindings.StaticAccessor("GetGfxDevice()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/Camera.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/CameraUtil.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/GfxDevice/GfxDevice.h")]
public sealed class GL
{
	[Token(Token = "0x170000A1")]
	public static Matrix4x4 modelview
	{
		[Token(Token = "0x600034D")]
		[Address(RVA = "0x4A9BBF0", Offset = "0x4A9BBF0", VA = "0x4A9BBF0")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000345")]
	[Address(RVA = "0x4A9B8F0", Offset = "0x4A9B8F0", VA = "0x4A9B8F0")]
	[UnityEngine.Bindings.NativeName("ImmediateVertex")]
	public static extern void Vertex3(float x, float y, float z);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000346")]
	[Address(RVA = "0x4A9B950", Offset = "0x4A9B950", VA = "0x4A9B950")]
	[UnityEngine.Bindings.NativeName("ImmediateTexCoordAll")]
	public static extern void TexCoord3(float x, float y, float z);

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x4A9B9B0", Offset = "0x4A9B9B0", VA = "0x4A9B9B0")]
	public static void TexCoord2(float x, float y)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000348")]
	[Address(RVA = "0x4A9BA00", Offset = "0x4A9BA00", VA = "0x4A9BA00")]
	[UnityEngine.Bindings.NativeName("ImmediateTexCoord")]
	public static extern void MultiTexCoord3(int unit, float x, float y, float z);

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x4A9BA60", Offset = "0x4A9BA60", VA = "0x4A9BA60")]
	public static void MultiTexCoord2(int unit, float x, float y)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600034A")]
	[Address(RVA = "0x4A9BAB0", Offset = "0x4A9BAB0", VA = "0x4A9BAB0")]
	[UnityEngine.Bindings.NativeName("ImmediateColor")]
	private static extern void ImmediateColor(float r, float g, float b, float a);

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x4A9BB10", Offset = "0x4A9BB10", VA = "0x4A9BB10")]
	public static void Color(Color c)
	{
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x4A9BB80", Offset = "0x4A9BB80", VA = "0x4A9BB80")]
	private static void SetViewMatrix(Matrix4x4 m)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600034E")]
	[Address(RVA = "0x4A9BC60", Offset = "0x4A9BC60", VA = "0x4A9BC60")]
	[UnityEngine.Bindings.FreeFunction("GLPushMatrixScript")]
	public static extern void PushMatrix();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600034F")]
	[Address(RVA = "0x4A9BC90", Offset = "0x4A9BC90", VA = "0x4A9BC90")]
	[UnityEngine.Bindings.FreeFunction("GLPopMatrixScript")]
	public static extern void PopMatrix();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000350")]
	[Address(RVA = "0x4A9BCC0", Offset = "0x4A9BCC0", VA = "0x4A9BCC0")]
	[UnityEngine.Bindings.FreeFunction("GLLoadIdentityScript")]
	public static extern void LoadIdentity();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000351")]
	[Address(RVA = "0x4A9BCF0", Offset = "0x4A9BCF0", VA = "0x4A9BCF0")]
	[UnityEngine.Bindings.FreeFunction("GLLoadOrthoScript")]
	public static extern void LoadOrtho();

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x4A9BD20", Offset = "0x4A9BD20", VA = "0x4A9BD20")]
	[UnityEngine.Bindings.FreeFunction("GLLoadProjectionMatrixScript")]
	public static void LoadProjectionMatrix(Matrix4x4 mat)
	{
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x4A9BD90", Offset = "0x4A9BD90", VA = "0x4A9BD90")]
	[UnityEngine.Bindings.FreeFunction("GLGetGPUProjectionMatrix")]
	public static Matrix4x4 GetGPUProjectionMatrix(Matrix4x4 proj, bool renderIntoTexture)
	{
		return default(Matrix4x4);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000354")]
	[Address(RVA = "0x4A9BE60", Offset = "0x4A9BE60", VA = "0x4A9BE60")]
	[UnityEngine.Bindings.FreeFunction]
	private static extern void GLLoadPixelMatrixScript(float left, float right, float bottom, float top);

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x4A9BEC0", Offset = "0x4A9BEC0", VA = "0x4A9BEC0")]
	public static void LoadPixelMatrix(float left, float right, float bottom, float top)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000356")]
	[Address(RVA = "0x4A9BF20", Offset = "0x4A9BF20", VA = "0x4A9BF20")]
	[UnityEngine.Bindings.FreeFunction("GLBegin", ThrowsException = true)]
	public static extern void Begin(int mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000357")]
	[Address(RVA = "0x4A9BF50", Offset = "0x4A9BF50", VA = "0x4A9BF50")]
	[UnityEngine.Bindings.FreeFunction("GLEnd")]
	public static extern void End();

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x4A9BF80", Offset = "0x4A9BF80", VA = "0x4A9BF80")]
	[UnityEngine.Bindings.FreeFunction]
	private static void GLClear(bool clearDepth, bool clearColor, Color backgroundColor, float depth)
	{
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x4A9C030", Offset = "0x4A9C030", VA = "0x4A9C030")]
	public static void Clear(bool clearDepth, bool clearColor, Color backgroundColor, [DefaultValue("1.0f")] float depth)
	{
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x4A9C090", Offset = "0x4A9C090", VA = "0x4A9C090")]
	public static void Clear(bool clearDepth, bool clearColor, Color backgroundColor)
	{
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x4A9C0E0", Offset = "0x4A9C0E0", VA = "0x4A9C0E0")]
	[UnityEngine.Bindings.FreeFunction("SetGLViewport")]
	public static void Viewport(Rect pixelRect)
	{
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x4A9C160", Offset = "0x4A9C160", VA = "0x4A9C160")]
	[UnityEngine.Bindings.FreeFunction("ClearWithSkybox")]
	public static void ClearWithSkybox(bool clearDepth, Camera camera)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600035D")]
	[Address(RVA = "0x4A9BBC0", Offset = "0x4A9BBC0", VA = "0x4A9BBC0")]
	private static extern void SetViewMatrix_Injected([In] ref Matrix4x4 m);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600035E")]
	[Address(RVA = "0x4A9BD60", Offset = "0x4A9BD60", VA = "0x4A9BD60")]
	private static extern void LoadProjectionMatrix_Injected([In] ref Matrix4x4 mat);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600035F")]
	[Address(RVA = "0x4A9BE20", Offset = "0x4A9BE20", VA = "0x4A9BE20")]
	private static extern void GetGPUProjectionMatrix_Injected([In] ref Matrix4x4 proj, bool renderIntoTexture, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000360")]
	[Address(RVA = "0x4A9BFE0", Offset = "0x4A9BFE0", VA = "0x4A9BFE0")]
	private static extern void GLClear_Injected(bool clearDepth, bool clearColor, [In] ref Color backgroundColor, float depth);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000361")]
	[Address(RVA = "0x4A9C130", Offset = "0x4A9C130", VA = "0x4A9C130")]
	private static extern void Viewport_Injected([In] ref Rect pixelRect);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000362")]
	[Address(RVA = "0x4A9C210", Offset = "0x4A9C210", VA = "0x4A9C210")]
	private static extern void ClearWithSkybox_Injected(bool clearDepth, IntPtr camera);
}
