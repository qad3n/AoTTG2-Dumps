// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JsonPath.CompositeExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3E39780", Offset = "0x3E39780", VA = "0x3E39780")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E59")]
		[Address(RVA = "0x3E39790", Offset = "0x3E39790", VA = "0x3E39790")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000E5A")]
	[Address(RVA = "0x3E38E80", Offset = "0x3E38E80", VA = "0x3E38E80")]
	public CompositeExpression(QueryOperator @operator)
	{
	}

	[Token(Token = "0x6000E5B")]
	[Address(RVA = "0x3E397A0", Offset = "0x3E397A0", VA = "0x3E397A0", Slot = "4")]
	public override bool IsMatch(JToken root, JToken t, JsonSelectSettings? settings)
	{
		return default(bool);
	}
}
