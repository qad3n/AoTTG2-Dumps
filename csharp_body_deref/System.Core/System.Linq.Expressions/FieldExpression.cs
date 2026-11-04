// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.FieldExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000A1")]
internal sealed class FieldExpression : MemberExpression
{
	[Token(Token = "0x40001B2")]
	[FieldOffset(Offset = "0x18")]
	private readonly FieldInfo _field;

	[Token(Token = "0x170000C4")]
	public sealed override Type Type
	{
		[Token(Token = "0x600047B")]
		[Address(RVA = "0x2439810", Offset = "0x2437E10", VA = "0x182439810", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x2439780", Offset = "0x2437D80", VA = "0x182439780")]
	public FieldExpression(Expression expression, FieldInfo member)
	{
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "10")]
	internal override MemberInfo GetMember()
	{
		return null;
	}
}
