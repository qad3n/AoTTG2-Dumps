using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200004A")]
internal class MethodBinaryExpression : SimpleBinaryExpression
{
	[Token(Token = "0x40000EF")]
	[FieldOffset(Offset = "0x30")]
	private readonly MethodInfo _method;

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x4171C80", Offset = "0x4171C80", VA = "0x4171C80")]
	internal MethodBinaryExpression(ExpressionType nodeType, Expression left, Expression right, Type type, MethodInfo method)
	{
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x4171E00", Offset = "0x4171E00", VA = "0x4171E00", Slot = "10")]
	internal override MethodInfo GetMethod()
	{
		return null;
	}
}
