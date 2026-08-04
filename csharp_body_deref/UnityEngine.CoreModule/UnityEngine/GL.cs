// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GL
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4DC3410", Offset = "0x4DC3410", VA = "0x4DC3410")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000345")]
	[Address(RVA = "0x4DC3110", Offset = "0x4DC3110", VA = "0x4DC3110")]
	[UnityEngine.Bindings.NativeName("ImmediateVertex")]
	public static extern void Vertex3(float x, float y, float z);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000346")]
	[Address(RVA = "0x4DC3170", Offset = "0x4DC3170", VA = "0x4DC3170")]
	[UnityEngine.Bindings.NativeName("ImmediateTexCoordAll")]
	public static extern void TexCoord3(float x, float y, float z);

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x4DC31D0", Offset = "0x4DC31D0", VA = "0x4DC31D0")]
	public static void TexCoord2(float x, float y)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000348")]
	[Address(RVA = "0x4DC3220", Offset = "0x4DC3220", VA = "0x4DC3220")]
	[UnityEngine.Bindings.NativeName("ImmediateTexCoord")]
	public static extern void MultiTexCoord3(int unit, float x, float y, float z);

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x4DC3280", Offset = "0x4DC3280", VA = "0x4DC3280")]
	public static void MultiTexCoord2(int unit, float x, float y)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600034A")]
	[Address(RVA = "0x4DC32D0", Offset = "0x4DC32D0", VA = "0x4DC32D0")]
	[UnityEngine.Bindings.NativeName("ImmediateColor")]
	private static extern void ImmediateColor(float r, float g, float b, float a);

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x4DC3330", Offset = "0x4DC3330", VA = "0x4DC3330")]
	public static void Color(Color c)
	{
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x4DC33A0", Offset = "0x4DC33A0", VA = "0x4DC33A0")]
	private static void SetViewMatrix(Matrix4x4 m)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600034E")]
	[Address(RVA = "0x4DC3480", Offset = "0x4DC3480", VA = "0x4DC3480")]
	[UnityEngine.Bindings.FreeFunction("GLPushMatrixScript")]
	public static extern void PushMatrix();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600034F")]
	[Address(RVA = "0x4DC34B0", Offset = "0x4DC34B0", VA = "0x4DC34B0")]
	[UnityEngine.Bindings.FreeFunction("GLPopMatrixScript")]
	public static extern void PopMatrix();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000350")]
	[Address(RVA = "0x4DC34E0", Offset = "0x4DC34E0", VA = "0x4DC34E0")]
	[UnityEngine.Bindings.FreeFunction("GLLoadIdentityScript")]
	public static extern void LoadIdentity();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000351")]
	[Address(RVA = "0x4DC3510", Offset = "0x4DC3510", VA = "0x4DC3510")]
	[UnityEngine.Bindings.FreeFunction("GLLoadOrthoScript")]
	public static extern void LoadOrtho();

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x4DC3540", Offset = "0x4DC3540", VA = "0x4DC3540")]
	[UnityEngine.Bindings.FreeFunction("GLLoadProjectionMatrixScript")]
	public static void LoadProjectionMatrix(Matrix4x4 mat)
	{
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x4DC35B0", Offset = "0x4DC35B0", VA = "0x4DC35B0")]
	[UnityEngine.Bindings.FreeFunction("GLGetGPUProjectionMatrix")]
	public static Matrix4x4 GetGPUProjectionMatrix(Matrix4x4 proj, bool renderIntoTexture)
	{
		return default(Matrix4x4);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000354")]
	[Address(RVA = "0x4DC3680", Offset = "0x4DC3680", VA = "0x4DC3680")]
	[UnityEngine.Bindings.FreeFunction]
	private static extern void GLLoadPixelMatrixScript(float left, float right, float bottom, float top);

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x4DC36E0", Offset = "0x4DC36E0", VA = "0x4DC36E0")]
	public static void LoadPixelMatrix(float left, float right, float bottom, float top)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000356")]
	[Address(RVA = "0x4DC3740", Offset = "0x4DC3740", VA = "0x4DC3740")]
	[UnityEngine.Bindings.FreeFunction("GLBegin", ThrowsException = true)]
	public static extern void Begin(int mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000357")]
	[Address(RVA = "0x4DC3770", Offset = "0x4DC3770", VA = "0x4DC3770")]
	[UnityEngine.Bindings.FreeFunction("GLEnd")]
	public static extern void End();

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x4DC37A0", Offset = "0x4DC37A0", VA = "0x4DC37A0")]
	[UnityEngine.Bindings.FreeFunction]
	private static void GLClear(bool clearDepth, bool clearColor, Color backgroundColor, float depth)
	{
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x4DC3850", Offset = "0x4DC3850", VA = "0x4DC3850")]
	public static void Clear(bool clearDepth, bool clearColor, Color backgroundColor, [DefaultValue("1.0f")] float depth)
	{
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x4DC38B0", Offset = "0x4DC38B0", VA = "0x4DC38B0")]
	public static void Clear(bool clearDepth, bool clearColor, Color backgroundColor)
	{
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x4DC3900", Offset = "0x4DC3900", VA = "0x4DC3900")]
	[UnityEngine.Bindings.FreeFunction("SetGLViewport")]
	public static void Viewport(Rect pixelRect)
	{
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x4DC3980", Offset = "0x4DC3980", VA = "0x4DC3980")]
	[UnityEngine.Bindings.FreeFunction("ClearWithSkybox")]
	public static void ClearWithSkybox(bool clearDepth, Camera camera)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600035D")]
	[Address(RVA = "0x4DC33E0", Offset = "0x4DC33E0", VA = "0x4DC33E0")]
	private static extern void SetViewMatrix_Injected([In] ref Matrix4x4 m);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600035E")]
	[Address(RVA = "0x4DC3580", Offset = "0x4DC3580", VA = "0x4DC3580")]
	private static extern void LoadProjectionMatrix_Injected([In] ref Matrix4x4 mat);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600035F")]
	[Address(RVA = "0x4DC3640", Offset = "0x4DC3640", VA = "0x4DC3640")]
	private static extern void GetGPUProjectionMatrix_Injected([In] ref Matrix4x4 proj, bool renderIntoTexture, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000360")]
	[Address(RVA = "0x4DC3800", Offset = "0x4DC3800", VA = "0x4DC3800")]
	private static extern void GLClear_Injected(bool clearDepth, bool clearColor, [In] ref Color backgroundColor, float depth);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000361")]
	[Address(RVA = "0x4DC3950", Offset = "0x4DC3950", VA = "0x4DC3950")]
	private static extern void Viewport_Injected([In] ref Rect pixelRect);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000362")]
	[Address(RVA = "0x4DC3A30", Offset = "0x4DC3A30", VA = "0x4DC3A30")]
	private static extern void ClearWithSkybox_Injected(bool clearDepth, IntPtr camera);
}
