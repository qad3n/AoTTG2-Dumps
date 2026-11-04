// ==================== AoTTG2 cross-reference ====================
// Type: System.Dynamic.Utils.ContractUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using Il2CppDummyDll;

namespace System.Dynamic.Utils;

[Token(Token = "0x2000280")]
internal static class ContractUtils
{
	[Token(Token = "0x1700028C")]
	[ExcludeFromCodeCoverage]
	public static Exception Unreachable
	{
		[Token(Token = "0x6000C8F")]
		[Address(RVA = "0x2483350", Offset = "0x2481950", VA = "0x182483350")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C90")]
	[Address(RVA = "0x2483310", Offset = "0x2481910", VA = "0x182483310")]
	public static void Requires(bool precondition, string paramName)
	{
	}

	[Token(Token = "0x6000C91")]
	[Address(RVA = "0x24832B0", Offset = "0x24818B0", VA = "0x1824832B0")]
	public static void RequiresNotNull(object value, string paramName)
	{
	}

	[Token(Token = "0x6000C92")]
	[Address(RVA = "0x2483230", Offset = "0x2481830", VA = "0x182483230")]
	public static void RequiresNotNull(object value, string paramName, int index)
	{
	}

	[Token(Token = "0x6000C93")]
	public static void RequiresNotNullItems<T>(IList<T> array, string arrayName)
	{
	}

	[Token(Token = "0x6000C94")]
	[Address(RVA = "0x24831B0", Offset = "0x24817B0", VA = "0x1824831B0")]
	private static string GetParamName(string paramName, int index)
	{
		return null;
	}

	[Token(Token = "0x6000C95")]
	public static void RequiresArrayRange<T>(IList<T> array, int offset, int count, string offsetName, string countName)
	{
	}
}
