using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000E0")]
[TypeForwardedFrom("System.Core, Version=2.0.5.0, Culture=Neutral, PublicKeyToken=7cec85d7bea7798e")]
public class InvalidTimeZoneException : Exception
{
	[Token(Token = "0x6000824")]
	[Address(RVA = "0x4FD1090", Offset = "0x4FD1090", VA = "0x4FD1090")]
	public InvalidTimeZoneException()
	{
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x4FD1100", Offset = "0x4FD1100", VA = "0x4FD1100")]
	public InvalidTimeZoneException(string message)
	{
	}

	[Token(Token = "0x6000826")]
	[Address(RVA = "0x4FD1160", Offset = "0x4FD1160", VA = "0x4FD1160")]
	protected InvalidTimeZoneException(SerializationInfo info, StreamingContext context)
	{
	}
}
