// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.ConstantExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200007A")]
[DebuggerTypeProxy(typeof(ConstantExpressionProxy))]
public class ConstantExpression : Expression
{
	[Token(Token = "0x17000078")]
	public override Type Type
	{
		[Token(Token = "0x6000317")]
		[Address(RVA = "0x242B9D0", Offset = "0x2429FD0", VA = "0x18242B9D0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000079")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000318")]
		[Address(RVA = "0x1B28F50", Offset = "0x1B27550", VA = "0x181B28F50", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x1700007A")]
	public object Value
	{
		[Token(Token = "0x6000319")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x242B960", Offset = "0x2429F60", VA = "0x18242B960")]
	internal ConstantExpression(object value)
	{
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x242B930", Offset = "0x2429F30", VA = "0x18242B930", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}
}
