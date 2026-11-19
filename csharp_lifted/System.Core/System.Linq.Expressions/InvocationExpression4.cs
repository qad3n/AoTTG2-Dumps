// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.InvocationExpression4
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200008F")]
internal sealed class InvocationExpression4 : InvocationExpression
{
	[Token(Token = "0x4000197")]
	[FieldOffset(Offset = "0x20")]
	private object _arg0;

	[Token(Token = "0x4000198")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg1;

	[Token(Token = "0x4000199")]
	[FieldOffset(Offset = "0x30")]
	private readonly Expression _arg2;

	[Token(Token = "0x400019A")]
	[FieldOffset(Offset = "0x38")]
	private readonly Expression _arg3;

	[Token(Token = "0x1700009C")]
	public override int ArgumentCount
	{
		[Token(Token = "0x600042F")]
		[Address(RVA = "0x5DD21E0", Offset = "0x5DD11E0", VA = "0x5DD21E0", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x5DD2040", Offset = "0x5DD1040", VA = "0x5DD2040")]
	public InvocationExpression4(Expression lambda, Type returnType, Expression arg0, Expression arg1, Expression arg2, Expression arg3)
	{
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x5DD2120", Offset = "0x5DD1120", VA = "0x5DD2120", Slot = "12")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x5DD21F0", Offset = "0x5DD11F0", VA = "0x5DD21F0", Slot = "14")]
	internal override InvocationExpression Rewrite(Expression lambda, Expression[] arguments)
	{
		return null;
	}
}
