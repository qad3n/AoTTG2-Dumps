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
		[Token(Token = "0x6000C90")]
		[Address(RVA = "0x45112A0", Offset = "0x45112A0", VA = "0x45112A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C91")]
	[Address(RVA = "0x4510BA0", Offset = "0x4510BA0", VA = "0x4510BA0")]
	public static void Requires(bool precondition, string paramName)
	{
	}

	[Token(Token = "0x6000C92")]
	[Address(RVA = "0x450E150", Offset = "0x450E150", VA = "0x450E150")]
	public static void RequiresNotNull(object value, string paramName)
	{
	}

	[Token(Token = "0x6000C93")]
	[Address(RVA = "0x4511300", Offset = "0x4511300", VA = "0x4511300")]
	public static void RequiresNotNull(object value, string paramName, int index)
	{
	}

	[Token(Token = "0x6000C94")]
	public static void RequiresNotNullItems<T>(IList<T> array, string arrayName)
	{
	}

	[Token(Token = "0x6000C95")]
	[Address(RVA = "0x4511360", Offset = "0x4511360", VA = "0x4511360")]
	private static string GetParamName(string paramName, int index)
	{
		return null;
	}

	[Token(Token = "0x6000C96")]
	public static void RequiresArrayRange<T>(IList<T> array, int offset, int count, string offsetName, string countName)
	{
	}
}
