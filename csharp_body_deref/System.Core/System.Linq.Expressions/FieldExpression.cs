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

[Token(Token = "0x20000A2")]
internal sealed class FieldExpression : MemberExpression
{
	[Token(Token = "0x40001BB")]
	[FieldOffset(Offset = "0x18")]
	private readonly FieldInfo _field;

	[Token(Token = "0x170000C6")]
	public sealed override Type Type
	{
		[Token(Token = "0x6000486")]
		[Address(RVA = "0x5DD2EE0", Offset = "0x5DD1EE0", VA = "0x5DD2EE0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x5DD2DE0", Offset = "0x5DD1DE0", VA = "0x5DD2DE0")]
	public FieldExpression(Expression expression, FieldInfo member)
	{
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x5DD2ED0", Offset = "0x5DD1ED0", VA = "0x5DD2ED0", Slot = "10")]
	internal override MemberInfo GetMember()
	{
		return null;
	}
}
