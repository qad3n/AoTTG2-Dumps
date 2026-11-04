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
		[Token(Token = "0x60003FE")]
		[Address(RVA = "0x243A0C0", Offset = "0x24386C0", VA = "0x18243A0C0", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x1700008D")]
	public sealed override Type Type
	{
		[Token(Token = "0x60003FF")]
		[Address(RVA = "0x243A0D0", Offset = "0x24386D0", VA = "0x18243A0D0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008E")]
	public Expression Object
	{
		[Token(Token = "0x6000400")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008F")]
	public PropertyInfo Indexer
	{
		[Token(Token = "0x6000401")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000090")]
	public int ArgumentCount
	{
		[Token(Token = "0x6000403")]
		[Address(RVA = "0x243A070", Offset = "0x2438670", VA = "0x18243A070", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x2439FD0", Offset = "0x24385D0", VA = "0x182439FD0")]
	internal IndexExpression(Expression instance, PropertyInfo indexer, IReadOnlyList<Expression> arguments)
	{
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x2439F00", Offset = "0x2438500", VA = "0x182439F00", Slot = "10")]
	public Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x2439ED0", Offset = "0x24384D0", VA = "0x182439ED0", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x2439F60", Offset = "0x2438560", VA = "0x182439F60")]
	internal Expression Rewrite(Expression instance, Expression[] arguments)
	{
		return null;
	}
}
