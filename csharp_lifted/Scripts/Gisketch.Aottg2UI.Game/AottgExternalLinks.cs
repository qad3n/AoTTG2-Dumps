// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgExternalLinks
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinks.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200020E")]
public static class AottgExternalLinks
{
	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x5D86690", Offset = "0x5D85690", VA = "0x5D86690")]
	public static bool TryShow(string url)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinks.c (Gisketch.Aottg2UI.Game.AottgExternalLinks$$TryShow): clean
		bool bVar1;

		return bVar1;
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x5D866A0", Offset = "0x5D856A0", VA = "0x5D866A0")]
	public static void Show(string url)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinks.c (Gisketch.Aottg2UI.Game.AottgExternalLinks$$Show): clean
		bool bVar1;

		bVar1 = AottgExternalLinkDialogHost.ShowUrl(url);
		if (!bVar1) {
			bVar1 = String.IsNullOrWhiteSpace(url);
			if (!bVar1) {
				Debug.LogWarning((Il2CppObject *)"No AoTTG external link dialog host is available.");
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x5D86720", Offset = "0x5D85720", VA = "0x5D86720")]
	public static void Show(GisketchActionContext context, string url)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinks.c (Gisketch.Aottg2UI.Game.AottgExternalLinks$$Show): clean
		bool bVar1;

		bVar1 = AottgExternalLinkDialogHost.ShowUrl(url);
		if (!bVar1) {
			bVar1 = String.IsNullOrWhiteSpace(url);
			if (!bVar1) {
				Debug.LogWarning((Il2CppObject *)"No AoTTG external link dialog host is available.");
				return;
			}
		}
		return;
	}
}
