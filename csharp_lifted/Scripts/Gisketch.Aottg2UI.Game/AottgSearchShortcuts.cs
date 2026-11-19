// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgSearchShortcuts
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgSearchShortcuts.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001D2")]
internal static class AottgSearchShortcuts
{
	[Token(Token = "0x40009A4")]
	public const string GlobalActionId = "dialog.aottg-search-palette";

	[Token(Token = "0x6000B05")]
	[Address(RVA = "0x5D6D150", Offset = "0x5D6C150", VA = "0x5D6D150")]
	public static string CurrentScreenActionId(string activeScreenId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSearchShortcuts.c (Gisketch.Aottg2UI.Game.AottgSearchShortcuts$$CurrentScreenActionId): 1 lines keep C-only constructs
		bool bVar1;
		String* ppSVar2;

		bVar1 = String.Equals(activeScreenId, "settings", 5);
		if (bVar1) {
			ppSVar2 = &"dialog.aottg-settings-search-palette";
		}
		else {
			bVar1 = String.Equals(activeScreenId, "pause", 5);
			if (!bVar1) {
				return null;
			}
			ppSVar2 = &"dialog.aottg-pause-search-palette";
		}
		return *ppSVar2;
	}

	[Token(Token = "0x6000B06")]
	[Address(RVA = "0x5D72E30", Offset = "0x5D71E30", VA = "0x5D72E30")]
	public static string CurrentScreenTooltip()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSearchShortcuts.c (Gisketch.Aottg2UI.Game.AottgSearchShortcuts$$CurrentScreenTooltip): clean
		InputSettings pSVar1;
		GeneralInputSettings pSVar2;
		String pSVar3;
		String arg0;
		KeybindSetting setting;

		pSVar1 = SettingsManager.InputSettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.General, pSVar2 == null)) {
			setting = null;
		}
		else {
			setting = pSVar2.OpenCurrentScreenSearch;
		}
		pSVar3 = Aottg2GisketchLocale.Text("Common.SearchCurrentScreenShortcut");
		arg0 = AottgSearchShortcuts.PrimaryBindingLabel(setting);
		pSVar3 = String.Format(pSVar3, (object)arg0);
		return pSVar3;
	}

	[Token(Token = "0x6000B07")]
	[Address(RVA = "0x5D72F00", Offset = "0x5D71F00", VA = "0x5D72F00")]
	internal static string CurrentScreenTooltip(KeybindSetting setting)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSearchShortcuts.c (Gisketch.Aottg2UI.Game.AottgSearchShortcuts$$CurrentScreenTooltip): clean
		String pSVar1;
		String arg0;

		pSVar1 = Aottg2GisketchLocale.Text("Common.SearchCurrentScreenShortcut");
		arg0 = AottgSearchShortcuts.PrimaryBindingLabel(setting);
		pSVar1 = String.Format(pSVar1, (object)arg0);
		return pSVar1;
	}

	[Token(Token = "0x6000B08")]
	[Address(RVA = "0x5D72F80", Offset = "0x5D71F80", VA = "0x5D72F80")]
	internal static string PrimaryBindingLabel(KeybindSetting setting)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSearchShortcuts.c (Gisketch.Aottg2UI.Game.AottgSearchShortcuts$$PrimaryBindingLabel): 1 lines keep C-only constructs
		List<InputKey> pSVar1;
		bool bVar2;
		InputKey pSVar3;
		String pSVar4;

		if (Il2CppMethodInitialized_07548786 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Count) ;
			Il2CppMethodInitialized_07548786 = true;
		}
		if (((setting == null) ||(pSVar1 = setting.InputKeys, pSVar1 == null)) ||(pSVar1._size == 0)) {
	label_05e730af: ;
			pSVar4 = Aottg2GisketchLocale.Text("Common.Unbound");
			return pSVar4;
		}
		pSVar3 = pSVar1.get_Item(0);
		if (pSVar3 != null) {
			bVar2 = pSVar3.IsNone();
			if (bVar2) goto label_05e730af;
			pSVar1 = setting.InputKeys;
			if (pSVar1 != null) {
				pSVar3 = pSVar1.get_Item(0);
				if (pSVar3 != null) {
					pSVar4 = pSVar3.ToString();
					if (pSVar4 != null) {
						pSVar4 = pSVar4.Replace("LeftControl", "Ctrl");
						if (pSVar4 != null) {
							pSVar4 = pSVar4.Replace("RightControl", "Ctrl");
							if (pSVar4 != null) {
								pSVar4 = pSVar4.Replace("LeftCommand", "Cmd");
								if (pSVar4 != null) {
									pSVar4 = pSVar4.Replace("RightCommand", "Cmd");
									if (pSVar4 != null) {
										pSVar4 = pSVar4.Replace("LeftShift", "Shift");
										if (pSVar4 != null) {
											pSVar4 = pSVar4.Replace("RightShift", "Shift");
											if (pSVar4 != null) {
												pSVar4 = pSVar4.Replace("LeftAlt", "Alt");
												if (pSVar4 != null) {
													pSVar4 = pSVar4.Replace("RightAlt", "Alt");
													if (pSVar4 != null) {
														pSVar4 = pSVar4.Replace("+", " + ");
														return pSVar4;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}
}
