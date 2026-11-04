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

[Token(Token = "0x2000042")]
public abstract class MonoTlsProvider
{
	[Token(Token = "0x17000065")]
	public abstract Guid ID
	{
		[Token(Token = "0x6000153")]
		get;
	}

	[Token(Token = "0x17000066")]
	public abstract string Name
	{
		[Token(Token = "0x6000154")]
		get;
	}

	[Token(Token = "0x17000067")]
	public abstract bool SupportsSslStream
	{
		[Token(Token = "0x6000155")]
		get;
	}

	[Token(Token = "0x17000068")]
	public abstract bool SupportsConnectionInfo
	{
		[Token(Token = "0x6000156")]
		get;
	}

	[Token(Token = "0x17000069")]
	public abstract bool SupportsMonoExtensions
	{
		[Token(Token = "0x6000157")]
		get;
	}

	[Token(Token = "0x1700006A")]
	public abstract SslProtocols SupportedProtocols
	{
		[Token(Token = "0x6000158")]
		get;
	}

	[Token(Token = "0x1700006B")]
	internal abstract bool SupportsCleanShutdown
	{
		[Token(Token = "0x6000159")]
		get;
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal MonoTlsProvider()
	{
	}
}
