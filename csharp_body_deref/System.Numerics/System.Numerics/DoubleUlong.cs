using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Numerics;

[StructLayout((LayoutKind)2)]
[Token(Token = "0x200000A")]
internal struct DoubleUlong
{
	[Token(Token = "0x400001B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public double dbl;

	[Token(Token = "0x400001C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public ulong uu;
}
