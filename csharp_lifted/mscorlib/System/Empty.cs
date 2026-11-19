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
[Token(Token = "0x2000161")]
internal sealed class Empty : ISerializable
{
	[Token(Token = "0x40004FC")]
	[FieldOffset(Offset = "0x0")]
	public static readonly System.Empty Value;

	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x54F5900", Offset = "0x54F4900", VA = "0x54F5900")]
	private Empty()
	{
	}

	[Token(Token = "0x6000DF0")]
	[Address(RVA = "0x54F5910", Offset = "0x54F4910", VA = "0x54F5910", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000DF1")]
	[Address(RVA = "0x54F5930", Offset = "0x54F4930", VA = "0x54F5930", Slot = "4")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
