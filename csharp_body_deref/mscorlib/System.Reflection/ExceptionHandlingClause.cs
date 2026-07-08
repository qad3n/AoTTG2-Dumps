using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Reflection;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x200050E")]
[ComVisible(true)]
public class ExceptionHandlingClause
{
	[Token(Token = "0x4001516")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal Type catch_type;

	[Token(Token = "0x4001517")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal int filter_offset;

	[Token(Token = "0x4001518")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	internal ExceptionHandlingClauseOptions flags;

	[Token(Token = "0x4001519")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal int try_offset;

	[Token(Token = "0x400151A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	internal int try_length;

	[Token(Token = "0x400151B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal int handler_offset;

	[Token(Token = "0x400151C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	internal int handler_length;

	[Token(Token = "0x6002619")]
	[Address(RVA = "0x4EF9700", Offset = "0x4EF9700", VA = "0x4EF9700")]
	protected ExceptionHandlingClause()
	{
	}

	[Token(Token = "0x600261A")]
	[Address(RVA = "0x4EF9710", Offset = "0x4EF9710", VA = "0x4EF9710", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
