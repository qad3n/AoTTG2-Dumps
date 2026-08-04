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
		[Address(RVA = "0x44C5DC0", Offset = "0x44C5DC0", VA = "0x44C5DC0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000159")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60005F6")]
		[Address(RVA = "0x44C65D0", Offset = "0x44C65D0", VA = "0x44C65D0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x44C5DF0", Offset = "0x44C5DF0", VA = "0x44C5DF0")]
	public static CallInstruction Create(MethodInfo info)
	{
		return null;
	}

	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x44C5E40", Offset = "0x44C5E40", VA = "0x44C5E40")]
	public static CallInstruction Create(MethodInfo info, ParameterInfo[] parameters)
	{
		return null;
	}

	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x44C5FD0", Offset = "0x44C5FD0", VA = "0x44C5FD0")]
	private static CallInstruction GetArrayAccessor(MethodInfo info, int argumentCount)
	{
		return null;
	}

	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x44C6560", Offset = "0x44C6560", VA = "0x44C6560")]
	public static void ArrayItemSetter1(Array array, int index0, object value)
	{
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x44C6580", Offset = "0x44C6580", VA = "0x44C6580")]
	public static void ArrayItemSetter2(Array array, int index0, int index1, object value)
	{
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x44C65A0", Offset = "0x44C65A0", VA = "0x44C65A0")]
	public static void ArrayItemSetter3(Array array, int index0, int index1, int index2, object value)
	{
	}

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x44C65F0", Offset = "0x44C65F0", VA = "0x44C65F0")]
	protected static bool TryGetLightLambdaTarget(object instance, out LightLambda lightLambda)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x44C6720", Offset = "0x44C6720", VA = "0x44C6720")]
	protected object InterpretLambdaInvoke(LightLambda targetLambda, object[] args)
	{
		return null;
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x44C6770", Offset = "0x44C6770", VA = "0x44C6770")]
	protected CallInstruction()
	{
	}
}
