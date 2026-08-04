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
[Token(Token = "0x200015F")]
internal sealed class Empty : ISerializable
{
	[Token(Token = "0x400053D")]
	[FieldOffset(Offset = "0x0")]
	public static readonly System.Empty Value;

	[Token(Token = "0x6000DC7")]
	[Address(RVA = "0x3CF1550", Offset = "0x3CF1550", VA = "0x3CF1550")]
	private Empty()
	{
	}

	[Token(Token = "0x6000DC8")]
	[Address(RVA = "0x3CF1560", Offset = "0x3CF1560", VA = "0x3CF1560", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000DC9")]
	[Address(RVA = "0x3CF1580", Offset = "0x3CF1580", VA = "0x3CF1580", Slot = "4")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
