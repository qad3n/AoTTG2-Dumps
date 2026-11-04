// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.ExceptionHandlingClause
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Reflection;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x200053E")]
[ComVisible(true)]
public class ExceptionHandlingClause
{
	[Token(Token = "0x4001515")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal Type catch_type;

	[Token(Token = "0x4001516")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal int filter_offset;

	[Token(Token = "0x4001517")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	internal ExceptionHandlingClauseOptions flags;

	[Token(Token = "0x4001518")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal int try_offset;

	[Token(Token = "0x4001519")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	internal int try_length;

	[Token(Token = "0x400151A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal int handler_offset;

	[Token(Token = "0x400151B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	internal int handler_length;

	[Token(Token = "0x600269C")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected ExceptionHandlingClause()
	{
	}

	[Token(Token = "0x600269D")]
	[Address(RVA = "0x1A69310", Offset = "0x1A67910", VA = "0x181A69310", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
