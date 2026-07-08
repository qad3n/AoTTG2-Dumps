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
	[Address(RVA = "0x4A33860", Offset = "0x4A33860", VA = "0x4A33860")]
	public SerializableType(string identification)
	{
	}

	[Token(Token = "0x6000F71")]
	[Address(RVA = "0x4A33870", Offset = "0x4A33870", VA = "0x4A33870", Slot = "4")]
	public bool Equals(SerializableType other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F72")]
	[Address(RVA = "0x4A33880", Offset = "0x4A33880", VA = "0x4A33880", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F73")]
	[Address(RVA = "0x4A338E0", Offset = "0x4A338E0", VA = "0x4A338E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000F74")]
	[Address(RVA = "0x4A33900", Offset = "0x4A33900", VA = "0x4A33900")]
	public static bool operator ==(SerializableType left, SerializableType right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F75")]
	[Address(RVA = "0x4A33910", Offset = "0x4A33910", VA = "0x4A33910")]
	public static bool operator !=(SerializableType left, SerializableType right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F76")]
	[Address(RVA = "0x4A33920", Offset = "0x4A33920", VA = "0x4A33920", Slot = "5")]
	public int CompareTo(SerializableType other)
	{
		return default(int);
	}
}
