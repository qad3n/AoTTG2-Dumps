using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000110")]
internal sealed class OrdinalCaseSensitiveComparer : OrdinalComparer, ISerializable
{
	[Token(Token = "0x6000A1E")]
	[Address(RVA = "0x4FEB8C0", Offset = "0x4FEB8C0", VA = "0x4FEB8C0")]
	public OrdinalCaseSensitiveComparer()
	{
	}

	[Token(Token = "0x6000A1F")]
	[Address(RVA = "0x4FEC180", Offset = "0x4FEC180", VA = "0x4FEC180", Slot = "10")]
	public override int Compare(string x, string y)
	{
		return default(int);
	}

	[Token(Token = "0x6000A20")]
	[Address(RVA = "0x4FEC190", Offset = "0x4FEC190", VA = "0x4FEC190", Slot = "11")]
	public override bool Equals(string x, string y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A21")]
	[Address(RVA = "0x4FEC1A0", Offset = "0x4FEC1A0", VA = "0x4FEC1A0", Slot = "12")]
	public override int GetHashCode(string obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000A22")]
	[Address(RVA = "0x4FEC1D0", Offset = "0x4FEC1D0", VA = "0x4FEC1D0", Slot = "13")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
