using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200024F")]
public enum CustomLogicAstType
{
	[Token(Token = "0x4000CCD")]
	Start,
	[Token(Token = "0x4000CCE")]
	ClassDefinition,
	[Token(Token = "0x4000CCF")]
	MethodDefinition,
	[Token(Token = "0x4000CD0")]
	AssignmentExpression,
	[Token(Token = "0x4000CD1")]
	MethodCallExpression,
	[Token(Token = "0x4000CD2")]
	ClassInstantiateExpression,
	[Token(Token = "0x4000CD3")]
	FieldExpression,
	[Token(Token = "0x4000CD4")]
	PrimitiveExpression,
	[Token(Token = "0x4000CD5")]
	UnaryExpression,
	[Token(Token = "0x4000CD6")]
	BinopExpression,
	[Token(Token = "0x4000CD7")]
	NotExpression,
	[Token(Token = "0x4000CD8")]
	VariableExpression,
	[Token(Token = "0x4000CD9")]
	ReturnExpression,
	[Token(Token = "0x4000CDA")]
	ContinueExpression,
	[Token(Token = "0x4000CDB")]
	BreakExpression,
	[Token(Token = "0x4000CDC")]
	WaitExpression,
	[Token(Token = "0x4000CDD")]
	ConditionalExpression,
	[Token(Token = "0x4000CDE")]
	ForExpression
}
