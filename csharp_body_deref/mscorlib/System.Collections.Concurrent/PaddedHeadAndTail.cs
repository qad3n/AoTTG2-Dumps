using System.Diagnostics;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Collections.Concurrent;

[StructLayout((LayoutKind)2)]
[Token(Token = "0x200062B")]
[DebuggerDisplay("Head = {Head}, Tail = {Tail}")]
internal struct PaddedHeadAndTail
{
	[Token(Token = "0x4001AE1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	public int Head;

	[Token(Token = "0x4001AE2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	public int Tail;
}
