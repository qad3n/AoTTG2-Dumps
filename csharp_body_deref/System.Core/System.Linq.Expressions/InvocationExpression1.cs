// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.InvocationExpression1
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200008B")]
internal sealed class InvocationExpression1 : InvocationExpression
{
	[Token(Token = "0x4000188")]
	[FieldOffset(Offset = "0x20")]
	private object _arg0;

	[Token(Token = "0x17000097")]
	public override int ArgumentCount
	{
		[Token(Token = "0x6000419")]
		[Address(RVA = "0x44BBC80", Offset = "0x44BBC80", VA = "0x44BBC80", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x44BBB60", Offset = "0x44BBB60", VA = "0x44BBB60")]
	public InvocationExpression1(Expression lambda, Type returnType, Expression arg0)
	{
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x44BBBF0", Offset = "0x44BBBF0", VA = "0x44BBBF0", Slot = "12")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x44BBC90", Offset = "0x44BBC90", VA = "0x44BBC90", Slot = "14")]
	internal override InvocationExpression Rewrite(Expression lambda, Expression[] arguments)
	{
		return null;
	}
}
