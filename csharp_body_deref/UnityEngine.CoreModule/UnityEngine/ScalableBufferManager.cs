using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000AE")]
[UnityEngine.Bindings.StaticAccessor("ScalableBufferManager::GetInstance()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Runtime/GfxDevice/ScalableBufferManager.h")]
public static class ScalableBufferManager
{
	[Token(Token = "0x170000A2")]
	public static extern float widthScaleFactor
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000363")]
		[Address(RVA = "0x4A9C250", Offset = "0x4A9C250", VA = "0x4A9C250")]
		get;
	}

	[Token(Token = "0x170000A3")]
	public static extern float heightScaleFactor
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000364")]
		[Address(RVA = "0x4A9C280", Offset = "0x4A9C280", VA = "0x4A9C280")]
		get;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000365")]
	[Address(RVA = "0x4A9C2B0", Offset = "0x4A9C2B0", VA = "0x4A9C2B0")]
	public static extern void ResizeBuffers(float widthScale, float heightScale);
}
