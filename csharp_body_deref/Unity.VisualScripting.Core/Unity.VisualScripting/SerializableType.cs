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
	[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
	public SerializableType(string identification)
	{
	}

	[Token(Token = "0x6000F7B")]
	[Address(RVA = "0x19A9FB0", Offset = "0x19A85B0", VA = "0x1819A9FB0", Slot = "4")]
	public bool Equals(SerializableType other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F7C")]
	[Address(RVA = "0x2E39D40", Offset = "0x2E38340", VA = "0x182E39D40", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F7D")]
	[Address(RVA = "0x1BC4E00", Offset = "0x1BC3400", VA = "0x181BC4E00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000F7E")]
	[Address(RVA = "0x19AA140", Offset = "0x19A8740", VA = "0x1819AA140")]
	public static bool operator ==(SerializableType left, SerializableType right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F7F")]
	[Address(RVA = "0x19AA150", Offset = "0x19A8750", VA = "0x1819AA150")]
	public static bool operator !=(SerializableType left, SerializableType right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F80")]
	[Address(RVA = "0x2E39D20", Offset = "0x2E38320", VA = "0x182E39D20", Slot = "5")]
	public int CompareTo(SerializableType other)
	{
		return default(int);
	}
}
