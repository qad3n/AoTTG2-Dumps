using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x200019A")]
[UnityEngine.Bindings.StaticAccessor("GetTimeManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/TimeManager.h")]
public class Time
{
	[Token(Token = "0x170001FB")]
	[UnityEngine.Bindings.NativeProperty("CurTime")]
	public static extern float time
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BB9")]
		[Address(RVA = "0x4ADE1A0", Offset = "0x4ADE1A0", VA = "0x4ADE1A0")]
		get;
	}

	[Token(Token = "0x170001FC")]
	public static extern float deltaTime
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BBA")]
		[Address(RVA = "0x4AC7910", Offset = "0x4AC7910", VA = "0x4AC7910")]
		get;
	}

	[Token(Token = "0x170001FD")]
	public static extern float fixedTime
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BBB")]
		[Address(RVA = "0x4ADE1D0", Offset = "0x4ADE1D0", VA = "0x4ADE1D0")]
		get;
	}

	[Token(Token = "0x170001FE")]
	public static extern float unscaledTime
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BBC")]
		[Address(RVA = "0x4ADE200", Offset = "0x4ADE200", VA = "0x4ADE200")]
		get;
	}

	[Token(Token = "0x170001FF")]
	public static extern float unscaledDeltaTime
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BBD")]
		[Address(RVA = "0x4ADE230", Offset = "0x4ADE230", VA = "0x4ADE230")]
		get;
	}

	[Token(Token = "0x17000200")]
	public static extern float fixedDeltaTime
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BBE")]
		[Address(RVA = "0x4ADE260", Offset = "0x4ADE260", VA = "0x4ADE260")]
		get;
	}

	[Token(Token = "0x17000201")]
	public static extern float smoothDeltaTime
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BBF")]
		[Address(RVA = "0x4ADE290", Offset = "0x4ADE290", VA = "0x4ADE290")]
		get;
	}

	[Token(Token = "0x17000202")]
	public static extern float timeScale
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BC0")]
		[Address(RVA = "0x4ADE2C0", Offset = "0x4ADE2C0", VA = "0x4ADE2C0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BC1")]
		[Address(RVA = "0x4ADE2F0", Offset = "0x4ADE2F0", VA = "0x4ADE2F0")]
		set;
	}

	[Token(Token = "0x17000203")]
	public static extern int frameCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BC2")]
		[Address(RVA = "0x4ADE330", Offset = "0x4ADE330", VA = "0x4ADE330")]
		get;
	}

	[Token(Token = "0x17000204")]
	[UnityEngine.Bindings.NativeProperty("RenderFrameCount")]
	public static extern int renderedFrameCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BC3")]
		[Address(RVA = "0x4ADE360", Offset = "0x4ADE360", VA = "0x4ADE360")]
		get;
	}

	[Token(Token = "0x17000205")]
	[UnityEngine.Bindings.NativeProperty("Realtime")]
	public static extern float realtimeSinceStartup
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BC4")]
		[Address(RVA = "0x4ADC390", Offset = "0x4ADC390", VA = "0x4ADC390")]
		get;
	}
}
