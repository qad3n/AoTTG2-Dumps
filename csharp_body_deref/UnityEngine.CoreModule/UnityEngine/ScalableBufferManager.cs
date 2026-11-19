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

[Token(Token = "0x20000D3")]
[UnityEngine.Bindings.StaticAccessor("ScalableBufferManager::GetInstance()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Runtime/GfxDevice/ScalableBufferManager.h")]
public static class ScalableBufferManager
{
	[Token(Token = "0x170000CC")]
	public static extern float widthScaleFactor
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004B1")]
		[Address(RVA = "0x68D2860", Offset = "0x68D1860", VA = "0x68D2860")]
		get;
	}

	[Token(Token = "0x170000CD")]
	public static extern float heightScaleFactor
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004B2")]
		[Address(RVA = "0x68D2890", Offset = "0x68D1890", VA = "0x68D2890")]
		get;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x68D28C0", Offset = "0x68D18C0", VA = "0x68D28C0")]
	public static extern void ResizeBuffers(float widthScale, float heightScale);
}
