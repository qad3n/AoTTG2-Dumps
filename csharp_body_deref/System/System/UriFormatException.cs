using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000082")]
public class UriFormatException : FormatException, ISerializable
{
	[Token(Token = "0x600024C")]
	[Address(RVA = "0x45D5930", Offset = "0x45D5930", VA = "0x45D5930")]
	public UriFormatException()
	{
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x45D3760", Offset = "0x45D3760", VA = "0x45D3760")]
	public UriFormatException(string textString)
	{
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x45D5940", Offset = "0x45D5940", VA = "0x45D5940")]
	protected UriFormatException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x45D5950", Offset = "0x45D5950", VA = "0x45D5950", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
