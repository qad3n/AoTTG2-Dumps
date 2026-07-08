using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000169")]
internal enum LabelScopeKind
{
	[Token(Token = "0x4000307")]
	Statement,
	[Token(Token = "0x4000308")]
	Block,
	[Token(Token = "0x4000309")]
	Switch,
	[Token(Token = "0x400030A")]
	Lambda,
	[Token(Token = "0x400030B")]
	Try,
	[Token(Token = "0x400030C")]
	Catch,
	[Token(Token = "0x400030D")]
	Finally,
	[Token(Token = "0x400030E")]
	Filter,
	[Token(Token = "0x400030F")]
	Expression
}
