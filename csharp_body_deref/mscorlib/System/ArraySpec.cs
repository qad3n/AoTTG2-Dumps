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

[Token(Token = "0x20001AD")]
internal class ArraySpec : System.ModifierSpec
{
	[Token(Token = "0x40008AF")]
	[FieldOffset(Offset = "0x10")]
	private int dimensions;

	[Token(Token = "0x40008B0")]
	[FieldOffset(Offset = "0x14")]
	private bool bound;

	[Token(Token = "0x6001071")]
	[Address(RVA = "0x3D1B8C0", Offset = "0x3D1B8C0", VA = "0x3D1B8C0")]
	internal ArraySpec(int dimensions, bool bound)
	{
	}

	[Token(Token = "0x6001072")]
	[Address(RVA = "0x3D1B8D0", Offset = "0x3D1B8D0", VA = "0x3D1B8D0", Slot = "4")]
	public Type Resolve(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001073")]
	[Address(RVA = "0x3D1B950", Offset = "0x3D1B950", VA = "0x3D1B950", Slot = "5")]
	public StringBuilder Append(StringBuilder sb)
	{
		return null;
	}

	[Token(Token = "0x6001074")]
	[Address(RVA = "0x3D1B9F0", Offset = "0x3D1B9F0", VA = "0x3D1B9F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
