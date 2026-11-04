// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Interface.MonoTlsSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;

namespace Mono.Security.Interface;

[Token(Token = "0x2000044")]
public sealed class MonoTlsSettings
{
	[Token(Token = "0x40001F3")]
	[FieldOffset(Offset = "0x70")]
	private bool cloned;

	[Token(Token = "0x40001F4")]
	[FieldOffset(Offset = "0x71")]
	private bool checkCertName;

	[Token(Token = "0x40001F5")]
	[FieldOffset(Offset = "0x72")]
	private bool checkCertRevocationStatus;

	[Token(Token = "0x40001F6")]
	[FieldOffset(Offset = "0x73")]
	private bool? useServicePointManagerCallback;

	[Token(Token = "0x40001F7")]
	[FieldOffset(Offset = "0x75")]
	private bool skipSystemValidators;

	[Token(Token = "0x40001F8")]
	[FieldOffset(Offset = "0x76")]
	private bool callbackNeedsChain;

	[Token(Token = "0x40001F9")]
	[FieldOffset(Offset = "0x78")]
	private ICertificateValidator certificateValidator;

	[Token(Token = "0x40001FA")]
	[FieldOffset(Offset = "0x0")]
	private static MonoTlsSettings defaultSettings;

	[Token(Token = "0x1700006C")]
	public MonoRemoteCertificateValidationCallback RemoteCertificateValidationCallback
	{
		[Token(Token = "0x600015B")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600015C")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700006D")]
	public MonoLocalCertificateSelectionCallback ClientCertificateSelectionCallback
	{
		[Token(Token = "0x600015D")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600015E")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	public bool? UseServicePointManagerCallback
	{
		[Token(Token = "0x600015F")]
		[Address(RVA = "0x19377B0", Offset = "0x1935DB0", VA = "0x1819377B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000160")]
		[Address(RVA = "0x19377F0", Offset = "0x1935DF0", VA = "0x1819377F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	public bool CallbackNeedsCertificateChain
	{
		[Token(Token = "0x6000161")]
		[Address(RVA = "0x19376F0", Offset = "0x1935CF0", VA = "0x1819376F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000070")]
	public DateTime? CertificateValidationTime
	{
		[Token(Token = "0x6000162")]
		[Address(RVA = "0xC84140", Offset = "0xC82740", VA = "0x180C84140")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000163")]
		[Address(RVA = "0x19377C0", Offset = "0x1935DC0", VA = "0x1819377C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000071")]
	public X509CertificateCollection TrustAnchors
	{
		[Token(Token = "0x6000164")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000165")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000072")]
	public object UserSettings
	{
		[Token(Token = "0x6000166")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000167")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000073")]
	internal string[] CertificateSearchPaths
	{
		[Token(Token = "0x6000168")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000169")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000074")]
	internal bool SendCloseNotify
	{
		[Token(Token = "0x600016A")]
		[Address(RVA = "0x58A530", Offset = "0x588B30", VA = "0x18058A530")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600016B")]
		[Address(RVA = "0x58A8C0", Offset = "0x588EC0", VA = "0x18058A8C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public string[] ClientCertificateIssuers
	{
		[Token(Token = "0x600016C")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600016D")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public bool DisallowUnauthenticatedCertificateRequest
	{
		[Token(Token = "0x600016E")]
		[Address(RVA = "0x1937790", Offset = "0x1935D90", VA = "0x181937790")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600016F")]
		[Address(RVA = "0x19377D0", Offset = "0x1935DD0", VA = "0x1819377D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000077")]
	public TlsProtocols? EnabledProtocols
	{
		[Token(Token = "0x6000170")]
		[Address(RVA = "0x19377A0", Offset = "0x1935DA0", VA = "0x1819377A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000171")]
		[Address(RVA = "0x19377E0", Offset = "0x1935DE0", VA = "0x1819377E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000078")]
	[CLSCompliant(false)]
	public CipherSuiteCode[] EnabledCiphers
	{
		[Token(Token = "0x6000172")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000173")]
		[Address(RVA = "0xB48790", Offset = "0xB46D90", VA = "0x180B48790")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000079")]
	public static MonoTlsSettings DefaultSettings
	{
		[Token(Token = "0x6000175")]
		[Address(RVA = "0x1937700", Offset = "0x1935D00", VA = "0x181937700")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007A")]
	[Obsolete("Do not use outside System.dll!")]
	public ICertificateValidator CertificateValidator
	{
		[Token(Token = "0x6000177")]
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x19376E0", Offset = "0x1935CE0", VA = "0x1819376E0")]
	public MonoTlsSettings()
	{
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x1937470", Offset = "0x1935A70", VA = "0x181937470")]
	public static MonoTlsSettings CopyDefaultSettings()
	{
		return null;
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x1937370", Offset = "0x1935970", VA = "0x181937370")]
	[Obsolete("Do not use outside System.dll!")]
	public MonoTlsSettings CloneWithValidator(ICertificateValidator validator)
	{
		return null;
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x1937410", Offset = "0x1935A10", VA = "0x181937410")]
	public MonoTlsSettings Clone()
	{
		return null;
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x1937550", Offset = "0x1935B50", VA = "0x181937550")]
	private MonoTlsSettings(MonoTlsSettings other)
	{
	}
}
