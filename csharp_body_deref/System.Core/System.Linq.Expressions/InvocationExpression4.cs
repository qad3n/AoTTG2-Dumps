// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.InvocationExpression4
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200008E")]
internal sealed class InvocationExpression4 : InvocationExpression
{
	[Token(Token = "0x400018E")]
	[FieldOffset(Offset = "0x20")]
	private object _arg0;

	[Token(Token = "0x400018F")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg1;

	[Token(Token = "0x4000190")]
	[FieldOffset(Offset = "0x30")]
	private readonly Expression _arg2;

	[Token(Token = "0x4000191")]
	[FieldOffset(Offset = "0x38")]
	private readonly Expression _arg3;

	[Token(Token = "0x1700009A")]
	public override int ArgumentCount
	{
		[Token(Token = "0x6000425")]
		[Address(RVA = "0x44BC370", Offset = "0x44BC370", VA = "0x44BC370", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x44BC1D0", Offset = "0x44BC1D0", VA = "0x44BC1D0")]
	public InvocationExpression4(Expression lambda, Type returnType, Expression arg0, Expression arg1, Expression arg2, Expression arg3)
	{
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x44BC2B0", Offset = "0x44BC2B0", VA = "0x44BC2B0", Slot = "12")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x44BC380", Offset = "0x44BC380", VA = "0x44BC380", Slot = "14")]
	internal override InvocationExpression Rewrite(Expression lambda, Expression[] arguments)
	{
		return null;
	}
}
