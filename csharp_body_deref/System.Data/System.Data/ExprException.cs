// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.ExprException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200006B")]
internal sealed class ExprException
{
	[Token(Token = "0x600064E")]
	[Address(RVA = "0x2517BB0", Offset = "0x25161B0", VA = "0x182517BB0")]
	private static OverflowException _Overflow(string error)
	{
		return null;
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x2517B50", Offset = "0x2516150", VA = "0x182517B50")]
	private static InvalidExpressionException _Expr(string error)
	{
		return null;
	}

	[Token(Token = "0x6000650")]
	[Address(RVA = "0x2517C10", Offset = "0x2516210", VA = "0x182517C10")]
	private static SyntaxErrorException _Syntax(string error)
	{
		return null;
	}

	[Token(Token = "0x6000651")]
	[Address(RVA = "0x2517AF0", Offset = "0x25160F0", VA = "0x182517AF0")]
	private static EvaluateException _Eval(string error)
	{
		return null;
	}

	[Token(Token = "0x6000652")]
	[Address(RVA = "0x2517A90", Offset = "0x2516090", VA = "0x182517A90")]
	private static EvaluateException _Eval(string error, Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x6000653")]
	[Address(RVA = "0x2516D70", Offset = "0x2515370", VA = "0x182516D70")]
	public static Exception InvokeArgument()
	{
		return null;
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x2517120", Offset = "0x2515720", VA = "0x182517120")]
	public static Exception NYI(string moreinfo)
	{
		return null;
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x2516F40", Offset = "0x2515540", VA = "0x182516F40")]
	public static Exception MissingOperand(OperatorInfo before)
	{
		return null;
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x2517010", Offset = "0x2515610", VA = "0x182517010")]
	public static Exception MissingOperator(string token)
	{
		return null;
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x2517500", Offset = "0x2515B00", VA = "0x182517500")]
	public static Exception TypeMismatch(string expr)
	{
		return null;
	}

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x25166B0", Offset = "0x2514CB0", VA = "0x1825166B0")]
	public static Exception FunctionArgumentOutOfRange(string arg, string func)
	{
		return null;
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x2516480", Offset = "0x2514A80", VA = "0x182516480")]
	public static Exception ExpressionTooComplex()
	{
		return null;
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x2517590", Offset = "0x2515B90", VA = "0x182517590")]
	public static Exception UnboundName(string name)
	{
		return null;
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x2516BD0", Offset = "0x25151D0", VA = "0x182516BD0")]
	public static Exception InvalidString(string str)
	{
		return null;
	}

	[Token(Token = "0x600065C")]
	[Address(RVA = "0x2517620", Offset = "0x2515C20", VA = "0x182517620")]
	public static Exception UndefinedFunction(string name)
	{
		return null;
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x25172E0", Offset = "0x25158E0", VA = "0x1825172E0")]
	public static Exception SyntaxError()
	{
		return null;
	}

	[Token(Token = "0x600065E")]
	[Address(RVA = "0x2516620", Offset = "0x2514C20", VA = "0x182516620")]
	public static Exception FunctionArgumentCount(string name)
	{
		return null;
	}

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x25170A0", Offset = "0x25156A0", VA = "0x1825170A0")]
	public static Exception MissingRightParen()
	{
		return null;
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x25177F0", Offset = "0x2515DF0", VA = "0x1825177F0")]
	public static Exception UnknownToken(string token, int position)
	{
		return null;
	}

	[Token(Token = "0x6000661")]
	[Address(RVA = "0x25176B0", Offset = "0x2515CB0", VA = "0x1825176B0")]
	public static Exception UnknownToken(Tokens tokExpected, Tokens tokCurr, int position)
	{
		return null;
	}

	[Token(Token = "0x6000662")]
	[Address(RVA = "0x2516240", Offset = "0x2514840", VA = "0x182516240")]
	public static Exception DatatypeConvertion(Type type1, Type type2)
	{
		return null;
	}

	[Token(Token = "0x6000663")]
	[Address(RVA = "0x2516320", Offset = "0x2514920", VA = "0x182516320")]
	public static Exception DatavalueConvertion(object value, Type type, Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x6000664")]
	[Address(RVA = "0x2516AB0", Offset = "0x25150B0", VA = "0x182516AB0")]
	public static Exception InvalidName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000665")]
	[Address(RVA = "0x2516810", Offset = "0x2514E10", VA = "0x182516810")]
	public static Exception InvalidDate(string date)
	{
		return null;
	}

	[Token(Token = "0x6000666")]
	[Address(RVA = "0x25171B0", Offset = "0x25157B0", VA = "0x1825171B0")]
	public static Exception NonConstantArgument()
	{
		return null;
	}

	[Token(Token = "0x6000667")]
	[Address(RVA = "0x2516B40", Offset = "0x2515140", VA = "0x182516B40")]
	public static Exception InvalidPattern(string pat)
	{
		return null;
	}

	[Token(Token = "0x6000668")]
	[Address(RVA = "0x2516790", Offset = "0x2514D90", VA = "0x182516790")]
	public static Exception InWithoutParentheses()
	{
		return null;
	}

	[Token(Token = "0x6000669")]
	[Address(RVA = "0x2516710", Offset = "0x2514D10", VA = "0x182516710")]
	public static Exception InWithoutList()
	{
		return null;
	}

	[Token(Token = "0x600066A")]
	[Address(RVA = "0x2516920", Offset = "0x2514F20", VA = "0x182516920")]
	public static Exception InvalidIsSyntax()
	{
		return null;
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x2517230", Offset = "0x2515830", VA = "0x182517230")]
	public static Exception Overflow(Type type)
	{
		return null;
	}

	[Token(Token = "0x600066C")]
	[Address(RVA = "0x2516010", Offset = "0x2514610", VA = "0x182516010")]
	public static Exception ArgumentType(string function, int arg, Type type)
	{
		return null;
	}

	[Token(Token = "0x600066D")]
	[Address(RVA = "0x2515F40", Offset = "0x2514540", VA = "0x182515F40")]
	public static Exception ArgumentTypeInteger(string function, int arg)
	{
		return null;
	}

	[Token(Token = "0x600066E")]
	[Address(RVA = "0x25173E0", Offset = "0x25159E0", VA = "0x1825173E0")]
	public static Exception TypeMismatchInBinop(int op, Type type1, Type type2)
	{
		return null;
	}

	[Token(Token = "0x600066F")]
	[Address(RVA = "0x2515E20", Offset = "0x2514420", VA = "0x182515E20")]
	public static Exception AmbiguousBinop(int op, Type type1, Type type2)
	{
		return null;
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x25179D0", Offset = "0x2515FD0", VA = "0x1825179D0")]
	public static Exception UnsupportedOperator(int op)
	{
		return null;
	}

	[Token(Token = "0x6000671")]
	[Address(RVA = "0x2516A20", Offset = "0x2515020", VA = "0x182516A20")]
	public static Exception InvalidNameBracketing(string name)
	{
		return null;
	}

	[Token(Token = "0x6000672")]
	[Address(RVA = "0x2516EB0", Offset = "0x25154B0", VA = "0x182516EB0")]
	public static Exception MissingOperandBefore(string op)
	{
		return null;
	}

	[Token(Token = "0x6000673")]
	[Address(RVA = "0x2517360", Offset = "0x2515960", VA = "0x182517360")]
	public static Exception TooManyRightParentheses()
	{
		return null;
	}

	[Token(Token = "0x6000674")]
	[Address(RVA = "0x25178C0", Offset = "0x2515EC0", VA = "0x1825178C0")]
	public static Exception UnresolvedRelation(string name, string expr)
	{
		return null;
	}

	[Token(Token = "0x6000675")]
	[Address(RVA = "0x2516120", Offset = "0x2514720", VA = "0x182516120")]
	internal static EvaluateException BindFailure(string relationName)
	{
		return null;
	}

	[Token(Token = "0x6000676")]
	[Address(RVA = "0x2515D10", Offset = "0x2514310", VA = "0x182515D10")]
	public static Exception AggregateArgument()
	{
		return null;
	}

	[Token(Token = "0x6000677")]
	[Address(RVA = "0x2515D90", Offset = "0x2514390", VA = "0x182515D90")]
	public static Exception AggregateUnbound(string expr)
	{
		return null;
	}

	[Token(Token = "0x6000678")]
	[Address(RVA = "0x2516400", Offset = "0x2514A00", VA = "0x182516400")]
	public static Exception EvalNoContext()
	{
		return null;
	}

	[Token(Token = "0x6000679")]
	[Address(RVA = "0x2516500", Offset = "0x2514B00", VA = "0x182516500")]
	public static Exception ExpressionUnbound(string expr)
	{
		return null;
	}

	[Token(Token = "0x600067A")]
	[Address(RVA = "0x25161B0", Offset = "0x25147B0", VA = "0x1825161B0")]
	public static Exception ComputeNotAggregate(string expr)
	{
		return null;
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x2516590", Offset = "0x2514B90", VA = "0x182516590")]
	public static Exception FilterConvertion(string expr)
	{
		return null;
	}

	[Token(Token = "0x600067C")]
	[Address(RVA = "0x2516DB0", Offset = "0x25153B0", VA = "0x182516DB0")]
	public static Exception LookupArgument()
	{
		return null;
	}

	[Token(Token = "0x600067D")]
	[Address(RVA = "0x2516CE0", Offset = "0x25152E0", VA = "0x182516CE0")]
	public static Exception InvalidType(string typeName)
	{
		return null;
	}

	[Token(Token = "0x600067E")]
	[Address(RVA = "0x25168A0", Offset = "0x2514EA0", VA = "0x1825168A0")]
	public static Exception InvalidHoursArgument()
	{
		return null;
	}

	[Token(Token = "0x600067F")]
	[Address(RVA = "0x25169A0", Offset = "0x2514FA0", VA = "0x1825169A0")]
	public static Exception InvalidMinutesArgument()
	{
		return null;
	}

	[Token(Token = "0x6000680")]
	[Address(RVA = "0x2516C60", Offset = "0x2515260", VA = "0x182516C60")]
	public static Exception InvalidTimeZoneRange()
	{
		return null;
	}

	[Token(Token = "0x6000681")]
	[Address(RVA = "0x2516E30", Offset = "0x2515430", VA = "0x182516E30")]
	public static Exception MismatchKindandTimeSpan()
	{
		return null;
	}

	[Token(Token = "0x6000682")]
	[Address(RVA = "0x2517960", Offset = "0x2515F60", VA = "0x182517960")]
	public static Exception UnsupportedDataType(Type type)
	{
		return null;
	}
}
