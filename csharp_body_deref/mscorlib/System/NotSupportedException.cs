using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000F1")]
public class NotSupportedException : SystemException
{
	[Token(Token = "0x60008BC")]
	[Address(RVA = "0x4FD3920", Offset = "0x4FD3920", VA = "0x4FD3920")]
	public NotSupportedException()
	{
	}

	[Token(Token = "0x60008BD")]
	[Address(RVA = "0x4FCC600", Offset = "0x4FCC600", VA = "0x4FCC600")]
	public NotSupportedException(string message)
	{
	}

	[Token(Token = "0x60008BE")]
	[Address(RVA = "0x4FD3960", Offset = "0x4FD3960", VA = "0x4FD3960")]
	public NotSupportedException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x4FD3980", Offset = "0x4FD3980", VA = "0x4FD3980")]
	protected NotSupportedException(SerializationInfo info, StreamingContext context)
	{
	}
}
