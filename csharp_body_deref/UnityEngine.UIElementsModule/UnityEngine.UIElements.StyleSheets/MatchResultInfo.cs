// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.MatchResultInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.StyleSheets;

[Token(Token = "0x200053B")]
internal struct MatchResultInfo
{
	[Token(Token = "0x4001213")]
	[FieldOffset(Offset = "0x0")]
	public readonly bool success;

	[Token(Token = "0x4001214")]
	[FieldOffset(Offset = "0x4")]
	public readonly PseudoStates triggerPseudoMask;

	[Token(Token = "0x4001215")]
	[FieldOffset(Offset = "0x8")]
	public readonly PseudoStates dependencyPseudoMask;

	[Token(Token = "0x6002022")]
	[Address(RVA = "0x4FCBF00", Offset = "0x4FCBF00", VA = "0x4FCBF00")]
	public MatchResultInfo(bool success, PseudoStates triggerPseudoMask, PseudoStates dependencyPseudoMask)
	{
	}
}
