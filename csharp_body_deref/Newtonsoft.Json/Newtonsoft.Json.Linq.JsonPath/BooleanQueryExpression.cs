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
	[Address(RVA = "0x3B43450", Offset = "0x3B43450", VA = "0x3B43450")]
	public BooleanQueryExpression(QueryOperator @operator, object left, object? right)
	{
	}

	[Token(Token = "0x6000E5D")]
	[Address(RVA = "0x3B44160", Offset = "0x3B44160", VA = "0x3B44160")]
	private IEnumerable<JToken> GetResult(JToken root, JToken t, object? o)
	{
		return null;
	}

	[Token(Token = "0x6000E5E")]
	[Address(RVA = "0x3B44360", Offset = "0x3B44360", VA = "0x3B44360", Slot = "4")]
	public override bool IsMatch(JToken root, JToken t, JsonSelectSettings? settings)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E5F")]
	[Address(RVA = "0x3B44B60", Offset = "0x3B44B60", VA = "0x3B44B60")]
	private bool MatchTokens(JToken leftResult, JToken rightResult, JsonSelectSettings? settings)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E60")]
	[Address(RVA = "0x3B44D60", Offset = "0x3B44D60", VA = "0x3B44D60")]
	private static bool RegexEquals(JValue input, JValue pattern, JsonSelectSettings? settings)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E61")]
	[Address(RVA = "0x3B44F10", Offset = "0x3B44F10", VA = "0x3B44F10")]
	internal static bool EqualsWithStringCoercion(JValue value, JValue queryValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E62")]
	[Address(RVA = "0x3B454C0", Offset = "0x3B454C0", VA = "0x3B454C0")]
	internal static bool EqualsWithStrictMatch(JValue value, JValue queryValue)
	{
		return default(bool);
	}
}
