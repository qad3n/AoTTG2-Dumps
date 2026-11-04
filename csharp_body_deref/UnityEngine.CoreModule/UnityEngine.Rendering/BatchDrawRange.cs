// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchDrawRange
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200037C")]
public struct BatchDrawRange
{
	[Token(Token = "0x4000A56")]
	[FieldOffset(Offset = "0x0")]
	public BatchDrawCommandType drawCommandsType;

	[Token(Token = "0x4000A57")]
	[FieldOffset(Offset = "0x4")]
	public uint drawCommandsBegin;

	[Token(Token = "0x4000A58")]
	[FieldOffset(Offset = "0x8")]
	public uint drawCommandsCount;

	[Token(Token = "0x4000A59")]
	[FieldOffset(Offset = "0x10")]
	public BatchFilterSettings filterSettings;
}
