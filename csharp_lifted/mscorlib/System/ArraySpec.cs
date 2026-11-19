// ==================== AoTTG2 cross-reference ====================
// Type: System.ArraySpec
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20001B0")]
internal class ArraySpec : System.ModifierSpec
{
	[Token(Token = "0x4000871")]
	[FieldOffset(Offset = "0x10")]
	private int dimensions;

	[Token(Token = "0x4000872")]
	[FieldOffset(Offset = "0x14")]
	private bool bound;

	[Token(Token = "0x600109F")]
	[Address(RVA = "0x551EC00", Offset = "0x551DC00", VA = "0x551EC00")]
	internal ArraySpec(int dimensions, bool bound)
	{
	}

	[Token(Token = "0x60010A0")]
	[Address(RVA = "0x551EC10", Offset = "0x551DC10", VA = "0x551EC10", Slot = "4")]
	public Type Resolve(Type type)
	{
		return null;
	}

	[Token(Token = "0x60010A1")]
	[Address(RVA = "0x551EC90", Offset = "0x551DC90", VA = "0x551EC90", Slot = "5")]
	public StringBuilder Append(StringBuilder sb)
	{
		return null;
	}

	[Token(Token = "0x60010A2")]
	[Address(RVA = "0x551ED30", Offset = "0x551DD30", VA = "0x551ED30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
