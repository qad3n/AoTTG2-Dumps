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
		[Token(Token = "0x6000410")]
		[Address(RVA = "0x243B760", Offset = "0x2439D60", VA = "0x18243B760", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x243B720", Offset = "0x2439D20", VA = "0x18243B720")]
	public InvocationExpressionN(Expression lambda, IReadOnlyList<Expression> arguments, Type returnType)
	{
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x243B650", Offset = "0x2439C50", VA = "0x18243B650", Slot = "12")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x243B6B0", Offset = "0x2439CB0", VA = "0x18243B6B0", Slot = "14")]
	internal override InvocationExpression Rewrite(Expression lambda, Expression[] arguments)
	{
		return null;
	}
}
