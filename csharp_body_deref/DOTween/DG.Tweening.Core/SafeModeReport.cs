using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace DG.Tweening.Core;

[Token(Token = "0x20000B2")]
internal struct SafeModeReport
{
	[Token(Token = "0x20000B3")]
	internal enum SafeModeReportType
	{
		[Token(Token = "0x400021B")]
		Unset,
		[Token(Token = "0x400021C")]
		TargetOrFieldMissing,
		[Token(Token = "0x400021D")]
		Callback,
		[Token(Token = "0x400021E")]
		StartupFailure
	}

	[Token(Token = "0x1700001E")]
	public int totMissingTargetOrFieldErrors
	{
		[Token(Token = "0x6000426")]
		[Address(RVA = "0x2320510", Offset = "0x2320510", VA = "0x2320510")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000427")]
		[Address(RVA = "0x2320520", Offset = "0x2320520", VA = "0x2320520")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public int totCallbackErrors
	{
		[Token(Token = "0x6000428")]
		[Address(RVA = "0x2320530", Offset = "0x2320530", VA = "0x2320530")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000429")]
		[Address(RVA = "0x2320540", Offset = "0x2320540", VA = "0x2320540")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public int totStartupErrors
	{
		[Token(Token = "0x600042A")]
		[Address(RVA = "0x2320550", Offset = "0x2320550", VA = "0x2320550")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600042B")]
		[Address(RVA = "0x2320560", Offset = "0x2320560", VA = "0x2320560")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public int totUnsetErrors
	{
		[Token(Token = "0x600042C")]
		[Address(RVA = "0x2320570", Offset = "0x2320570", VA = "0x2320570")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600042D")]
		[Address(RVA = "0x2320580", Offset = "0x2320580", VA = "0x2320580")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x2320590", Offset = "0x2320590", VA = "0x2320590")]
	public void Add(SafeModeReportType type)
	{
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x23205C0", Offset = "0x23205C0", VA = "0x23205C0")]
	public int GetTotErrors()
	{
		return default(int);
	}
}
