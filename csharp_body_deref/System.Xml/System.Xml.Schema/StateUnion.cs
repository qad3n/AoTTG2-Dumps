using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[StructLayout((LayoutKind)2)]
[Token(Token = "0x20001FA")]
internal struct StateUnion
{
	[Token(Token = "0x4000A65")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public int State;

	[Token(Token = "0x4000A66")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public int AllElementsRequired;

	[Token(Token = "0x4000A67")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public int CurPosIndex;

	[Token(Token = "0x4000A68")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public int NumberOfRunningPos;
}
