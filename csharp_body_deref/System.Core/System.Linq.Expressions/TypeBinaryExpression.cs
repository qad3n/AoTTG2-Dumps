using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000C4")]
[DebuggerTypeProxy(typeof(TypeBinaryExpressionProxy))]
public sealed class TypeBinaryExpression : Expression
{
	[Token(Token = "0x1700012E")]
	public sealed override Type Type
	{
		[Token(Token = "0x600056C")]
		[Address(RVA = "0x419B390", Offset = "0x419B390", VA = "0x419B390", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012F")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x600056D")]
		[Address(RVA = "0x419B3D0", Offset = "0x419B3D0", VA = "0x419B3D0", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000130")]
	public Expression Expression
	{
		[Token(Token = "0x600056E")]
		[Address(RVA = "0x419B3E0", Offset = "0x419B3E0", VA = "0x419B3E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000131")]
	public Type TypeOperand
	{
		[Token(Token = "0x600056F")]
		[Address(RVA = "0x419B3F0", Offset = "0x419B3F0", VA = "0x419B3F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x419B310", Offset = "0x419B310", VA = "0x419B310")]
	internal TypeBinaryExpression(Expression expression, Type typeOperand, ExpressionType nodeType)
	{
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x419B400", Offset = "0x419B400", VA = "0x419B400", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x4195F00", Offset = "0x4195F00", VA = "0x4195F00")]
	public TypeBinaryExpression Update(Expression expression)
	{
		return null;
	}
}
