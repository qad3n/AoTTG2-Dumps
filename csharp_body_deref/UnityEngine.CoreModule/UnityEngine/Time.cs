// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Time
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x200019D")]
[UnityEngine.Bindings.StaticAccessor("GetTimeManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/TimeManager.h")]
public class Time
{
	[Token(Token = "0x170001FC")]
	[UnityEngine.Bindings.NativeProperty("CurTime")]
	public static extern float time
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BBB")]
		[Address(RVA = "0x4E05AD0", Offset = "0x4E05AD0", VA = "0x4E05AD0")]
		get;
	}

	[Token(Token = "0x170001FD")]
	public static extern float deltaTime
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BBC")]
		[Address(RVA = "0x4DEF240", Offset = "0x4DEF240", VA = "0x4DEF240")]
		get;
	}

	[Token(Token = "0x170001FE")]
	public static extern float fixedTime
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BBD")]
		[Address(RVA = "0x4E05B00", Offset = "0x4E05B00", VA = "0x4E05B00")]
		get;
	}

	[Token(Token = "0x170001FF")]
	public static extern float unscaledTime
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BBE")]
		[Address(RVA = "0x4E05B30", Offset = "0x4E05B30", VA = "0x4E05B30")]
		get;
	}

	[Token(Token = "0x17000200")]
	public static extern float unscaledDeltaTime
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BBF")]
		[Address(RVA = "0x4E05B60", Offset = "0x4E05B60", VA = "0x4E05B60")]
		get;
	}

	[Token(Token = "0x17000201")]
	public static extern float fixedDeltaTime
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BC0")]
		[Address(RVA = "0x4E05B90", Offset = "0x4E05B90", VA = "0x4E05B90")]
		get;
	}

	[Token(Token = "0x17000202")]
	public static extern float smoothDeltaTime
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BC1")]
		[Address(RVA = "0x4E05BC0", Offset = "0x4E05BC0", VA = "0x4E05BC0")]
		get;
	}

	[Token(Token = "0x17000203")]
	public static extern float timeScale
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BC2")]
		[Address(RVA = "0x4E05BF0", Offset = "0x4E05BF0", VA = "0x4E05BF0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BC3")]
		[Address(RVA = "0x4E05C20", Offset = "0x4E05C20", VA = "0x4E05C20")]
		set;
	}

	[Token(Token = "0x17000204")]
	public static extern int frameCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BC4")]
		[Address(RVA = "0x4E05C60", Offset = "0x4E05C60", VA = "0x4E05C60")]
		get;
	}

	[Token(Token = "0x17000205")]
	[UnityEngine.Bindings.NativeProperty("RenderFrameCount")]
	public static extern int renderedFrameCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BC5")]
		[Address(RVA = "0x4E05C90", Offset = "0x4E05C90", VA = "0x4E05C90")]
		get;
	}

	[Token(Token = "0x17000206")]
	[UnityEngine.Bindings.NativeProperty("Realtime")]
	public static extern float realtimeSinceStartup
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BC6")]
		[Address(RVA = "0x4E03CC0", Offset = "0x4E03CC0", VA = "0x4E03CC0")]
		get;
	}
}
