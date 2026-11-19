// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.IndexExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000088")]
[DebuggerTypeProxy(typeof(IndexExpressionProxy))]
public sealed class IndexExpression : Expression, IArgumentProvider
{
	[Token(Token = "0x400018B")]
	[FieldOffset(Offset = "0x10")]
	private IReadOnlyList<Expression> _arguments;

	[Token(Token = "0x1700008E")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000409")]
		[Address(RVA = "0x5DD13F0", Offset = "0x5DD03F0", VA = "0x5DD13F0", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x1700008F")]
	public sealed override Type Type
	{
		[Token(Token = "0x600040A")]
		[Address(RVA = "0x5DD1400", Offset = "0x5DD0400", VA = "0x5DD1400", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000090")]
	public Expression Object
	{
		[Token(Token = "0x600040B")]
		[Address(RVA = "0x5DD1470", Offset = "0x5DD0470", VA = "0x5DD1470")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000091")]
	public PropertyInfo Indexer
	{
		[Token(Token = "0x600040C")]
		[Address(RVA = "0x5DD1480", Offset = "0x5DD0480", VA = "0x5DD1480")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000092")]
	public int ArgumentCount
	{
		[Token(Token = "0x600040E")]
		[Address(RVA = "0x5DCF710", Offset = "0x5DCE710", VA = "0x5DCF710", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x5DD1350", Offset = "0x5DD0350", VA = "0x5DD1350")]
	internal IndexExpression(Expression instance, PropertyInfo indexer, IReadOnlyList<Expression> arguments)
	{
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x5DCF7A0", Offset = "0x5DCE7A0", VA = "0x5DCF7A0", Slot = "10")]
	public Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x5DD1490", Offset = "0x5DD0490", VA = "0x5DD1490", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x5DD0890", Offset = "0x5DCF890", VA = "0x5DD0890")]
	internal Expression Rewrite(Expression instance, Expression[] arguments)
	{
		return null;
	}
}
