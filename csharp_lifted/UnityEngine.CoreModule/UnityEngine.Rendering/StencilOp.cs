// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.StencilOp
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000327")]
[UnityEngine.Bindings.NativeHeader("Runtime/GfxDevice/GfxDeviceTypes.h")]
public enum StencilOp
{
	[Token(Token = "0x4000860")]
	Keep,
	[Token(Token = "0x4000861")]
	Zero,
	[Token(Token = "0x4000862")]
	Replace,
	[Token(Token = "0x4000863")]
	IncrementSaturate,
	[Token(Token = "0x4000864")]
	DecrementSaturate,
	[Token(Token = "0x4000865")]
	Invert,
	[Token(Token = "0x4000866")]
	IncrementWrap,
	[Token(Token = "0x4000867")]
	DecrementWrap
}
