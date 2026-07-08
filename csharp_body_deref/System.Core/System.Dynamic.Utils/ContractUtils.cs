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
		[Address(RVA = "0x41EC1A0", Offset = "0x41EC1A0", VA = "0x41EC1A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C91")]
	[Address(RVA = "0x41EBAA0", Offset = "0x41EBAA0", VA = "0x41EBAA0")]
	public static void Requires(bool precondition, string paramName)
	{
	}

	[Token(Token = "0x6000C92")]
	[Address(RVA = "0x41E9050", Offset = "0x41E9050", VA = "0x41E9050")]
	public static void RequiresNotNull(object value, string paramName)
	{
	}

	[Token(Token = "0x6000C93")]
	[Address(RVA = "0x41EC200", Offset = "0x41EC200", VA = "0x41EC200")]
	public static void RequiresNotNull(object value, string paramName, int index)
	{
	}

	[Token(Token = "0x6000C94")]
	public static void RequiresNotNullItems<T>(IList<T> array, string arrayName)
	{
	}

	[Token(Token = "0x6000C95")]
	[Address(RVA = "0x41EC260", Offset = "0x41EC260", VA = "0x41EC260")]
	private static string GetParamName(string paramName, int index)
	{
		return null;
	}

	[Token(Token = "0x6000C96")]
	public static void RequiresArrayRange<T>(IList<T> array, int offset, int count, string offsetName, string countName)
	{
	}
}
