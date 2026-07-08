using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000C5")]
[DebuggerTypeProxy(typeof(UnaryExpressionProxy))]
public sealed class UnaryExpression : Expression
{
	[Token(Token = "0x17000132")]
	public sealed override Type Type
	{
		[Token(Token = "0x6000573")]
		[Address(RVA = "0x419B4D0", Offset = "0x419B4D0", VA = "0x419B4D0", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000133")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000574")]
		[Address(RVA = "0x419B4E0", Offset = "0x419B4E0", VA = "0x419B4E0", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000134")]
	public Expression Operand
	{
		[Token(Token = "0x6000575")]
		[Address(RVA = "0x419B4F0", Offset = "0x419B4F0", VA = "0x419B4F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000135")]
	public MethodInfo Method
	{
		[Token(Token = "0x6000576")]
		[Address(RVA = "0x419B500", Offset = "0x419B500", VA = "0x419B500")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000136")]
	public bool IsLifted
	{
		[Token(Token = "0x6000577")]
		[Address(RVA = "0x419B510", Offset = "0x419B510", VA = "0x419B510")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000137")]
	public bool IsLiftedToNull
	{
		[Token(Token = "0x6000578")]
		[Address(RVA = "0x419B750", Offset = "0x419B750", VA = "0x419B750")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000138")]
	public override bool CanReduce
	{
		[Token(Token = "0x600057A")]
		[Address(RVA = "0x419B800", Offset = "0x419B800", VA = "0x419B800", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000139")]
	private bool IsPrefix
	{
		[Token(Token = "0x600057C")]
		[Address(RVA = "0x419C960", Offset = "0x419C960", VA = "0x419C960")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x419B430", Offset = "0x419B430", VA = "0x419B430")]
	internal UnaryExpression(ExpressionType nodeType, Expression expression, Type type, MethodInfo method)
	{
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x419B7D0", Offset = "0x419B7D0", VA = "0x419B7D0", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x600057B")]
	[Address(RVA = "0x419B820", Offset = "0x419B820", VA = "0x419B820", Slot = "7")]
	public override Expression Reduce()
	{
		return null;
	}

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x419C9A0", Offset = "0x419C9A0", VA = "0x419C9A0")]
	private UnaryExpression FunctionalOp(Expression operand)
	{
		return null;
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x419C650", Offset = "0x419C650", VA = "0x419C650")]
	private Expression ReduceVariable()
	{
		return null;
	}

	[Token(Token = "0x600057F")]
	[Address(RVA = "0x419C0C0", Offset = "0x419C0C0", VA = "0x419C0C0")]
	private Expression ReduceMember()
	{
		return null;
	}

	[Token(Token = "0x6000580")]
	[Address(RVA = "0x419B880", Offset = "0x419B880", VA = "0x419B880")]
	private Expression ReduceIndex()
	{
		return null;
	}

	[Token(Token = "0x6000581")]
	[Address(RVA = "0x4196060", Offset = "0x4196060", VA = "0x4196060")]
	public UnaryExpression Update(Expression operand)
	{
		return null;
	}
}
