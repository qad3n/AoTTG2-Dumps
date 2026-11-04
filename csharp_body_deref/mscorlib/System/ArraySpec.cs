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

[Token(Token = "0x20001D8")]
internal class ArraySpec : System.ModifierSpec
{
	[Token(Token = "0x4000913")]
	[FieldOffset(Offset = "0x10")]
	private int dimensions;

	[Token(Token = "0x4000914")]
	[FieldOffset(Offset = "0x14")]
	private bool bound;

	[Token(Token = "0x60010C8")]
	[Address(RVA = "0x1B7BEC0", Offset = "0x1B7A4C0", VA = "0x181B7BEC0")]
	internal ArraySpec(int dimensions, bool bound)
	{
	}

	[Token(Token = "0x60010C9")]
	[Address(RVA = "0x1B7BD60", Offset = "0x1B7A360", VA = "0x181B7BD60", Slot = "4")]
	public Type Resolve(Type type)
	{
		return null;
	}

	[Token(Token = "0x60010CA")]
	[Address(RVA = "0x1B7BCC0", Offset = "0x1B7A2C0", VA = "0x181B7BCC0", Slot = "5")]
	public StringBuilder Append(StringBuilder sb)
	{
		return null;
	}

	[Token(Token = "0x60010CB")]
	[Address(RVA = "0x1B7BDD0", Offset = "0x1B7A3D0", VA = "0x181B7BDD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
