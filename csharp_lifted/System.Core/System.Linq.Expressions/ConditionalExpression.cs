// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.ConditionalExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000078")]
[DebuggerTypeProxy(typeof(ConditionalExpressionProxy))]
public class ConditionalExpression : Expression
{
	[Token(Token = "0x17000074")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000315")]
		[Address(RVA = "0x5DC6920", Offset = "0x5DC5920", VA = "0x5DC6920", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000075")]
	public override Type Type
	{
		[Token(Token = "0x6000316")]
		[Address(RVA = "0x5DC6930", Offset = "0x5DC5930", VA = "0x5DC6930", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000076")]
	public Expression Test
	{
		[Token(Token = "0x6000317")]
		[Address(RVA = "0x5DC6960", Offset = "0x5DC5960", VA = "0x5DC6960")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000077")]
	public Expression IfTrue
	{
		[Token(Token = "0x6000318")]
		[Address(RVA = "0x5DC6970", Offset = "0x5DC5970", VA = "0x5DC6970")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000078")]
	public Expression IfFalse
	{
		[Token(Token = "0x6000319")]
		[Address(RVA = "0x5DC6980", Offset = "0x5DC5980", VA = "0x5DC6980")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x5DC64E0", Offset = "0x5DC54E0", VA = "0x5DC64E0")]
	internal ConditionalExpression(Expression test, Expression ifTrue)
	{
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x5DC6560", Offset = "0x5DC5560", VA = "0x5DC6560")]
	internal static ConditionalExpression Make(Expression test, Expression ifTrue, Expression ifFalse, Type type)
	{
		return null;
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x5DC69A0", Offset = "0x5DC59A0", VA = "0x5DC69A0", Slot = "10")]
	internal virtual Expression GetFalse()
	{
		return null;
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x5DC6A10", Offset = "0x5DC5A10", VA = "0x5DC6A10", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x5DC6A40", Offset = "0x5DC5A40", VA = "0x5DC6A40")]
	public ConditionalExpression Update(Expression test, Expression ifTrue, Expression ifFalse)
	{
		return null;
	}
}
