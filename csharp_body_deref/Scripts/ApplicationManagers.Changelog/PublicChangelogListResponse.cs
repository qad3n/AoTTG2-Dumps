// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Changelog.PublicChangelogListResponse
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Changelog/PublicChangelogListResponse.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Changelog;

[Token(Token = "0x20007B1")]
public sealed class PublicChangelogListResponse
{
	[Token(Token = "0x17000E32")]
	public int Total
	{
		[Token(Token = "0x60049FC")]
		[Address(RVA = "0x43C8730", Offset = "0x43C8730", VA = "0x43C8730")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60049FD")]
		[Address(RVA = "0x43C8740", Offset = "0x43C8740", VA = "0x43C8740")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E33")]
	public int Page
	{
		[Token(Token = "0x60049FE")]
		[Address(RVA = "0x43C8750", Offset = "0x43C8750", VA = "0x43C8750")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60049FF")]
		[Address(RVA = "0x43C8760", Offset = "0x43C8760", VA = "0x43C8760")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E34")]
	public int PageSize
	{
		[Token(Token = "0x6004A00")]
		[Address(RVA = "0x43C8770", Offset = "0x43C8770", VA = "0x43C8770")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6004A01")]
		[Address(RVA = "0x43C8780", Offset = "0x43C8780", VA = "0x43C8780")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E35")]
	public IReadOnlyList<ChangelogSummaryResponse> Entries
	{
		[Token(Token = "0x6004A02")]
		[Address(RVA = "0x43C8790", Offset = "0x43C8790", VA = "0x43C8790")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004A03")]
		[Address(RVA = "0x43C87A0", Offset = "0x43C87A0", VA = "0x43C87A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60049FB")]
	[Address(RVA = "0x43C8690", Offset = "0x43C8690", VA = "0x43C8690")]
	public PublicChangelogListResponse(int total, int page, int pageSize, ChangelogSummaryResponse[] entries)
	{
	}
}
