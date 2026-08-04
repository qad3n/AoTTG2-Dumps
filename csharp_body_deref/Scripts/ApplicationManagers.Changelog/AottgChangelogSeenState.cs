// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Changelog.AottgChangelogSeenState
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Changelog/AottgChangelogSeenState.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Changelog;

[Token(Token = "0x20007B9")]
public static class AottgChangelogSeenState
{
	[Token(Token = "0x400252E")]
	private const string FileName = "ChangelogSeen.txt";

	[Token(Token = "0x17000E4F")]
	public static string FilePathOverride
	{
		[Token(Token = "0x6004A52")]
		[Address(RVA = "0x43CA180", Offset = "0x43CA180", VA = "0x43CA180")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004A53")]
		[Address(RVA = "0x43CA1C0", Offset = "0x43CA1C0", VA = "0x43CA1C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6004A54")]
	[Address(RVA = "0x43CA210", Offset = "0x43CA210", VA = "0x43CA210")]
	public static bool ShouldAutoOpen(LatestChangelogVersionResponse latest, string currentGameVersion)
	{
		return default(bool);
	}

	[Token(Token = "0x6004A55")]
	[Address(RVA = "0x43CA440", Offset = "0x43CA440", VA = "0x43CA440")]
	public static void MarkSeen(LatestChangelogVersionResponse latest)
	{
	}

	[Token(Token = "0x6004A56")]
	[Address(RVA = "0x43CA2B0", Offset = "0x43CA2B0", VA = "0x43CA2B0")]
	private static string Identity(LatestChangelogVersionResponse latest)
	{
		return null;
	}

	[Token(Token = "0x6004A57")]
	[Address(RVA = "0x43CA2E0", Offset = "0x43CA2E0", VA = "0x43CA2E0")]
	private static string ReadSeenIdentity()
	{
		return null;
	}

	[Token(Token = "0x6004A58")]
	[Address(RVA = "0x43CA600", Offset = "0x43CA600", VA = "0x43CA600")]
	private static string FilePath()
	{
		return null;
	}
}
