// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchDrawRange
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000315")]
public struct BatchDrawRange
{
	[Token(Token = "0x40009AB")]
	[FieldOffset(Offset = "0x0")]
	public uint drawCommandsBegin;

	[Token(Token = "0x40009AC")]
	[FieldOffset(Offset = "0x4")]
	public uint drawCommandsCount;

	[Token(Token = "0x40009AD")]
	[FieldOffset(Offset = "0x8")]
	public BatchFilterSettings filterSettings;
}
