// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.UserMethod
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/UserMethod.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000454")]
internal class UserMethod
{
	[Token(Token = "0x40015B8")]
	[FieldOffset(Offset = "0x10")]
	public readonly CustomLogicClassInstance Owner;

	[Token(Token = "0x40015B9")]
	[FieldOffset(Offset = "0x18")]
	public readonly CustomLogicMethodDefinitionAst Ast;

	[Token(Token = "0x6001AB6")]
	[Address(RVA = "0x58A9E60", Offset = "0x58A8E60", VA = "0x58A9E60")]
	public UserMethod(CustomLogicClassInstance owner, CustomLogicMethodDefinitionAst ast)
	{
		// Lifted from source/cpp/CustomLogic/UserMethod.c (CustomLogic.UserMethod$$.ctor): clean
		base();
		this.Owner = owner;
		this.Ast = ast;
		return;
	}

	[Token(Token = "0x6001AB7")]
	[Address(RVA = "0x58A9EA0", Offset = "0x58A8EA0", VA = "0x58A9EA0")]
	public object Call(params object[] parameterValues)
	{
		// Lifted from source/cpp/CustomLogic/UserMethod.c (CustomLogic.UserMethod$$Call): 2 lines keep C-only constructs
		object in_RAX;

		return in_RAX;
	}

	[Token(Token = "0x6001AB8")]
	[Address(RVA = "0x58A9EB0", Offset = "0x58A8EB0", VA = "0x58A9EB0")]
	public object Call(CustomLogicEvaluator evaluator, params object[] parameterValues)
	{
		// Lifted from source/cpp/CustomLogic/UserMethod.c (CustomLogic.UserMethod$$Call): 2 lines keep C-only constructs
		object in_RAX;

		return in_RAX;
	}
}
