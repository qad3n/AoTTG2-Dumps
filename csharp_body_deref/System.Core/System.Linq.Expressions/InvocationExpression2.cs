// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.InvocationExpression2
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200008D")]
internal sealed class InvocationExpression2 : InvocationExpression
{
	[Token(Token = "0x4000192")]
	[FieldOffset(Offset = "0x20")]
	private object _arg0;

	[Token(Token = "0x4000193")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg1;

	[Token(Token = "0x1700009A")]
	public override int ArgumentCount
	{
		[Token(Token = "0x6000427")]
		[Address(RVA = "0x5DD1CF0", Offset = "0x5DD0CF0", VA = "0x5DD1CF0", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x5DD1BA0", Offset = "0x5DD0BA0", VA = "0x5DD1BA0")]
	public InvocationExpression2(Expression lambda, Type returnType, Expression arg0, Expression arg1)
	{
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x5DD1C50", Offset = "0x5DD0C50", VA = "0x5DD1C50", Slot = "12")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x5DD1D00", Offset = "0x5DD0D00", VA = "0x5DD1D00", Slot = "14")]
	internal override InvocationExpression Rewrite(Expression lambda, Expression[] arguments)
	{
		return null;
	}
}
