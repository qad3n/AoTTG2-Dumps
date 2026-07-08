using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200012D")]
public static class OperatorUtility
{
	[Token(Token = "0x4000714")]
	[FieldOffset(Offset = "0x0")]
	public static readonly Dictionary<string, string> operatorNames;

	[Token(Token = "0x4000715")]
	[FieldOffset(Offset = "0x8")]
	public static readonly Dictionary<string, int> operatorRanks;

	[Token(Token = "0x4000716")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Dictionary<UnaryOperator, UnaryOperatorHandler> unaryOperatorHandlers;

	[Token(Token = "0x4000717")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Dictionary<BinaryOperator, BinaryOperatorHandler> binaryOpeatorHandlers;

	[Token(Token = "0x4000718")]
	[FieldOffset(Offset = "0x20")]
	private static readonly LogicalNegationHandler logicalNegationHandler;

	[Token(Token = "0x4000719")]
	[FieldOffset(Offset = "0x28")]
	private static readonly NumericNegationHandler numericNegationHandler;

	[Token(Token = "0x400071A")]
	[FieldOffset(Offset = "0x30")]
	private static readonly IncrementHandler incrementHandler;

	[Token(Token = "0x400071B")]
	[FieldOffset(Offset = "0x38")]
	private static readonly DecrementHandler decrementHandler;

	[Token(Token = "0x400071C")]
	[FieldOffset(Offset = "0x40")]
	private static readonly PlusHandler plusHandler;

	[Token(Token = "0x400071D")]
	[FieldOffset(Offset = "0x48")]
	private static readonly AdditionHandler additionHandler;

	[Token(Token = "0x400071E")]
	[FieldOffset(Offset = "0x50")]
	private static readonly SubtractionHandler subtractionHandler;

	[Token(Token = "0x400071F")]
	[FieldOffset(Offset = "0x58")]
	private static readonly MultiplicationHandler multiplicationHandler;

	[Token(Token = "0x4000720")]
	[FieldOffset(Offset = "0x60")]
	private static readonly DivisionHandler divisionHandler;

	[Token(Token = "0x4000721")]
	[FieldOffset(Offset = "0x68")]
	private static readonly ModuloHandler moduloHandler;

	[Token(Token = "0x4000722")]
	[FieldOffset(Offset = "0x70")]
	private static readonly AndHandler andHandler;

	[Token(Token = "0x4000723")]
	[FieldOffset(Offset = "0x78")]
	private static readonly OrHandler orHandler;

	[Token(Token = "0x4000724")]
	[FieldOffset(Offset = "0x80")]
	private static readonly ExclusiveOrHandler exclusiveOrHandler;

	[Token(Token = "0x4000725")]
	[FieldOffset(Offset = "0x88")]
	private static readonly EqualityHandler equalityHandler;

	[Token(Token = "0x4000726")]
	[FieldOffset(Offset = "0x90")]
	private static readonly InequalityHandler inequalityHandler;

	[Token(Token = "0x4000727")]
	[FieldOffset(Offset = "0x98")]
	private static readonly GreaterThanHandler greaterThanHandler;

	[Token(Token = "0x4000728")]
	[FieldOffset(Offset = "0xA0")]
	private static readonly LessThanHandler lessThanHandler;

	[Token(Token = "0x4000729")]
	[FieldOffset(Offset = "0xA8")]
	private static readonly GreaterThanOrEqualHandler greaterThanOrEqualHandler;

	[Token(Token = "0x400072A")]
	[FieldOffset(Offset = "0xB0")]
	private static readonly LessThanOrEqualHandler lessThanOrEqualHandler;

	[Token(Token = "0x400072B")]
	[FieldOffset(Offset = "0xB8")]
	private static readonly LeftShiftHandler leftShiftHandler;

	[Token(Token = "0x400072C")]
	[FieldOffset(Offset = "0xC0")]
	private static readonly RightShiftHandler rightShiftHandler;

	[Token(Token = "0x6000C2C")]
	[Address(RVA = "0x4A08430", Offset = "0x4A08430", VA = "0x4A08430")]
	static OperatorUtility()
	{
	}

	[Token(Token = "0x6000C2D")]
	[Address(RVA = "0x4A0FA50", Offset = "0x4A0FA50", VA = "0x4A0FA50")]
	public static UnaryOperatorHandler GetHandler(UnaryOperator @operator)
	{
		return null;
	}

	[Token(Token = "0x6000C2E")]
	[Address(RVA = "0x4A0FB80", Offset = "0x4A0FB80", VA = "0x4A0FB80")]
	public static BinaryOperatorHandler GetHandler(BinaryOperator @operator)
	{
		return null;
	}

	[Token(Token = "0x6000C2F")]
	[Address(RVA = "0x4A0FCB0", Offset = "0x4A0FCB0", VA = "0x4A0FCB0")]
	public static string Symbol(this UnaryOperator @operator)
	{
		return null;
	}

	[Token(Token = "0x6000C30")]
	[Address(RVA = "0x4A0FD20", Offset = "0x4A0FD20", VA = "0x4A0FD20")]
	public static string Symbol(this BinaryOperator @operator)
	{
		return null;
	}

	[Token(Token = "0x6000C31")]
	[Address(RVA = "0x4A0FD90", Offset = "0x4A0FD90", VA = "0x4A0FD90")]
	public static string Name(this UnaryOperator @operator)
	{
		return null;
	}

	[Token(Token = "0x6000C32")]
	[Address(RVA = "0x4A0FE00", Offset = "0x4A0FE00", VA = "0x4A0FE00")]
	public static string Name(this BinaryOperator @operator)
	{
		return null;
	}

	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x4A0FE70", Offset = "0x4A0FE70", VA = "0x4A0FE70")]
	public static string Verb(this UnaryOperator @operator)
	{
		return null;
	}

	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x4A0FEE0", Offset = "0x4A0FEE0", VA = "0x4A0FEE0")]
	public static string Verb(this BinaryOperator @operator)
	{
		return null;
	}

	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x4A0FF50", Offset = "0x4A0FF50", VA = "0x4A0FF50")]
	public static object Operate(UnaryOperator @operator, object x)
	{
		return null;
	}

	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x4A10090", Offset = "0x4A10090", VA = "0x4A10090")]
	public static object Operate(BinaryOperator @operator, object a, object b)
	{
		return null;
	}

	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x4A101F0", Offset = "0x4A101F0", VA = "0x4A101F0")]
	public static object Negate(object x)
	{
		return null;
	}

	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x4A10280", Offset = "0x4A10280", VA = "0x4A10280")]
	public static object Not(object x)
	{
		return null;
	}

	[Token(Token = "0x6000C39")]
	[Address(RVA = "0x4A10310", Offset = "0x4A10310", VA = "0x4A10310")]
	public static object UnaryPlus(object x)
	{
		return null;
	}

	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x4A103A0", Offset = "0x4A103A0", VA = "0x4A103A0")]
	public static object Increment(object x)
	{
		return null;
	}

	[Token(Token = "0x6000C3B")]
	[Address(RVA = "0x4A10430", Offset = "0x4A10430", VA = "0x4A10430")]
	public static object Decrement(object x)
	{
		return null;
	}

	[Token(Token = "0x6000C3C")]
	[Address(RVA = "0x4A104C0", Offset = "0x4A104C0", VA = "0x4A104C0")]
	public static object And(object a, object b)
	{
		return null;
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x4A10560", Offset = "0x4A10560", VA = "0x4A10560")]
	public static object Or(object a, object b)
	{
		return null;
	}

	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x4A10600", Offset = "0x4A10600", VA = "0x4A10600")]
	public static object ExclusiveOr(object a, object b)
	{
		return null;
	}

	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x4A106A0", Offset = "0x4A106A0", VA = "0x4A106A0")]
	public static object Add(object a, object b)
	{
		return null;
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x4A10740", Offset = "0x4A10740", VA = "0x4A10740")]
	public static object Subtract(object a, object b)
	{
		return null;
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x4A107E0", Offset = "0x4A107E0", VA = "0x4A107E0")]
	public static object Multiply(object a, object b)
	{
		return null;
	}

	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x4A10880", Offset = "0x4A10880", VA = "0x4A10880")]
	public static object Divide(object a, object b)
	{
		return null;
	}

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x4A10920", Offset = "0x4A10920", VA = "0x4A10920")]
	public static object Modulo(object a, object b)
	{
		return null;
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x4A109C0", Offset = "0x4A109C0", VA = "0x4A109C0")]
	public static bool Equal(object a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x4A10A90", Offset = "0x4A10A90", VA = "0x4A10A90")]
	public static bool NotEqual(object a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x4A10B60", Offset = "0x4A10B60", VA = "0x4A10B60")]
	public static bool GreaterThan(object a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x4A10C30", Offset = "0x4A10C30", VA = "0x4A10C30")]
	public static bool LessThan(object a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x4A10D00", Offset = "0x4A10D00", VA = "0x4A10D00")]
	public static bool GreaterThanOrEqual(object a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x4A10DD0", Offset = "0x4A10DD0", VA = "0x4A10DD0")]
	public static bool LessThanOrEqual(object a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x4A10EA0", Offset = "0x4A10EA0", VA = "0x4A10EA0")]
	public static object LeftShift(object a, object b)
	{
		return null;
	}

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x4A10F40", Offset = "0x4A10F40", VA = "0x4A10F40")]
	public static object RightShift(object a, object b)
	{
		return null;
	}
}
