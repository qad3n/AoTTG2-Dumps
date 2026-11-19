// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputBindingUtil
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputBindingUtil.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x2000756")]
internal static class MobileInputBindingUtil
{
	[Token(Token = "0x6004709")]
	[Address(RVA = "0x5B77F50", Offset = "0x5B76F50", VA = "0x5B77F50")]
	public static string[] GetActionGroups()
	{
		// Lifted from source/cpp/UI/MobileInputBindingUtil.c (UI.MobileInputBindingUtil$$GetActionGroups): clean
		uint uVar1;
		String[] pSVar2;

		if (Il2CppMethodInitialized_07547951 == false) {
			Il2CppMethodInitialized_07547951 = true;
			uVar1 = (typeof(MobileInputBindingRegistry)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileInputBindingRegistry)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return pSVar2;
		}
		return pSVar2;
	}

	[Token(Token = "0x600470A")]
	[Address(RVA = "0x5B77FB0", Offset = "0x5B76FB0", VA = "0x5B77FB0")]
	public static string GetActionGroup(string value)
	{
		// Lifted from source/cpp/UI/MobileInputBindingUtil.c (UI.MobileInputBindingUtil$$GetActionGroup): clean
		bool bVar1;
		MobileInputBinding local_10;

		local_10 = null;
		bVar1 = MobileInputBindingRegistry.TryGetBinding(value, ref local_10);
		if (bVar1) {
			if (local_10 == null) {
				throw new NullReferenceException();
			}
			return local_10._Group_k__BackingField;
		}
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	[Token(Token = "0x600470B")]
	[Address(RVA = "0x5B78050", Offset = "0x5B77050", VA = "0x5B78050")]
	public static string[] GetActionNamesForGroup(string group)
	{
		// Lifted from source/cpp/UI/MobileInputBindingUtil.c (UI.MobileInputBindingUtil$$GetActionNamesForGroup): clean
		uint uVar1;
		String[] pSVar2;

		if (Il2CppMethodInitialized_07547953 == false) {
			Il2CppMethodInitialized_07547953 = true;
			uVar1 = (typeof(MobileInputBindingRegistry)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileInputBindingRegistry)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return pSVar2;
		}
		return pSVar2;
	}

	[Token(Token = "0x600470C")]
	[Address(RVA = "0x5B780C0", Offset = "0x5B770C0", VA = "0x5B780C0")]
	public static string GetActionLabel(string value, MobileInputLayoutRole role)
	{
		// Lifted from source/cpp/UI/MobileInputBindingUtil.c (UI.MobileInputBindingUtil$$GetActionLabel): 1 lines keep C-only constructs
		bool bVar1;
		String pSVar2;
		MethodInfo method_00;
		MobileInputBinding local_18;

		local_18 = null;
		method_00 = (MethodInfo)&local_18;
		bVar1 = MobileInputBindingRegistry.TryGetBinding(value, ref local_18);
		if (bVar1) {
		}
		else {
			bVar1 = String.Equals(value, "None", 4);
			if (!bVar1) {
				return value;
			}
			pSVar2 = UIManager.GetLocaleCommon("None");
		}
		return pSVar2;
	}

	[Token(Token = "0x600470D")]
	[Address(RVA = "0x5B78190", Offset = "0x5B77190", VA = "0x5B78190")]
	private static string GetActionLabel(MobileInputBinding binding)
	{
		// Lifted from source/cpp/UI/MobileInputBindingUtil.c (UI.MobileInputBindingUtil$$GetActionLabel): clean
		bool bVar1;
		String defaultValue;
		String pSVar2;
		String subCategory;
		MethodInfo pMVar3;
		String category;

		if (binding == null) {
			pSVar2 = UIManager.GetLocaleCommon("None");
			return pSVar2;
		}
		pMVar3 = (MethodInfo *)"MapEditor";
		bVar1 = (binding._Group_k__BackingField == "MapEditor");
		if (bVar1) {
			pSVar2 = binding._Name_k__BackingField;
			defaultValue = MobileInputBindingUtil.Labelize(pSVar2);
			subCategory = "Keybinds";
			category = "MapEditorSettings";
	label_05c7829d: ;
			pSVar2 = UIManager.GetLocale(category, subCategory, pSVar2, "", defaultValue);
			return pSVar2;
		}
		pMVar3 = (MethodInfo *)"Titan";
		bVar1 = (binding._Group_k__BackingField == "Titan");
		if (!bVar1) {
			pMVar3 = (MethodInfo *)"AnnieShifter";
			bVar1 = (binding._Group_k__BackingField == "AnnieShifter");
			if (!bVar1) {
				pMVar3 = (MethodInfo *)"ErenShifter";
				bVar1 = (binding._Group_k__BackingField == "ErenShifter");
				if (!bVar1) {
					pMVar3 = (MethodInfo)binding._Group_k__BackingField;
					subCategory = String.Concat("Keybinds.", (String)pMVar3);
					pSVar2 = binding._Name_k__BackingField;
					defaultValue = MobileInputBindingUtil.Labelize(pSVar2);
					category = "SettingsPopup";
					goto label_05c7829d;
				}
			}
		}
		pSVar2 = MobileInputBindingUtil.GetTitanActionLabel(binding._Name_k__BackingField);
		return pSVar2;
	}

	[Token(Token = "0x600470E")]
	[Address(RVA = "0x5B78670", Offset = "0x5B77670", VA = "0x5B78670")]
	private static string GetTitanActionLabel(string name)
	{
		// Lifted from source/cpp/UI/MobileInputBindingUtil.c (UI.MobileInputBindingUtil$$GetTitanActionLabel): clean
		uint startIndex;
		bool bVar1;
		String pSVar2;
		MethodInfo pMVar3;

		bVar1 = (name == "CoverNape1");
		if (bVar1) {
			name = "CoverNape";
		}
		if (name != null) {
			pMVar3 = (MethodInfo *)"Attack";
			bVar1 = name.StartsWith("Attack");
			if (!bVar1) {
				pSVar2 = MobileInputBindingUtil.Labelize(name);
				pSVar2 = UIManager.GetLocale("SettingsPopup", "Keybinds.Titan", name, "", pSVar2);
				return pSVar2;
			}
			if ("Attack" != null) {
				startIndex = ("Attack".fields)._stringLength;
				pSVar2 = name.Substring(startIndex);
				pSVar2 = MobileInputBindingUtil.Labelize(pSVar2);
				return pSVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600470F")]
	[Address(RVA = "0x5B783A0", Offset = "0x5B773A0", VA = "0x5B783A0")]
	private static string Labelize(string value)
	{
		// Lifted from source/cpp/UI/MobileInputBindingUtil.c (UI.MobileInputBindingUtil$$Labelize): 6 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		bool bVar4;
		ushort uVar5;
		ushort c;
		List<char> __this;
		Char[] pSVar6;
		String pSVar7;
		int iVar8;
		int iVar9;

		bVar4 = String.IsNullOrEmpty(value);
		if (bVar4) {
			return value;
		}
		__this = new List<char>();
		if (value == null) goto label_05c78661;
		if (0 < value._stringLength) {
			uVar5 = value.get_Chars(0);
			if (__this == null) goto label_05c78661;
			piVar1 = &__this._version;
			*piVar1 = *piVar1 + 1;
			pSVar6 = __this._items;
			if (pSVar6 == null) goto label_05c78661;
			uVar2 = __this._size;
			if (uVar2 < (uint)pSVar6.Length) {
				__this._size = uVar2 + 1;
				pSVar6[(int)uVar2] = uVar5;
				iVar9 = value._stringLength;
			}
			else {
				__this.AddWithResize(uVar5);
				iVar9 = value._stringLength;
			}
			if (1 < iVar9) {
				iVar9 = 0;
				do {
					uVar5 = value.get_Chars(iVar9 + 1);
					bVar4 = Char.IsUpper(uVar5);
					if (bVar4) {
						c = value.get_Chars(iVar9);
						bVar4 = Char.IsUpper(c);
						if (bVar4) goto label_05c78594;
						if (__this == null) goto label_05c78661;
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pSVar6 = __this._items;
						if (pSVar6 == null) goto label_05c78661;
						uVar2 = __this._size;
						if (uVar2 < (uint)pSVar6.Length) {
							__this._size = uVar2 + 1;
							pSVar6[(int)uVar2] = 0x20;
						}
						else {
							__this.AddWithResize(0x20);
						}
					}
					else {
	label_05c78594: ;
						if (__this == null) goto label_05c78661;
					}
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pSVar6 = __this._items;
					if (pSVar6 == null) goto label_05c78661;
					uVar2 = __this._size;
					if (uVar2 < (uint)pSVar6.Length) {
						__this._size = uVar2 + 1;
						pSVar6[(int)uVar2] = uVar5;
					}
					else {
						__this.AddWithResize(uVar5);
					}
					iVar8 = iVar9 + 2;
					iVar9 = iVar9 + 1;
				} while (iVar8 < value._stringLength);
			}
		}
		if (__this != null) {
			pSVar6 = __this.ToArray();
			return pSVar7;
		}
	label_05c78661: ;
		throw new NullReferenceException();
	}
}
