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
	[Address(RVA = "0x5EBAC40", Offset = "0x5EB9C40", VA = "0x5EBAC40")]
	private static OverflowException _Overflow(string error)
	{
		return null;
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x5EBACA0", Offset = "0x5EB9CA0", VA = "0x5EBACA0")]
	private static InvalidExpressionException _Expr(string error)
	{
		return null;
	}

	[Token(Token = "0x6000650")]
	[Address(RVA = "0x5EBAD00", Offset = "0x5EB9D00", VA = "0x5EBAD00")]
	private static SyntaxErrorException _Syntax(string error)
	{
		return null;
	}

	[Token(Token = "0x6000651")]
	[Address(RVA = "0x5EBAD60", Offset = "0x5EB9D60", VA = "0x5EBAD60")]
	private static EvaluateException _Eval(string error)
	{
		return null;
	}

	[Token(Token = "0x6000652")]
	[Address(RVA = "0x5EBADC0", Offset = "0x5EB9DC0", VA = "0x5EBADC0")]
	private static EvaluateException _Eval(string error, Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x6000653")]
	[Address(RVA = "0x5EBAE20", Offset = "0x5EB9E20", VA = "0x5EBAE20")]
	public static Exception InvokeArgument()
	{
		return null;
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x5EBAE50", Offset = "0x5EB9E50", VA = "0x5EBAE50")]
	public static Exception NYI(string moreinfo)
	{
		return null;
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x5EBAEE0", Offset = "0x5EB9EE0", VA = "0x5EBAEE0")]
	public static Exception MissingOperand(OperatorInfo before)
	{
		return null;
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x5EBB090", Offset = "0x5EBA090", VA = "0x5EBB090")]
	public static Exception MissingOperator(string token)
	{
		return null;
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x5EBB120", Offset = "0x5EBA120", VA = "0x5EBB120")]
	public static Exception TypeMismatch(string expr)
	{
		return null;
	}

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x5EBB1B0", Offset = "0x5EBA1B0", VA = "0x5EBB1B0")]
	public static Exception FunctionArgumentOutOfRange(string arg, string func)
	{
		return null;
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x5EBB200", Offset = "0x5EBA200", VA = "0x5EBB200")]
	public static Exception ExpressionTooComplex()
	{
		return null;
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x5EBB280", Offset = "0x5EBA280", VA = "0x5EBB280")]
	public static Exception UnboundName(string name)
	{
		return null;
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x5EBB310", Offset = "0x5EBA310", VA = "0x5EBB310")]
	public static Exception InvalidString(string str)
	{
		return null;
	}

	[Token(Token = "0x600065C")]
	[Address(RVA = "0x5EBB3A0", Offset = "0x5EBA3A0", VA = "0x5EBB3A0")]
	public static Exception UndefinedFunction(string name)
	{
		return null;
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x5EBB430", Offset = "0x5EBA430", VA = "0x5EBB430")]
	public static Exception SyntaxError()
	{
		return null;
	}

	[Token(Token = "0x600065E")]
	[Address(RVA = "0x5EBB4B0", Offset = "0x5EBA4B0", VA = "0x5EBB4B0")]
	public static Exception FunctionArgumentCount(string name)
	{
		return null;
	}

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x5EBB540", Offset = "0x5EBA540", VA = "0x5EBB540")]
	public static Exception MissingRightParen()
	{
		return null;
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x5EBB5C0", Offset = "0x5EBA5C0", VA = "0x5EBB5C0")]
	public static Exception UnknownToken(string token, int position)
	{
		return null;
	}

	[Token(Token = "0x6000661")]
	[Address(RVA = "0x5EBB690", Offset = "0x5EBA690", VA = "0x5EBB690")]
	public static Exception UnknownToken(Tokens tokExpected, Tokens tokCurr, int position)
	{
		return null;
	}

	[Token(Token = "0x6000662")]
	[Address(RVA = "0x5EBB7D0", Offset = "0x5EBA7D0", VA = "0x5EBB7D0")]
	public static Exception DatatypeConvertion(Type type1, Type type2)
	{
		return null;
	}

	[Token(Token = "0x6000663")]
	[Address(RVA = "0x5EBB8A0", Offset = "0x5EBA8A0", VA = "0x5EBB8A0")]
	public static Exception DatavalueConvertion(object value, Type type, Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x6000664")]
	[Address(RVA = "0x5EBB970", Offset = "0x5EBA970", VA = "0x5EBB970")]
	public static Exception InvalidName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000665")]
	[Address(RVA = "0x5EBBA00", Offset = "0x5EBAA00", VA = "0x5EBBA00")]
	public static Exception InvalidDate(string date)
	{
		return null;
	}

	[Token(Token = "0x6000666")]
	[Address(RVA = "0x5EBBA90", Offset = "0x5EBAA90", VA = "0x5EBBA90")]
	public static Exception NonConstantArgument()
	{
		return null;
	}

	[Token(Token = "0x6000667")]
	[Address(RVA = "0x5EBBB10", Offset = "0x5EBAB10", VA = "0x5EBBB10")]
	public static Exception InvalidPattern(string pat)
	{
		return null;
	}

	[Token(Token = "0x6000668")]
	[Address(RVA = "0x5EBBBA0", Offset = "0x5EBABA0", VA = "0x5EBBBA0")]
	public static Exception InWithoutParentheses()
	{
		return null;
	}

	[Token(Token = "0x6000669")]
	[Address(RVA = "0x5EBBC20", Offset = "0x5EBAC20", VA = "0x5EBBC20")]
	public static Exception InWithoutList()
	{
		return null;
	}

	[Token(Token = "0x600066A")]
	[Address(RVA = "0x5EBBCA0", Offset = "0x5EBACA0", VA = "0x5EBBCA0")]
	public static Exception InvalidIsSyntax()
	{
		return null;
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x5EBBD20", Offset = "0x5EBAD20", VA = "0x5EBBD20")]
	public static Exception Overflow(Type type)
	{
		return null;
	}

	[Token(Token = "0x600066C")]
	[Address(RVA = "0x5EBBDD0", Offset = "0x5EBADD0", VA = "0x5EBBDD0")]
	public static Exception ArgumentType(string function, int arg, Type type)
	{
		return null;
	}

	[Token(Token = "0x600066D")]
	[Address(RVA = "0x5EBBED0", Offset = "0x5EBAED0", VA = "0x5EBBED0")]
	public static Exception ArgumentTypeInteger(string function, int arg)
	{
		return null;
	}

	[Token(Token = "0x600066E")]
	[Address(RVA = "0x5EBBFA0", Offset = "0x5EBAFA0", VA = "0x5EBBFA0")]
	public static Exception TypeMismatchInBinop(int op, Type type1, Type type2)
	{
		return null;
	}

	[Token(Token = "0x600066F")]
	[Address(RVA = "0x5EBC0D0", Offset = "0x5EBB0D0", VA = "0x5EBC0D0")]
	public static Exception AmbiguousBinop(int op, Type type1, Type type2)
	{
		return null;
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x5EBC200", Offset = "0x5EBB200", VA = "0x5EBC200")]
	public static Exception UnsupportedOperator(int op)
	{
		return null;
	}

	[Token(Token = "0x6000671")]
	[Address(RVA = "0x5EBC2C0", Offset = "0x5EBB2C0", VA = "0x5EBC2C0")]
	public static Exception InvalidNameBracketing(string name)
	{
		return null;
	}

	[Token(Token = "0x6000672")]
	[Address(RVA = "0x5EBC350", Offset = "0x5EBB350", VA = "0x5EBC350")]
	public static Exception MissingOperandBefore(string op)
	{
		return null;
	}

	[Token(Token = "0x6000673")]
	[Address(RVA = "0x5EBC3E0", Offset = "0x5EBB3E0", VA = "0x5EBC3E0")]
	public static Exception TooManyRightParentheses()
	{
		return null;
	}

	[Token(Token = "0x6000674")]
	[Address(RVA = "0x5EBC460", Offset = "0x5EBB460", VA = "0x5EBC460")]
	public static Exception UnresolvedRelation(string name, string expr)
	{
		return null;
	}

	[Token(Token = "0x6000675")]
	[Address(RVA = "0x5EBC4F0", Offset = "0x5EBB4F0", VA = "0x5EBC4F0")]
	internal static EvaluateException BindFailure(string relationName)
	{
		return null;
	}

	[Token(Token = "0x6000676")]
	[Address(RVA = "0x5EBC580", Offset = "0x5EBB580", VA = "0x5EBC580")]
	public static Exception AggregateArgument()
	{
		return null;
	}

	[Token(Token = "0x6000677")]
	[Address(RVA = "0x5EBC600", Offset = "0x5EBB600", VA = "0x5EBC600")]
	public static Exception AggregateUnbound(string expr)
	{
		return null;
	}

	[Token(Token = "0x6000678")]
	[Address(RVA = "0x5EBC690", Offset = "0x5EBB690", VA = "0x5EBC690")]
	public static Exception EvalNoContext()
	{
		return null;
	}

	[Token(Token = "0x6000679")]
	[Address(RVA = "0x5EBC710", Offset = "0x5EBB710", VA = "0x5EBC710")]
	public static Exception ExpressionUnbound(string expr)
	{
		return null;
	}

	[Token(Token = "0x600067A")]
	[Address(RVA = "0x5EBC7A0", Offset = "0x5EBB7A0", VA = "0x5EBC7A0")]
	public static Exception ComputeNotAggregate(string expr)
	{
		return null;
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x5EBC830", Offset = "0x5EBB830", VA = "0x5EBC830")]
	public static Exception FilterConvertion(string expr)
	{
		return null;
	}

	[Token(Token = "0x600067C")]
	[Address(RVA = "0x5EBC8C0", Offset = "0x5EBB8C0", VA = "0x5EBC8C0")]
	public static Exception LookupArgument()
	{
		return null;
	}

	[Token(Token = "0x600067D")]
	[Address(RVA = "0x5EBC940", Offset = "0x5EBB940", VA = "0x5EBC940")]
	public static Exception InvalidType(string typeName)
	{
		return null;
	}

	[Token(Token = "0x600067E")]
	[Address(RVA = "0x5EBC9D0", Offset = "0x5EBB9D0", VA = "0x5EBC9D0")]
	public static Exception InvalidHoursArgument()
	{
		return null;
	}

	[Token(Token = "0x600067F")]
	[Address(RVA = "0x5EBCA50", Offset = "0x5EBBA50", VA = "0x5EBCA50")]
	public static Exception InvalidMinutesArgument()
	{
		return null;
	}

	[Token(Token = "0x6000680")]
	[Address(RVA = "0x5EBCAD0", Offset = "0x5EBBAD0", VA = "0x5EBCAD0")]
	public static Exception InvalidTimeZoneRange()
	{
		return null;
	}

	[Token(Token = "0x6000681")]
	[Address(RVA = "0x5EBCB50", Offset = "0x5EBBB50", VA = "0x5EBCB50")]
	public static Exception MismatchKindandTimeSpan()
	{
		return null;
	}

	[Token(Token = "0x6000682")]
	[Address(RVA = "0x5EBCBD0", Offset = "0x5EBBBD0", VA = "0x5EBCBD0")]
	public static Exception UnsupportedDataType(Type type)
	{
		return null;
	}
}
