// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.InvocationExpression0
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200008B")]
internal sealed class InvocationExpression0 : InvocationExpression
{
	[Token(Token = "0x17000098")]
	public override int ArgumentCount
	{
		[Token(Token = "0x600041F")]
		[Address(RVA = "0x5DD1950", Offset = "0x5DD0950", VA = "0x5DD1950", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x5DD1880", Offset = "0x5DD0880", VA = "0x5DD1880")]
	public InvocationExpression0(Expression lambda, Type returnType)
	{
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x5DD1900", Offset = "0x5DD0900", VA = "0x5DD1900", Slot = "12")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x5DD1960", Offset = "0x5DD0960", VA = "0x5DD1960", Slot = "14")]
	internal override InvocationExpression Rewrite(Expression lambda, Expression[] arguments)
	{
		return null;
	}
}
