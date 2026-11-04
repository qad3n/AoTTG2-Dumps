// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.InvocationExpression0
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200008A")]
internal sealed class InvocationExpression0 : InvocationExpression
{
	[Token(Token = "0x17000096")]
	public override int ArgumentCount
	{
		[Token(Token = "0x6000414")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x243ABD0", Offset = "0x24391D0", VA = "0x18243ABD0")]
	public InvocationExpression0(Expression lambda, Type returnType)
	{
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x243AB30", Offset = "0x2439130", VA = "0x18243AB30", Slot = "12")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x243AB80", Offset = "0x2439180", VA = "0x18243AB80", Slot = "14")]
	internal override InvocationExpression Rewrite(Expression lambda, Expression[] arguments)
	{
		return null;
	}
}
