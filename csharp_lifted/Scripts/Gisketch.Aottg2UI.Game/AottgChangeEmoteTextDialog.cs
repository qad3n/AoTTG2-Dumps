// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgChangeEmoteTextDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000301")]
[AottgDialog("profile-change-emote-text")]
public sealed class AottgChangeEmoteTextDialog : AottgDialog
{
	[Token(Token = "0x4000F51")]
	public const string Id = "profile-change-emote-text";

	[Token(Token = "0x4000F52")]
	public const string InputId = "profile-change-emote-text-input";

	[Token(Token = "0x1700020B")]
	protected override string Title
	{
		[Token(Token = "0x60012DA")]
		[Address(RVA = "0x57F5310", Offset = "0x57F4310", VA = "0x57F5310", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeEmoteTextDialog.c (Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("MainMenu.Profile.ChangeEmoteText");
			return pSVar1;
		}
	}

	[Token(Token = "0x1700020C")]
	protected override string TitleIcon
	{
		[Token(Token = "0x60012DB")]
		[Address(RVA = "0x57F5370", Offset = "0x57F4370", VA = "0x57F5370", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeEmoteTextDialog.c (Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$get_TitleIcon): clean
			return "material-icons/chat";
		}
	}

	[Token(Token = "0x1700020D")]
	protected override bool GuardUnsavedChanges
	{
		[Token(Token = "0x60012DC")]
		[Address(RVA = "0x57F53A0", Offset = "0x57F43A0", VA = "0x57F53A0", Slot = "12")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeEmoteTextDialog.c (Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$get_GuardUnsavedChanges): clean
			return true;
		}
	}

	[Token(Token = "0x1700020E")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60012DD")]
		[Address(RVA = "0x57F53B0", Offset = "0x57F43B0", VA = "0x57F53B0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeEmoteTextDialog.c (Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(520.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x60012DE")]
	[Address(RVA = "0x57F5470", Offset = "0x57F4470", VA = "0x57F5470", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeEmoteTextDialog.c (Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$BuildBody): clean
		int index;
		String pSVar1;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar2;
		MethodInfo method_00;

		index = AottgEmoteEditSelection.TextIndex;
		pSVar1 = Aottg2GisketchLocale.Text("MainMenu.Profile.TextEmotePlaceholder");
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (body != null) {
			pGVar2 = body.FormInput("profile-change-emote-text-input", "Text Emote", pSVar1, 0, "inputField", layout, null, null, 0.2, 0x28, null, null);
			method_00 = (MethodInfo *)"MainMenu.Profile.TextEmotePlaceholder";
			if (pGVar2 != null) {
				pGVar2.textKey = "MainMenu.Profile.TextEmotePlaceholder";
				pSVar1 = AottgChangeEmoteTextDialog.TextValue(index);
				pGVar2.value = pSVar1;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60012DF")]
	[Address(RVA = "0x57F5730", Offset = "0x57F4730", VA = "0x57F5730", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeEmoteTextDialog.c (Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$BuildFooter): clean
		if (footer == null) {
			throw new NullReferenceException();
		}
		footer.QuietKey("Common.Cancel", "overlay.close");
		footer.PrimaryKey("Common.Save", "profile.emote.text.save");
		return;
	}

	[Token(Token = "0x60012E0")]
	[Address(RVA = "0x57F5650", Offset = "0x57F4650", VA = "0x57F5650")]
	private static string TextValue(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeEmoteTextDialog.c (Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$TextValue): 1 lines keep C-only constructs
		byte bVar1;
		EmoteSettings pSVar2;
		ListSetting<StringSetting> __this;
		BaseSetting pSVar3;

		pSVar2 = SettingsManager.EmoteSettings;
		if (pSVar2 == null) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		__this = pSVar2.TextEmotes;
		if (__this != null) {
			pSVar3 = __this.GetItemAt(index);
			if (pSVar3 != null) {
				bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
				if (((pSVar3.klass._2).typeHierarchyDepth < bVar1) ||((pSVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(StringSetting))) {
					throw new InvalidCastException();
				}
				return (*(ulong)((sbyte)pSVar3 + 0x20));
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60012E1")]
	[Address(RVA = "0x57F57C0", Offset = "0x57F47C0", VA = "0x57F57C0")]
	public AottgChangeEmoteTextDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeEmoteTextDialog.c (Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$.ctor): clean
		base();
		return;
	}
}
