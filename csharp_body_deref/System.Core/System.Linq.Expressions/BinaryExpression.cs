using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000044")]
[DebuggerTypeProxy(typeof(BinaryExpressionProxy))]
public class BinaryExpression : Expression
{
	[Token(Token = "0x17000046")]
	public override bool CanReduce
	{
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x416DC50", Offset = "0x416DC50", VA = "0x416DC50", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000047")]
	public Expression Right
	{
		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x416DC80", Offset = "0x416DC80", VA = "0x416DC80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000048")]
	public Expression Left
	{
		[Token(Token = "0x60001B9")]
		[Address(RVA = "0x416DC90", Offset = "0x416DC90", VA = "0x416DC90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000049")]
	public MethodInfo Method
	{
		[Token(Token = "0x60001BA")]
		[Address(RVA = "0x416DCA0", Offset = "0x416DCA0", VA = "0x416DCA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004A")]
	public LambdaExpression Conversion
	{
		[Token(Token = "0x60001C2")]
		[Address(RVA = "0x416DE60", Offset = "0x416DE60", VA = "0x416DE60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004B")]
	public bool IsLifted
	{
		[Token(Token = "0x60001C4")]
		[Address(RVA = "0x41703B0", Offset = "0x41703B0", VA = "0x41703B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004C")]
	public bool IsLiftedToNull
	{
		[Token(Token = "0x60001C5")]
		[Address(RVA = "0x416E310", Offset = "0x416E310", VA = "0x416E310")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004D")]
	internal bool IsLiftedLogical
	{
		[Token(Token = "0x60001C7")]
		[Address(RVA = "0x4170570", Offset = "0x4170570", VA = "0x4170570")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004E")]
	internal bool IsReferenceComparison
	{
		[Token(Token = "0x60001C8")]
		[Address(RVA = "0x416DE80", Offset = "0x416DE80", VA = "0x416DE80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x416DBC0", Offset = "0x416DBC0", VA = "0x416DBC0")]
	internal BinaryExpression(Expression left, Expression right)
	{
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x416DC70", Offset = "0x416DC70", VA = "0x416DC70")]
	private static bool IsOpAssignment(ExpressionType op)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x416DCC0", Offset = "0x416DCC0", VA = "0x416DCC0", Slot = "10")]
	internal virtual MethodInfo GetMethod()
	{
		return null;
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x416DCD0", Offset = "0x416DCD0", VA = "0x416DCD0")]
	public BinaryExpression Update(Expression left, LambdaExpression conversion, Expression right)
	{
		return null;
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x416EC60", Offset = "0x416EC60", VA = "0x416EC60", Slot = "7")]
	public override Expression Reduce()
	{
		return null;
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x416FB00", Offset = "0x416FB00", VA = "0x416FB00")]
	private static ExpressionType GetBinaryOpFromAssignmentOp(ExpressionType op)
	{
		return default(ExpressionType);
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x416F970", Offset = "0x416F970", VA = "0x416F970")]
	private Expression ReduceVariable()
	{
		return null;
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x416ECC0", Offset = "0x416ECC0", VA = "0x416ECC0")]
	private Expression ReduceMember()
	{
		return null;
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x416F2E0", Offset = "0x416F2E0", VA = "0x416F2E0")]
	private Expression ReduceIndex()
	{
		return null;
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x41703A0", Offset = "0x41703A0", VA = "0x41703A0", Slot = "11")]
	internal virtual LambdaExpression GetConversion()
	{
		return null;
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x4170540", Offset = "0x4170540", VA = "0x4170540", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x41706D0", Offset = "0x41706D0", VA = "0x41706D0")]
	internal Expression ReduceUserdefinedLifted()
	{
		return null;
	}
}
