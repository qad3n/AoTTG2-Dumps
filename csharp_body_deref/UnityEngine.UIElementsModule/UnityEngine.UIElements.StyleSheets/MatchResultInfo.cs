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
	[Address(RVA = "0x4CA45D0", Offset = "0x4CA45D0", VA = "0x4CA45D0")]
	public MatchResultInfo(bool success, PseudoStates triggerPseudoMask, PseudoStates dependencyPseudoMask)
	{
	}
}
