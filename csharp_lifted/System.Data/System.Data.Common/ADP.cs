// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.ADP
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000C4")]
internal static class ADP
{
	[Token(Token = "0x400043A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type s_stackOverflowType;

	[Token(Token = "0x400043B")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type s_outOfMemoryType;

	[Token(Token = "0x400043C")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Type s_threadAbortType;

	[Token(Token = "0x400043D")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Type s_nullReferenceType;

	[Token(Token = "0x400043E")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Type s_accessViolationType;

	[Token(Token = "0x400043F")]
	[FieldOffset(Offset = "0x28")]
	private static readonly Type s_securityType;

	[Token(Token = "0x4000440")]
	[FieldOffset(Offset = "0x30")]
	internal static readonly string StrEmpty;

	[Token(Token = "0x4000441")]
	[FieldOffset(Offset = "0x38")]
	internal static readonly string[] AzureSqlServerEndpoints;

	[Token(Token = "0x4000442")]
	[FieldOffset(Offset = "0x40")]
	internal static readonly IntPtr PtrZero;

	[Token(Token = "0x4000443")]
	[FieldOffset(Offset = "0x48")]
	internal static readonly int PtrSize;

	[Token(Token = "0x6000B35")]
	[Address(RVA = "0x5F25C00", Offset = "0x5F24C00", VA = "0x5F25C00")]
	private static void TraceException(string trace, Exception e)
	{
	}

	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x5F25C90", Offset = "0x5F24C90", VA = "0x5F25C90")]
	internal static void TraceExceptionAsReturnValue(Exception e)
	{
	}

	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x5F25DB0", Offset = "0x5F24DB0", VA = "0x5F25DB0")]
	internal static void TraceExceptionWithoutRethrow(Exception e)
	{
	}

	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x5F25ED0", Offset = "0x5F24ED0", VA = "0x5F25ED0")]
	internal static ArgumentException Argument(string error)
	{
		return null;
	}

	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x5F25F50", Offset = "0x5F24F50", VA = "0x5F25F50")]
	internal static ArgumentOutOfRangeException ArgumentOutOfRange(string parameterName)
	{
		return null;
	}

	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x5F25FD0", Offset = "0x5F24FD0", VA = "0x5F25FD0")]
	internal static ArgumentOutOfRangeException ArgumentOutOfRange(string message, string parameterName)
	{
		return null;
	}

	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x5F26050", Offset = "0x5F25050", VA = "0x5F26050")]
	internal static InvalidOperationException InvalidOperation(string error)
	{
		return null;
	}

	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x5F260D0", Offset = "0x5F250D0", VA = "0x5F260D0")]
	internal static NotSupportedException NotSupported(string error)
	{
		return null;
	}

	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x5F26150", Offset = "0x5F25150", VA = "0x5F26150")]
	internal static bool IsCatchableExceptionType(Exception e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B3E")]
	[Address(RVA = "0x5F26370", Offset = "0x5F25370", VA = "0x5F26370")]
	internal static bool IsCatchableOrSecurityExceptionType(Exception e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B3F")]
	[Address(RVA = "0x5F26540", Offset = "0x5F25540", VA = "0x5F26540")]
	internal static ArgumentOutOfRangeException InvalidEnumerationValue(Type type, int value)
	{
		return null;
	}

	[Token(Token = "0x6000B40")]
	[Address(RVA = "0x5F266A0", Offset = "0x5F256A0", VA = "0x5F266A0")]
	internal static Exception InvalidSeekOrigin(string parameterName)
	{
		return null;
	}

	[Token(Token = "0x6000B41")]
	[Address(RVA = "0x5F267B0", Offset = "0x5F257B0", VA = "0x5F267B0")]
	internal static ArgumentOutOfRangeException InvalidAcceptRejectRule(AcceptRejectRule value)
	{
		return null;
	}

	[Token(Token = "0x6000B42")]
	[Address(RVA = "0x5F26840", Offset = "0x5F25840", VA = "0x5F26840")]
	internal static ArgumentOutOfRangeException InvalidMissingSchemaAction(MissingSchemaAction value)
	{
		return null;
	}

	[Token(Token = "0x6000B43")]
	[Address(RVA = "0x5F268D0", Offset = "0x5F258D0", VA = "0x5F268D0")]
	internal static ArgumentOutOfRangeException InvalidRule(Rule value)
	{
		return null;
	}

	[Token(Token = "0x6000B44")]
	[Address(RVA = "0x5F26960", Offset = "0x5F25960", VA = "0x5F26960")]
	internal static Exception WrongType(Type got, Type expected)
	{
		return null;
	}
}
