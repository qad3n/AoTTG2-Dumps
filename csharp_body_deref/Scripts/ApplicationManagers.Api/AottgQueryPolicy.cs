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

[Token(Token = "0x20007D2")]
public sealed class AottgQueryPolicy
{
	[Token(Token = "0x4002585")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly AottgQueryPolicy Default;

	[Token(Token = "0x17000E5C")]
	public TimeSpan SuccessTtl
	{
		[Token(Token = "0x6004ABB")]
		[Address(RVA = "0x43CEF10", Offset = "0x43CEF10", VA = "0x43CEF10")]
		[CompilerGenerated]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x6004ABC")]
		[Address(RVA = "0x43CEF20", Offset = "0x43CEF20", VA = "0x43CEF20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E5D")]
	public TimeSpan? FailureTtl
	{
		[Token(Token = "0x6004ABD")]
		[Address(RVA = "0x43CEF30", Offset = "0x43CEF30", VA = "0x43CEF30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004ABE")]
		[Address(RVA = "0x43CEF40", Offset = "0x43CEF40", VA = "0x43CEF40")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E5E")]
	public bool PreserveStaleOnFailure
	{
		[Token(Token = "0x6004ABF")]
		[Address(RVA = "0x43CEF50", Offset = "0x43CEF50", VA = "0x43CEF50")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6004AC0")]
		[Address(RVA = "0x43CEF60", Offset = "0x43CEF60", VA = "0x43CEF60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6004ABA")]
	[Address(RVA = "0x43C40F0", Offset = "0x43C40F0", VA = "0x43C40F0")]
	public AottgQueryPolicy(TimeSpan successTtl, [Optional] TimeSpan? failureTtl, bool preserveStaleOnFailure = true)
	{
	}
}
