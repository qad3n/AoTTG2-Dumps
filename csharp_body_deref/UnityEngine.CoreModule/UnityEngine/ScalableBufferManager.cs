// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ScalableBufferManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000D2")]
[UnityEngine.Bindings.StaticAccessor("ScalableBufferManager::GetInstance()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Runtime/GfxDevice/ScalableBufferManager.h")]
public static class ScalableBufferManager
{
	[Token(Token = "0x170000C6")]
	public static extern float widthScaleFactor
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004A2")]
		[Address(RVA = "0x2ED3B40", Offset = "0x2ED2140", VA = "0x182ED3B40")]
		get;
	}

	[Token(Token = "0x170000C7")]
	public static extern float heightScaleFactor
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004A3")]
		[Address(RVA = "0x2ED3B10", Offset = "0x2ED2110", VA = "0x182ED3B10")]
		get;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x2ED3AC0", Offset = "0x2ED20C0", VA = "0x182ED3AC0")]
	public static extern void ResizeBuffers(float widthScale, float heightScale);
}
