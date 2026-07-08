using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000A7")]
internal class InstanceMethodCallExpression : MethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001B9")]
	[FieldOffset(Offset = "0x18")]
	private readonly Expression _instance;

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x41981B0", Offset = "0x41981B0", VA = "0x41981B0")]
	public InstanceMethodCallExpression(MethodInfo method, Expression instance)
	{
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x4198230", Offset = "0x4198230", VA = "0x4198230", Slot = "12")]
	internal override Expression GetInstance()
	{
		return null;
	}
}
