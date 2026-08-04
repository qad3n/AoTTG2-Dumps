// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Interface.MonoTlsProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3ABC3E0", Offset = "0x3ABC3E0", VA = "0x3ABC3E0")]
	internal MonoTlsProvider()
	{
	}
}
