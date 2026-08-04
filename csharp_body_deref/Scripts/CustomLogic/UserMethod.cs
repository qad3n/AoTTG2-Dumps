// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.UserMethod
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/UserMethod.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20002AA")]
internal class UserMethod
{
	[Token(Token = "0x4000DF8")]
	[FieldOffset(Offset = "0x10")]
	public readonly CustomLogicClassInstance Owner;

	[Token(Token = "0x4000DF9")]
	[FieldOffset(Offset = "0x18")]
	public readonly CustomLogicMethodDefinitionAst Ast;

	[Token(Token = "0x6000FBD")]
	[Address(RVA = "0x3FB98B0", Offset = "0x3FB98B0", VA = "0x3FB98B0")]
	public UserMethod(CustomLogicClassInstance owner, CustomLogicMethodDefinitionAst ast)
	{
	}

	[Token(Token = "0x6000FBE")]
	[Address(RVA = "0x3FB98F0", Offset = "0x3FB98F0", VA = "0x3FB98F0")]
	public object Call(params object[] parameterValues)
	{
		return null;
	}

	[Token(Token = "0x6000FBF")]
	[Address(RVA = "0x3FB9900", Offset = "0x3FB9900", VA = "0x3FB9900")]
	public object Call(CustomLogicEvaluator evaluator, params object[] parameterValues)
	{
		return null;
	}
}
