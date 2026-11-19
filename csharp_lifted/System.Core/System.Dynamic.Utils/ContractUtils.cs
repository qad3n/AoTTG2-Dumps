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

[Token(Token = "0x2000281")]
internal static class ContractUtils
{
	[Token(Token = "0x1700028E")]
	[ExcludeFromCodeCoverage]
	public static Exception Unreachable
	{
		[Token(Token = "0x6000C9A")]
		[Address(RVA = "0x5E25E70", Offset = "0x5E24E70", VA = "0x5E25E70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C9B")]
	[Address(RVA = "0x5E257C0", Offset = "0x5E247C0", VA = "0x5E257C0")]
	public static void Requires(bool precondition, string paramName)
	{
	}

	[Token(Token = "0x6000C9C")]
	[Address(RVA = "0x5E22DB0", Offset = "0x5E21DB0", VA = "0x5E22DB0")]
	public static void RequiresNotNull(object value, string paramName)
	{
	}

	[Token(Token = "0x6000C9D")]
	[Address(RVA = "0x5E25ED0", Offset = "0x5E24ED0", VA = "0x5E25ED0")]
	public static void RequiresNotNull(object value, string paramName, int index)
	{
	}

	[Token(Token = "0x6000C9E")]
	public static void RequiresNotNullItems<T>(IList<T> array, string arrayName)
	{
	}

	[Token(Token = "0x6000C9F")]
	[Address(RVA = "0x5E25F30", Offset = "0x5E24F30", VA = "0x5E25F30")]
	private static string GetParamName(string paramName, int index)
	{
		return null;
	}

	[Token(Token = "0x6000CA0")]
	public static void RequiresArrayRange<T>(IList<T> array, int offset, int count, string offsetName, string countName)
	{
	}
}
