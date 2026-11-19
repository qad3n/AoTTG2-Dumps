// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.InvocationExpression3
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200008E")]
internal sealed class InvocationExpression3 : InvocationExpression
{
	[Token(Token = "0x4000194")]
	[FieldOffset(Offset = "0x20")]
	private object _arg0;

	[Token(Token = "0x4000195")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg1;

	[Token(Token = "0x4000196")]
	[FieldOffset(Offset = "0x30")]
	private readonly Expression _arg2;

	[Token(Token = "0x1700009B")]
	public override int ArgumentCount
	{
		[Token(Token = "0x600042B")]
		[Address(RVA = "0x5DD1F40", Offset = "0x5DD0F40", VA = "0x5DD1F40", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x5DD1DD0", Offset = "0x5DD0DD0", VA = "0x5DD1DD0")]
	public InvocationExpression3(Expression lambda, Type returnType, Expression arg0, Expression arg1, Expression arg2)
	{
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x5DD1E90", Offset = "0x5DD0E90", VA = "0x5DD1E90", Slot = "12")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x5DD1F50", Offset = "0x5DD0F50", VA = "0x5DD1F50", Slot = "14")]
	internal override InvocationExpression Rewrite(Expression lambda, Expression[] arguments)
	{
		return null;
	}
}
