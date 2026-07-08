using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Mono.Security.Interface;

[Token(Token = "0x200002C")]
public class MonoTlsConnectionInfo
{
	[Token(Token = "0x1700005F")]
	[CLSCompliant(false)]
	public CipherSuiteCode CipherSuiteCode
	{
		[Token(Token = "0x6000123")]
		[Address(RVA = "0x3A4F480", Offset = "0x3A4F480", VA = "0x3A4F480")]
		[CompilerGenerated]
		get
		{
			return default(CipherSuiteCode);
		}
		[Token(Token = "0x6000124")]
		[Address(RVA = "0x3A4F490", Offset = "0x3A4F490", VA = "0x3A4F490")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000060")]
	public TlsProtocols ProtocolVersion
	{
		[Token(Token = "0x6000125")]
		[Address(RVA = "0x3A4F4A0", Offset = "0x3A4F4A0", VA = "0x3A4F4A0")]
		[CompilerGenerated]
		get
		{
			return default(TlsProtocols);
		}
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x3A4F4B0", Offset = "0x3A4F4B0", VA = "0x3A4F4B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000061")]
	public string PeerDomainName
	{
		[Token(Token = "0x6000127")]
		[Address(RVA = "0x3A4F4C0", Offset = "0x3A4F4C0", VA = "0x3A4F4C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x3A4F4D0", Offset = "0x3A4F4D0", VA = "0x3A4F4D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x3A4F570", Offset = "0x3A4F570", VA = "0x3A4F570")]
	public MonoTlsConnectionInfo()
	{
	}
}
