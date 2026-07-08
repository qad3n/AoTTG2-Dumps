using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000111")]
internal sealed class OrdinalIgnoreCaseComparer : OrdinalComparer, ISerializable
{
	[Token(Token = "0x6000A23")]
	[Address(RVA = "0x4FEB910", Offset = "0x4FEB910", VA = "0x4FEB910")]
	public OrdinalIgnoreCaseComparer()
	{
	}

	[Token(Token = "0x6000A24")]
	[Address(RVA = "0x4FEC290", Offset = "0x4FEC290", VA = "0x4FEC290", Slot = "10")]
	public override int Compare(string x, string y)
	{
		return default(int);
	}

	[Token(Token = "0x6000A25")]
	[Address(RVA = "0x4FEC2B0", Offset = "0x4FEC2B0", VA = "0x4FEC2B0", Slot = "11")]
	public override bool Equals(string x, string y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A26")]
	[Address(RVA = "0x4FEC2D0", Offset = "0x4FEC2D0", VA = "0x4FEC2D0", Slot = "12")]
	public override int GetHashCode(string obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000A27")]
	[Address(RVA = "0x4FEC330", Offset = "0x4FEC330", VA = "0x4FEC330", Slot = "13")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
