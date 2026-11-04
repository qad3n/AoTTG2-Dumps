// ==================== AoTTG2 cross-reference ====================
// Type: System.PointerSpec
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20001D9")]
internal class PointerSpec : System.ModifierSpec
{
	[Token(Token = "0x4000915")]
	[FieldOffset(Offset = "0x10")]
	private int pointer_level;

	[Token(Token = "0x60010CC")]
	[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
	internal PointerSpec(int pointer_level)
	{
	}

	[Token(Token = "0x60010CD")]
	[Address(RVA = "0x1BA3090", Offset = "0x1BA1690", VA = "0x181BA3090", Slot = "4")]
	public Type Resolve(Type type)
	{
		return null;
	}

	[Token(Token = "0x60010CE")]
	[Address(RVA = "0x1BA3060", Offset = "0x1BA1660", VA = "0x181BA3060", Slot = "5")]
	public StringBuilder Append(StringBuilder sb)
	{
		return null;
	}

	[Token(Token = "0x60010CF")]
	[Address(RVA = "0x1BA30E0", Offset = "0x1BA16E0", VA = "0x181BA30E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
