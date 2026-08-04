// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.BinaryExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4492D50", Offset = "0x4492D50", VA = "0x4492D50", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000047")]
	public Expression Right
	{
		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x4492D80", Offset = "0x4492D80", VA = "0x4492D80")]
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
		[Address(RVA = "0x4492D90", Offset = "0x4492D90", VA = "0x4492D90")]
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
		[Address(RVA = "0x4492DA0", Offset = "0x4492DA0", VA = "0x4492DA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004A")]
	public LambdaExpression Conversion
	{
		[Token(Token = "0x60001C2")]
		[Address(RVA = "0x4492F60", Offset = "0x4492F60", VA = "0x4492F60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004B")]
	public bool IsLifted
	{
		[Token(Token = "0x60001C4")]
		[Address(RVA = "0x44954B0", Offset = "0x44954B0", VA = "0x44954B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004C")]
	public bool IsLiftedToNull
	{
		[Token(Token = "0x60001C5")]
		[Address(RVA = "0x4493410", Offset = "0x4493410", VA = "0x4493410")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004D")]
	internal bool IsLiftedLogical
	{
		[Token(Token = "0x60001C7")]
		[Address(RVA = "0x4495670", Offset = "0x4495670", VA = "0x4495670")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004E")]
	internal bool IsReferenceComparison
	{
		[Token(Token = "0x60001C8")]
		[Address(RVA = "0x4492F80", Offset = "0x4492F80", VA = "0x4492F80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x4492CC0", Offset = "0x4492CC0", VA = "0x4492CC0")]
	internal BinaryExpression(Expression left, Expression right)
	{
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x4492D70", Offset = "0x4492D70", VA = "0x4492D70")]
	private static bool IsOpAssignment(ExpressionType op)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x4492DC0", Offset = "0x4492DC0", VA = "0x4492DC0", Slot = "10")]
	internal virtual MethodInfo GetMethod()
	{
		return null;
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x4492DD0", Offset = "0x4492DD0", VA = "0x4492DD0")]
	public BinaryExpression Update(Expression left, LambdaExpression conversion, Expression right)
	{
		return null;
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x4493D60", Offset = "0x4493D60", VA = "0x4493D60", Slot = "7")]
	public override Expression Reduce()
	{
		return null;
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x4494C00", Offset = "0x4494C00", VA = "0x4494C00")]
	private static ExpressionType GetBinaryOpFromAssignmentOp(ExpressionType op)
	{
		return default(ExpressionType);
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x4494A70", Offset = "0x4494A70", VA = "0x4494A70")]
	private Expression ReduceVariable()
	{
		return null;
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x4493DC0", Offset = "0x4493DC0", VA = "0x4493DC0")]
	private Expression ReduceMember()
	{
		return null;
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x44943E0", Offset = "0x44943E0", VA = "0x44943E0")]
	private Expression ReduceIndex()
	{
		return null;
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x44954A0", Offset = "0x44954A0", VA = "0x44954A0", Slot = "11")]
	internal virtual LambdaExpression GetConversion()
	{
		return null;
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x4495640", Offset = "0x4495640", VA = "0x4495640", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x44957D0", Offset = "0x44957D0", VA = "0x44957D0")]
	internal Expression ReduceUserdefinedLifted()
	{
		return null;
	}
}
