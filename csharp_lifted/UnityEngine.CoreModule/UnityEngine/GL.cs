// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GL
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20000D2")]
[UnityEngine.Bindings.StaticAccessor("GetGfxDevice()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Runtime/GfxDevice/GfxDevice.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/Camera.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/CameraUtil.h")]
public sealed class GL
{
	[Token(Token = "0x170000C9")]
	public static extern bool wireframe
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600049C")]
		[Address(RVA = "0x68D2280", Offset = "0x68D1280", VA = "0x68D2280")]
		get;
	}

	[Token(Token = "0x170000CA")]
	[UnityEngine.Bindings.NativeProperty("UserBackfaceMode")]
	public static extern bool invertCulling
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600049D")]
		[Address(RVA = "0x68D22B0", Offset = "0x68D12B0", VA = "0x68D22B0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600049E")]
		[Address(RVA = "0x68D22E0", Offset = "0x68D12E0", VA = "0x68D22E0")]
		set;
	}

	[Token(Token = "0x170000CB")]
	public static Matrix4x4 modelview
	{
		[Token(Token = "0x60004A1")]
		[Address(RVA = "0x68D23B0", Offset = "0x68D13B0", VA = "0x68D23B0")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000495")]
	[Address(RVA = "0x68D2010", Offset = "0x68D1010", VA = "0x68D2010")]
	[UnityEngine.Bindings.NativeName("ImmediateVertex")]
	public static extern void Vertex3(float x, float y, float z);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000496")]
	[Address(RVA = "0x68D2070", Offset = "0x68D1070", VA = "0x68D2070")]
	[UnityEngine.Bindings.NativeName("ImmediateTexCoordAll")]
	public static extern void TexCoord3(float x, float y, float z);

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x68D20D0", Offset = "0x68D10D0", VA = "0x68D20D0")]
	public static void TexCoord2(float x, float y)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000498")]
	[Address(RVA = "0x68D2120", Offset = "0x68D1120", VA = "0x68D2120")]
	[UnityEngine.Bindings.NativeName("ImmediateTexCoord")]
	public static extern void MultiTexCoord3(int unit, float x, float y, float z);

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x68D2180", Offset = "0x68D1180", VA = "0x68D2180")]
	public static void MultiTexCoord2(int unit, float x, float y)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600049A")]
	[Address(RVA = "0x68D21D0", Offset = "0x68D11D0", VA = "0x68D21D0")]
	[UnityEngine.Bindings.NativeName("ImmediateColor")]
	private static extern void ImmediateColor(float r, float g, float b, float a);

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x68D2230", Offset = "0x68D1230", VA = "0x68D2230")]
	public static void Color(Color c)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600049F")]
	[Address(RVA = "0x68D2310", Offset = "0x68D1310", VA = "0x68D2310")]
	public static extern void Flush();

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x68D2340", Offset = "0x68D1340", VA = "0x68D2340")]
	private static void SetViewMatrix(Matrix4x4 m)
	{
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x68D2420", Offset = "0x68D1420", VA = "0x68D2420")]
	[UnityEngine.Bindings.FreeFunction("GLLoadProjectionMatrixScript")]
	public static void LoadProjectionMatrix(Matrix4x4 mat)
	{
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x68D2490", Offset = "0x68D1490", VA = "0x68D2490")]
	[UnityEngine.Bindings.FreeFunction("GLGetGPUProjectionMatrix")]
	public static Matrix4x4 GetGPUProjectionMatrix(Matrix4x4 proj, bool renderIntoTexture)
	{
		return default(Matrix4x4);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x68D2560", Offset = "0x68D1560", VA = "0x68D2560")]
	[UnityEngine.Bindings.FreeFunction]
	private static extern void GLLoadPixelMatrixScript(float left, float right, float bottom, float top);

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x68D25C0", Offset = "0x68D15C0", VA = "0x68D25C0")]
	public static void LoadPixelMatrix(float left, float right, float bottom, float top)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x68D2620", Offset = "0x68D1620", VA = "0x68D2620")]
	[UnityEngine.Bindings.FreeFunction("GLBegin", ThrowsException = true)]
	public static extern void Begin(int mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x68D2650", Offset = "0x68D1650", VA = "0x68D2650")]
	[UnityEngine.Bindings.FreeFunction("GLEnd")]
	public static extern void End();

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x68D2680", Offset = "0x68D1680", VA = "0x68D2680")]
	[UnityEngine.Bindings.FreeFunction]
	private static void GLClear(bool clearDepth, bool clearColor, Color backgroundColor, float depth)
	{
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x68D2730", Offset = "0x68D1730", VA = "0x68D2730")]
	public static void Clear(bool clearDepth, bool clearColor, Color backgroundColor, [DefaultValue("1.0f")] float depth)
	{
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x68D2790", Offset = "0x68D1790", VA = "0x68D2790")]
	public static void Clear(bool clearDepth, bool clearColor, Color backgroundColor)
	{
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x68D27E0", Offset = "0x68D17E0", VA = "0x68D27E0")]
	[UnityEngine.Bindings.FreeFunction("SetGLViewport")]
	public static void Viewport(Rect pixelRect)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x68D2380", Offset = "0x68D1380", VA = "0x68D2380")]
	private static extern void SetViewMatrix_Injected([In] ref Matrix4x4 m);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x68D2460", Offset = "0x68D1460", VA = "0x68D2460")]
	private static extern void LoadProjectionMatrix_Injected([In] ref Matrix4x4 mat);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x68D2520", Offset = "0x68D1520", VA = "0x68D2520")]
	private static extern void GetGPUProjectionMatrix_Injected([In] ref Matrix4x4 proj, bool renderIntoTexture, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x68D26E0", Offset = "0x68D16E0", VA = "0x68D26E0")]
	private static extern void GLClear_Injected(bool clearDepth, bool clearColor, [In] ref Color backgroundColor, float depth);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x68D2830", Offset = "0x68D1830", VA = "0x68D2830")]
	private static extern void Viewport_Injected([In] ref Rect pixelRect);
}
