using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq.JsonPath;

[Token(Token = "0x200019F")]
internal abstract class QueryExpression
{
	[Token(Token = "0x40007BA")]
	[FieldOffset(Offset = "0x10")]
	internal QueryOperator Operator;

	[Token(Token = "0x6000E55")]
	[Address(RVA = "0x3B43DF0", Offset = "0x3B43DF0", VA = "0x3B43DF0")]
	public QueryExpression(QueryOperator @operator)
	{
	}

	[Token(Token = "0x6000E56")]
	[Address(RVA = "0x3B43E10", Offset = "0x3B43E10", VA = "0x3B43E10")]
	public bool IsMatch(JToken root, JToken t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E57")]
	public abstract bool IsMatch(JToken root, JToken t, JsonSelectSettings? settings);
}
