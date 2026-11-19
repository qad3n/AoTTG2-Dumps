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

[Token(Token = "0x200008A")]
internal sealed class InvocationExpressionN : InvocationExpression
{
	[Token(Token = "0x4000190")]
	[FieldOffset(Offset = "0x20")]
	private IReadOnlyList<Expression> _arguments;

	[Token(Token = "0x17000097")]
	public override int ArgumentCount
	{
		[Token(Token = "0x600041B")]
		[Address(RVA = "0x5DD1770", Offset = "0x5DD0770", VA = "0x5DD1770", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x5DD1630", Offset = "0x5DD0630", VA = "0x5DD1630")]
	public InvocationExpressionN(Expression lambda, IReadOnlyList<Expression> arguments, Type returnType)
	{
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x5DD16C0", Offset = "0x5DD06C0", VA = "0x5DD16C0", Slot = "12")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x5DD1800", Offset = "0x5DD0800", VA = "0x5DD1800", Slot = "14")]
	internal override InvocationExpression Rewrite(Expression lambda, Expression[] arguments)
	{
		return null;
	}
}
