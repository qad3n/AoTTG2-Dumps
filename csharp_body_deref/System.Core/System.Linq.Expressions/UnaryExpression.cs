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
		[Token(Token = "0x6000573")]
		[Address(RVA = "0x44C05D0", Offset = "0x44C05D0", VA = "0x44C05D0", Slot = "5")]
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
		[Address(RVA = "0x44C05E0", Offset = "0x44C05E0", VA = "0x44C05E0", Slot = "4")]
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
		[Address(RVA = "0x44C05F0", Offset = "0x44C05F0", VA = "0x44C05F0")]
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
		[Address(RVA = "0x44C0600", Offset = "0x44C0600", VA = "0x44C0600")]
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
		[Address(RVA = "0x44C0610", Offset = "0x44C0610", VA = "0x44C0610")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000137")]
	public bool IsLiftedToNull
	{
		[Token(Token = "0x6000578")]
		[Address(RVA = "0x44C0850", Offset = "0x44C0850", VA = "0x44C0850")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000138")]
	public override bool CanReduce
	{
		[Token(Token = "0x600057A")]
		[Address(RVA = "0x44C0900", Offset = "0x44C0900", VA = "0x44C0900", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000139")]
	private bool IsPrefix
	{
		[Token(Token = "0x600057C")]
		[Address(RVA = "0x44C1A60", Offset = "0x44C1A60", VA = "0x44C1A60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x44C0530", Offset = "0x44C0530", VA = "0x44C0530")]
	internal UnaryExpression(ExpressionType nodeType, Expression expression, Type type, MethodInfo method)
	{
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x44C08D0", Offset = "0x44C08D0", VA = "0x44C08D0", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x600057B")]
	[Address(RVA = "0x44C0920", Offset = "0x44C0920", VA = "0x44C0920", Slot = "7")]
	public override Expression Reduce()
	{
		return null;
	}

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x44C1AA0", Offset = "0x44C1AA0", VA = "0x44C1AA0")]
	private UnaryExpression FunctionalOp(Expression operand)
	{
		return null;
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x44C1750", Offset = "0x44C1750", VA = "0x44C1750")]
	private Expression ReduceVariable()
	{
		return null;
	}

	[Token(Token = "0x600057F")]
	[Address(RVA = "0x44C11C0", Offset = "0x44C11C0", VA = "0x44C11C0")]
	private Expression ReduceMember()
	{
		return null;
	}

	[Token(Token = "0x6000580")]
	[Address(RVA = "0x44C0980", Offset = "0x44C0980", VA = "0x44C0980")]
	private Expression ReduceIndex()
	{
		return null;
	}

	[Token(Token = "0x6000581")]
	[Address(RVA = "0x44BB160", Offset = "0x44BB160", VA = "0x44BB160")]
	public UnaryExpression Update(Expression operand)
	{
		return null;
	}
}
