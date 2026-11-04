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
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000427")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public int totCallbackErrors
	{
		[Token(Token = "0x6000428")]
		[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000429")]
		[Address(RVA = "0x57AF00", Offset = "0x579500", VA = "0x18057AF00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public int totStartupErrors
	{
		[Token(Token = "0x600042A")]
		[Address(RVA = "0x57AEE0", Offset = "0x5794E0", VA = "0x18057AEE0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600042B")]
		[Address(RVA = "0x57AF20", Offset = "0x579520", VA = "0x18057AF20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public int totUnsetErrors
	{
		[Token(Token = "0x600042C")]
		[Address(RVA = "0x57AEF0", Offset = "0x5794F0", VA = "0x18057AEF0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600042D")]
		[Address(RVA = "0x57AF30", Offset = "0x579530", VA = "0x18057AF30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x57AE90", Offset = "0x579490", VA = "0x18057AE90")]
	public void Add(SafeModeReportType type)
	{
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x57AEB0", Offset = "0x5794B0", VA = "0x18057AEB0")]
	public int GetTotErrors()
	{
		return default(int);
	}
}
