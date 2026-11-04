// ==================== AoTTG2 cross-reference ====================
// Type: System.Empty
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000189")]
internal sealed class Empty : ISerializable
{
	[Token(Token = "0x400059E")]
	[FieldOffset(Offset = "0x0")]
	public static readonly System.Empty Value;

	[Token(Token = "0x6000E14")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	private Empty()
	{
	}

	[Token(Token = "0x6000E15")]
	[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000E16")]
	[Address(RVA = "0x1B648C0", Offset = "0x1B62EC0", VA = "0x181B648C0", Slot = "4")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
