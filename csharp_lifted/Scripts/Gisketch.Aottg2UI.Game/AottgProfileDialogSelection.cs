// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfileDialogSelection
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfileDialogSelection.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000312")]
internal static class AottgProfileDialogSelection
{
	[Token(Token = "0x4000F8D")]
	[FieldOffset(Offset = "0x0")]
	public static string AvatarKey;

	[Token(Token = "0x4000F8E")]
	[FieldOffset(Offset = "0x8")]
	public static string BannerKey;

	[Token(Token = "0x6001332")]
	[Address(RVA = "0x57FB490", Offset = "0x57FA490", VA = "0x57FB490")]
	public static void Set(string pickerId, string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileDialogSelection.c (Gisketch.Aottg2UI.Game.AottgProfileDialogSelection$$Set): 1 lines keep C-only constructs
		bool bVar1;
		Gisketch_Aottg2UI_Game_AottgProfileDialogSelection_StaticFields pGVar2;

		bVar1 = (pickerId == "avatar-picker");
		if (bVar1) {
			AottgProfileDialogSelection.AvatarKey = key;
			pGVar2 = typeof(AottgProfileDialogSelection).static_fields;
		}
		else {
			bVar1 = (pickerId == "banner-picker");
			if (!bVar1) {
				return;
			}
			pGVar2 = typeof(AottgProfileDialogSelection).static_fields;
			pGVar2.BannerKey = key;
			pGVar2 = (Gisketch_Aottg2UI_Game_AottgProfileDialogSelection_StaticFields)&pGVar2.BannerKey;
		}
		return;
	}
}
