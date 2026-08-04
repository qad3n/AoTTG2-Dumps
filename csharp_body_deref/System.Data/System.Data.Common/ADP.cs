// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.ADP
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x461F100", Offset = "0x461F100", VA = "0x461F100")]
	private static void TraceException(string trace, Exception e)
	{
	}

	[Token(Token = "0x6000AFC")]
	[Address(RVA = "0x461F190", Offset = "0x461F190", VA = "0x461F190")]
	internal static void TraceExceptionAsReturnValue(Exception e)
	{
	}

	[Token(Token = "0x6000AFD")]
	[Address(RVA = "0x461F2B0", Offset = "0x461F2B0", VA = "0x461F2B0")]
	internal static void TraceExceptionWithoutRethrow(Exception e)
	{
	}

	[Token(Token = "0x6000AFE")]
	[Address(RVA = "0x461F3D0", Offset = "0x461F3D0", VA = "0x461F3D0")]
	internal static ArgumentException Argument(string error)
	{
		return null;
	}

	[Token(Token = "0x6000AFF")]
	[Address(RVA = "0x461C460", Offset = "0x461C460", VA = "0x461C460")]
	internal static ArgumentOutOfRangeException ArgumentOutOfRange(string parameterName)
	{
		return null;
	}

	[Token(Token = "0x6000B00")]
	[Address(RVA = "0x461F450", Offset = "0x461F450", VA = "0x461F450")]
	internal static ArgumentOutOfRangeException ArgumentOutOfRange(string message, string parameterName)
	{
		return null;
	}

	[Token(Token = "0x6000B01")]
	[Address(RVA = "0x461F4D0", Offset = "0x461F4D0", VA = "0x461F4D0")]
	internal static InvalidOperationException InvalidOperation(string error)
	{
		return null;
	}

	[Token(Token = "0x6000B02")]
	[Address(RVA = "0x461F550", Offset = "0x461F550", VA = "0x461F550")]
	internal static NotSupportedException NotSupported(string error)
	{
		return null;
	}

	[Token(Token = "0x6000B03")]
	[Address(RVA = "0x461DAA0", Offset = "0x461DAA0", VA = "0x461DAA0")]
	internal static bool IsCatchableExceptionType(Exception e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B04")]
	[Address(RVA = "0x461F5D0", Offset = "0x461F5D0", VA = "0x461F5D0")]
	internal static bool IsCatchableOrSecurityExceptionType(Exception e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B05")]
	[Address(RVA = "0x461F7A0", Offset = "0x461F7A0", VA = "0x461F7A0")]
	internal static ArgumentOutOfRangeException InvalidEnumerationValue(Type type, int value)
	{
		return null;
	}

	[Token(Token = "0x6000B06")]
	[Address(RVA = "0x461E8E0", Offset = "0x461E8E0", VA = "0x461E8E0")]
	internal static Exception InvalidSeekOrigin(string parameterName)
	{
		return null;
	}

	[Token(Token = "0x6000B07")]
	[Address(RVA = "0x461F900", Offset = "0x461F900", VA = "0x461F900")]
	internal static ArgumentOutOfRangeException InvalidAcceptRejectRule(AcceptRejectRule value)
	{
		return null;
	}

	[Token(Token = "0x6000B08")]
	[Address(RVA = "0x461F990", Offset = "0x461F990", VA = "0x461F990")]
	internal static ArgumentOutOfRangeException InvalidMissingSchemaAction(MissingSchemaAction value)
	{
		return null;
	}

	[Token(Token = "0x6000B09")]
	[Address(RVA = "0x461FA20", Offset = "0x461FA20", VA = "0x461FA20")]
	internal static ArgumentOutOfRangeException InvalidRule(Rule value)
	{
		return null;
	}

	[Token(Token = "0x6000B0A")]
	[Address(RVA = "0x4605440", Offset = "0x4605440", VA = "0x4605440")]
	internal static Exception WrongType(Type got, Type expected)
	{
		return null;
	}
}
