// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.StateUnion
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
