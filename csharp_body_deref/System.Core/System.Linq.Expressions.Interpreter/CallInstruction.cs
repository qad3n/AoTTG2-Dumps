using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000EA")]
internal abstract class CallInstruction : Instruction
{
	[Token(Token = "0x17000157")]
	public abstract int ArgumentCount
	{
		[Token(Token = "0x60005EE")]
		get;
	}

	[Token(Token = "0x17000158")]
	public override string InstructionName
	{
		[Token(Token = "0x60005EF")]
		[Address(RVA = "0x41A0CC0", Offset = "0x41A0CC0", VA = "0x41A0CC0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000159")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60005F6")]
		[Address(RVA = "0x41A14D0", Offset = "0x41A14D0", VA = "0x41A14D0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x41A0CF0", Offset = "0x41A0CF0", VA = "0x41A0CF0")]
	public static CallInstruction Create(MethodInfo info)
	{
		return null;
	}

	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x41A0D40", Offset = "0x41A0D40", VA = "0x41A0D40")]
	public static CallInstruction Create(MethodInfo info, ParameterInfo[] parameters)
	{
		return null;
	}

	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x41A0ED0", Offset = "0x41A0ED0", VA = "0x41A0ED0")]
	private static CallInstruction GetArrayAccessor(MethodInfo info, int argumentCount)
	{
		return null;
	}

	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x41A1460", Offset = "0x41A1460", VA = "0x41A1460")]
	public static void ArrayItemSetter1(Array array, int index0, object value)
	{
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x41A1480", Offset = "0x41A1480", VA = "0x41A1480")]
	public static void ArrayItemSetter2(Array array, int index0, int index1, object value)
	{
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x41A14A0", Offset = "0x41A14A0", VA = "0x41A14A0")]
	public static void ArrayItemSetter3(Array array, int index0, int index1, int index2, object value)
	{
	}

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x41A14F0", Offset = "0x41A14F0", VA = "0x41A14F0")]
	protected static bool TryGetLightLambdaTarget(object instance, out LightLambda lightLambda)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x41A1620", Offset = "0x41A1620", VA = "0x41A1620")]
	protected object InterpretLambdaInvoke(LightLambda targetLambda, object[] args)
	{
		return null;
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x41A1670", Offset = "0x41A1670", VA = "0x41A1670")]
	protected CallInstruction()
	{
	}
}
