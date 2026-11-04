// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.UnaryExpression
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

[Token(Token = "0x20000C5")]
[DebuggerTypeProxy(typeof(UnaryExpressionProxy))]
public sealed class UnaryExpression : Expression
{
	[Token(Token = "0x17000132")]
	public sealed override Type Type
	{
		[Token(Token = "0x6000572")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000133")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000573")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000134")]
	public Expression Operand
	{
		[Token(Token = "0x6000574")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000135")]
	public MethodInfo Method
	{
		[Token(Token = "0x6000575")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000136")]
	public bool IsLifted
	{
		[Token(Token = "0x6000576")]
		[Address(RVA = "0x2443120", Offset = "0x2441720", VA = "0x182443120")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000137")]
	public bool IsLiftedToNull
	{
		[Token(Token = "0x6000577")]
		[Address(RVA = "0x24430A0", Offset = "0x24416A0", VA = "0x1824430A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000138")]
	public override bool CanReduce
	{
		[Token(Token = "0x6000579")]
		[Address(RVA = "0x2443070", Offset = "0x2441670", VA = "0x182443070", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000139")]
	private bool IsPrefix
	{
		[Token(Token = "0x600057B")]
		[Address(RVA = "0x2443370", Offset = "0x2441970", VA = "0x182443370")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x2442FE0", Offset = "0x24415E0", VA = "0x182442FE0")]
	internal UnaryExpression(ExpressionType nodeType, Expression expression, Type type, MethodInfo method)
	{
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x2441C40", Offset = "0x2440240", VA = "0x182441C40", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x600057A")]
	[Address(RVA = "0x2442EA0", Offset = "0x24414A0", VA = "0x182442EA0", Slot = "7")]
	public override Expression Reduce()
	{
		return null;
	}

	[Token(Token = "0x600057C")]
	[Address(RVA = "0x2441C70", Offset = "0x2440270", VA = "0x182441C70")]
	private UnaryExpression FunctionalOp(Expression operand)
	{
		return null;
	}

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x2442B50", Offset = "0x2441150", VA = "0x182442B50")]
	private Expression ReduceVariable()
	{
		return null;
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x2442540", Offset = "0x2440B40", VA = "0x182442540")]
	private Expression ReduceMember()
	{
		return null;
	}

	[Token(Token = "0x600057F")]
	[Address(RVA = "0x2441DB0", Offset = "0x24403B0", VA = "0x182441DB0")]
	private Expression ReduceIndex()
	{
		return null;
	}

	[Token(Token = "0x6000580")]
	[Address(RVA = "0x2442F20", Offset = "0x2441520", VA = "0x182442F20")]
	public UnaryExpression Update(Expression operand)
	{
		return null;
	}
}
