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
	[Address(RVA = "0x562B850", Offset = "0x562A850", VA = "0x562B850")]
	public BooleanQueryExpression(QueryOperator @operator, object left, object? right)
	{
	}

	[Token(Token = "0x6000E5D")]
	[Address(RVA = "0x562C4E0", Offset = "0x562B4E0", VA = "0x562C4E0")]
	private IEnumerable<JToken> GetResult(JToken root, JToken t, object? o)
	{
		return null;
	}

	[Token(Token = "0x6000E5E")]
	[Address(RVA = "0x562C6E0", Offset = "0x562B6E0", VA = "0x562C6E0", Slot = "4")]
	public override bool IsMatch(JToken root, JToken t, JsonSelectSettings? settings)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E5F")]
	[Address(RVA = "0x562CE80", Offset = "0x562BE80", VA = "0x562CE80")]
	private bool MatchTokens(JToken leftResult, JToken rightResult, JsonSelectSettings? settings)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E60")]
	[Address(RVA = "0x562D070", Offset = "0x562C070", VA = "0x562D070")]
	private static bool RegexEquals(JValue input, JValue pattern, JsonSelectSettings? settings)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E61")]
	[Address(RVA = "0x562D220", Offset = "0x562C220", VA = "0x562D220")]
	internal static bool EqualsWithStringCoercion(JValue value, JValue queryValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E62")]
	[Address(RVA = "0x562D720", Offset = "0x562C720", VA = "0x562D720")]
	internal static bool EqualsWithStrictMatch(JValue value, JValue queryValue)
	{
		return default(bool);
	}
}
