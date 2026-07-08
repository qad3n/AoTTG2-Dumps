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
	[Address(RVA = "0x500BA30", Offset = "0x500BA30", VA = "0x500BA30")]
	private Empty()
	{
	}

	[Token(Token = "0x6000DC8")]
	[Address(RVA = "0x500BA40", Offset = "0x500BA40", VA = "0x500BA40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000DC9")]
	[Address(RVA = "0x500BA60", Offset = "0x500BA60", VA = "0x500BA60", Slot = "4")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
