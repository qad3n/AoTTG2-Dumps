// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Interface.MonoTlsConnectionInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Mono.Security.Interface;

[Token(Token = "0x200003E")]
public class MonoTlsConnectionInfo
{
	[Token(Token = "0x17000062")]
	[CLSCompliant(false)]
	public CipherSuiteCode CipherSuiteCode
	{
		[Token(Token = "0x6000147")]
		[Address(RVA = "0xE998C0", Offset = "0xE97EC0", VA = "0x180E998C0")]
		[CompilerGenerated]
		get
		{
			return default(CipherSuiteCode);
		}
		[Token(Token = "0x6000148")]
		[Address(RVA = "0x19372F0", Offset = "0x19358F0", VA = "0x1819372F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000063")]
	public TlsProtocols ProtocolVersion
	{
		[Token(Token = "0x6000149")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		[CompilerGenerated]
		get
		{
			return default(TlsProtocols);
		}
		[Token(Token = "0x600014A")]
		[Address(RVA = "0xD23EE0", Offset = "0xD224E0", VA = "0x180D23EE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000064")]
	public string PeerDomainName
	{
		[Token(Token = "0x600014B")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x1937250", Offset = "0x1935850", VA = "0x181937250", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public MonoTlsConnectionInfo()
	{
	}
}
