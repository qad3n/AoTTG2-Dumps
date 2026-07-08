using Il2CppDummyDll;

namespace UnityEngine.UIElements.StyleSheets.Syntax;

[Token(Token = "0x200054D")]
internal enum ExpressionCombinator
{
	[Token(Token = "0x400124E")]
	None,
	[Token(Token = "0x400124F")]
	Or,
	[Token(Token = "0x4001250")]
	OrOr,
	[Token(Token = "0x4001251")]
	AndAnd,
	[Token(Token = "0x4001252")]
	Juxtaposition,
	[Token(Token = "0x4001253")]
	Group
}
