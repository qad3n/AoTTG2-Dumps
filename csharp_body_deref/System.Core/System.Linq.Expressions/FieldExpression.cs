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
		[Token(Token = "0x600047C")]
		[Address(RVA = "0x4197F70", Offset = "0x4197F70", VA = "0x4197F70", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x4197E70", Offset = "0x4197E70", VA = "0x4197E70")]
	public FieldExpression(Expression expression, FieldInfo member)
	{
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x4197F60", Offset = "0x4197F60", VA = "0x4197F60", Slot = "10")]
	internal override MemberInfo GetMember()
	{
		return null;
	}
}
