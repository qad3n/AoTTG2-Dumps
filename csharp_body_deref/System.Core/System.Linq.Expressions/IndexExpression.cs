using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000087")]
[DebuggerTypeProxy(typeof(IndexExpressionProxy))]
public sealed class IndexExpression : Expression, IArgumentProvider
{
	[Token(Token = "0x4000182")]
	[FieldOffset(Offset = "0x10")]
	private IReadOnlyList<Expression> _arguments;

	[Token(Token = "0x1700008C")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x60003FF")]
		[Address(RVA = "0x4196480", Offset = "0x4196480", VA = "0x4196480", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x1700008D")]
	public sealed override Type Type
	{
		[Token(Token = "0x6000400")]
		[Address(RVA = "0x4196490", Offset = "0x4196490", VA = "0x4196490", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008E")]
	public Expression Object
	{
		[Token(Token = "0x6000401")]
		[Address(RVA = "0x4196500", Offset = "0x4196500", VA = "0x4196500")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008F")]
	public PropertyInfo Indexer
	{
		[Token(Token = "0x6000402")]
		[Address(RVA = "0x4196510", Offset = "0x4196510", VA = "0x4196510")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000090")]
	public int ArgumentCount
	{
		[Token(Token = "0x6000404")]
		[Address(RVA = "0x4194750", Offset = "0x4194750", VA = "0x4194750", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x41963E0", Offset = "0x41963E0", VA = "0x41963E0")]
	internal IndexExpression(Expression instance, PropertyInfo indexer, IReadOnlyList<Expression> arguments)
	{
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x41947E0", Offset = "0x41947E0", VA = "0x41947E0", Slot = "10")]
	public Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x4196520", Offset = "0x4196520", VA = "0x4196520", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x41958E0", Offset = "0x41958E0", VA = "0x41958E0")]
	internal Expression Rewrite(Expression instance, Expression[] arguments)
	{
		return null;
	}
}
