using System.Collections.Generic;
using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200006E")]
internal sealed class Scope1 : ScopeExpression
{
	[Token(Token = "0x4000105")]
	[FieldOffset(Offset = "0x18")]
	private object _body;

	[Token(Token = "0x17000065")]
	internal override int ExpressionCount
	{
		[Token(Token = "0x60002DE")]
		[Address(RVA = "0x4189FA0", Offset = "0x4189FA0", VA = "0x4189FA0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x4189E30", Offset = "0x4189E30", VA = "0x4189E30")]
	internal Scope1(IReadOnlyList<ParameterExpression> variables, Expression body)
	{
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x4189EB0", Offset = "0x4189EB0", VA = "0x4189EB0")]
	private Scope1(IReadOnlyList<ParameterExpression> variables, object body)
	{
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x4189F30", Offset = "0x4189F30", VA = "0x4189F30", Slot = "10")]
	internal override Expression GetExpression(int index)
	{
		return null;
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x4189FB0", Offset = "0x4189FB0", VA = "0x4189FB0", Slot = "12")]
	internal override ReadOnlyCollection<Expression> GetOrMakeExpressions()
	{
		return null;
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x4189FC0", Offset = "0x4189FC0", VA = "0x4189FC0", Slot = "14")]
	internal override BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}
}
