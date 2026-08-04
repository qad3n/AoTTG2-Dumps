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

[Token(Token = "0x20001AE")]
internal class PointerSpec : System.ModifierSpec
{
	[Token(Token = "0x40008B1")]
	[FieldOffset(Offset = "0x10")]
	private int pointer_level;

	[Token(Token = "0x6001075")]
	[Address(RVA = "0x3D1BA70", Offset = "0x3D1BA70", VA = "0x3D1BA70")]
	internal PointerSpec(int pointer_level)
	{
	}

	[Token(Token = "0x6001076")]
	[Address(RVA = "0x3D1BA80", Offset = "0x3D1BA80", VA = "0x3D1BA80", Slot = "4")]
	public Type Resolve(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001077")]
	[Address(RVA = "0x3D1BAD0", Offset = "0x3D1BAD0", VA = "0x3D1BAD0", Slot = "5")]
	public StringBuilder Append(StringBuilder sb)
	{
		return null;
	}

	[Token(Token = "0x6001078")]
	[Address(RVA = "0x3D1BAF0", Offset = "0x3D1BAF0", VA = "0x3D1BAF0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
