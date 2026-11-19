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

[Token(Token = "0x20000C6")]
[DebuggerTypeProxy(typeof(UnaryExpressionProxy))]
public sealed class UnaryExpression : Expression
{
	[Token(Token = "0x17000134")]
	public sealed override Type Type
	{
		[Token(Token = "0x600057D")]
		[Address(RVA = "0x5DD6390", Offset = "0x5DD5390", VA = "0x5DD6390", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000135")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x600057E")]
		[Address(RVA = "0x5DD63A0", Offset = "0x5DD53A0", VA = "0x5DD63A0", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000136")]
	public Expression Operand
	{
		[Token(Token = "0x600057F")]
		[Address(RVA = "0x5DD63B0", Offset = "0x5DD53B0", VA = "0x5DD63B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000137")]
	public MethodInfo Method
	{
		[Token(Token = "0x6000580")]
		[Address(RVA = "0x5DD63C0", Offset = "0x5DD53C0", VA = "0x5DD63C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000138")]
	public bool IsLifted
	{
		[Token(Token = "0x6000581")]
		[Address(RVA = "0x5DD63D0", Offset = "0x5DD53D0", VA = "0x5DD63D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000139")]
	public bool IsLiftedToNull
	{
		[Token(Token = "0x6000582")]
		[Address(RVA = "0x5DD6600", Offset = "0x5DD5600", VA = "0x5DD6600")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013A")]
	public override bool CanReduce
	{
		[Token(Token = "0x6000584")]
		[Address(RVA = "0x5DD66B0", Offset = "0x5DD56B0", VA = "0x5DD66B0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013B")]
	private bool IsPrefix
	{
		[Token(Token = "0x6000586")]
		[Address(RVA = "0x5DD7830", Offset = "0x5DD6830", VA = "0x5DD7830")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600057C")]
	[Address(RVA = "0x5DD62F0", Offset = "0x5DD52F0", VA = "0x5DD62F0")]
	internal UnaryExpression(ExpressionType nodeType, Expression expression, Type type, MethodInfo method)
	{
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x5DD6680", Offset = "0x5DD5680", VA = "0x5DD6680", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x5DD66D0", Offset = "0x5DD56D0", VA = "0x5DD66D0", Slot = "7")]
	public override Expression Reduce()
	{
		return null;
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x5DD7870", Offset = "0x5DD6870", VA = "0x5DD7870")]
	private UnaryExpression FunctionalOp(Expression operand)
	{
		return null;
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x5DD7510", Offset = "0x5DD6510", VA = "0x5DD7510")]
	private Expression ReduceVariable()
	{
		return null;
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x5DD6F70", Offset = "0x5DD5F70", VA = "0x5DD6F70")]
	private Expression ReduceMember()
	{
		return null;
	}

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x5DD6730", Offset = "0x5DD5730", VA = "0x5DD6730")]
	private Expression ReduceIndex()
	{
		return null;
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x5DD0FD0", Offset = "0x5DCFFD0", VA = "0x5DD0FD0")]
	public UnaryExpression Update(Expression operand)
	{
		return null;
	}
}
