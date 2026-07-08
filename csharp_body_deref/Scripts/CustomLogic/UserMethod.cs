using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000271")]
internal class UserMethod
{
	[Token(Token = "0x4000D12")]
	[FieldOffset(Offset = "0x10")]
	public readonly CustomLogicClassInstance Owner;

	[Token(Token = "0x4000D13")]
	[FieldOffset(Offset = "0x18")]
	public readonly CustomLogicMethodDefinitionAst Ast;

	[Token(Token = "0x6000E13")]
	[Address(RVA = "0x3CB3570", Offset = "0x3CB3570", VA = "0x3CB3570")]
	public UserMethod(CustomLogicClassInstance owner, CustomLogicMethodDefinitionAst ast)
	{
	}

	[Token(Token = "0x6000E14")]
	[Address(RVA = "0x3CB35B0", Offset = "0x3CB35B0", VA = "0x3CB35B0")]
	public object Call(params object[] parameterValues)
	{
		return null;
	}

	[Token(Token = "0x6000E15")]
	[Address(RVA = "0x3CB35C0", Offset = "0x3CB35C0", VA = "0x3CB35C0")]
	public object Call(CustomLogicEvaluator evaluator, params object[] parameterValues)
	{
		return null;
	}
}
