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
[Token(Token = "0x2000517")]
[ComVisible(true)]
public class ExceptionHandlingClause
{
	[Token(Token = "0x4001475")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal Type catch_type;

	[Token(Token = "0x4001476")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal int filter_offset;

	[Token(Token = "0x4001477")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	internal ExceptionHandlingClauseOptions flags;

	[Token(Token = "0x4001478")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal int try_offset;

	[Token(Token = "0x4001479")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	internal int try_length;

	[Token(Token = "0x400147A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal int handler_offset;

	[Token(Token = "0x400147B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	internal int handler_length;

	[Token(Token = "0x600266A")]
	[Address(RVA = "0x53E5E00", Offset = "0x53E4E00", VA = "0x53E5E00")]
	protected ExceptionHandlingClause()
	{
	}

	[Token(Token = "0x600266B")]
	[Address(RVA = "0x53E5E10", Offset = "0x53E4E10", VA = "0x53E5E10", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
