using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000A9")]
public class EntryPointNotFoundException : TypeLoadException
{
	[Token(Token = "0x600069B")]
	[Address(RVA = "0x4FB5160", Offset = "0x4FB5160", VA = "0x4FB5160")]
	public EntryPointNotFoundException()
	{
	}

	[Token(Token = "0x600069C")]
	[Address(RVA = "0x4FB51A0", Offset = "0x4FB51A0", VA = "0x4FB51A0")]
	public EntryPointNotFoundException(string message)
	{
	}

	[Token(Token = "0x600069D")]
	[Address(RVA = "0x4FB51C0", Offset = "0x4FB51C0", VA = "0x4FB51C0")]
	protected EntryPointNotFoundException(SerializationInfo info, StreamingContext context)
	{
	}
}
