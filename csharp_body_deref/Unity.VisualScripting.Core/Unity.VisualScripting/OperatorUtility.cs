// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.OperatorUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200012D")]
public static class OperatorUtility
{
	[Token(Token = "0x4000712")]
	[FieldOffset(Offset = "0x0")]
	public static readonly Dictionary<string, string> operatorNames;

	[Token(Token = "0x4000713")]
	[FieldOffset(Offset = "0x8")]
	public static readonly Dictionary<string, int> operatorRanks;

	[Token(Token = "0x4000714")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Dictionary<UnaryOperator, UnaryOperatorHandler> unaryOperatorHandlers;

	[Token(Token = "0x4000715")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Dictionary<BinaryOperator, BinaryOperatorHandler> binaryOpeatorHandlers;

	[Token(Token = "0x4000716")]
	[FieldOffset(Offset = "0x20")]
	private static readonly LogicalNegationHandler logicalNegationHandler;

	[Token(Token = "0x4000717")]
	[FieldOffset(Offset = "0x28")]
	private static readonly NumericNegationHandler numericNegationHandler;

	[Token(Token = "0x4000718")]
	[FieldOffset(Offset = "0x30")]
	private static readonly IncrementHandler incrementHandler;

	[Token(Token = "0x4000719")]
	[FieldOffset(Offset = "0x38")]
	private static readonly DecrementHandler decrementHandler;

	[Token(Token = "0x400071A")]
	[FieldOffset(Offset = "0x40")]
	private static readonly PlusHandler plusHandler;

	[Token(Token = "0x400071B")]
	[FieldOffset(Offset = "0x48")]
	private static readonly AdditionHandler additionHandler;

	[Token(Token = "0x400071C")]
	[FieldOffset(Offset = "0x50")]
	private static readonly SubtractionHandler subtractionHandler;

	[Token(Token = "0x400071D")]
	[FieldOffset(Offset = "0x58")]
	private static readonly MultiplicationHandler multiplicationHandler;

	[Token(Token = "0x400071E")]
	[FieldOffset(Offset = "0x60")]
	private static readonly DivisionHandler divisionHandler;

	[Token(Token = "0x400071F")]
	[FieldOffset(Offset = "0x68")]
	private static readonly ModuloHandler moduloHandler;

	[Token(Token = "0x4000720")]
	[FieldOffset(Offset = "0x70")]
	private static readonly AndHandler andHandler;

	[Token(Token = "0x4000721")]
	[FieldOffset(Offset = "0x78")]
	private static readonly OrHandler orHandler;

	[Token(Token = "0x4000722")]
	[FieldOffset(Offset = "0x80")]
	private static readonly ExclusiveOrHandler exclusiveOrHandler;

	[Token(Token = "0x4000723")]
	[FieldOffset(Offset = "0x88")]
	private static readonly EqualityHandler equalityHandler;

	[Token(Token = "0x4000724")]
	[FieldOffset(Offset = "0x90")]
	private static readonly InequalityHandler inequalityHandler;

	[Token(Token = "0x4000725")]
	[FieldOffset(Offset = "0x98")]
	private static readonly GreaterThanHandler greaterThanHandler;

	[Token(Token = "0x4000726")]
	[FieldOffset(Offset = "0xA0")]
	private static readonly LessThanHandler lessThanHandler;

	[Token(Token = "0x4000727")]
	[FieldOffset(Offset = "0xA8")]
	private static readonly GreaterThanOrEqualHandler greaterThanOrEqualHandler;

	[Token(Token = "0x4000728")]
	[FieldOffset(Offset = "0xB0")]
	private static readonly LessThanOrEqualHandler lessThanOrEqualHandler;

	[Token(Token = "0x4000729")]
	[FieldOffset(Offset = "0xB8")]
	private static readonly LeftShiftHandler leftShiftHandler;

	[Token(Token = "0x400072A")]
	[FieldOffset(Offset = "0xC0")]
	private static readonly RightShiftHandler rightShiftHandler;

	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x681A730", Offset = "0x6819730", VA = "0x681A730")]
	static OperatorUtility()
	{
	}

	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x6821C20", Offset = "0x6820C20", VA = "0x6821C20")]
	public static UnaryOperatorHandler GetHandler(UnaryOperator @operator)
	{
		return null;
	}

	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x6821D50", Offset = "0x6820D50", VA = "0x6821D50")]
	public static BinaryOperatorHandler GetHandler(BinaryOperator @operator)
	{
		return null;
	}

	[Token(Token = "0x6000C39")]
	[Address(RVA = "0x6821E80", Offset = "0x6820E80", VA = "0x6821E80")]
	public static string Symbol(this UnaryOperator @operator)
	{
		return null;
	}

	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x6821EF0", Offset = "0x6820EF0", VA = "0x6821EF0")]
	public static string Symbol(this BinaryOperator @operator)
	{
		return null;
	}

	[Token(Token = "0x6000C3B")]
	[Address(RVA = "0x6821F60", Offset = "0x6820F60", VA = "0x6821F60")]
	public static string Name(this UnaryOperator @operator)
	{
		return null;
	}

	[Token(Token = "0x6000C3C")]
	[Address(RVA = "0x6821FD0", Offset = "0x6820FD0", VA = "0x6821FD0")]
	public static string Name(this BinaryOperator @operator)
	{
		return null;
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x6822040", Offset = "0x6821040", VA = "0x6822040")]
	public static string Verb(this UnaryOperator @operator)
	{
		return null;
	}

	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x68220B0", Offset = "0x68210B0", VA = "0x68220B0")]
	public static string Verb(this BinaryOperator @operator)
	{
		return null;
	}

	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x6822120", Offset = "0x6821120", VA = "0x6822120")]
	public static object Operate(UnaryOperator @operator, object x)
	{
		return null;
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x6822260", Offset = "0x6821260", VA = "0x6822260")]
	public static object Operate(BinaryOperator @operator, object a, object b)
	{
		return null;
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x68223C0", Offset = "0x68213C0", VA = "0x68223C0")]
	public static object Negate(object x)
	{
		return null;
	}

	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x6822450", Offset = "0x6821450", VA = "0x6822450")]
	public static object Not(object x)
	{
		return null;
	}

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x68224E0", Offset = "0x68214E0", VA = "0x68224E0")]
	public static object UnaryPlus(object x)
	{
		return null;
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x6822570", Offset = "0x6821570", VA = "0x6822570")]
	public static object Increment(object x)
	{
		return null;
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x6822600", Offset = "0x6821600", VA = "0x6822600")]
	public static object Decrement(object x)
	{
		return null;
	}

	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x6822690", Offset = "0x6821690", VA = "0x6822690")]
	public static object And(object a, object b)
	{
		return null;
	}

	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x6822730", Offset = "0x6821730", VA = "0x6822730")]
	public static object Or(object a, object b)
	{
		return null;
	}

	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x68227D0", Offset = "0x68217D0", VA = "0x68227D0")]
	public static object ExclusiveOr(object a, object b)
	{
		return null;
	}

	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x6822870", Offset = "0x6821870", VA = "0x6822870")]
	public static object Add(object a, object b)
	{
		return null;
	}

	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x6822910", Offset = "0x6821910", VA = "0x6822910")]
	public static object Subtract(object a, object b)
	{
		return null;
	}

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x68229B0", Offset = "0x68219B0", VA = "0x68229B0")]
	public static object Multiply(object a, object b)
	{
		return null;
	}

	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x6822A50", Offset = "0x6821A50", VA = "0x6822A50")]
	public static object Divide(object a, object b)
	{
		return null;
	}

	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x6822AF0", Offset = "0x6821AF0", VA = "0x6822AF0")]
	public static object Modulo(object a, object b)
	{
		return null;
	}

	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x6822B90", Offset = "0x6821B90", VA = "0x6822B90")]
	public static bool Equal(object a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x6822C70", Offset = "0x6821C70", VA = "0x6822C70")]
	public static bool NotEqual(object a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C50")]
	[Address(RVA = "0x6822D50", Offset = "0x6821D50", VA = "0x6822D50")]
	public static bool GreaterThan(object a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x6822E30", Offset = "0x6821E30", VA = "0x6822E30")]
	public static bool LessThan(object a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C52")]
	[Address(RVA = "0x6822F10", Offset = "0x6821F10", VA = "0x6822F10")]
	public static bool GreaterThanOrEqual(object a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C53")]
	[Address(RVA = "0x6822FF0", Offset = "0x6821FF0", VA = "0x6822FF0")]
	public static bool LessThanOrEqual(object a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x68230D0", Offset = "0x68220D0", VA = "0x68230D0")]
	public static object LeftShift(object a, object b)
	{
		return null;
	}

	[Token(Token = "0x6000C55")]
	[Address(RVA = "0x6823170", Offset = "0x6822170", VA = "0x6823170")]
	public static object RightShift(object a, object b)
	{
		return null;
	}
}
