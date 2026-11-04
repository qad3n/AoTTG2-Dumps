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
		[Token(Token = "0x60002B1")]
		[Address(RVA = "0x24293C0", Offset = "0x24279C0", VA = "0x1824293C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005B")]
	public ReadOnlyCollection<ParameterExpression> Variables
	{
		[Token(Token = "0x60002B2")]
		[Address(RVA = "0x1AC4700", Offset = "0x1AC2D00", VA = "0x181AC4700")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005C")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x60002B5")]
		[Address(RVA = "0x232BB30", Offset = "0x232A130", VA = "0x18232BB30", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x1700005D")]
	public override Type Type
	{
		[Token(Token = "0x60002B6")]
		[Address(RVA = "0x24293E0", Offset = "0x24279E0", VA = "0x1824293E0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005E")]
	[ExcludeFromCodeCoverage]
	internal virtual int ExpressionCount
	{
		[Token(Token = "0x60002B8")]
		[Address(RVA = "0x2429390", Offset = "0x2427990", VA = "0x182429390", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x2429340", Offset = "0x2427940", VA = "0x182429340")]
	internal BlockExpression()
	{
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x24290D0", Offset = "0x24276D0", VA = "0x1824290D0", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x2429100", Offset = "0x2427700", VA = "0x182429100", Slot = "10")]
	[ExcludeFromCodeCoverage]
	internal virtual Expression GetExpression(int index)
	{
		return null;
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x2429130", Offset = "0x2427730", VA = "0x182429130", Slot = "12")]
	[ExcludeFromCodeCoverage]
	internal virtual ReadOnlyCollection<Expression> GetOrMakeExpressions()
	{
		return null;
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x2429160", Offset = "0x2427760", VA = "0x182429160", Slot = "13")]
	internal virtual ReadOnlyCollection<ParameterExpression> GetOrMakeVariables()
	{
		return null;
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x2429310", Offset = "0x2427910", VA = "0x182429310", Slot = "14")]
	[ExcludeFromCodeCoverage]
	internal virtual BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x24291B0", Offset = "0x24277B0", VA = "0x1824291B0")]
	internal static ReadOnlyCollection<Expression> ReturnReadOnlyExpressions(BlockExpression provider, ref object collection)
	{
		return null;
	}
}
