// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.MatchResultInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.StyleSheets;

[Token(Token = "0x2000633")]
internal struct MatchResultInfo
{
	[Token(Token = "0x40017BD")]
	[FieldOffset(Offset = "0x0")]
	public readonly bool success;

	[Token(Token = "0x40017BE")]
	[FieldOffset(Offset = "0x4")]
	public readonly PseudoStates triggerPseudoMask;

	[Token(Token = "0x40017BF")]
	[FieldOffset(Offset = "0x8")]
	public readonly PseudoStates dependencyPseudoMask;

	[Token(Token = "0x6002D8E")]
	[Address(RVA = "0x31ED190", Offset = "0x31EB790", VA = "0x1831ED190")]
	public MatchResultInfo(bool success, PseudoStates triggerPseudoMask, PseudoStates dependencyPseudoMask)
	{
	}
}
