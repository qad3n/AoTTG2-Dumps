using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq.JsonPath;

[Token(Token = "0x20001A0")]
internal class CompositeExpression : QueryExpression
{
	[Token(Token = "0x17000243")]
	public List<QueryExpression> Expressions
	{
		[Token(Token = "0x6000E58")]
		[Address(RVA = "0x3B43E30", Offset = "0x3B43E30", VA = "0x3B43E30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E59")]
		[Address(RVA = "0x3B43E40", Offset = "0x3B43E40", VA = "0x3B43E40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000E5A")]
	[Address(RVA = "0x3B43530", Offset = "0x3B43530", VA = "0x3B43530")]
	public CompositeExpression(QueryOperator @operator)
	{
	}

	[Token(Token = "0x6000E5B")]
	[Address(RVA = "0x3B43E50", Offset = "0x3B43E50", VA = "0x3B43E50", Slot = "4")]
	public override bool IsMatch(JToken root, JToken t, JsonSelectSettings? settings)
	{
		return default(bool);
	}
}
