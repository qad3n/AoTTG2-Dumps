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

[Token(Token = "0x2000032")]
public sealed class MonoTlsSettings
{
	[Token(Token = "0x40001ED")]
	[FieldOffset(Offset = "0x70")]
	private bool cloned;

	[Token(Token = "0x40001EE")]
	[FieldOffset(Offset = "0x71")]
	private bool checkCertName;

	[Token(Token = "0x40001EF")]
	[FieldOffset(Offset = "0x72")]
	private bool checkCertRevocationStatus;

	[Token(Token = "0x40001F0")]
	[FieldOffset(Offset = "0x73")]
	private bool? useServicePointManagerCallback;

	[Token(Token = "0x40001F1")]
	[FieldOffset(Offset = "0x75")]
	private bool skipSystemValidators;

	[Token(Token = "0x40001F2")]
	[FieldOffset(Offset = "0x76")]
	private bool callbackNeedsChain;

	[Token(Token = "0x40001F3")]
	[FieldOffset(Offset = "0x78")]
	private ICertificateValidator certificateValidator;

	[Token(Token = "0x40001F4")]
	[FieldOffset(Offset = "0x0")]
	private static MonoTlsSettings defaultSettings;

	[Token(Token = "0x17000069")]
	public MonoRemoteCertificateValidationCallback RemoteCertificateValidationCallback
	{
		[Token(Token = "0x6000137")]
		[Address(RVA = "0x3ABC450", Offset = "0x3ABC450", VA = "0x3ABC450")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000138")]
		[Address(RVA = "0x3ABC460", Offset = "0x3ABC460", VA = "0x3ABC460")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	public MonoLocalCertificateSelectionCallback ClientCertificateSelectionCallback
	{
		[Token(Token = "0x6000139")]
		[Address(RVA = "0x3ABC470", Offset = "0x3ABC470", VA = "0x3ABC470")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600013A")]
		[Address(RVA = "0x3ABC480", Offset = "0x3ABC480", VA = "0x3ABC480")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700006B")]
	public bool? UseServicePointManagerCallback
	{
		[Token(Token = "0x600013B")]
		[Address(RVA = "0x3ABC490", Offset = "0x3ABC490", VA = "0x3ABC490")]
		get
		{
			return null;
		}
		[Token(Token = "0x600013C")]
		[Address(RVA = "0x3ABC4A0", Offset = "0x3ABC4A0", VA = "0x3ABC4A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006C")]
	public bool CallbackNeedsCertificateChain
	{
		[Token(Token = "0x600013D")]
		[Address(RVA = "0x3ABC4B0", Offset = "0x3ABC4B0", VA = "0x3ABC4B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006D")]
	public DateTime? CertificateValidationTime
	{
		[Token(Token = "0x600013E")]
		[Address(RVA = "0x3ABC4C0", Offset = "0x3ABC4C0", VA = "0x3ABC4C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600013F")]
		[Address(RVA = "0x3ABC4D0", Offset = "0x3ABC4D0", VA = "0x3ABC4D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	public X509CertificateCollection TrustAnchors
	{
		[Token(Token = "0x6000140")]
		[Address(RVA = "0x3ABC4E0", Offset = "0x3ABC4E0", VA = "0x3ABC4E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000141")]
		[Address(RVA = "0x3ABC4F0", Offset = "0x3ABC4F0", VA = "0x3ABC4F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	public object UserSettings
	{
		[Token(Token = "0x6000142")]
		[Address(RVA = "0x3ABC500", Offset = "0x3ABC500", VA = "0x3ABC500")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000143")]
		[Address(RVA = "0x3ABC510", Offset = "0x3ABC510", VA = "0x3ABC510")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000070")]
	internal string[] CertificateSearchPaths
	{
		[Token(Token = "0x6000144")]
		[Address(RVA = "0x3ABC520", Offset = "0x3ABC520", VA = "0x3ABC520")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000145")]
		[Address(RVA = "0x3ABC530", Offset = "0x3ABC530", VA = "0x3ABC530")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000071")]
	internal bool SendCloseNotify
	{
		[Token(Token = "0x6000146")]
		[Address(RVA = "0x3ABC540", Offset = "0x3ABC540", VA = "0x3ABC540")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000147")]
		[Address(RVA = "0x3ABC550", Offset = "0x3ABC550", VA = "0x3ABC550")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000072")]
	public string[] ClientCertificateIssuers
	{
		[Token(Token = "0x6000148")]
		[Address(RVA = "0x3ABC560", Offset = "0x3ABC560", VA = "0x3ABC560")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000149")]
		[Address(RVA = "0x3ABC570", Offset = "0x3ABC570", VA = "0x3ABC570")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000073")]
	public bool DisallowUnauthenticatedCertificateRequest
	{
		[Token(Token = "0x600014A")]
		[Address(RVA = "0x3ABC580", Offset = "0x3ABC580", VA = "0x3ABC580")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600014B")]
		[Address(RVA = "0x3ABC590", Offset = "0x3ABC590", VA = "0x3ABC590")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000074")]
	public TlsProtocols? EnabledProtocols
	{
		[Token(Token = "0x600014C")]
		[Address(RVA = "0x3ABC5A0", Offset = "0x3ABC5A0", VA = "0x3ABC5A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600014D")]
		[Address(RVA = "0x3ABC5B0", Offset = "0x3ABC5B0", VA = "0x3ABC5B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	[CLSCompliant(false)]
	public CipherSuiteCode[] EnabledCiphers
	{
		[Token(Token = "0x600014E")]
		[Address(RVA = "0x3ABC5C0", Offset = "0x3ABC5C0", VA = "0x3ABC5C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600014F")]
		[Address(RVA = "0x3ABC5D0", Offset = "0x3ABC5D0", VA = "0x3ABC5D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public static MonoTlsSettings DefaultSettings
	{
		[Token(Token = "0x6000151")]
		[Address(RVA = "0x3ABC5F0", Offset = "0x3ABC5F0", VA = "0x3ABC5F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000077")]
	[Obsolete("Do not use outside System.dll!")]
	public ICertificateValidator CertificateValidator
	{
		[Token(Token = "0x6000153")]
		[Address(RVA = "0x3ABC790", Offset = "0x3ABC790", VA = "0x3ABC790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x3ABC5E0", Offset = "0x3ABC5E0", VA = "0x3ABC5E0")]
	public MonoTlsSettings()
	{
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x3ABC680", Offset = "0x3ABC680", VA = "0x3ABC680")]
	public static MonoTlsSettings CopyDefaultSettings()
	{
		return null;
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x3ABC7A0", Offset = "0x3ABC7A0", VA = "0x3ABC7A0")]
	[Obsolete("Do not use outside System.dll!")]
	public MonoTlsSettings CloneWithValidator(ICertificateValidator validator)
	{
		return null;
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x3ABC740", Offset = "0x3ABC740", VA = "0x3ABC740")]
	public MonoTlsSettings Clone()
	{
		return null;
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x3ABC820", Offset = "0x3ABC820", VA = "0x3ABC820")]
	private MonoTlsSettings(MonoTlsSettings other)
	{
	}
}
