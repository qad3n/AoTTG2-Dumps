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
	[Address(RVA = "0x257F530", Offset = "0x257DB30", VA = "0x18257F530")]
	private static void TraceException(string trace, Exception e)
	{
	}

	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x257F390", Offset = "0x257D990", VA = "0x18257F390")]
	internal static void TraceExceptionAsReturnValue(Exception e)
	{
	}

	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x257F460", Offset = "0x257DA60", VA = "0x18257F460")]
	internal static void TraceExceptionWithoutRethrow(Exception e)
	{
	}

	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x257EAB0", Offset = "0x257D0B0", VA = "0x18257EAB0")]
	internal static ArgumentException Argument(string error)
	{
		return null;
	}

	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x257E9A0", Offset = "0x257CFA0", VA = "0x18257E9A0")]
	internal static ArgumentOutOfRangeException ArgumentOutOfRange(string parameterName)
	{
		return null;
	}

	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x257EA20", Offset = "0x257D020", VA = "0x18257EA20")]
	internal static ArgumentOutOfRangeException ArgumentOutOfRange(string message, string parameterName)
	{
		return null;
	}

	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x257ED50", Offset = "0x257D350", VA = "0x18257ED50")]
	internal static InvalidOperationException InvalidOperation(string error)
	{
		return null;
	}

	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x257F310", Offset = "0x257D910", VA = "0x18257F310")]
	internal static NotSupportedException NotSupported(string error)
	{
		return null;
	}

	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x257EEC0", Offset = "0x257D4C0", VA = "0x18257EEC0")]
	internal static bool IsCatchableExceptionType(Exception e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B3E")]
	[Address(RVA = "0x257F110", Offset = "0x257D710", VA = "0x18257F110")]
	internal static bool IsCatchableOrSecurityExceptionType(Exception e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B3F")]
	[Address(RVA = "0x257EBC0", Offset = "0x257D1C0", VA = "0x18257EBC0")]
	internal static ArgumentOutOfRangeException InvalidEnumerationValue(Type type, int value)
	{
		return null;
	}

	[Token(Token = "0x6000B40")]
	[Address(RVA = "0x257EE60", Offset = "0x257D460", VA = "0x18257EE60")]
	internal static Exception InvalidSeekOrigin(string parameterName)
	{
		return null;
	}

	[Token(Token = "0x6000B41")]
	[Address(RVA = "0x257EB30", Offset = "0x257D130", VA = "0x18257EB30")]
	internal static ArgumentOutOfRangeException InvalidAcceptRejectRule(AcceptRejectRule value)
	{
		return null;
	}

	[Token(Token = "0x6000B42")]
	[Address(RVA = "0x257ECC0", Offset = "0x257D2C0", VA = "0x18257ECC0")]
	internal static ArgumentOutOfRangeException InvalidMissingSchemaAction(MissingSchemaAction value)
	{
		return null;
	}

	[Token(Token = "0x6000B43")]
	[Address(RVA = "0x257EDD0", Offset = "0x257D3D0", VA = "0x18257EDD0")]
	internal static ArgumentOutOfRangeException InvalidRule(Rule value)
	{
		return null;
	}

	[Token(Token = "0x6000B44")]
	[Address(RVA = "0x257F5C0", Offset = "0x257DBC0", VA = "0x18257F5C0")]
	internal static Exception WrongType(Type got, Type expected)
	{
		return null;
	}
}
