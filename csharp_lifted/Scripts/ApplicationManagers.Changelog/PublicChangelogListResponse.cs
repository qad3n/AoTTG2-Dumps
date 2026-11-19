// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Changelog.PublicChangelogListResponse
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Changelog/PublicChangelogListResponse.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Changelog;

[Token(Token = "0x20009A3")]
public sealed class PublicChangelogListResponse
{
	[Token(Token = "0x17000F74")]
	public int Total
	{
		[Token(Token = "0x60059CD")]
		[Address(RVA = "0x5D24CB0", Offset = "0x5D23CB0", VA = "0x5D24CB0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Changelog/PublicChangelogListResponse.c (ApplicationManagers.Changelog.PublicChangelogListResponse$$get_Total): clean
			return this._Total_k__BackingField;
		}
		[Token(Token = "0x60059CE")]
		[Address(RVA = "0x5D24CC0", Offset = "0x5D23CC0", VA = "0x5D24CC0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Changelog/PublicChangelogListResponse.c (ApplicationManagers.Changelog.PublicChangelogListResponse$$set_Total): clean
			this._Total_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F75")]
	public int Page
	{
		[Token(Token = "0x60059CF")]
		[Address(RVA = "0x5D24CD0", Offset = "0x5D23CD0", VA = "0x5D24CD0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Changelog/PublicChangelogListResponse.c (ApplicationManagers.Changelog.PublicChangelogListResponse$$get_Page): clean
			return this._Page_k__BackingField;
		}
		[Token(Token = "0x60059D0")]
		[Address(RVA = "0x5D24CE0", Offset = "0x5D23CE0", VA = "0x5D24CE0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Changelog/PublicChangelogListResponse.c (ApplicationManagers.Changelog.PublicChangelogListResponse$$set_Page): clean
			this._Page_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F76")]
	public int PageSize
	{
		[Token(Token = "0x60059D1")]
		[Address(RVA = "0x5D24CF0", Offset = "0x5D23CF0", VA = "0x5D24CF0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Changelog/PublicChangelogListResponse.c (ApplicationManagers.Changelog.PublicChangelogListResponse$$get_PageSize): clean
			return this._PageSize_k__BackingField;
		}
		[Token(Token = "0x60059D2")]
		[Address(RVA = "0x5D24D00", Offset = "0x5D23D00", VA = "0x5D24D00")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Changelog/PublicChangelogListResponse.c (ApplicationManagers.Changelog.PublicChangelogListResponse$$set_PageSize): clean
			this._PageSize_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F77")]
	public IReadOnlyList<ChangelogSummaryResponse> Entries
	{
		[Token(Token = "0x60059D3")]
		[Address(RVA = "0x5D24D10", Offset = "0x5D23D10", VA = "0x5D24D10")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Changelog/PublicChangelogListResponse.c (ApplicationManagers.Changelog.PublicChangelogListResponse$$get_Entries): clean
			return this._Entries_k__BackingField;
		}
		[Token(Token = "0x60059D4")]
		[Address(RVA = "0x5D24D20", Offset = "0x5D23D20", VA = "0x5D24D20")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Changelog/PublicChangelogListResponse.c (ApplicationManagers.Changelog.PublicChangelogListResponse$$set_Entries): clean
			this._Entries_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x60059CC")]
	[Address(RVA = "0x5D24C10", Offset = "0x5D23C10", VA = "0x5D24C10")]
	public PublicChangelogListResponse(int total, int page, int pageSize, ChangelogSummaryResponse[] entries)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/PublicChangelogListResponse.c (ApplicationManagers.Changelog.PublicChangelogListResponse$$.ctor): clean
		ReadOnlyCollection<T> pSVar1;

		base();
		this._Total_k__BackingField = total;
		this._Page_k__BackingField = page;
		this._PageSize_k__BackingField = pageSize;
		if (entries == null) {
			entries = (ChangelogSummaryResponse[])new ChangelogSummaryResponse[0];
		}
		pSVar1 = Array.AsReadOnly<ChangelogSummaryResponse>((Object[])entries);
		this._Entries_k__BackingField =(IReadOnlyList<ChangelogSummaryResponse>)pSVar1;
		return;
	}
}
