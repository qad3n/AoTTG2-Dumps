using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200024E")]
internal class CustomLogicBaseAst
{
	[Token(Token = "0x4000CCA")]
	[FieldOffset(Offset = "0x10")]
	public CustomLogicAstType Type;

	[Token(Token = "0x4000CCB")]
	[FieldOffset(Offset = "0x14")]
	public int Line;

	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x3CB20D0", Offset = "0x3CB20D0", VA = "0x3CB20D0")]
	public CustomLogicBaseAst(CustomLogicAstType type, int line)
	{
	}
}
