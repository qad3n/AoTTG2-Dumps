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
		[Address(RVA = "0x418B700", Offset = "0x418B700", VA = "0x418B700", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000073")]
	public override Type Type
	{
		[Token(Token = "0x600030C")]
		[Address(RVA = "0x418B710", Offset = "0x418B710", VA = "0x418B710", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000074")]
	public Expression Test
	{
		[Token(Token = "0x600030D")]
		[Address(RVA = "0x418B740", Offset = "0x418B740", VA = "0x418B740")]
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
		[Address(RVA = "0x418B750", Offset = "0x418B750", VA = "0x418B750")]
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
		[Address(RVA = "0x418B760", Offset = "0x418B760", VA = "0x418B760")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x418B2C0", Offset = "0x418B2C0", VA = "0x418B2C0")]
	internal ConditionalExpression(Expression test, Expression ifTrue)
	{
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x418B340", Offset = "0x418B340", VA = "0x418B340")]
	internal static ConditionalExpression Make(Expression test, Expression ifTrue, Expression ifFalse, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x418B780", Offset = "0x418B780", VA = "0x418B780", Slot = "10")]
	internal virtual Expression GetFalse()
	{
		return null;
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x418B7F0", Offset = "0x418B7F0", VA = "0x418B7F0", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x418B820", Offset = "0x418B820", VA = "0x418B820")]
	public ConditionalExpression Update(Expression test, Expression ifTrue, Expression ifFalse)
	{
		return null;
	}
}
