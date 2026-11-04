// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Changelog.PublicChangelogListResponse
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Changelog/PublicChangelogListResponse.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Changelog;

[Token(Token = "0x200093C")]
public sealed class PublicChangelogListResponse
{
	[Token(Token = "0x17000F95")]
	public int Total
	{
		[Token(Token = "0x6005674")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6005675")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F96")]
	public int Page
	{
		[Token(Token = "0x6005676")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6005677")]
		[Address(RVA = "0xD23EE0", Offset = "0xD224E0", VA = "0x180D23EE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F97")]
	public int PageSize
	{
		[Token(Token = "0x6005678")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6005679")]
		[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F98")]
	public IReadOnlyList<ChangelogSummaryResponse> Entries
	{
		[Token(Token = "0x600567A")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600567B")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6005673")]
	[Address(RVA = "0x2371AD0", Offset = "0x23700D0", VA = "0x182371AD0")]
	public PublicChangelogListResponse(int total, int page, int pageSize, ChangelogSummaryResponse[] entries)
	{
	}
}
