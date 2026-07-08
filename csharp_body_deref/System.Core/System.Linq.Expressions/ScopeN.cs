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
		[Token(Token = "0x60002E2")]
		[Address(RVA = "0x418A230", Offset = "0x418A230", VA = "0x418A230")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000067")]
	internal override int ExpressionCount
	{
		[Token(Token = "0x60002E4")]
		[Address(RVA = "0x418A2F0", Offset = "0x418A2F0", VA = "0x418A2F0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x418A1B0", Offset = "0x418A1B0", VA = "0x418A1B0")]
	internal ScopeN(IReadOnlyList<ParameterExpression> variables, IReadOnlyList<Expression> body)
	{
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x418A240", Offset = "0x418A240", VA = "0x418A240", Slot = "10")]
	internal override Expression GetExpression(int index)
	{
		return null;
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x418A380", Offset = "0x418A380", VA = "0x418A380", Slot = "12")]
	internal override ReadOnlyCollection<Expression> GetOrMakeExpressions()
	{
		return null;
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x418A3C0", Offset = "0x418A3C0", VA = "0x418A3C0", Slot = "14")]
	internal override BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}
}
