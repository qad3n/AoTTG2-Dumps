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

[Token(Token = "0x2000068")]
[DebuggerTypeProxy(typeof(BlockExpressionProxy))]
public class BlockExpression : Expression
{
	[Token(Token = "0x1700005C")]
	public ReadOnlyCollection<Expression> Expressions
	{
		[Token(Token = "0x60002BC")]
		[Address(RVA = "0x5DC3FA0", Offset = "0x5DC2FA0", VA = "0x5DC3FA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005D")]
	public ReadOnlyCollection<ParameterExpression> Variables
	{
		[Token(Token = "0x60002BD")]
		[Address(RVA = "0x5DC3FC0", Offset = "0x5DC2FC0", VA = "0x5DC3FC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005E")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x60002C0")]
		[Address(RVA = "0x5DC4080", Offset = "0x5DC3080", VA = "0x5DC4080", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x1700005F")]
	public override Type Type
	{
		[Token(Token = "0x60002C1")]
		[Address(RVA = "0x5DC4090", Offset = "0x5DC3090", VA = "0x5DC4090", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000060")]
	[ExcludeFromCodeCoverage]
	internal virtual int ExpressionCount
	{
		[Token(Token = "0x60002C3")]
		[Address(RVA = "0x5DC4110", Offset = "0x5DC3110", VA = "0x5DC4110", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x5DC3FE0", Offset = "0x5DC2FE0", VA = "0x5DC3FE0")]
	internal BlockExpression()
	{
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x5DC4050", Offset = "0x5DC3050", VA = "0x5DC4050", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x5DC40E0", Offset = "0x5DC30E0", VA = "0x5DC40E0", Slot = "10")]
	[ExcludeFromCodeCoverage]
	internal virtual Expression GetExpression(int index)
	{
		return null;
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x5DC4140", Offset = "0x5DC3140", VA = "0x5DC4140", Slot = "12")]
	[ExcludeFromCodeCoverage]
	internal virtual ReadOnlyCollection<Expression> GetOrMakeExpressions()
	{
		return null;
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x5DC4170", Offset = "0x5DC3170", VA = "0x5DC4170", Slot = "13")]
	internal virtual ReadOnlyCollection<ParameterExpression> GetOrMakeVariables()
	{
		return null;
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x5DC41E0", Offset = "0x5DC31E0", VA = "0x5DC41E0", Slot = "14")]
	[ExcludeFromCodeCoverage]
	internal virtual BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x5DC4210", Offset = "0x5DC3210", VA = "0x5DC4210")]
	internal static ReadOnlyCollection<Expression> ReturnReadOnlyExpressions(BlockExpression provider, ref object collection)
	{
		return null;
	}
}
