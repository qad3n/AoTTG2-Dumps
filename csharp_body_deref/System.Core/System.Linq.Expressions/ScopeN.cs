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

[Token(Token = "0x200006F")]
internal class ScopeN : ScopeExpression
{
	[Token(Token = "0x4000106")]
	[FieldOffset(Offset = "0x18")]
	private IReadOnlyList<Expression> _body;

	[Token(Token = "0x17000066")]
	protected IReadOnlyList<Expression> Body
	{
		[Token(Token = "0x60002E1")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000067")]
	internal override int ExpressionCount
	{
		[Token(Token = "0x60002E3")]
		[Address(RVA = "0x243EEA0", Offset = "0x243D4A0", VA = "0x18243EEA0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x2428330", Offset = "0x2426930", VA = "0x182428330")]
	internal ScopeN(IReadOnlyList<ParameterExpression> variables, IReadOnlyList<Expression> body)
	{
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x243ECB0", Offset = "0x243D2B0", VA = "0x18243ECB0", Slot = "10")]
	internal override Expression GetExpression(int index)
	{
		return null;
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x243ED10", Offset = "0x243D310", VA = "0x18243ED10", Slot = "12")]
	internal override ReadOnlyCollection<Expression> GetOrMakeExpressions()
	{
		return null;
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x243ED50", Offset = "0x243D350", VA = "0x18243ED50", Slot = "14")]
	internal override BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}
}
