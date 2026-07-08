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
		[Token(Token = "0x600047F")]
		[Address(RVA = "0x4197FB0", Offset = "0x4197FB0", VA = "0x4197FB0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x4197D40", Offset = "0x4197D40", VA = "0x4197D40")]
	public PropertyExpression(Expression expression, PropertyInfo member)
	{
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x4197FA0", Offset = "0x4197FA0", VA = "0x4197FA0", Slot = "10")]
	internal override MemberInfo GetMember()
	{
		return null;
	}
}
