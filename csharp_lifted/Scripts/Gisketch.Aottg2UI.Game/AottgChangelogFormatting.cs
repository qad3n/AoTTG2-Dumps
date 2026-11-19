// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangelogFormatting
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogFormatting.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001E7")]
internal static class AottgChangelogFormatting
{
	[Token(Token = "0x6000B58")]
	[Address(RVA = "0x5D77010", Offset = "0x5D76010", VA = "0x5D77010")]
	public static string ShortDate(string isoDate)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogFormatting.c (Gisketch.Aottg2UI.Game.AottgChangelogFormatting$$ShortDate): clean
		bool bVar1;
		String pSVar2;

		bVar1 = String.IsNullOrEmpty(isoDate);
		if (bVar1) {
			pSVar2 = Aottg2GisketchLocale.Text("Changelog.UnknownDate");
			return pSVar2;
		}
		if (isoDate == null) {
			throw new NullReferenceException();
		}
		if (isoDate._stringLength < 10) {
			return isoDate;
		}
		pSVar2 = isoDate.Substring(0, 10);
		return pSVar2;
	}

	[Token(Token = "0x6000B59")]
	[Address(RVA = "0x5D770A0", Offset = "0x5D760A0", VA = "0x5D770A0")]
	public static string ErrorText(string error)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogFormatting.c (Gisketch.Aottg2UI.Game.AottgChangelogFormatting$$ErrorText): 3 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		String pSVar3;
		String* ppSVar4;

		bVar2 = String.IsNullOrEmpty(error);
		if (!bVar2) {
			bVar2 = (error == "network_error");
			if (bVar2) {
				ppSVar4 = &"Network.CheckConnection";
				uVar1 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
				goto joined_r0x05e7718d;
			}
			bVar2 = (error == "bad_response");
			if (bVar2) {
				ppSVar4 = &"Changelog.BadResponse";
				uVar1 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
				goto joined_r0x05e7718d;
			}
			bVar2 = (error == "not_initialized");
			if (bVar2) {
				ppSVar4 = &"Changelog.NotReady";
				uVar1 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
				goto joined_r0x05e7718d;
			}
			bVar2 = (error == "bad_id");
			if (bVar2) {
				ppSVar4 = &"Changelog.BadId";
				uVar1 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
				goto joined_r0x05e7718d;
			}
		}
		ppSVar4 = &"Common.TryAgain";
		uVar1 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
	joined_r0x05e7718d: ;
		if (uVar1 == 0) {
			pSVar3 = Aottg2GisketchLocale.Text(*ppSVar4);
			return pSVar3;
		}
		pSVar3 = Aottg2GisketchLocale.Text(*ppSVar4);
		return pSVar3;
	}
}
