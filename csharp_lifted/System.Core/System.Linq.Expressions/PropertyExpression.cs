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

[Token(Token = "0x20000A3")]
internal sealed class PropertyExpression : MemberExpression
{
	[Token(Token = "0x40001BC")]
	[FieldOffset(Offset = "0x18")]
	private readonly PropertyInfo _property;

	[Token(Token = "0x170000C7")]
	public sealed override Type Type
	{
		[Token(Token = "0x6000489")]
		[Address(RVA = "0x5DD2F20", Offset = "0x5DD1F20", VA = "0x5DD2F20", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x5DD2CB0", Offset = "0x5DD1CB0", VA = "0x5DD2CB0")]
	public PropertyExpression(Expression expression, PropertyInfo member)
	{
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x5DD2F10", Offset = "0x5DD1F10", VA = "0x5DD2F10", Slot = "10")]
	internal override MemberInfo GetMember()
	{
		return null;
	}
}
