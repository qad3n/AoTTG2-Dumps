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
		[Token(Token = "0x60003FF")]
		[Address(RVA = "0x44BB580", Offset = "0x44BB580", VA = "0x44BB580", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x1700008D")]
	public sealed override Type Type
	{
		[Token(Token = "0x6000400")]
		[Address(RVA = "0x44BB590", Offset = "0x44BB590", VA = "0x44BB590", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008E")]
	public Expression Object
	{
		[Token(Token = "0x6000401")]
		[Address(RVA = "0x44BB600", Offset = "0x44BB600", VA = "0x44BB600")]
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
		[Address(RVA = "0x44BB610", Offset = "0x44BB610", VA = "0x44BB610")]
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
		[Address(RVA = "0x44B9850", Offset = "0x44B9850", VA = "0x44B9850", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x44BB4E0", Offset = "0x44BB4E0", VA = "0x44BB4E0")]
	internal IndexExpression(Expression instance, PropertyInfo indexer, IReadOnlyList<Expression> arguments)
	{
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x44B98E0", Offset = "0x44B98E0", VA = "0x44B98E0", Slot = "10")]
	public Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x44BB620", Offset = "0x44BB620", VA = "0x44BB620", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x44BA9E0", Offset = "0x44BA9E0", VA = "0x44BA9E0")]
	internal Expression Rewrite(Expression instance, Expression[] arguments)
	{
		return null;
	}
}
