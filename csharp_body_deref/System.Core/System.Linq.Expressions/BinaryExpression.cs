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
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x2408790", Offset = "0x2406D90", VA = "0x182408790", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000047")]
	public Expression Right
	{
		[Token(Token = "0x60001B7")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000048")]
	public Expression Left
	{
		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000049")]
	public MethodInfo Method
	{
		[Token(Token = "0x60001B9")]
		[Address(RVA = "0x209B220", Offset = "0x2099820", VA = "0x18209B220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004A")]
	public LambdaExpression Conversion
	{
		[Token(Token = "0x60001C1")]
		[Address(RVA = "0x1A4B640", Offset = "0x1A49C40", VA = "0x181A4B640")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004B")]
	public bool IsLifted
	{
		[Token(Token = "0x60001C3")]
		[Address(RVA = "0x2408B40", Offset = "0x2407140", VA = "0x182408B40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004C")]
	public bool IsLiftedToNull
	{
		[Token(Token = "0x60001C4")]
		[Address(RVA = "0x2408940", Offset = "0x2406F40", VA = "0x182408940")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004D")]
	internal bool IsLiftedLogical
	{
		[Token(Token = "0x60001C6")]
		[Address(RVA = "0x24087C0", Offset = "0x2406DC0", VA = "0x1824087C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004E")]
	internal bool IsReferenceComparison
	{
		[Token(Token = "0x60001C7")]
		[Address(RVA = "0x2408CF0", Offset = "0x24072F0", VA = "0x182408CF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x2408700", Offset = "0x2406D00", VA = "0x182408700")]
	internal BinaryExpression(Expression left, Expression right)
	{
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x2406970", Offset = "0x2404F70", VA = "0x182406970")]
	private static bool IsOpAssignment(ExpressionType op)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "10")]
	internal virtual MethodInfo GetMethod()
	{
		return null;
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x2408240", Offset = "0x2406840", VA = "0x182408240")]
	public BinaryExpression Update(Expression left, LambdaExpression conversion, Expression right)
	{
		return null;
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x24081C0", Offset = "0x24067C0", VA = "0x1824081C0", Slot = "7")]
	public override Expression Reduce()
	{
		return null;
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x2406850", Offset = "0x2404E50", VA = "0x182406850")]
	private static ExpressionType GetBinaryOpFromAssignmentOp(ExpressionType op)
	{
		return default(ExpressionType);
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x2408070", Offset = "0x2406670", VA = "0x182408070")]
	private Expression ReduceVariable()
	{
		return null;
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x24070B0", Offset = "0x24056B0", VA = "0x1824070B0")]
	private Expression ReduceMember()
	{
		return null;
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x2406980", Offset = "0x2404F80", VA = "0x182406980")]
	private Expression ReduceIndex()
	{
		return null;
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "11")]
	internal virtual LambdaExpression GetConversion()
	{
		return null;
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x2406820", Offset = "0x2404E20", VA = "0x182406820", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x24075F0", Offset = "0x2405BF0", VA = "0x1824075F0")]
	internal Expression ReduceUserdefinedLifted()
	{
		return null;
	}
}
