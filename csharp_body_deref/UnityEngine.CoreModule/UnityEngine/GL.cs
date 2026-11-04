// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GL
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;

namespace UnityEngine;

[Token(Token = "0x20000D1")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/Camera.h")]
[UnityEngine.Bindings.StaticAccessor("GetGfxDevice()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Runtime/GfxDevice/GfxDevice.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/CameraUtil.h")]
public sealed class GL
{
	[Token(Token = "0x170000C3")]
	public static extern bool wireframe
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600048D")]
		[Address(RVA = "0x2EC7AC0", Offset = "0x2EC60C0", VA = "0x182EC7AC0")]
		get;
	}

	[Token(Token = "0x170000C4")]
	[UnityEngine.Bindings.NativeProperty("UserBackfaceMode")]
	public static extern bool invertCulling
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600048E")]
		[Address(RVA = "0x2EC7A90", Offset = "0x2EC6090", VA = "0x182EC7A90")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600048F")]
		[Address(RVA = "0x2EC7AF0", Offset = "0x2EC60F0", VA = "0x182EC7AF0")]
		set;
	}

	[Token(Token = "0x170000C5")]
	public static Matrix4x4 modelview
	{
		[Token(Token = "0x6000492")]
		[Address(RVA = "0x2EC7B30", Offset = "0x2EC6130", VA = "0x182EC7B30")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000486")]
	[Address(RVA = "0x2EC79B0", Offset = "0x2EC5FB0", VA = "0x182EC79B0")]
	[UnityEngine.Bindings.NativeName("ImmediateVertex")]
	public static extern void Vertex3(float x, float y, float z);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000487")]
	[Address(RVA = "0x2EC7950", Offset = "0x2EC5F50", VA = "0x182EC7950")]
	[UnityEngine.Bindings.NativeName("ImmediateTexCoordAll")]
	public static extern void TexCoord3(float x, float y, float z);

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x2EC7900", Offset = "0x2EC5F00", VA = "0x182EC7900")]
	public static void TexCoord2(float x, float y)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000489")]
	[Address(RVA = "0x2EC7810", Offset = "0x2EC5E10", VA = "0x182EC7810")]
	[UnityEngine.Bindings.NativeName("ImmediateTexCoord")]
	public static extern void MultiTexCoord3(int unit, float x, float y, float z);

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x2EC77B0", Offset = "0x2EC5DB0", VA = "0x182EC77B0")]
	public static void MultiTexCoord2(int unit, float x, float y)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600048B")]
	[Address(RVA = "0x2EC76B0", Offset = "0x2EC5CB0", VA = "0x182EC76B0")]
	[UnityEngine.Bindings.NativeName("ImmediateColor")]
	private static extern void ImmediateColor(float r, float g, float b, float a);

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x2EC73D0", Offset = "0x2EC59D0", VA = "0x182EC73D0")]
	public static void Color(Color c)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000490")]
	[Address(RVA = "0x2EC7450", Offset = "0x2EC5A50", VA = "0x182EC7450")]
	public static extern void Flush();

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x2EC78C0", Offset = "0x2EC5EC0", VA = "0x182EC78C0")]
	private static void SetViewMatrix(Matrix4x4 m)
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x2EC7770", Offset = "0x2EC5D70", VA = "0x182EC7770")]
	[UnityEngine.Bindings.FreeFunction("GLLoadProjectionMatrixScript")]
	public static void LoadProjectionMatrix(Matrix4x4 mat)
	{
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x2EC7640", Offset = "0x2EC5C40", VA = "0x182EC7640")]
	[UnityEngine.Bindings.FreeFunction("GLGetGPUProjectionMatrix")]
	public static Matrix4x4 GetGPUProjectionMatrix(Matrix4x4 proj, bool renderIntoTexture)
	{
		return default(Matrix4x4);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000495")]
	[Address(RVA = "0x2EC7560", Offset = "0x2EC5B60", VA = "0x182EC7560")]
	[UnityEngine.Bindings.FreeFunction]
	private static extern void GLLoadPixelMatrixScript(float left, float right, float bottom, float top);

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x2EC7560", Offset = "0x2EC5B60", VA = "0x182EC7560")]
	public static void LoadPixelMatrix(float left, float right, float bottom, float top)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000497")]
	[Address(RVA = "0x2EC72C0", Offset = "0x2EC58C0", VA = "0x182EC72C0")]
	[UnityEngine.Bindings.FreeFunction("GLBegin", ThrowsException = true)]
	public static extern void Begin(int mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000498")]
	[Address(RVA = "0x2EC7420", Offset = "0x2EC5A20", VA = "0x182EC7420")]
	[UnityEngine.Bindings.FreeFunction("GLEnd")]
	public static extern void End();

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x2EC74F0", Offset = "0x2EC5AF0", VA = "0x182EC74F0")]
	[UnityEngine.Bindings.FreeFunction]
	private static void GLClear(bool clearDepth, bool clearColor, Color backgroundColor, float depth)
	{
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x2EC7300", Offset = "0x2EC5900", VA = "0x182EC7300")]
	public static void Clear(bool clearDepth, bool clearColor, Color backgroundColor, [DefaultValue("1.0f")] float depth)
	{
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x2EC7370", Offset = "0x2EC5970", VA = "0x182EC7370")]
	public static void Clear(bool clearDepth, bool clearColor, Color backgroundColor)
	{
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x2EC7A50", Offset = "0x2EC6050", VA = "0x182EC7A50")]
	[UnityEngine.Bindings.FreeFunction("SetGLViewport")]
	public static void Viewport(Rect pixelRect)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600049D")]
	[Address(RVA = "0x2EC7880", Offset = "0x2EC5E80", VA = "0x182EC7880")]
	private static extern void SetViewMatrix_Injected([In] ref Matrix4x4 m);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600049E")]
	[Address(RVA = "0x2EC7730", Offset = "0x2EC5D30", VA = "0x182EC7730")]
	private static extern void LoadProjectionMatrix_Injected([In] ref Matrix4x4 mat);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600049F")]
	[Address(RVA = "0x2EC75E0", Offset = "0x2EC5BE0", VA = "0x182EC75E0")]
	private static extern void GetGPUProjectionMatrix_Injected([In] ref Matrix4x4 proj, bool renderIntoTexture, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x2EC7480", Offset = "0x2EC5A80", VA = "0x182EC7480")]
	private static extern void GLClear_Injected(bool clearDepth, bool clearColor, [In] ref Color backgroundColor, float depth);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x2EC7A10", Offset = "0x2EC6010", VA = "0x182EC7A10")]
	private static extern void Viewport_Injected([In] ref Rect pixelRect);
}
