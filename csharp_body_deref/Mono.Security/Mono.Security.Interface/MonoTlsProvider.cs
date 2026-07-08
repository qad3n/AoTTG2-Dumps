using System;
using System.Security.Authentication;
using Il2CppDummyDll;

namespace Mono.Security.Interface;

[Token(Token = "0x2000030")]
public abstract class MonoTlsProvider
{
	[Token(Token = "0x17000062")]
	public abstract Guid ID
	{
		[Token(Token = "0x600012F")]
		get;
	}

	[Token(Token = "0x17000063")]
	public abstract string Name
	{
		[Token(Token = "0x6000130")]
		get;
	}

	[Token(Token = "0x17000064")]
	public abstract bool SupportsSslStream
	{
		[Token(Token = "0x6000131")]
		get;
	}

	[Token(Token = "0x17000065")]
	public abstract bool SupportsConnectionInfo
	{
		[Token(Token = "0x6000132")]
		get;
	}

	[Token(Token = "0x17000066")]
	public abstract bool SupportsMonoExtensions
	{
		[Token(Token = "0x6000133")]
		get;
	}

	[Token(Token = "0x17000067")]
	public abstract SslProtocols SupportedProtocols
	{
		[Token(Token = "0x6000134")]
		get;
	}

	[Token(Token = "0x17000068")]
	internal abstract bool SupportsCleanShutdown
	{
		[Token(Token = "0x6000135")]
		get;
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x3A4F720", Offset = "0x3A4F720", VA = "0x3A4F720")]
	internal MonoTlsProvider()
	{
	}
}
