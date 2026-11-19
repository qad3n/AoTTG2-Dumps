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

[Token(Token = "0x20001B1")]
internal class PointerSpec : System.ModifierSpec
{
	[Token(Token = "0x4000873")]
	[FieldOffset(Offset = "0x10")]
	private int pointer_level;

	[Token(Token = "0x60010A3")]
	[Address(RVA = "0x551EDB0", Offset = "0x551DDB0", VA = "0x551EDB0")]
	internal PointerSpec(int pointer_level)
	{
	}

	[Token(Token = "0x60010A4")]
	[Address(RVA = "0x551EDC0", Offset = "0x551DDC0", VA = "0x551EDC0", Slot = "4")]
	public Type Resolve(Type type)
	{
		return null;
	}

	[Token(Token = "0x60010A5")]
	[Address(RVA = "0x551EE10", Offset = "0x551DE10", VA = "0x551EE10", Slot = "5")]
	public StringBuilder Append(StringBuilder sb)
	{
		return null;
	}

	[Token(Token = "0x60010A6")]
	[Address(RVA = "0x551EE30", Offset = "0x551DE30", VA = "0x551EE30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
