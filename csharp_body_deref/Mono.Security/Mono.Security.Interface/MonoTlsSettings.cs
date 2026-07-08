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
		[Address(RVA = "0x3A4F790", Offset = "0x3A4F790", VA = "0x3A4F790")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000138")]
		[Address(RVA = "0x3A4F7A0", Offset = "0x3A4F7A0", VA = "0x3A4F7A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	public MonoLocalCertificateSelectionCallback ClientCertificateSelectionCallback
	{
		[Token(Token = "0x6000139")]
		[Address(RVA = "0x3A4F7B0", Offset = "0x3A4F7B0", VA = "0x3A4F7B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600013A")]
		[Address(RVA = "0x3A4F7C0", Offset = "0x3A4F7C0", VA = "0x3A4F7C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700006B")]
	public bool? UseServicePointManagerCallback
	{
		[Token(Token = "0x600013B")]
		[Address(RVA = "0x3A4F7D0", Offset = "0x3A4F7D0", VA = "0x3A4F7D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600013C")]
		[Address(RVA = "0x3A4F7E0", Offset = "0x3A4F7E0", VA = "0x3A4F7E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006C")]
	public bool CallbackNeedsCertificateChain
	{
		[Token(Token = "0x600013D")]
		[Address(RVA = "0x3A4F7F0", Offset = "0x3A4F7F0", VA = "0x3A4F7F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006D")]
	public DateTime? CertificateValidationTime
	{
		[Token(Token = "0x600013E")]
		[Address(RVA = "0x3A4F800", Offset = "0x3A4F800", VA = "0x3A4F800")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600013F")]
		[Address(RVA = "0x3A4F810", Offset = "0x3A4F810", VA = "0x3A4F810")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	public X509CertificateCollection TrustAnchors
	{
		[Token(Token = "0x6000140")]
		[Address(RVA = "0x3A4F820", Offset = "0x3A4F820", VA = "0x3A4F820")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000141")]
		[Address(RVA = "0x3A4F830", Offset = "0x3A4F830", VA = "0x3A4F830")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	public object UserSettings
	{
		[Token(Token = "0x6000142")]
		[Address(RVA = "0x3A4F840", Offset = "0x3A4F840", VA = "0x3A4F840")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000143")]
		[Address(RVA = "0x3A4F850", Offset = "0x3A4F850", VA = "0x3A4F850")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000070")]
	internal string[] CertificateSearchPaths
	{
		[Token(Token = "0x6000144")]
		[Address(RVA = "0x3A4F860", Offset = "0x3A4F860", VA = "0x3A4F860")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000145")]
		[Address(RVA = "0x3A4F870", Offset = "0x3A4F870", VA = "0x3A4F870")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000071")]
	internal bool SendCloseNotify
	{
		[Token(Token = "0x6000146")]
		[Address(RVA = "0x3A4F880", Offset = "0x3A4F880", VA = "0x3A4F880")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000147")]
		[Address(RVA = "0x3A4F890", Offset = "0x3A4F890", VA = "0x3A4F890")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000072")]
	public string[] ClientCertificateIssuers
	{
		[Token(Token = "0x6000148")]
		[Address(RVA = "0x3A4F8A0", Offset = "0x3A4F8A0", VA = "0x3A4F8A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000149")]
		[Address(RVA = "0x3A4F8B0", Offset = "0x3A4F8B0", VA = "0x3A4F8B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000073")]
	public bool DisallowUnauthenticatedCertificateRequest
	{
		[Token(Token = "0x600014A")]
		[Address(RVA = "0x3A4F8C0", Offset = "0x3A4F8C0", VA = "0x3A4F8C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600014B")]
		[Address(RVA = "0x3A4F8D0", Offset = "0x3A4F8D0", VA = "0x3A4F8D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000074")]
	public TlsProtocols? EnabledProtocols
	{
		[Token(Token = "0x600014C")]
		[Address(RVA = "0x3A4F8E0", Offset = "0x3A4F8E0", VA = "0x3A4F8E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600014D")]
		[Address(RVA = "0x3A4F8F0", Offset = "0x3A4F8F0", VA = "0x3A4F8F0")]
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
		[Address(RVA = "0x3A4F900", Offset = "0x3A4F900", VA = "0x3A4F900")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600014F")]
		[Address(RVA = "0x3A4F910", Offset = "0x3A4F910", VA = "0x3A4F910")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public static MonoTlsSettings DefaultSettings
	{
		[Token(Token = "0x6000151")]
		[Address(RVA = "0x3A4F930", Offset = "0x3A4F930", VA = "0x3A4F930")]
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
		[Address(RVA = "0x3A4FAD0", Offset = "0x3A4FAD0", VA = "0x3A4FAD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x3A4F920", Offset = "0x3A4F920", VA = "0x3A4F920")]
	public MonoTlsSettings()
	{
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x3A4F9C0", Offset = "0x3A4F9C0", VA = "0x3A4F9C0")]
	public static MonoTlsSettings CopyDefaultSettings()
	{
		return null;
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x3A4FAE0", Offset = "0x3A4FAE0", VA = "0x3A4FAE0")]
	[Obsolete("Do not use outside System.dll!")]
	public MonoTlsSettings CloneWithValidator(ICertificateValidator validator)
	{
		return null;
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x3A4FA80", Offset = "0x3A4FA80", VA = "0x3A4FA80")]
	public MonoTlsSettings Clone()
	{
		return null;
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x3A4FB60", Offset = "0x3A4FB60", VA = "0x3A4FB60")]
	private MonoTlsSettings(MonoTlsSettings other)
	{
	}
}
