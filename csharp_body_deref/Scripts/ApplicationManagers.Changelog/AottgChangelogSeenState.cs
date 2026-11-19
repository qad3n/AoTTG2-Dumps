// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Changelog.AottgChangelogSeenState
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Changelog/AottgChangelogSeenState.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Changelog;

[Token(Token = "0x20009AB")]
public static class AottgChangelogSeenState
{
	[Token(Token = "0x40030AA")]
	private const string FileName = "ChangelogSeen.txt";

	[Token(Token = "0x17000F91")]
	public static string FilePathOverride
	{
		[Token(Token = "0x6005A23")]
		[Address(RVA = "0x5D263E0", Offset = "0x5D253E0", VA = "0x5D263E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6005A24")]
		[Address(RVA = "0x5D26420", Offset = "0x5D25420", VA = "0x5D26420")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6005A25")]
	[Address(RVA = "0x5D26470", Offset = "0x5D25470", VA = "0x5D26470")]
	public static bool ShouldAutoOpen(LatestChangelogVersionResponse latest)
	{
		return default(bool);
	}

	[Token(Token = "0x6005A26")]
	[Address(RVA = "0x5D26740", Offset = "0x5D25740", VA = "0x5D26740")]
	public static void MarkSeen(LatestChangelogVersionResponse latest)
	{
	}

	[Token(Token = "0x6005A27")]
	[Address(RVA = "0x5D264F0", Offset = "0x5D254F0", VA = "0x5D264F0")]
	private static string Identity(LatestChangelogVersionResponse latest)
	{
		return null;
	}

	[Token(Token = "0x6005A28")]
	[Address(RVA = "0x5D26520", Offset = "0x5D25520", VA = "0x5D26520")]
	private static string ReadSeenIdentity()
	{
		return null;
	}

	[Token(Token = "0x6005A29")]
	[Address(RVA = "0x5D268D0", Offset = "0x5D258D0", VA = "0x5D268D0")]
	private static string FilePath()
	{
		return null;
	}
}
