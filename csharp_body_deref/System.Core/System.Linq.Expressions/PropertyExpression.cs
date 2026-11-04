// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.PropertyExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000A2")]
internal sealed class PropertyExpression : MemberExpression
{
	[Token(Token = "0x40001B3")]
	[FieldOffset(Offset = "0x18")]
	private readonly PropertyInfo _property;

	[Token(Token = "0x170000C5")]
	public sealed override Type Type
	{
		[Token(Token = "0x600047E")]
		[Address(RVA = "0x243E8F0", Offset = "0x243CEF0", VA = "0x18243E8F0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x2439780", Offset = "0x2437D80", VA = "0x182439780")]
	public PropertyExpression(Expression expression, PropertyInfo member)
	{
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "10")]
	internal override MemberInfo GetMember()
	{
		return null;
	}
}
