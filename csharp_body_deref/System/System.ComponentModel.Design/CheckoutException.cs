using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.ComponentModel.Design;

[Serializable]
[Token(Token = "0x2000324")]
public class CheckoutException : ExternalException
{
	[Token(Token = "0x4000ED5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly CheckoutException Canceled;

	[Token(Token = "0x6001508")]
	[Address(RVA = "0x45BA7F0", Offset = "0x45BA7F0", VA = "0x45BA7F0")]
	public CheckoutException()
	{
	}

	[Token(Token = "0x6001509")]
	[Address(RVA = "0x45BA800", Offset = "0x45BA800", VA = "0x45BA800")]
	public CheckoutException(string message, int errorCode)
	{
	}

	[Token(Token = "0x600150A")]
	[Address(RVA = "0x45BA810", Offset = "0x45BA810", VA = "0x45BA810")]
	protected CheckoutException(SerializationInfo info, StreamingContext context)
	{
	}
}
