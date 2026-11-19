// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Core.SafeModeReport
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3197400", Offset = "0x3196400", VA = "0x3197400")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000427")]
		[Address(RVA = "0x3197410", Offset = "0x3196410", VA = "0x3197410")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public int totCallbackErrors
	{
		[Token(Token = "0x6000428")]
		[Address(RVA = "0x3197420", Offset = "0x3196420", VA = "0x3197420")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000429")]
		[Address(RVA = "0x3197430", Offset = "0x3196430", VA = "0x3197430")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public int totStartupErrors
	{
		[Token(Token = "0x600042A")]
		[Address(RVA = "0x3197440", Offset = "0x3196440", VA = "0x3197440")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600042B")]
		[Address(RVA = "0x3197450", Offset = "0x3196450", VA = "0x3197450")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public int totUnsetErrors
	{
		[Token(Token = "0x600042C")]
		[Address(RVA = "0x3197460", Offset = "0x3196460", VA = "0x3197460")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600042D")]
		[Address(RVA = "0x3197470", Offset = "0x3196470", VA = "0x3197470")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x3197480", Offset = "0x3196480", VA = "0x3197480")]
	public void Add(SafeModeReportType type)
	{
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x31974B0", Offset = "0x31964B0", VA = "0x31974B0")]
	public int GetTotErrors()
	{
		return default(int);
	}
}
