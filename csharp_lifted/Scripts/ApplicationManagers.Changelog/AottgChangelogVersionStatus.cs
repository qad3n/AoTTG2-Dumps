// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Changelog.AottgChangelogVersionStatus
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Changelog/AottgChangelogVersionStatus.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace ApplicationManagers.Changelog;

[Token(Token = "0x20009B7")]
public static class AottgChangelogVersionStatus
{
	[Token(Token = "0x6005A50")]
	[Address(RVA = "0x5D29210", Offset = "0x5D28210", VA = "0x5D29210")]
	public static AottgChangelogVersionState Evaluate(LatestChangelogVersionResponse latest, string currentGameVersion)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogVersionStatus.c (ApplicationManagers.Changelog.AottgChangelogVersionStatus$$Evaluate): clean
		bool bVar1;
		int iVar2;

		if ((latest != null) &&(latest._HasChangelog_k__BackingField != false)) {
			bVar1 = String.IsNullOrEmpty(latest._Version_k__BackingField);
			if (!bVar1) {
				bVar1 = String.Equals(latest._Version_k__BackingField, currentGameVersion, 4);
				iVar2 = 2 - (uint)bVar1;
			}
		}
		return iVar2;
	}
}
