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

[Token(Token = "0x2000077")]
[DebuggerTypeProxy(typeof(ConditionalExpressionProxy))]
public class ConditionalExpression : Expression
{
	[Token(Token = "0x17000072")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x600030B")]
		[Address(RVA = "0x44B0800", Offset = "0x44B0800", VA = "0x44B0800", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000073")]
	public override Type Type
	{
		[Token(Token = "0x600030C")]
		[Address(RVA = "0x44B0810", Offset = "0x44B0810", VA = "0x44B0810", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000074")]
	public Expression Test
	{
		[Token(Token = "0x600030D")]
		[Address(RVA = "0x44B0840", Offset = "0x44B0840", VA = "0x44B0840")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000075")]
	public Expression IfTrue
	{
		[Token(Token = "0x600030E")]
		[Address(RVA = "0x44B0850", Offset = "0x44B0850", VA = "0x44B0850")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000076")]
	public Expression IfFalse
	{
		[Token(Token = "0x600030F")]
		[Address(RVA = "0x44B0860", Offset = "0x44B0860", VA = "0x44B0860")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x44B03C0", Offset = "0x44B03C0", VA = "0x44B03C0")]
	internal ConditionalExpression(Expression test, Expression ifTrue)
	{
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x44B0440", Offset = "0x44B0440", VA = "0x44B0440")]
	internal static ConditionalExpression Make(Expression test, Expression ifTrue, Expression ifFalse, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x44B0880", Offset = "0x44B0880", VA = "0x44B0880", Slot = "10")]
	internal virtual Expression GetFalse()
	{
		return null;
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x44B08F0", Offset = "0x44B08F0", VA = "0x44B08F0", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x44B0920", Offset = "0x44B0920", VA = "0x44B0920")]
	public ConditionalExpression Update(Expression test, Expression ifTrue, Expression ifFalse)
	{
		return null;
	}
}
