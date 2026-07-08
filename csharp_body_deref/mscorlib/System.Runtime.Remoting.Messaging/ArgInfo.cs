using System.Reflection;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x200039B")]
internal class ArgInfo
{
	[Token(Token = "0x4000F41")]
	[FieldOffset(Offset = "0x10")]
	private int[] _paramMap;

	[Token(Token = "0x4000F42")]
	[FieldOffset(Offset = "0x18")]
	private int _inoutArgCount;

	[Token(Token = "0x4000F43")]
	[FieldOffset(Offset = "0x20")]
	private MethodBase _method;

	[Token(Token = "0x6001E06")]
	[Address(RVA = "0x4EA0A20", Offset = "0x4EA0A20", VA = "0x4EA0A20")]
	public ArgInfo(MethodBase method, System.Runtime.Remoting.Messaging.ArgInfoType type)
	{
	}

	[Token(Token = "0x6001E07")]
	[Address(RVA = "0x4EA0BF0", Offset = "0x4EA0BF0", VA = "0x4EA0BF0")]
	public object[] GetInOutArgs(object[] args)
	{
		return null;
	}
}
