// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.InvocationExpression5
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000090")]
internal sealed class InvocationExpression5 : InvocationExpression
{
	[Token(Token = "0x400019B")]
	[FieldOffset(Offset = "0x20")]
	private object _arg0;

	[Token(Token = "0x400019C")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg1;

	[Token(Token = "0x400019D")]
	[FieldOffset(Offset = "0x30")]
	private readonly Expression _arg2;

	[Token(Token = "0x400019E")]
	[FieldOffset(Offset = "0x38")]
	private readonly Expression _arg3;

	[Token(Token = "0x400019F")]
	[FieldOffset(Offset = "0x40")]
	private readonly Expression _arg4;

	[Token(Token = "0x1700009D")]
	public override int ArgumentCount
	{
		[Token(Token = "0x6000433")]
		[Address(RVA = "0x5DD24C0", Offset = "0x5DD14C0", VA = "0x5DD24C0", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x5DD22F0", Offset = "0x5DD12F0", VA = "0x5DD22F0")]
	public InvocationExpression5(Expression lambda, Type returnType, Expression arg0, Expression arg1, Expression arg2, Expression arg3, Expression arg4)
	{
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x5DD23F0", Offset = "0x5DD13F0", VA = "0x5DD23F0", Slot = "12")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x5DD24D0", Offset = "0x5DD14D0", VA = "0x5DD24D0", Slot = "14")]
	internal override InvocationExpression Rewrite(Expression lambda, Expression[] arguments)
	{
		return null;
	}
}
