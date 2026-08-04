// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.ExprException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200005E")]
internal sealed class ExprException
{
	[Token(Token = "0x600061B")]
	[Address(RVA = "0x45AE0F0", Offset = "0x45AE0F0", VA = "0x45AE0F0")]
	private static OverflowException _Overflow(string error)
	{
		return null;
	}

	[Token(Token = "0x600061C")]
	[Address(RVA = "0x45AE150", Offset = "0x45AE150", VA = "0x45AE150")]
	private static InvalidExpressionException _Expr(string error)
	{
		return null;
	}

	[Token(Token = "0x600061D")]
	[Address(RVA = "0x45AE1B0", Offset = "0x45AE1B0", VA = "0x45AE1B0")]
	private static SyntaxErrorException _Syntax(string error)
	{
		return null;
	}

	[Token(Token = "0x600061E")]
	[Address(RVA = "0x45AE210", Offset = "0x45AE210", VA = "0x45AE210")]
	private static EvaluateException _Eval(string error)
	{
		return null;
	}

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x45AE270", Offset = "0x45AE270", VA = "0x45AE270")]
	private static EvaluateException _Eval(string error, Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x45AB470", Offset = "0x45AB470", VA = "0x45AB470")]
	public static Exception InvokeArgument()
	{
		return null;
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x45AE2D0", Offset = "0x45AE2D0", VA = "0x45AE2D0")]
	public static Exception NYI(string moreinfo)
	{
		return null;
	}

	[Token(Token = "0x6000622")]
	[Address(RVA = "0x45ABCA0", Offset = "0x45ABCA0", VA = "0x45ABCA0")]
	public static Exception MissingOperand(OperatorInfo before)
	{
		return null;
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x45AC090", Offset = "0x45AC090", VA = "0x45AC090")]
	public static Exception MissingOperator(string token)
	{
		return null;
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x45AE360", Offset = "0x45AE360", VA = "0x45AE360")]
	public static Exception TypeMismatch(string expr)
	{
		return null;
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x45AE3F0", Offset = "0x45AE3F0", VA = "0x45AE3F0")]
	public static Exception FunctionArgumentOutOfRange(string arg, string func)
	{
		return null;
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x45AD020", Offset = "0x45AD020", VA = "0x45AD020")]
	public static Exception ExpressionTooComplex()
	{
		return null;
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x459B5C0", Offset = "0x459B5C0", VA = "0x459B5C0")]
	public static Exception UnboundName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x45ADA80", Offset = "0x45ADA80", VA = "0x45ADA80")]
	public static Exception InvalidString(string str)
	{
		return null;
	}

	[Token(Token = "0x6000629")]
	[Address(RVA = "0x459B130", Offset = "0x459B130", VA = "0x459B130")]
	public static Exception UndefinedFunction(string name)
	{
		return null;
	}

	[Token(Token = "0x600062A")]
	[Address(RVA = "0x45AC430", Offset = "0x45AC430", VA = "0x45AC430")]
	public static Exception SyntaxError()
	{
		return null;
	}

	[Token(Token = "0x600062B")]
	[Address(RVA = "0x45AE440", Offset = "0x45AE440", VA = "0x45AE440")]
	public static Exception FunctionArgumentCount(string name)
	{
		return null;
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x45AC010", Offset = "0x45AC010", VA = "0x45AC010")]
	public static Exception MissingRightParen()
	{
		return null;
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x45ACED0", Offset = "0x45ACED0", VA = "0x45ACED0")]
	public static Exception UnknownToken(string token, int position)
	{
		return null;
	}

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x45AD0A0", Offset = "0x45AD0A0", VA = "0x45AD0A0")]
	public static Exception UnknownToken(Tokens tokExpected, Tokens tokCurr, int position)
	{
		return null;
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x45AE4D0", Offset = "0x45AE4D0", VA = "0x45AE4D0")]
	public static Exception DatatypeConvertion(Type type1, Type type2)
	{
		return null;
	}

	[Token(Token = "0x6000630")]
	[Address(RVA = "0x45AB2B0", Offset = "0x45AB2B0", VA = "0x45AB2B0")]
	public static Exception DatavalueConvertion(object value, Type type, Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x6000631")]
	[Address(RVA = "0x45AE5A0", Offset = "0x45AE5A0", VA = "0x45AE5A0")]
	public static Exception InvalidName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x45AD9D0", Offset = "0x45AD9D0", VA = "0x45AD9D0")]
	public static Exception InvalidDate(string date)
	{
		return null;
	}

	[Token(Token = "0x6000633")]
	[Address(RVA = "0x45AE630", Offset = "0x45AE630", VA = "0x45AE630")]
	public static Exception NonConstantArgument()
	{
		return null;
	}

	[Token(Token = "0x6000634")]
	[Address(RVA = "0x45A8EB0", Offset = "0x45A8EB0", VA = "0x45A8EB0")]
	public static Exception InvalidPattern(string pat)
	{
		return null;
	}

	[Token(Token = "0x6000635")]
	[Address(RVA = "0x45A7DB0", Offset = "0x45A7DB0", VA = "0x45A7DB0")]
	public static Exception InWithoutParentheses()
	{
		return null;
	}

	[Token(Token = "0x6000636")]
	[Address(RVA = "0x45AE6B0", Offset = "0x45AE6B0", VA = "0x45AE6B0")]
	public static Exception InWithoutList()
	{
		return null;
	}

	[Token(Token = "0x6000637")]
	[Address(RVA = "0x45A5000", Offset = "0x45A5000", VA = "0x45A5000")]
	public static Exception InvalidIsSyntax()
	{
		return null;
	}

	[Token(Token = "0x6000638")]
	[Address(RVA = "0x45A7EF0", Offset = "0x45A7EF0", VA = "0x45A7EF0")]
	public static Exception Overflow(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000639")]
	[Address(RVA = "0x45AE730", Offset = "0x45AE730", VA = "0x45AE730")]
	public static Exception ArgumentType(string function, int arg, Type type)
	{
		return null;
	}

	[Token(Token = "0x600063A")]
	[Address(RVA = "0x45AE830", Offset = "0x45AE830", VA = "0x45AE830")]
	public static Exception ArgumentTypeInteger(string function, int arg)
	{
		return null;
	}

	[Token(Token = "0x600063B")]
	[Address(RVA = "0x45A5390", Offset = "0x45A5390", VA = "0x45A5390")]
	public static Exception TypeMismatchInBinop(int op, Type type1, Type type2)
	{
		return null;
	}

	[Token(Token = "0x600063C")]
	[Address(RVA = "0x45A81B0", Offset = "0x45A81B0", VA = "0x45A81B0")]
	public static Exception AmbiguousBinop(int op, Type type1, Type type2)
	{
		return null;
	}

	[Token(Token = "0x600063D")]
	[Address(RVA = "0x45A7E30", Offset = "0x45A7E30", VA = "0x45A7E30")]
	public static Exception UnsupportedOperator(int op)
	{
		return null;
	}

	[Token(Token = "0x600063E")]
	[Address(RVA = "0x45AD940", Offset = "0x45AD940", VA = "0x45AD940")]
	public static Exception InvalidNameBracketing(string name)
	{
		return null;
	}

	[Token(Token = "0x600063F")]
	[Address(RVA = "0x45ACE40", Offset = "0x45ACE40", VA = "0x45ACE40")]
	public static Exception MissingOperandBefore(string op)
	{
		return null;
	}

	[Token(Token = "0x6000640")]
	[Address(RVA = "0x45AC9C0", Offset = "0x45AC9C0", VA = "0x45AC9C0")]
	public static Exception TooManyRightParentheses()
	{
		return null;
	}

	[Token(Token = "0x6000641")]
	[Address(RVA = "0x459B530", Offset = "0x459B530", VA = "0x459B530")]
	public static Exception UnresolvedRelation(string name, string expr)
	{
		return null;
	}

	[Token(Token = "0x6000642")]
	[Address(RVA = "0x45AE900", Offset = "0x45AE900", VA = "0x45AE900")]
	internal static EvaluateException BindFailure(string relationName)
	{
		return null;
	}

	[Token(Token = "0x6000643")]
	[Address(RVA = "0x45ACFA0", Offset = "0x45ACFA0", VA = "0x45ACFA0")]
	public static Exception AggregateArgument()
	{
		return null;
	}

	[Token(Token = "0x6000644")]
	[Address(RVA = "0x459B4A0", Offset = "0x459B4A0", VA = "0x459B4A0")]
	public static Exception AggregateUnbound(string expr)
	{
		return null;
	}

	[Token(Token = "0x6000645")]
	[Address(RVA = "0x459BC70", Offset = "0x459BC70", VA = "0x459BC70")]
	public static Exception EvalNoContext()
	{
		return null;
	}

	[Token(Token = "0x6000646")]
	[Address(RVA = "0x45AE990", Offset = "0x45AE990", VA = "0x45AE990")]
	public static Exception ExpressionUnbound(string expr)
	{
		return null;
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x459BD70", Offset = "0x459BD70", VA = "0x459BD70")]
	public static Exception ComputeNotAggregate(string expr)
	{
		return null;
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x45AB4A0", Offset = "0x45AB4A0", VA = "0x45AB4A0")]
	public static Exception FilterConvertion(string expr)
	{
		return null;
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x45AC190", Offset = "0x45AC190", VA = "0x45AC190")]
	public static Exception LookupArgument()
	{
		return null;
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x45AEA20", Offset = "0x45AEA20", VA = "0x45AEA20")]
	public static Exception InvalidType(string typeName)
	{
		return null;
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x45AEAB0", Offset = "0x45AEAB0", VA = "0x45AEAB0")]
	public static Exception InvalidHoursArgument()
	{
		return null;
	}

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x45AEB30", Offset = "0x45AEB30", VA = "0x45AEB30")]
	public static Exception InvalidMinutesArgument()
	{
		return null;
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x45AEBB0", Offset = "0x45AEBB0", VA = "0x45AEBB0")]
	public static Exception InvalidTimeZoneRange()
	{
		return null;
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x45AEC30", Offset = "0x45AEC30", VA = "0x45AEC30")]
	public static Exception MismatchKindandTimeSpan()
	{
		return null;
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x45A9F00", Offset = "0x45A9F00", VA = "0x45A9F00")]
	public static Exception UnsupportedDataType(Type type)
	{
		return null;
	}
}
