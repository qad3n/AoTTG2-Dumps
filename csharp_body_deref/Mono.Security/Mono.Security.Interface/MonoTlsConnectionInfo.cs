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

[Token(Token = "0x200002C")]
public class MonoTlsConnectionInfo
{
	[Token(Token = "0x1700005F")]
	[CLSCompliant(false)]
	public CipherSuiteCode CipherSuiteCode
	{
		[Token(Token = "0x6000123")]
		[Address(RVA = "0x3ABC140", Offset = "0x3ABC140", VA = "0x3ABC140")]
		[CompilerGenerated]
		get
		{
			return default(CipherSuiteCode);
		}
		[Token(Token = "0x6000124")]
		[Address(RVA = "0x3ABC150", Offset = "0x3ABC150", VA = "0x3ABC150")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000060")]
	public TlsProtocols ProtocolVersion
	{
		[Token(Token = "0x6000125")]
		[Address(RVA = "0x3ABC160", Offset = "0x3ABC160", VA = "0x3ABC160")]
		[CompilerGenerated]
		get
		{
			return default(TlsProtocols);
		}
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x3ABC170", Offset = "0x3ABC170", VA = "0x3ABC170")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000061")]
	public string PeerDomainName
	{
		[Token(Token = "0x6000127")]
		[Address(RVA = "0x3ABC180", Offset = "0x3ABC180", VA = "0x3ABC180")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x3ABC190", Offset = "0x3ABC190", VA = "0x3ABC190", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x3ABC230", Offset = "0x3ABC230", VA = "0x3ABC230")]
	public MonoTlsConnectionInfo()
	{
	}
}
