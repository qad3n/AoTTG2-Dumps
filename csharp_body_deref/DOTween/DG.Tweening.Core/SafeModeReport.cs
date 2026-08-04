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
		[Address(RVA = "0x2386DF0", Offset = "0x2386DF0", VA = "0x2386DF0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000427")]
		[Address(RVA = "0x2386E00", Offset = "0x2386E00", VA = "0x2386E00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public int totCallbackErrors
	{
		[Token(Token = "0x6000428")]
		[Address(RVA = "0x2386E10", Offset = "0x2386E10", VA = "0x2386E10")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000429")]
		[Address(RVA = "0x2386E20", Offset = "0x2386E20", VA = "0x2386E20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public int totStartupErrors
	{
		[Token(Token = "0x600042A")]
		[Address(RVA = "0x2386E30", Offset = "0x2386E30", VA = "0x2386E30")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600042B")]
		[Address(RVA = "0x2386E40", Offset = "0x2386E40", VA = "0x2386E40")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public int totUnsetErrors
	{
		[Token(Token = "0x600042C")]
		[Address(RVA = "0x2386E50", Offset = "0x2386E50", VA = "0x2386E50")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600042D")]
		[Address(RVA = "0x2386E60", Offset = "0x2386E60", VA = "0x2386E60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x2386E70", Offset = "0x2386E70", VA = "0x2386E70")]
	public void Add(SafeModeReportType type)
	{
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x2386EA0", Offset = "0x2386EA0", VA = "0x2386EA0")]
	public int GetTotErrors()
	{
		return default(int);
	}
}
