using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000B7")]
internal static class ADP
{
	[Token(Token = "0x400041A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type s_stackOverflowType;

	[Token(Token = "0x400041B")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type s_outOfMemoryType;

	[Token(Token = "0x400041C")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Type s_threadAbortType;

	[Token(Token = "0x400041D")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Type s_nullReferenceType;

	[Token(Token = "0x400041E")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Type s_accessViolationType;

	[Token(Token = "0x400041F")]
	[FieldOffset(Offset = "0x28")]
	private static readonly Type s_securityType;

	[Token(Token = "0x4000420")]
	[FieldOffset(Offset = "0x30")]
	internal static readonly string StrEmpty;

	[Token(Token = "0x4000421")]
	[FieldOffset(Offset = "0x38")]
	internal static readonly string[] AzureSqlServerEndpoints;

	[Token(Token = "0x4000422")]
	[FieldOffset(Offset = "0x40")]
	internal static readonly IntPtr PtrZero;

	[Token(Token = "0x4000423")]
	[FieldOffset(Offset = "0x48")]
	internal static readonly int PtrSize;

	[Token(Token = "0x6000AFB")]
	[Address(RVA = "0x42E19A0", Offset = "0x42E19A0", VA = "0x42E19A0")]
	private static void TraceException(string trace, Exception e)
	{
	}

	[Token(Token = "0x6000AFC")]
	[Address(RVA = "0x42E1A30", Offset = "0x42E1A30", VA = "0x42E1A30")]
	internal static void TraceExceptionAsReturnValue(Exception e)
	{
	}

	[Token(Token = "0x6000AFD")]
	[Address(RVA = "0x42E1B50", Offset = "0x42E1B50", VA = "0x42E1B50")]
	internal static void TraceExceptionWithoutRethrow(Exception e)
	{
	}

	[Token(Token = "0x6000AFE")]
	[Address(RVA = "0x42E1C70", Offset = "0x42E1C70", VA = "0x42E1C70")]
	internal static ArgumentException Argument(string error)
	{
		return null;
	}

	[Token(Token = "0x6000AFF")]
	[Address(RVA = "0x42DED00", Offset = "0x42DED00", VA = "0x42DED00")]
	internal static ArgumentOutOfRangeException ArgumentOutOfRange(string parameterName)
	{
		return null;
	}

	[Token(Token = "0x6000B00")]
	[Address(RVA = "0x42E1CF0", Offset = "0x42E1CF0", VA = "0x42E1CF0")]
	internal static ArgumentOutOfRangeException ArgumentOutOfRange(string message, string parameterName)
	{
		return null;
	}

	[Token(Token = "0x6000B01")]
	[Address(RVA = "0x42E1D70", Offset = "0x42E1D70", VA = "0x42E1D70")]
	internal static InvalidOperationException InvalidOperation(string error)
	{
		return null;
	}

	[Token(Token = "0x6000B02")]
	[Address(RVA = "0x42E1DF0", Offset = "0x42E1DF0", VA = "0x42E1DF0")]
	internal static NotSupportedException NotSupported(string error)
	{
		return null;
	}

	[Token(Token = "0x6000B03")]
	[Address(RVA = "0x42E0340", Offset = "0x42E0340", VA = "0x42E0340")]
	internal static bool IsCatchableExceptionType(Exception e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B04")]
	[Address(RVA = "0x42E1E70", Offset = "0x42E1E70", VA = "0x42E1E70")]
	internal static bool IsCatchableOrSecurityExceptionType(Exception e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B05")]
	[Address(RVA = "0x42E2040", Offset = "0x42E2040", VA = "0x42E2040")]
	internal static ArgumentOutOfRangeException InvalidEnumerationValue(Type type, int value)
	{
		return null;
	}

	[Token(Token = "0x6000B06")]
	[Address(RVA = "0x42E1180", Offset = "0x42E1180", VA = "0x42E1180")]
	internal static Exception InvalidSeekOrigin(string parameterName)
	{
		return null;
	}

	[Token(Token = "0x6000B07")]
	[Address(RVA = "0x42E21A0", Offset = "0x42E21A0", VA = "0x42E21A0")]
	internal static ArgumentOutOfRangeException InvalidAcceptRejectRule(AcceptRejectRule value)
	{
		return null;
	}

	[Token(Token = "0x6000B08")]
	[Address(RVA = "0x42E2230", Offset = "0x42E2230", VA = "0x42E2230")]
	internal static ArgumentOutOfRangeException InvalidMissingSchemaAction(MissingSchemaAction value)
	{
		return null;
	}

	[Token(Token = "0x6000B09")]
	[Address(RVA = "0x42E22C0", Offset = "0x42E22C0", VA = "0x42E22C0")]
	internal static ArgumentOutOfRangeException InvalidRule(Rule value)
	{
		return null;
	}

	[Token(Token = "0x6000B0A")]
	[Address(RVA = "0x42C7CE0", Offset = "0x42C7CE0", VA = "0x42C7CE0")]
	internal static Exception WrongType(Type got, Type expected)
	{
		return null;
	}
}
