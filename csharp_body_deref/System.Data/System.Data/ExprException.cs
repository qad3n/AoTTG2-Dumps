using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200005E")]
internal sealed class ExprException
{
	[Token(Token = "0x600061B")]
	[Address(RVA = "0x4270990", Offset = "0x4270990", VA = "0x4270990")]
	private static OverflowException _Overflow(string error)
	{
		return null;
	}

	[Token(Token = "0x600061C")]
	[Address(RVA = "0x42709F0", Offset = "0x42709F0", VA = "0x42709F0")]
	private static InvalidExpressionException _Expr(string error)
	{
		return null;
	}

	[Token(Token = "0x600061D")]
	[Address(RVA = "0x4270A50", Offset = "0x4270A50", VA = "0x4270A50")]
	private static SyntaxErrorException _Syntax(string error)
	{
		return null;
	}

	[Token(Token = "0x600061E")]
	[Address(RVA = "0x4270AB0", Offset = "0x4270AB0", VA = "0x4270AB0")]
	private static EvaluateException _Eval(string error)
	{
		return null;
	}

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x4270B10", Offset = "0x4270B10", VA = "0x4270B10")]
	private static EvaluateException _Eval(string error, Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x426DD10", Offset = "0x426DD10", VA = "0x426DD10")]
	public static Exception InvokeArgument()
	{
		return null;
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x4270B70", Offset = "0x4270B70", VA = "0x4270B70")]
	public static Exception NYI(string moreinfo)
	{
		return null;
	}

	[Token(Token = "0x6000622")]
	[Address(RVA = "0x426E540", Offset = "0x426E540", VA = "0x426E540")]
	public static Exception MissingOperand(OperatorInfo before)
	{
		return null;
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x426E930", Offset = "0x426E930", VA = "0x426E930")]
	public static Exception MissingOperator(string token)
	{
		return null;
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x4270C00", Offset = "0x4270C00", VA = "0x4270C00")]
	public static Exception TypeMismatch(string expr)
	{
		return null;
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x4270C90", Offset = "0x4270C90", VA = "0x4270C90")]
	public static Exception FunctionArgumentOutOfRange(string arg, string func)
	{
		return null;
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x426F8C0", Offset = "0x426F8C0", VA = "0x426F8C0")]
	public static Exception ExpressionTooComplex()
	{
		return null;
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x425DE60", Offset = "0x425DE60", VA = "0x425DE60")]
	public static Exception UnboundName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x4270320", Offset = "0x4270320", VA = "0x4270320")]
	public static Exception InvalidString(string str)
	{
		return null;
	}

	[Token(Token = "0x6000629")]
	[Address(RVA = "0x425D9D0", Offset = "0x425D9D0", VA = "0x425D9D0")]
	public static Exception UndefinedFunction(string name)
	{
		return null;
	}

	[Token(Token = "0x600062A")]
	[Address(RVA = "0x426ECD0", Offset = "0x426ECD0", VA = "0x426ECD0")]
	public static Exception SyntaxError()
	{
		return null;
	}

	[Token(Token = "0x600062B")]
	[Address(RVA = "0x4270CE0", Offset = "0x4270CE0", VA = "0x4270CE0")]
	public static Exception FunctionArgumentCount(string name)
	{
		return null;
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x426E8B0", Offset = "0x426E8B0", VA = "0x426E8B0")]
	public static Exception MissingRightParen()
	{
		return null;
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x426F770", Offset = "0x426F770", VA = "0x426F770")]
	public static Exception UnknownToken(string token, int position)
	{
		return null;
	}

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x426F940", Offset = "0x426F940", VA = "0x426F940")]
	public static Exception UnknownToken(Tokens tokExpected, Tokens tokCurr, int position)
	{
		return null;
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x4270D70", Offset = "0x4270D70", VA = "0x4270D70")]
	public static Exception DatatypeConvertion(Type type1, Type type2)
	{
		return null;
	}

	[Token(Token = "0x6000630")]
	[Address(RVA = "0x426DB50", Offset = "0x426DB50", VA = "0x426DB50")]
	public static Exception DatavalueConvertion(object value, Type type, Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x6000631")]
	[Address(RVA = "0x4270E40", Offset = "0x4270E40", VA = "0x4270E40")]
	public static Exception InvalidName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x4270270", Offset = "0x4270270", VA = "0x4270270")]
	public static Exception InvalidDate(string date)
	{
		return null;
	}

	[Token(Token = "0x6000633")]
	[Address(RVA = "0x4270ED0", Offset = "0x4270ED0", VA = "0x4270ED0")]
	public static Exception NonConstantArgument()
	{
		return null;
	}

	[Token(Token = "0x6000634")]
	[Address(RVA = "0x426B750", Offset = "0x426B750", VA = "0x426B750")]
	public static Exception InvalidPattern(string pat)
	{
		return null;
	}

	[Token(Token = "0x6000635")]
	[Address(RVA = "0x426A650", Offset = "0x426A650", VA = "0x426A650")]
	public static Exception InWithoutParentheses()
	{
		return null;
	}

	[Token(Token = "0x6000636")]
	[Address(RVA = "0x4270F50", Offset = "0x4270F50", VA = "0x4270F50")]
	public static Exception InWithoutList()
	{
		return null;
	}

	[Token(Token = "0x6000637")]
	[Address(RVA = "0x42678A0", Offset = "0x42678A0", VA = "0x42678A0")]
	public static Exception InvalidIsSyntax()
	{
		return null;
	}

	[Token(Token = "0x6000638")]
	[Address(RVA = "0x426A790", Offset = "0x426A790", VA = "0x426A790")]
	public static Exception Overflow(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000639")]
	[Address(RVA = "0x4270FD0", Offset = "0x4270FD0", VA = "0x4270FD0")]
	public static Exception ArgumentType(string function, int arg, Type type)
	{
		return null;
	}

	[Token(Token = "0x600063A")]
	[Address(RVA = "0x42710D0", Offset = "0x42710D0", VA = "0x42710D0")]
	public static Exception ArgumentTypeInteger(string function, int arg)
	{
		return null;
	}

	[Token(Token = "0x600063B")]
	[Address(RVA = "0x4267C30", Offset = "0x4267C30", VA = "0x4267C30")]
	public static Exception TypeMismatchInBinop(int op, Type type1, Type type2)
	{
		return null;
	}

	[Token(Token = "0x600063C")]
	[Address(RVA = "0x426AA50", Offset = "0x426AA50", VA = "0x426AA50")]
	public static Exception AmbiguousBinop(int op, Type type1, Type type2)
	{
		return null;
	}

	[Token(Token = "0x600063D")]
	[Address(RVA = "0x426A6D0", Offset = "0x426A6D0", VA = "0x426A6D0")]
	public static Exception UnsupportedOperator(int op)
	{
		return null;
	}

	[Token(Token = "0x600063E")]
	[Address(RVA = "0x42701E0", Offset = "0x42701E0", VA = "0x42701E0")]
	public static Exception InvalidNameBracketing(string name)
	{
		return null;
	}

	[Token(Token = "0x600063F")]
	[Address(RVA = "0x426F6E0", Offset = "0x426F6E0", VA = "0x426F6E0")]
	public static Exception MissingOperandBefore(string op)
	{
		return null;
	}

	[Token(Token = "0x6000640")]
	[Address(RVA = "0x426F260", Offset = "0x426F260", VA = "0x426F260")]
	public static Exception TooManyRightParentheses()
	{
		return null;
	}

	[Token(Token = "0x6000641")]
	[Address(RVA = "0x425DDD0", Offset = "0x425DDD0", VA = "0x425DDD0")]
	public static Exception UnresolvedRelation(string name, string expr)
	{
		return null;
	}

	[Token(Token = "0x6000642")]
	[Address(RVA = "0x42711A0", Offset = "0x42711A0", VA = "0x42711A0")]
	internal static EvaluateException BindFailure(string relationName)
	{
		return null;
	}

	[Token(Token = "0x6000643")]
	[Address(RVA = "0x426F840", Offset = "0x426F840", VA = "0x426F840")]
	public static Exception AggregateArgument()
	{
		return null;
	}

	[Token(Token = "0x6000644")]
	[Address(RVA = "0x425DD40", Offset = "0x425DD40", VA = "0x425DD40")]
	public static Exception AggregateUnbound(string expr)
	{
		return null;
	}

	[Token(Token = "0x6000645")]
	[Address(RVA = "0x425E510", Offset = "0x425E510", VA = "0x425E510")]
	public static Exception EvalNoContext()
	{
		return null;
	}

	[Token(Token = "0x6000646")]
	[Address(RVA = "0x4271230", Offset = "0x4271230", VA = "0x4271230")]
	public static Exception ExpressionUnbound(string expr)
	{
		return null;
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x425E610", Offset = "0x425E610", VA = "0x425E610")]
	public static Exception ComputeNotAggregate(string expr)
	{
		return null;
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x426DD40", Offset = "0x426DD40", VA = "0x426DD40")]
	public static Exception FilterConvertion(string expr)
	{
		return null;
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x426EA30", Offset = "0x426EA30", VA = "0x426EA30")]
	public static Exception LookupArgument()
	{
		return null;
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x42712C0", Offset = "0x42712C0", VA = "0x42712C0")]
	public static Exception InvalidType(string typeName)
	{
		return null;
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x4271350", Offset = "0x4271350", VA = "0x4271350")]
	public static Exception InvalidHoursArgument()
	{
		return null;
	}

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x42713D0", Offset = "0x42713D0", VA = "0x42713D0")]
	public static Exception InvalidMinutesArgument()
	{
		return null;
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x4271450", Offset = "0x4271450", VA = "0x4271450")]
	public static Exception InvalidTimeZoneRange()
	{
		return null;
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x42714D0", Offset = "0x42714D0", VA = "0x42714D0")]
	public static Exception MismatchKindandTimeSpan()
	{
		return null;
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x426C7A0", Offset = "0x426C7A0", VA = "0x426C7A0")]
	public static Exception UnsupportedDataType(Type type)
	{
		return null;
	}
}
