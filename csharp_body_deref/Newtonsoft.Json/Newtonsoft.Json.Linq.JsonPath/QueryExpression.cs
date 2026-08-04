// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JsonPath.QueryExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq.JsonPath;

[Token(Token = "0x200019F")]
internal abstract class QueryExpression
{
	[Token(Token = "0x40007BA")]
	[FieldOffset(Offset = "0x10")]
	internal QueryOperator Operator;

	[Token(Token = "0x6000E55")]
	[Address(RVA = "0x3E39740", Offset = "0x3E39740", VA = "0x3E39740")]
	public QueryExpression(QueryOperator @operator)
	{
	}

	[Token(Token = "0x6000E56")]
	[Address(RVA = "0x3E39760", Offset = "0x3E39760", VA = "0x3E39760")]
	public bool IsMatch(JToken root, JToken t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E57")]
	public abstract bool IsMatch(JToken root, JToken t, JsonSelectSettings? settings);
}
