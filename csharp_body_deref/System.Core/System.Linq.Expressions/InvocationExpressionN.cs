// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.InvocationExpressionN
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000089")]
internal sealed class InvocationExpressionN : InvocationExpression
{
	[Token(Token = "0x4000187")]
	[FieldOffset(Offset = "0x20")]
	private IReadOnlyList<Expression> _arguments;

	[Token(Token = "0x17000095")]
	public override int ArgumentCount
	{
		[Token(Token = "0x6000411")]
		[Address(RVA = "0x44BB900", Offset = "0x44BB900", VA = "0x44BB900", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x44BB7C0", Offset = "0x44BB7C0", VA = "0x44BB7C0")]
	public InvocationExpressionN(Expression lambda, IReadOnlyList<Expression> arguments, Type returnType)
	{
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x44BB850", Offset = "0x44BB850", VA = "0x44BB850", Slot = "12")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x44BB990", Offset = "0x44BB990", VA = "0x44BB990", Slot = "14")]
	internal override InvocationExpression Rewrite(Expression lambda, Expression[] arguments)
	{
		return null;
	}
}
