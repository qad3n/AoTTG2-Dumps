using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000022")]
public class ChannelClosedException : InvalidOperationException
{
	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x46AE810", Offset = "0x46AE810", VA = "0x46AE810")]
	public ChannelClosedException()
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x46AE850", Offset = "0x46AE850", VA = "0x46AE850")]
	public ChannelClosedException(string message)
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x46AE860", Offset = "0x46AE860", VA = "0x46AE860")]
	public ChannelClosedException(Exception innerException)
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x46AE8B0", Offset = "0x46AE8B0", VA = "0x46AE8B0")]
	public ChannelClosedException(string message, Exception innerException)
	{
	}
}
