// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.BlockN
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200006C")]
internal class BlockN : BlockExpression
{
	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0x10")]
	private IReadOnlyList<Expression> _expressions;

	[Token(Token = "0x17000063")]
	internal override int ExpressionCount
	{
		[Token(Token = "0x60002D4")]
		[Address(RVA = "0x44AEC80", Offset = "0x44AEC80", VA = "0x44AEC80", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x44AEB60", Offset = "0x44AEB60", VA = "0x44AEB60")]
	internal BlockN(IReadOnlyList<Expression> expressions)
	{
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x44AEBD0", Offset = "0x44AEBD0", VA = "0x44AEBD0", Slot = "10")]
	internal override Expression GetExpression(int index)
	{
		return null;
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x44AED10", Offset = "0x44AED10", VA = "0x44AED10", Slot = "12")]
	internal override ReadOnlyCollection<Expression> GetOrMakeExpressions()
	{
		return null;
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x44AED50", Offset = "0x44AED50", VA = "0x44AED50", Slot = "14")]
	internal override BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}
}
