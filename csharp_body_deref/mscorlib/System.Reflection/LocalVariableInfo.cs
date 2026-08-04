// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.LocalVariableInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3BDF510", Offset = "0x3BDF510", VA = "0x3BDF510")]
	protected LocalVariableInfo()
	{
	}

	[Token(Token = "0x600261C")]
	[Address(RVA = "0x3BDF520", Offset = "0x3BDF520", VA = "0x3BDF520", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
