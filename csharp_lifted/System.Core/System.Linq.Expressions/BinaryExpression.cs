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

[Token(Token = "0x2000045")]
[DebuggerTypeProxy(typeof(BinaryExpressionProxy))]
public class BinaryExpression : Expression
{
	[Token(Token = "0x17000048")]
	public override bool CanReduce
	{
		[Token(Token = "0x60001C0")]
		[Address(RVA = "0x5DA9220", Offset = "0x5DA8220", VA = "0x5DA9220", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000049")]
	public Expression Right
	{
		[Token(Token = "0x60001C2")]
		[Address(RVA = "0x5DA9250", Offset = "0x5DA8250", VA = "0x5DA9250")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004A")]
	public Expression Left
	{
		[Token(Token = "0x60001C3")]
		[Address(RVA = "0x5DA9260", Offset = "0x5DA8260", VA = "0x5DA9260")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004B")]
	public MethodInfo Method
	{
		[Token(Token = "0x60001C4")]
		[Address(RVA = "0x5DA9270", Offset = "0x5DA8270", VA = "0x5DA9270")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004C")]
	public LambdaExpression Conversion
	{
		[Token(Token = "0x60001CC")]
		[Address(RVA = "0x5DA9450", Offset = "0x5DA8450", VA = "0x5DA9450")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004D")]
	public bool IsLifted
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x5DAB990", Offset = "0x5DAA990", VA = "0x5DAB990")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004E")]
	public bool IsLiftedToNull
	{
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x5DA98E0", Offset = "0x5DA88E0", VA = "0x5DA98E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004F")]
	internal bool IsLiftedLogical
	{
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x5DABB50", Offset = "0x5DAAB50", VA = "0x5DABB50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000050")]
	internal bool IsReferenceComparison
	{
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x5DA9470", Offset = "0x5DA8470", VA = "0x5DA9470")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x5DA9190", Offset = "0x5DA8190", VA = "0x5DA9190")]
	internal BinaryExpression(Expression left, Expression right)
	{
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x5DA9240", Offset = "0x5DA8240", VA = "0x5DA9240")]
	private static bool IsOpAssignment(ExpressionType op)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x5DA9290", Offset = "0x5DA8290", VA = "0x5DA9290", Slot = "10")]
	internal virtual MethodInfo GetMethod()
	{
		return null;
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x5DA92A0", Offset = "0x5DA82A0", VA = "0x5DA92A0")]
	public BinaryExpression Update(Expression left, LambdaExpression conversion, Expression right)
	{
		return null;
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x5DAA230", Offset = "0x5DA9230", VA = "0x5DAA230", Slot = "7")]
	public override Expression Reduce()
	{
		return null;
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x5DAB0D0", Offset = "0x5DAA0D0", VA = "0x5DAB0D0")]
	private static ExpressionType GetBinaryOpFromAssignmentOp(ExpressionType op)
	{
		return default(ExpressionType);
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x5DAAF40", Offset = "0x5DA9F40", VA = "0x5DAAF40")]
	private Expression ReduceVariable()
	{
		return null;
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x5DAA290", Offset = "0x5DA9290", VA = "0x5DAA290")]
	private Expression ReduceMember()
	{
		return null;
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x5DAA8B0", Offset = "0x5DA98B0", VA = "0x5DAA8B0")]
	private Expression ReduceIndex()
	{
		return null;
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x5DAB980", Offset = "0x5DAA980", VA = "0x5DAB980", Slot = "11")]
	internal virtual LambdaExpression GetConversion()
	{
		return null;
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x5DABB20", Offset = "0x5DAAB20", VA = "0x5DABB20", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x5DABCB0", Offset = "0x5DAACB0", VA = "0x5DABCB0")]
	internal Expression ReduceUserdefinedLifted()
	{
		return null;
	}
}
