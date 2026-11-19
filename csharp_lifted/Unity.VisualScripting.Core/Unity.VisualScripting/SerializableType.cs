// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.SerializableType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Serializable]
[Token(Token = "0x2000185")]
[SerializationVersion("A", new Type[] { })]
public struct SerializableType : IEquatable<SerializableType>, IComparable<SerializableType>
{
	[Token(Token = "0x40008B0")]
	[FieldOffset(Offset = "0x0")]
	[Serialize]
	public string Identification;

	[Token(Token = "0x6000F7A")]
	[Address(RVA = "0x6843000", Offset = "0x6842000", VA = "0x6843000")]
	public SerializableType(string identification)
	{
	}

	[Token(Token = "0x6000F7B")]
	[Address(RVA = "0x6843010", Offset = "0x6842010", VA = "0x6843010", Slot = "4")]
	public bool Equals(SerializableType other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F7C")]
	[Address(RVA = "0x6843020", Offset = "0x6842020", VA = "0x6843020", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F7D")]
	[Address(RVA = "0x6843080", Offset = "0x6842080", VA = "0x6843080", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000F7E")]
	[Address(RVA = "0x68430A0", Offset = "0x68420A0", VA = "0x68430A0")]
	public static bool operator ==(SerializableType left, SerializableType right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F7F")]
	[Address(RVA = "0x68430B0", Offset = "0x68420B0", VA = "0x68430B0")]
	public static bool operator !=(SerializableType left, SerializableType right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F80")]
	[Address(RVA = "0x68430C0", Offset = "0x68420C0", VA = "0x68430C0", Slot = "5")]
	public int CompareTo(SerializableType other)
	{
		return default(int);
	}
}
