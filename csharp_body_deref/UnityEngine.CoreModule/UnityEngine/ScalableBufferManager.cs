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
		[Address(RVA = "0x4DC3A70", Offset = "0x4DC3A70", VA = "0x4DC3A70")]
		get;
	}

	[Token(Token = "0x170000A3")]
	public static extern float heightScaleFactor
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000364")]
		[Address(RVA = "0x4DC3AA0", Offset = "0x4DC3AA0", VA = "0x4DC3AA0")]
		get;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000365")]
	[Address(RVA = "0x4DC3AD0", Offset = "0x4DC3AD0", VA = "0x4DC3AD0")]
	public static extern void ResizeBuffers(float widthScale, float heightScale);
}
