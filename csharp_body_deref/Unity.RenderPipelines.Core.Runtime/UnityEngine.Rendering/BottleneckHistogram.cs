// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BottleneckHistogram
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000F2")]
internal struct BottleneckHistogram
{
	[Token(Token = "0x4000349")]
	[FieldOffset(Offset = "0x0")]
	internal float PresentLimited;

	[Token(Token = "0x400034A")]
	[FieldOffset(Offset = "0x4")]
	internal float CPU;

	[Token(Token = "0x400034B")]
	[FieldOffset(Offset = "0x8")]
	internal float GPU;

	[Token(Token = "0x400034C")]
	[FieldOffset(Offset = "0xC")]
	internal float Balanced;
}
