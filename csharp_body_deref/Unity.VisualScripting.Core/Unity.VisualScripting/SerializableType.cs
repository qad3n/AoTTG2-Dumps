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
	[Token(Token = "0x40008B2")]
	[FieldOffset(Offset = "0x0")]
	[Serialize]
	public string Identification;

	[Token(Token = "0x6000F70")]
	[Address(RVA = "0x4D58430", Offset = "0x4D58430", VA = "0x4D58430")]
	public SerializableType(string identification)
	{
	}

	[Token(Token = "0x6000F71")]
	[Address(RVA = "0x4D58440", Offset = "0x4D58440", VA = "0x4D58440", Slot = "4")]
	public bool Equals(SerializableType other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F72")]
	[Address(RVA = "0x4D58450", Offset = "0x4D58450", VA = "0x4D58450", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F73")]
	[Address(RVA = "0x4D584B0", Offset = "0x4D584B0", VA = "0x4D584B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000F74")]
	[Address(RVA = "0x4D584D0", Offset = "0x4D584D0", VA = "0x4D584D0")]
	public static bool operator ==(SerializableType left, SerializableType right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F75")]
	[Address(RVA = "0x4D584E0", Offset = "0x4D584E0", VA = "0x4D584E0")]
	public static bool operator !=(SerializableType left, SerializableType right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F76")]
	[Address(RVA = "0x4D584F0", Offset = "0x4D584F0", VA = "0x4D584F0", Slot = "5")]
	public int CompareTo(SerializableType other)
	{
		return default(int);
	}
}
