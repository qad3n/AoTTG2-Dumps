// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.InvocationExpression5
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200008F")]
internal sealed class InvocationExpression5 : InvocationExpression
{
	[Token(Token = "0x4000192")]
	[FieldOffset(Offset = "0x20")]
	private object _arg0;

	[Token(Token = "0x4000193")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg1;

	[Token(Token = "0x4000194")]
	[FieldOffset(Offset = "0x30")]
	private readonly Expression _arg2;

	[Token(Token = "0x4000195")]
	[FieldOffset(Offset = "0x38")]
	private readonly Expression _arg3;

	[Token(Token = "0x4000196")]
	[FieldOffset(Offset = "0x40")]
	private readonly Expression _arg4;

	[Token(Token = "0x1700009B")]
	public override int ArgumentCount
	{
		[Token(Token = "0x6000428")]
		[Address(RVA = "0x8680A0", Offset = "0x8666A0", VA = "0x1808680A0", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x243B5D0", Offset = "0x2439BD0", VA = "0x18243B5D0")]
	public InvocationExpression5(Expression lambda, Type returnType, Expression arg0, Expression arg1, Expression arg2, Expression arg3, Expression arg4)
	{
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x243B3B0", Offset = "0x24399B0", VA = "0x18243B3B0", Slot = "12")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x243B4A0", Offset = "0x2439AA0", VA = "0x18243B4A0", Slot = "14")]
	internal override InvocationExpression Rewrite(Expression lambda, Expression[] arguments)
	{
		return null;
	}
}
