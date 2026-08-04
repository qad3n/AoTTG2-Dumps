// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.BlockExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000067")]
[DebuggerTypeProxy(typeof(BlockExpressionProxy))]
public class BlockExpression : Expression
{
	[Token(Token = "0x1700005A")]
	public ReadOnlyCollection<Expression> Expressions
	{
		[Token(Token = "0x60002B2")]
		[Address(RVA = "0x44ADE90", Offset = "0x44ADE90", VA = "0x44ADE90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005B")]
	public ReadOnlyCollection<ParameterExpression> Variables
	{
		[Token(Token = "0x60002B3")]
		[Address(RVA = "0x44ADEB0", Offset = "0x44ADEB0", VA = "0x44ADEB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005C")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x60002B6")]
		[Address(RVA = "0x44ADF70", Offset = "0x44ADF70", VA = "0x44ADF70", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x1700005D")]
	public override Type Type
	{
		[Token(Token = "0x60002B7")]
		[Address(RVA = "0x44ADF80", Offset = "0x44ADF80", VA = "0x44ADF80", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005E")]
	[ExcludeFromCodeCoverage]
	internal virtual int ExpressionCount
	{
		[Token(Token = "0x60002B9")]
		[Address(RVA = "0x44AE000", Offset = "0x44AE000", VA = "0x44AE000", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x44ADED0", Offset = "0x44ADED0", VA = "0x44ADED0")]
	internal BlockExpression()
	{
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x44ADF40", Offset = "0x44ADF40", VA = "0x44ADF40", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x44ADFD0", Offset = "0x44ADFD0", VA = "0x44ADFD0", Slot = "10")]
	[ExcludeFromCodeCoverage]
	internal virtual Expression GetExpression(int index)
	{
		return null;
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x44AE030", Offset = "0x44AE030", VA = "0x44AE030", Slot = "12")]
	[ExcludeFromCodeCoverage]
	internal virtual ReadOnlyCollection<Expression> GetOrMakeExpressions()
	{
		return null;
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x44AE060", Offset = "0x44AE060", VA = "0x44AE060", Slot = "13")]
	internal virtual ReadOnlyCollection<ParameterExpression> GetOrMakeVariables()
	{
		return null;
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x44AE0D0", Offset = "0x44AE0D0", VA = "0x44AE0D0", Slot = "14")]
	[ExcludeFromCodeCoverage]
	internal virtual BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x44AE100", Offset = "0x44AE100", VA = "0x44AE100")]
	internal static ReadOnlyCollection<Expression> ReturnReadOnlyExpressions(BlockExpression provider, ref object collection)
	{
		return null;
	}
}
