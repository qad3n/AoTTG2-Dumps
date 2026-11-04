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

[Token(Token = "0x200095F")]
public sealed class AottgQueryPolicy
{
	[Token(Token = "0x4002E57")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly AottgQueryPolicy Default;

	[Token(Token = "0x17000FBF")]
	public TimeSpan SuccessTtl
	{
		[Token(Token = "0x6005734")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x6005735")]
		[Address(RVA = "0x560EC0", Offset = "0x55F4C0", VA = "0x180560EC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FC0")]
	public TimeSpan? FailureTtl
	{
		[Token(Token = "0x6005736")]
		[Address(RVA = "0x8E7990", Offset = "0x8E5F90", VA = "0x1808E7990")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6005737")]
		[Address(RVA = "0x111C9E0", Offset = "0x111AFE0", VA = "0x18111C9E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FC1")]
	public bool PreserveStaleOnFailure
	{
		[Token(Token = "0x6005738")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6005739")]
		[Address(RVA = "0xF1D940", Offset = "0xF1BF40", VA = "0x180F1D940")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6005733")]
	[Address(RVA = "0x23680F0", Offset = "0x23666F0", VA = "0x1823680F0")]
	public AottgQueryPolicy(TimeSpan successTtl, [Optional] TimeSpan? failureTtl, bool preserveStaleOnFailure = true)
	{
	}
}
