// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.CallInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000EB")]
internal abstract class CallInstruction : Instruction
{
	[Token(Token = "0x17000159")]
	public abstract int ArgumentCount
	{
		[Token(Token = "0x60005F8")]
		get;
	}

	[Token(Token = "0x1700015A")]
	public override string InstructionName
	{
		[Token(Token = "0x60005F9")]
		[Address(RVA = "0x5DDBB30", Offset = "0x5DDAB30", VA = "0x5DDBB30", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015B")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000600")]
		[Address(RVA = "0x5DDC340", Offset = "0x5DDB340", VA = "0x5DDC340", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x5DDBB60", Offset = "0x5DDAB60", VA = "0x5DDBB60")]
	public static CallInstruction Create(MethodInfo info)
	{
		return null;
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x5DDBBB0", Offset = "0x5DDABB0", VA = "0x5DDBBB0")]
	public static CallInstruction Create(MethodInfo info, ParameterInfo[] parameters)
	{
		return null;
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x5DDBD40", Offset = "0x5DDAD40", VA = "0x5DDBD40")]
	private static CallInstruction GetArrayAccessor(MethodInfo info, int argumentCount)
	{
		return null;
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x5DDC2E0", Offset = "0x5DDB2E0", VA = "0x5DDC2E0")]
	public static void ArrayItemSetter1(Array array, int index0, object value)
	{
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x5DDC300", Offset = "0x5DDB300", VA = "0x5DDC300")]
	public static void ArrayItemSetter2(Array array, int index0, int index1, object value)
	{
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x5DDC320", Offset = "0x5DDB320", VA = "0x5DDC320")]
	public static void ArrayItemSetter3(Array array, int index0, int index1, int index2, object value)
	{
	}

	[Token(Token = "0x6000601")]
	[Address(RVA = "0x5DDC360", Offset = "0x5DDB360", VA = "0x5DDC360")]
	protected static bool TryGetLightLambdaTarget(object instance, out LightLambda lightLambda)
	{
		return default(bool);
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x5DDC490", Offset = "0x5DDB490", VA = "0x5DDC490")]
	protected object InterpretLambdaInvoke(LightLambda targetLambda, object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x5DDC4F0", Offset = "0x5DDB4F0", VA = "0x5DDC4F0")]
	protected CallInstruction()
	{
	}
}
