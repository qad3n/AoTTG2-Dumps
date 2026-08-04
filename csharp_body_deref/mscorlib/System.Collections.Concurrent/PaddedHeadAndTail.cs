// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Concurrent.PaddedHeadAndTail
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
