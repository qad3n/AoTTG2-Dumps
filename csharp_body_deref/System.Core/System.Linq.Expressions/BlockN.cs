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
		[Address(RVA = "0x4189B80", Offset = "0x4189B80", VA = "0x4189B80", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x4189A60", Offset = "0x4189A60", VA = "0x4189A60")]
	internal BlockN(IReadOnlyList<Expression> expressions)
	{
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x4189AD0", Offset = "0x4189AD0", VA = "0x4189AD0", Slot = "10")]
	internal override Expression GetExpression(int index)
	{
		return null;
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x4189C10", Offset = "0x4189C10", VA = "0x4189C10", Slot = "12")]
	internal override ReadOnlyCollection<Expression> GetOrMakeExpressions()
	{
		return null;
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x4189C50", Offset = "0x4189C50", VA = "0x4189C50", Slot = "14")]
	internal override BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}
}
