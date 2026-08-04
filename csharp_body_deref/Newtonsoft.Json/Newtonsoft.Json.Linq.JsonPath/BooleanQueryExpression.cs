// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JsonPath.BooleanQueryExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq.JsonPath;

[Token(Token = "0x20001A1")]
internal class BooleanQueryExpression : QueryExpression
{
	[Token(Token = "0x40007BC")]
	[FieldOffset(Offset = "0x18")]
	public readonly object Left;

	[Token(Token = "0x40007BD")]
	[FieldOffset(Offset = "0x20")]
	public readonly object? Right;

	[Token(Token = "0x6000E5C")]
	[Address(RVA = "0x3E38DA0", Offset = "0x3E38DA0", VA = "0x3E38DA0")]
	public BooleanQueryExpression(QueryOperator @operator, object left, object? right)
	{
	}

	[Token(Token = "0x6000E5D")]
	[Address(RVA = "0x3E39AB0", Offset = "0x3E39AB0", VA = "0x3E39AB0")]
	private IEnumerable<JToken> GetResult(JToken root, JToken t, object? o)
	{
		return null;
	}

	[Token(Token = "0x6000E5E")]
	[Address(RVA = "0x3E39CB0", Offset = "0x3E39CB0", VA = "0x3E39CB0", Slot = "4")]
	public override bool IsMatch(JToken root, JToken t, JsonSelectSettings? settings)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E5F")]
	[Address(RVA = "0x3E3A4B0", Offset = "0x3E3A4B0", VA = "0x3E3A4B0")]
	private bool MatchTokens(JToken leftResult, JToken rightResult, JsonSelectSettings? settings)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E60")]
	[Address(RVA = "0x3E3A6B0", Offset = "0x3E3A6B0", VA = "0x3E3A6B0")]
	private static bool RegexEquals(JValue input, JValue pattern, JsonSelectSettings? settings)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E61")]
	[Address(RVA = "0x3E3A860", Offset = "0x3E3A860", VA = "0x3E3A860")]
	internal static bool EqualsWithStringCoercion(JValue value, JValue queryValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E62")]
	[Address(RVA = "0x3E3AE10", Offset = "0x3E3AE10", VA = "0x3E3AE10")]
	internal static bool EqualsWithStrictMatch(JValue value, JValue queryValue)
	{
		return default(bool);
	}
}
