// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.ScopeN
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000070")]
internal class ScopeN : ScopeExpression
{
	[Token(Token = "0x400010F")]
	[FieldOffset(Offset = "0x18")]
	private IReadOnlyList<Expression> _body;

	[Token(Token = "0x17000068")]
	protected IReadOnlyList<Expression> Body
	{
		[Token(Token = "0x60002EC")]
		[Address(RVA = "0x5DC5410", Offset = "0x5DC4410", VA = "0x5DC5410")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000069")]
	internal override int ExpressionCount
	{
		[Token(Token = "0x60002EE")]
		[Address(RVA = "0x5DC54D0", Offset = "0x5DC44D0", VA = "0x5DC54D0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x5DC5390", Offset = "0x5DC4390", VA = "0x5DC5390")]
	internal ScopeN(IReadOnlyList<ParameterExpression> variables, IReadOnlyList<Expression> body)
	{
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x5DC5420", Offset = "0x5DC4420", VA = "0x5DC5420", Slot = "10")]
	internal override Expression GetExpression(int index)
	{
		return null;
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x5DC5560", Offset = "0x5DC4560", VA = "0x5DC5560", Slot = "12")]
	internal override ReadOnlyCollection<Expression> GetOrMakeExpressions()
	{
		return null;
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x5DC55A0", Offset = "0x5DC45A0", VA = "0x5DC55A0", Slot = "14")]
	internal override BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}
}
