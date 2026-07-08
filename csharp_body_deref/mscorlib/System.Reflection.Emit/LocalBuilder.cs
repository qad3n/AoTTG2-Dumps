using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Reflection.Emit;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x200052A")]
public sealed class LocalBuilder : LocalVariableInfo
{
	[Token(Token = "0x4001563")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string name;

	[Token(Token = "0x4001564")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal ILGenerator ilgen;

	[Token(Token = "0x4001565")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int startOffset;

	[Token(Token = "0x4001566")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	private int endOffset;
}
