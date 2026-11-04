// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Changelog.AottgChangelogSeenState
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Changelog/AottgChangelogSeenState.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Changelog;

[Token(Token = "0x2000944")]
public static class AottgChangelogSeenState
{
	[Token(Token = "0x4002DFC")]
	private const string FileName = "ChangelogSeen.txt";

	[Token(Token = "0x17000FB2")]
	public static string FilePathOverride
	{
		[Token(Token = "0x60056CA")]
		[Address(RVA = "0x23622C0", Offset = "0x23608C0", VA = "0x1823622C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60056CB")]
		[Address(RVA = "0x2362300", Offset = "0x2360900", VA = "0x182362300")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60056CC")]
	[Address(RVA = "0x2362240", Offset = "0x2360840", VA = "0x182362240")]
	public static bool ShouldAutoOpen(LatestChangelogVersionResponse latest)
	{
		return default(bool);
	}

	[Token(Token = "0x60056CD")]
	[Address(RVA = "0x2362060", Offset = "0x2360660", VA = "0x182362060")]
	public static void MarkSeen(LatestChangelogVersionResponse latest)
	{
	}

	[Token(Token = "0x60056CE")]
	[Address(RVA = "0x2362020", Offset = "0x2360620", VA = "0x182362020")]
	private static string Identity(LatestChangelogVersionResponse latest)
	{
		return null;
	}

	[Token(Token = "0x60056CF")]
	[Address(RVA = "0x2362180", Offset = "0x2360780", VA = "0x182362180")]
	private static string ReadSeenIdentity()
	{
		return null;
	}

	[Token(Token = "0x60056D0")]
	[Address(RVA = "0x2361F20", Offset = "0x2360520", VA = "0x182361F20")]
	private static string FilePath()
	{
		return null;
	}
}
