// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.InvocationExpression1
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200008C")]
internal sealed class InvocationExpression1 : InvocationExpression
{
	[Token(Token = "0x4000191")]
	[FieldOffset(Offset = "0x20")]
	private object _arg0;

	[Token(Token = "0x17000099")]
	public override int ArgumentCount
	{
		[Token(Token = "0x6000423")]
		[Address(RVA = "0x5DD1AF0", Offset = "0x5DD0AF0", VA = "0x5DD1AF0", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x5DD19D0", Offset = "0x5DD09D0", VA = "0x5DD19D0")]
	public InvocationExpression1(Expression lambda, Type returnType, Expression arg0)
	{
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x5DD1A60", Offset = "0x5DD0A60", VA = "0x5DD1A60", Slot = "12")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x5DD1B00", Offset = "0x5DD0B00", VA = "0x5DD1B00", Slot = "14")]
	internal override InvocationExpression Rewrite(Expression lambda, Expression[] arguments)
	{
		return null;
	}
}
