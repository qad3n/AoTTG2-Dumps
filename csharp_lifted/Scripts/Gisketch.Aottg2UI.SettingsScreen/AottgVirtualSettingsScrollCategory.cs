// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategory
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgVirtualSettingsScrollCategory.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x20001B4")]
internal sealed class AottgVirtualSettingsScrollCategory : AottgComponent
{
	[Token(Token = "0x4000931")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly AottgScreenSectionContext _context;

	[Token(Token = "0x4000932")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly string _categoryId;

	[Token(Token = "0x4000933")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly AottgSettingsGroup[] _groups;

	[Token(Token = "0x4000934")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly string _contentId;

	[Token(Token = "0x4000935")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly float _initialScrollOffset;

	[Token(Token = "0x4000936")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private readonly float _paddingTop;

	[Token(Token = "0x6000999")]
	[Address(RVA = "0x5D58160", Offset = "0x5D57160", VA = "0x5D58160")]
	public AottgVirtualSettingsScrollCategory(AottgScreenSectionContext context, string categoryId, AottgSettingsGroup[] groups, [Optional] string contentId, [Optional][DefaultParameterValue(0f)] float initialScrollOffset, [Optional] float? paddingTop)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgVirtualSettingsScrollCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategory$$.ctor): 1 lines keep C-only constructs
		bool bVar1;
		float fVar2;

		base();
		this._context._SectionId_k__BackingField = context._SectionId_k__BackingField;
		this._context._SectionTitle_k__BackingField = context._SectionTitle_k__BackingField;
		this._context._group = context._group;
		this._context._order = context._order;
		*(uint)&this._context.field_0xc = context._12_4_;
		this._categoryId = categoryId;
		if (groups == null) {
			groups = (AottgSettingsGroup[])new AottgSettingsGroup[0];
		}
		this._groups = groups;
		bVar1 = String.IsNullOrEmpty(contentId);
		if (bVar1) {
			contentId = AottgSettingsCategoryPage.ContentId(categoryId);
		}
		this._contentId = contentId;
		this._initialScrollOffset = initialScrollOffset;
		if (paddingTop.hasValue == false) {
			fVar2 = 98.0;
		}
		else {
			fVar2 = paddingTop.value;
		}
		this._paddingTop = fVar2;
		return;
	}

	[Token(Token = "0x600099A")]
	[Address(RVA = "0x5D58280", Offset = "0x5D57280", VA = "0x5D58280", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgVirtualSettingsScrollCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategory$$Build): 5 lines keep C-only constructs
		uint uVar1;
		AottgSettingsSearchContext context;
		List<GisketchNodeDefinition> items;
		AottgSettingsGroup[] pGVar2;
		GisketchNodeDefinition __this_00;
		String[] pSVar3;
		CultureInfo pSVar4;
		String pSVar5;
		GisketchNodeDefinition[] pGVar6;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar7;
		long lVar8;
		ulong uVar9;
		String* method_00;
		AottgSettingsSearchContext GStack_58;

		if (Il2CppMethodInitialized_07548688 == false) {
			method_00 = &"Column";
			Il2CppMethodInitialized_07548688 = true;
		}
		GStack_58.CategoryTitle = null;
		GStack_58.GroupId = null;
		GStack_58.ScreenTitle = null;
		GStack_58.CategoryId = null;
		GStack_58.GroupTitle = null;
		AottgVirtualSettingsScrollCategoryRuntime.RegisterFactory();
		GStack_58 = new AottgSettingsSearchContext(this._categoryId, this._context._SectionTitle_k__BackingField);
		items = new List<GisketchNodeDefinition>();
		pGVar2 = this._groups;
		if (pGVar2 != null) {
			if (items == null) {
				uVar1 = (uint)pGVar2.Length;
				if (0 < (int)uVar1) {
					lVar8 = 0;
					do {
						if (uVar1 <= (uint)lVar8) goto label_05e58635;
						if (pGVar2[lVar8] != null) goto label_05e58630;
						lVar8 = lVar8 + 1;
					} while ((int)lVar8 < (int)uVar1);
				}
	label_05e5840b: ;
				__this_00 = new GisketchNodeDefinition();
				if (__this_00 != null) {
					__this_00.type = "AottgVirtualSettingsScrollCategory";
					__this_00.id = this._contentId;
					__this_00.value = this._categoryId;
					pSVar3 = (String[])new string[2];
					pSVar4 = CultureInfo.InvariantCulture;
					pSVar5 = (this._initialScrollOffset).ToString((IFormatProvider)pSVar4);
					if (pSVar3 != null) {
						if ((int)pSVar3.Length != 0) {
							pSVar3[0] = pSVar5;
							pSVar4 = CultureInfo.InvariantCulture;
							pSVar5 = (this._paddingTop).ToString((IFormatProvider)pSVar4);
							if ((pSVar3.Length & 0xfffffffe) != 0) {
								pSVar3[1] = pSVar5;
								__this_00.options = pSVar3;
								if (items != null) {
									pGVar6 = (GisketchNodeDefinition[])items.ToArray() ;
									__this_00.deferredChildren = pGVar6;
									width = AottgUi.Percent(100.0);
									height = AottgUi.Percent(100.0);
									pGVar7 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
									__this_00.layout = pGVar7;
									if (ui != null) {
										ui.Add(__this_00);
										return;
									}
								}
								goto label_05e58630;
							}
						}
	label_05e58635: ;
						throw new IndexOutOfRangeException();
					}
				}
			}
			else {
				uVar9 = 0;
				do {
					uVar1 = (uint)pGVar2.Length;
					if ((long)(int)uVar1 <= (long)uVar9) goto label_05e5840b;
					if (uVar1 <= uVar9) goto label_05e58635;
					if (pGVar2[uVar9] != null) {
						context.CategoryId = GStack_58.CategoryId;
						context.ScreenTitle = GStack_58.ScreenTitle;
						context.CategoryTitle._0_4_ = GStack_58.CategoryTitle._0_4_;
						context.CategoryTitle._4_4_ = GStack_58.CategoryTitle._4_4_;
						context.GroupId._0_4_ = GStack_58.GroupId._0_4_;
						context.GroupId._4_4_ = GStack_58.GroupId._4_4_;
						context.GroupTitle = GStack_58.GroupTitle;
						(pGVar2[uVar9]).AddVirtualScrollItems(items, ui, context, 0 < items._size);
						pGVar2 = this._groups;
					}
					uVar9 = uVar9 + 1;
				} while (pGVar2 != null);
			}
		}
	label_05e58630: ;
		throw new NullReferenceException();
	}
}
