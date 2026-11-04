// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangelogDialogState
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using ApplicationManagers.Changelog;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001CF")]
internal static class AottgChangelogDialogState
{
	[Token(Token = "0x40009CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly List<ChangelogSummaryResponse> History;

	[Token(Token = "0x17000128")]
	public static LatestChangelogVersionResponse LatestVersion
	{
		[Token(Token = "0x6000A7C")]
		[Address(RVA = "0x23A4A20", Offset = "0x23A3020", VA = "0x1823A4A20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A7D")]
		[Address(RVA = "0x23A4FF0", Offset = "0x23A35F0", VA = "0x1823A4FF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000129")]
	public static ChangelogEntryResponse LatestPreviewEntry
	{
		[Token(Token = "0x6000A7E")]
		[Address(RVA = "0x23A49D0", Offset = "0x23A2FD0", VA = "0x1823A49D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A7F")]
		[Address(RVA = "0x23A4F80", Offset = "0x23A3580", VA = "0x1823A4F80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700012A")]
	public static ChangelogEntryResponse ReaderEntry
	{
		[Token(Token = "0x6000A80")]
		[Address(RVA = "0x23A4D80", Offset = "0x23A3380", VA = "0x1823A4D80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A81")]
		[Address(RVA = "0x23A5060", Offset = "0x23A3660", VA = "0x1823A5060")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700012B")]
	public static AottgChangelogReaderMode ReaderMode
	{
		[Token(Token = "0x6000A82")]
		[Address(RVA = "0x23A4DD0", Offset = "0x23A33D0", VA = "0x1823A4DD0")]
		[CompilerGenerated]
		get
		{
			return default(AottgChangelogReaderMode);
		}
		[Token(Token = "0x6000A83")]
		[Address(RVA = "0x23A50D0", Offset = "0x23A36D0", VA = "0x1823A50D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700012C")]
	public static string SelectedEntryId
	{
		[Token(Token = "0x6000A84")]
		[Address(RVA = "0x23A4E20", Offset = "0x23A3420", VA = "0x1823A4E20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A85")]
		[Address(RVA = "0x23A5130", Offset = "0x23A3730", VA = "0x1823A5130")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700012D")]
	public static int HistoryPage
	{
		[Token(Token = "0x6000A86")]
		[Address(RVA = "0x23A4930", Offset = "0x23A2F30", VA = "0x1823A4930")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000A87")]
		[Address(RVA = "0x23A4EC0", Offset = "0x23A34C0", VA = "0x1823A4EC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700012E")]
	public static int HistoryTotal
	{
		[Token(Token = "0x6000A88")]
		[Address(RVA = "0x23A4980", Offset = "0x23A2F80", VA = "0x1823A4980")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000A89")]
		[Address(RVA = "0x23A4F20", Offset = "0x23A3520", VA = "0x1823A4F20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700012F")]
	public static int HistoryPageSize
	{
		[Token(Token = "0x6000A8A")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000130")]
	public static IReadOnlyList<ChangelogSummaryResponse> HistoryEntries
	{
		[Token(Token = "0x6000A8B")]
		[Address(RVA = "0x23A48E0", Offset = "0x23A2EE0", VA = "0x1823A48E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000131")]
	public static int SelectedHistoryIndex
	{
		[Token(Token = "0x6000A8C")]
		[Address(RVA = "0x23A4E70", Offset = "0x23A3470", VA = "0x1823A4E70")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000A8D")]
		[Address(RVA = "0x23A51A0", Offset = "0x23A37A0", VA = "0x1823A51A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000132")]
	public static bool HasMoreHistory
	{
		[Token(Token = "0x6000A8E")]
		[Address(RVA = "0x23A4820", Offset = "0x23A2E20", VA = "0x1823A4820")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000133")]
	public static bool HasHistory
	{
		[Token(Token = "0x6000A8F")]
		[Address(RVA = "0x23A47B0", Offset = "0x23A2DB0", VA = "0x1823A47B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000134")]
	public static bool CanGoPrevious
	{
		[Token(Token = "0x6000A90")]
		[Address(RVA = "0x23A45C0", Offset = "0x23A2BC0", VA = "0x1823A45C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000135")]
	public static bool CanGoNext
	{
		[Token(Token = "0x6000A91")]
		[Address(RVA = "0x23A4540", Offset = "0x23A2B40", VA = "0x1823A4540")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000136")]
	public static ChangelogSummaryResponse PreviousSummary
	{
		[Token(Token = "0x6000A92")]
		[Address(RVA = "0x23A4BC0", Offset = "0x23A31C0", VA = "0x1823A4BC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000137")]
	public static ChangelogSummaryResponse NextLoadedSummary
	{
		[Token(Token = "0x6000A93")]
		[Address(RVA = "0x23A4A70", Offset = "0x23A3070", VA = "0x1823A4A70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x23A4100", Offset = "0x23A2700", VA = "0x1823A4100")]
	public static void SetLatestVersion(LatestChangelogVersionResponse latestVersion)
	{
	}

	[Token(Token = "0x6000A95")]
	[Address(RVA = "0x23A4060", Offset = "0x23A2660", VA = "0x1823A4060")]
	public static void SetLatestPreview(ChangelogEntryResponse entry)
	{
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x23A4290", Offset = "0x23A2890", VA = "0x1823A4290")]
	public static void SetReader(AottgChangelogReaderMode mode, ChangelogEntryResponse entry)
	{
	}

	[Token(Token = "0x6000A97")]
	[Address(RVA = "0x23A3A30", Offset = "0x23A2030", VA = "0x1823A3A30")]
	public static void ClearReader(AottgChangelogReaderMode mode, [Optional] string selectedEntryId)
	{
	}

	[Token(Token = "0x6000A98")]
	[Address(RVA = "0x23A3D60", Offset = "0x23A2360", VA = "0x1823A3D60")]
	public static void ResetHistory()
	{
	}

	[Token(Token = "0x6000A99")]
	[Address(RVA = "0x23A3650", Offset = "0x23A1C50", VA = "0x1823A3650")]
	public static void AppendHistory(PublicChangelogListResponse list)
	{
	}

	[Token(Token = "0x6000A9A")]
	[Address(RVA = "0x23A3B90", Offset = "0x23A2190", VA = "0x1823A3B90")]
	public static ChangelogSummaryResponse HistoryAt(int index)
	{
		return null;
	}

	[Token(Token = "0x6000A9B")]
	[Address(RVA = "0x23A3ED0", Offset = "0x23A24D0", VA = "0x1823A3ED0")]
	public static void SelectHistoryId(string id)
	{
	}

	[Token(Token = "0x6000A9C")]
	[Address(RVA = "0x23A3C50", Offset = "0x23A2250", VA = "0x1823A3C50")]
	public static int IndexOfHistoryId(string id)
	{
		return default(int);
	}
}
