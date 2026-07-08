using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20005E3")]
[ComVisible(true)]
[AttributeUsage(AttributeTargets.Assembly | AttributeTargets.Class | AttributeTargets.Struct, AllowMultiple = true)]
public sealed class DebuggerTypeProxyAttribute : Attribute
{
	[Token(Token = "0x4001A06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string typeName;

	[Token(Token = "0x6002E5F")]
	[Address(RVA = "0x4F94AD0", Offset = "0x4F94AD0", VA = "0x4F94AD0")]
	public DebuggerTypeProxyAttribute(Type type)
	{
	}
}
