// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsCategoryPage
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsCategoryPage.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000180")]
internal static class AottgSettingsCategoryPage
{
	[Token(Token = "0x6000856")]
	[Address(RVA = "0x5D3ACE0", Offset = "0x5D39CE0", VA = "0x5D3ACE0")]
	public static void Build(AottgUi content, AottgScreenSectionContext context, string categoryId, params AottgSettingsGroup[] groups)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsCategoryPage.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsCategoryPage$$Build): clean
		AottgSettingsGroup pGVar1;
		uint uVar2;
		String pSVar3;
		ulong uVar4;
		uint uVar5;
		ulong uVar6;
		AottgSettingsSearchContext local_58;

		local_58.CategoryTitle = null;
		local_58.GroupId = null;
		local_58.ScreenTitle = null;
		local_58.CategoryId = null;
		local_58.GroupTitle = null;
		pSVar3 = Aottg2GisketchLocale.Text("Common.Settings");
		pSVar3 = AottgSettingsSearchContext.TitleCase(pSVar3);
		local_58 = new AottgSettingsSearchContext(pSVar3, categoryId, context._SectionTitle_k__BackingField, null, null);
		if (groups == null) {
			groups = (AottgSettingsGroup[])new AottgSettingsGroup[0];
			if (groups == null) {
	label_05e3ae9d: ;
				throw new NullReferenceException();
			}
		}
		uVar2 = (uint)groups.Length;
		if (content == null) {
			if (0 < (int)uVar2) {
				uVar5 = 0;
				do {
					pGVar1 = groups[(int)uVar5];
					if (pGVar1 != null) {
						pGVar1._searchContext.GroupTitle = local_58.GroupTitle;
						pGVar1._searchContext.CategoryTitle = local_58.CategoryTitle;
						pGVar1._searchContext.GroupId = local_58.GroupId;
						pGVar1._searchContext.ScreenTitle = local_58.ScreenTitle;
						pGVar1._searchContext.CategoryId = local_58.CategoryId;
						if (uVar5 < (uint)groups.Length) goto label_05e3ae9d;
						goto label_05e3aea2;
					}
					uVar5 = uVar5 + 1;
				} while (uVar2 != uVar5);
			}
		}
		else if (0 < (int)uVar2) {
			uVar4 = groups.Length & 0xffffffff;
			uVar6 = 0;
			do {
				if (uVar4 <= uVar6) {
	label_05e3aea2: ;
					throw new IndexOutOfRangeException();
				}
				pGVar1 = groups[uVar6];
				if (pGVar1 != null) {
					pGVar1._searchContext.GroupTitle = local_58.GroupTitle;
					pGVar1._searchContext.CategoryTitle = local_58.CategoryTitle;
					pGVar1._searchContext.GroupId = local_58.GroupId;
					pGVar1._searchContext.ScreenTitle = local_58.ScreenTitle;
					pGVar1._searchContext.CategoryId = local_58.CategoryId;
					if ((uint)groups.Length <= uVar6) goto label_05e3aea2;
					content.Component((AottgComponent)groups[uVar6]);
					uVar4 = (ulong)(uint)groups.Length;
				}
				uVar6 = uVar6 + 1;
			} while ((long)uVar6 < (long)(int)uVar4);
		}
		return;
	}

	[Token(Token = "0x6000857")]
	[Address(RVA = "0x5D3A780", Offset = "0x5D39780", VA = "0x5D3A780")]
	public static void BuildVirtual(AottgUi content, AottgScreenSectionContext context, string categoryId, params AottgSettingsGroup[] groups)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsCategoryPage.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsCategoryPage$$BuildVirtual): 1 lines keep C-only constructs
		AottgVirtualSettingsScrollCategory __this;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgVirtualSettingsScrollCategory));
		__this = new AottgVirtualSettingsScrollCategory(context, categoryId, groups, null, 0.0, (Nullable<float>)0x0);
		if (content == null) {
			throw new NullReferenceException();
		}
		content.Component((AottgComponent)__this);
		return;
	}

	[Token(Token = "0x6000858")]
	[Address(RVA = "0x5D3AF40", Offset = "0x5D39F40", VA = "0x5D3AF40")]
	public static void BuildVirtual(AottgUi content, AottgScreenSectionContext context, string categoryId, float initialScrollOffset, AottgSettingsGroup[] groups)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsCategoryPage.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsCategoryPage$$BuildVirtual): 1 lines keep C-only constructs
		AottgVirtualSettingsScrollCategory __this;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgVirtualSettingsScrollCategory));
		__this = new AottgVirtualSettingsScrollCategory(context, categoryId, groups, null, initialScrollOffset, (Nullable<float>)0x0);
		if (content == null) {
			throw new NullReferenceException();
		}
		content.Component((AottgComponent)__this);
		return;
	}

	[Token(Token = "0x6000859")]
	[Address(RVA = "0x5D3A840", Offset = "0x5D39840", VA = "0x5D3A840")]
	public static void SyncState(GisketchUIRoot root, params AottgSettingsGroup[] groups)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsCategoryPage.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsCategoryPage$$SyncState): clean
		AottgSettingsGroup __this;
		bool bVar1;
		ulong uVar2;
		ulong uVar3;

		bVar1 = ((Object)root == null);
		if (((!bVar1) && (groups != null)) &&(0 < (int)groups.Length)) {
			uVar2 = groups.Length & 0xffffffff;
			uVar3 = 0;
			do {
				if (uVar2 <= uVar3) {
					throw new IndexOutOfRangeException();
				}
				__this = groups[uVar3];
				if (__this != null) {
					if (__this == null) {
						throw new NullReferenceException();
					}
					__this.SyncState(root);
					uVar2 = (ulong)(uint)groups.Length;
				}
				uVar3 = uVar3 + 1;
			} while ((long)uVar3 < (long)(int)uVar2);
		}
		return;
	}

	[Token(Token = "0x600085A")]
	[Address(RVA = "0x5D3B0B0", Offset = "0x5D3A0B0", VA = "0x5D3B0B0")]
	internal static string SafeId(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsCategoryPage.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsCategoryPage$$SafeId): clean
		String pSVar1;

		if ((value != null) ||(value = (String)**(long*)(g_data_07556758 + 0xb8), value != null)) {
			pSVar1 = value.Trim();
			if (pSVar1 != null) {
				pSVar1 = pSVar1.ToLowerInvariant();
				if (pSVar1 != null) {
					pSVar1 = pSVar1.Replace(" ", "-");
					if (pSVar1 != null) {
						pSVar1 = pSVar1.Replace("/", "-");
						return pSVar1;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600085B")]
	[Address(RVA = "0x5D3B170", Offset = "0x5D3A170", VA = "0x5D3B170")]
	internal static string ContentId(string categoryId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsCategoryPage.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsCategoryPage$$ContentId): clean
		String pSVar1;

		pSVar1 = String.Concat("settings-", categoryId, "-content");
		return pSVar1;
	}

	[Token(Token = "0x600085C")]
	[Address(RVA = "0x5D3B1C0", Offset = "0x5D3A1C0", VA = "0x5D3B1C0")]
	internal static string OwnerPrefix(string categoryId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsCategoryPage.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsCategoryPage$$OwnerPrefix): clean
		String pSVar1;

		pSVar1 = String.Concat("settings-", categoryId, "-");
		return pSVar1;
	}
}
