using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000C3")]
[DebuggerTypeProxy(typeof(TryExpressionProxy))]
public sealed class TryExpression : Expression
{
	[Token(Token = "0x17000128")]
	public sealed override Type Type
	{
		[Token(Token = "0x6000563")]
		[Address(RVA = "0x419B280", Offset = "0x419B280", VA = "0x419B280", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000129")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000564")]
		[Address(RVA = "0x419B290", Offset = "0x419B290", VA = "0x419B290", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x1700012A")]
	public Expression Body
	{
		[Token(Token = "0x6000565")]
		[Address(RVA = "0x419B2A0", Offset = "0x419B2A0", VA = "0x419B2A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012B")]
	public ReadOnlyCollection<CatchBlock> Handlers
	{
		[Token(Token = "0x6000566")]
		[Address(RVA = "0x419B2B0", Offset = "0x419B2B0", VA = "0x419B2B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012C")]
	public Expression Finally
	{
		[Token(Token = "0x6000567")]
		[Address(RVA = "0x419B2C0", Offset = "0x419B2C0", VA = "0x419B2C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012D")]
	public Expression Fault
	{
		[Token(Token = "0x6000568")]
		[Address(RVA = "0x419B2D0", Offset = "0x419B2D0", VA = "0x419B2D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x419B1C0", Offset = "0x419B1C0", VA = "0x419B1C0")]
	internal TryExpression(Type type, Expression body, Expression @finally, Expression fault, ReadOnlyCollection<CatchBlock> handlers)
	{
	}

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x419B2E0", Offset = "0x419B2E0", VA = "0x419B2E0", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x4195D70", Offset = "0x4195D70", VA = "0x4195D70")]
	public TryExpression Update(Expression body, IEnumerable<CatchBlock> handlers, Expression @finally, Expression fault)
	{
		return null;
	}
}
