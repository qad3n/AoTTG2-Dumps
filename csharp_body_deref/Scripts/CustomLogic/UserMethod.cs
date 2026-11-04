// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.UserMethod
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/UserMethod.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20003F5")]
internal class UserMethod
{
	[Token(Token = "0x4001418")]
	[FieldOffset(Offset = "0x10")]
	public readonly CustomLogicClassInstance Owner;

	[Token(Token = "0x4001419")]
	[FieldOffset(Offset = "0x18")]
	public readonly CustomLogicMethodDefinitionAst Ast;

	[Token(Token = "0x600183F")]
	[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
	public UserMethod(CustomLogicClassInstance owner, CustomLogicMethodDefinitionAst ast)
	{
	}

	[Token(Token = "0x6001840")]
	[Address(RVA = "0x1EE3F70", Offset = "0x1EE2570", VA = "0x181EE3F70")]
	public object Call(params object[] parameterValues)
	{
		return null;
	}

	[Token(Token = "0x6001841")]
	[Address(RVA = "0x1EE3F60", Offset = "0x1EE2560", VA = "0x181EE3F60")]
	public object Call(CustomLogicEvaluator evaluator, params object[] parameterValues)
	{
		return null;
	}
}
