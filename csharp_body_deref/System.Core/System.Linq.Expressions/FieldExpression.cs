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
		[Token(Token = "0x600047C")]
		[Address(RVA = "0x44BD070", Offset = "0x44BD070", VA = "0x44BD070", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x44BCF70", Offset = "0x44BCF70", VA = "0x44BCF70")]
	public FieldExpression(Expression expression, FieldInfo member)
	{
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x44BD060", Offset = "0x44BD060", VA = "0x44BD060", Slot = "10")]
	internal override MemberInfo GetMember()
	{
		return null;
	}
}
