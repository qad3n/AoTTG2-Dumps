// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Api.AottgQueryPolicy
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Api/AottgQueryPolicy.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x20009C6")]
public sealed class AottgQueryPolicy
{
	[Token(Token = "0x4003105")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly AottgQueryPolicy Default;

	[Token(Token = "0x17000F9E")]
	public TimeSpan SuccessTtl
	{
		[Token(Token = "0x6005A8D")]
		[Address(RVA = "0x5D2AD20", Offset = "0x5D29D20", VA = "0x5D2AD20")]
		[CompilerGenerated]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x6005A8E")]
		[Address(RVA = "0x5D2AD30", Offset = "0x5D29D30", VA = "0x5D2AD30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F9F")]
	public TimeSpan? FailureTtl
	{
		[Token(Token = "0x6005A8F")]
		[Address(RVA = "0x5D2AD40", Offset = "0x5D29D40", VA = "0x5D2AD40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6005A90")]
		[Address(RVA = "0x5D2AD50", Offset = "0x5D29D50", VA = "0x5D2AD50")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FA0")]
	public bool PreserveStaleOnFailure
	{
		[Token(Token = "0x6005A91")]
		[Address(RVA = "0x5D2AD60", Offset = "0x5D29D60", VA = "0x5D2AD60")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6005A92")]
		[Address(RVA = "0x5D2AD70", Offset = "0x5D29D70", VA = "0x5D2AD70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6005A8C")]
	[Address(RVA = "0x5D27D60", Offset = "0x5D26D60", VA = "0x5D27D60")]
	public AottgQueryPolicy(TimeSpan successTtl, [Optional] TimeSpan? failureTtl, bool preserveStaleOnFailure = true)
	{
	}
}
