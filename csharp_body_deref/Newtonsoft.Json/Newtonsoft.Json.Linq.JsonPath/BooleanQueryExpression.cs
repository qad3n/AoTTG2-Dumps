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
	[Address(RVA = "0x1522E90", Offset = "0x1521490", VA = "0x181522E90")]
	public BooleanQueryExpression(QueryOperator @operator, object left, object? right)
	{
	}

	[Token(Token = "0x6000E5D")]
	[Address(RVA = "0x1C8F490", Offset = "0x1C8DA90", VA = "0x181C8F490")]
	private IEnumerable<JToken> GetResult(JToken root, JToken t, object? o)
	{
		return null;
	}

	[Token(Token = "0x6000E5E")]
	[Address(RVA = "0x1C8F680", Offset = "0x1C8DC80", VA = "0x181C8F680", Slot = "4")]
	public override bool IsMatch(JToken root, JToken t, JsonSelectSettings? settings)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E5F")]
	[Address(RVA = "0x1C8FB30", Offset = "0x1C8E130", VA = "0x181C8FB30")]
	private bool MatchTokens(JToken leftResult, JToken rightResult, JsonSelectSettings? settings)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E60")]
	[Address(RVA = "0x1C8FDB0", Offset = "0x1C8E3B0", VA = "0x181C8FDB0")]
	private static bool RegexEquals(JValue input, JValue pattern, JsonSelectSettings? settings)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E61")]
	[Address(RVA = "0x1C8EF60", Offset = "0x1C8D560", VA = "0x181C8EF60")]
	internal static bool EqualsWithStringCoercion(JValue value, JValue queryValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E62")]
	[Address(RVA = "0x1C8EE20", Offset = "0x1C8D420", VA = "0x181C8EE20")]
	internal static bool EqualsWithStrictMatch(JValue value, JValue queryValue)
	{
		return default(bool);
	}
}
