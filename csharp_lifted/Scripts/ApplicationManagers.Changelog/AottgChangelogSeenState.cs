// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Changelog.AottgChangelogSeenState
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Changelog/AottgChangelogSeenState.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogSeenState.c (ApplicationManagers.Changelog.AottgChangelogSeenState$$get_FilePathOverride): clean
			return AottgChangelogSeenState. _FilePathOverride_k__BackingField;
		}
		[Token(Token = "0x6005A24")]
		[Address(RVA = "0x5D26420", Offset = "0x5D25420", VA = "0x5D26420")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogSeenState.c (ApplicationManagers.Changelog.AottgChangelogSeenState$$set_FilePathOverride): clean
			AottgChangelogSeenState. _FilePathOverride_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6005A25")]
	[Address(RVA = "0x5D26470", Offset = "0x5D25470", VA = "0x5D26470")]
	public static bool ShouldAutoOpen(LatestChangelogVersionResponse latest)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogSeenState.c (ApplicationManagers.Changelog.AottgChangelogSeenState$$ShouldAutoOpen): 1 lines keep C-only constructs
		String value;
		bool bVar1;
		bool bVar2;
		String a;
		MethodInfo method_00;

		if (latest == null) {
			bVar2 = false;
		}
		else {
			bVar2 = false;
			bVar1 = String.IsNullOrEmpty(latest._ContentHash_k__BackingField);
			if (latest._HasChangelog_k__BackingField != false) {
				value = (&latest._Version_k__BackingField)[!bVar1];
				bVar2 = false;
				bVar1 = String.IsNullOrEmpty(value);
				if (!bVar1) {
					method_00 = (MethodInfo)latest._Version_k__BackingField;
					bVar2 = false;
					bVar1 = String.IsNullOrEmpty((String)method_00);
					if (!bVar1) {
						a = AottgChangelogSeenState.ReadSeenIdentity();
						bVar2 = String.Equals(a, value, 4);
						bVar2 = !bVar2;
					}
				}
			}
		}
		return bVar2;
	}

	[Token(Token = "0x6005A26")]
	[Address(RVA = "0x5D26740", Offset = "0x5D25740", VA = "0x5D26740")]
	public static void MarkSeen(LatestChangelogVersionResponse latest)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogSeenState.c (ApplicationManagers.Changelog.AottgChangelogSeenState$$MarkSeen): 1 lines keep C-only constructs
		bool bVar1;
		String pSVar2;
		MethodInfo pMVar3;
		MethodInfo value;

		if (latest == null) {
			value = null;
		}
		else {
			bVar1 = String.IsNullOrEmpty(latest._ContentHash_k__BackingField);
			value = (MethodInfo)(&latest._Version_k__BackingField)[!bVar1];
		}
		pMVar3 = value;
		bVar1 = String.IsNullOrEmpty((String)value);
		if (!bVar1) {
			pSVar2 = AottgChangelogSeenState.FilePath();
			pMVar3 = (MethodInfo)Path.GetDirectoryName(pSVar2);
			Directory.CreateDirectory((String)pMVar3);
			pSVar2 = AottgChangelogSeenState.FilePath();
			File.WriteAllText(pSVar2, (String)value);
		}
		return;
	}

	[Token(Token = "0x6005A27")]
	[Address(RVA = "0x5D264F0", Offset = "0x5D254F0", VA = "0x5D264F0")]
	private static string Identity(LatestChangelogVersionResponse latest)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogSeenState.c (ApplicationManagers.Changelog.AottgChangelogSeenState$$Identity): 1 lines keep C-only constructs
		bool bVar1;

		if (latest == null) {
			return null;
		}
		bVar1 = String.IsNullOrEmpty(latest._ContentHash_k__BackingField);
		return (&latest._Version_k__BackingField)[!bVar1];
	}

	[Token(Token = "0x6005A28")]
	[Address(RVA = "0x5D26520", Offset = "0x5D25520", VA = "0x5D26520")]
	private static string ReadSeenIdentity()
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogSeenState.c (ApplicationManagers.Changelog.AottgChangelogSeenState$$ReadSeenIdentity): clean
		bool bVar1;
		String pSVar2;

		bVar1 = String.IsNullOrEmpty(AottgChangelogSeenState. _FilePathOverride_k__BackingField);
		if (bVar1) {
			pSVar2 = FolderPaths.Settings;
			pSVar2 = Path.Combine(pSVar2, "ChangelogSeen.txt");
		}
		else {
			pSVar2 = AottgChangelogSeenState. _FilePathOverride_k__BackingField;
		}
		bVar1 = File.Exists(pSVar2);
		if (bVar1) {
			pSVar2 = File.ReadAllText(pSVar2);
			if (pSVar2 == null) {
				throw new NullReferenceException();
			}
			pSVar2 = pSVar2.Trim();
		}
		else {
			pSVar2 = null;
		}
		return pSVar2;
	}

	[Token(Token = "0x6005A29")]
	[Address(RVA = "0x5D268D0", Offset = "0x5D258D0", VA = "0x5D268D0")]
	private static string FilePath()
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogSeenState.c (ApplicationManagers.Changelog.AottgChangelogSeenState$$FilePath): clean
		bool bVar1;
		String pSVar2;

		bVar1 = String.IsNullOrEmpty(AottgChangelogSeenState. _FilePathOverride_k__BackingField);
		if (bVar1) {
			pSVar2 = FolderPaths.Settings;
			pSVar2 = Path.Combine(pSVar2, "ChangelogSeen.txt");
			return pSVar2;
		}
		return AottgChangelogSeenState. _FilePathOverride_k__BackingField;
	}
}
