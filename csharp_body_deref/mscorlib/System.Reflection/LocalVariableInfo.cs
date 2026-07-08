using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Reflection;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x200050F")]
[ComVisible(true)]
public class LocalVariableInfo
{
	[Token(Token = "0x400151D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal Type type;

	[Token(Token = "0x400151E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal bool is_pinned;

	[Token(Token = "0x400151F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A")]
	internal ushort position;

	[Token(Token = "0x600261B")]
	[Address(RVA = "0x4EF99F0", Offset = "0x4EF99F0", VA = "0x4EF99F0")]
	protected LocalVariableInfo()
	{
	}

	[Token(Token = "0x600261C")]
	[Address(RVA = "0x4EF9A00", Offset = "0x4EF9A00", VA = "0x4EF9A00", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
