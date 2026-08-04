// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.Emit.LocalBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
