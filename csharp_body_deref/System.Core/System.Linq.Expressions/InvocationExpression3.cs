// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.InvocationExpression3
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200008D")]
internal sealed class InvocationExpression3 : InvocationExpression
{
	[Token(Token = "0x400018B")]
	[FieldOffset(Offset = "0x20")]
	private object _arg0;

	[Token(Token = "0x400018C")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg1;

	[Token(Token = "0x400018D")]
	[FieldOffset(Offset = "0x30")]
	private readonly Expression _arg2;

	[Token(Token = "0x17000099")]
	public override int ArgumentCount
	{
		[Token(Token = "0x6000421")]
		[Address(RVA = "0x44BC0D0", Offset = "0x44BC0D0", VA = "0x44BC0D0", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x44BBF60", Offset = "0x44BBF60", VA = "0x44BBF60")]
	public InvocationExpression3(Expression lambda, Type returnType, Expression arg0, Expression arg1, Expression arg2)
	{
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x44BC020", Offset = "0x44BC020", VA = "0x44BC020", Slot = "12")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x44BC0E0", Offset = "0x44BC0E0", VA = "0x44BC0E0", Slot = "14")]
	internal override InvocationExpression Rewrite(Expression lambda, Expression[] arguments)
	{
		return null;
	}
}
