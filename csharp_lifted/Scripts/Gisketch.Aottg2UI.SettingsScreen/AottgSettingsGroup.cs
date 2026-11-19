// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGroup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200018C")]
internal sealed class AottgSettingsGroup : AottgComponent, IAottgSettingsSearchable, IAottgSettingsStateSync
{
	[Token(Token = "0x40008BF")]
	internal const string SpacingBeforeValue = "SettingsSpacingBefore";

	[Token(Token = "0x40008C0")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40008C1")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _title;

	[Token(Token = "0x40008C2")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _titleKey;

	[Token(Token = "0x40008C3")]
	[FieldOffset(Offset = "0x28")]
	private readonly AottgSettingsRowBlock[] _blocks;

	[Token(Token = "0x40008C4")]
	[FieldOffset(Offset = "0x30")]
	private AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x40008C5")]
	[FieldOffset(Offset = "0x58")]
	private bool _showHeader;

	[Token(Token = "0x17000110")]
	internal string Id
	{
		[Token(Token = "0x6000891")]
		[Address(RVA = "0x5D411E0", Offset = "0x5D401E0", VA = "0x5D411E0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGroup.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$get_Id): clean
			return this._id;
		}
	}

	[Token(Token = "0x600088D")]
	[Address(RVA = "0x5D3AA10", Offset = "0x5D39A10", VA = "0x5D3AA10")]
	public AottgSettingsGroup(string id, params AottgComponent[] rows)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGroup.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$.ctor): clean
		AottgSettingsRowBlock[] blocks;
		String titleKey;
		MethodInfo pMVar1;

		pMVar1 = (MethodInfo)0x1;
		blocks = (AottgSettingsRowBlock[])new AottgSettingsRowBlock[1];
		pMVar1 = (MethodInfo)AottgSettingsRowBlock.TwoColumn(rows);
		if (blocks == null) {
			throw new NullReferenceException();
		}
		if ((int)blocks.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		blocks[0] = (AottgSettingsRowBlock)pMVar1;
		titleKey = AottgSettingsGroup.GroupTitleKey(id);
		base(id, null, titleKey, blocks);
		return;
	}

	[Token(Token = "0x600088E")]
	[Address(RVA = "0x5D40D50", Offset = "0x5D3FD50", VA = "0x5D40D50")]
	public AottgSettingsGroup(string id, params AottgSettingsRowBlock[] blocks)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGroup.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$.ctor): clean
		String titleKey;

		titleKey = AottgSettingsGroup.GroupTitleKey(id);
		base(id, null, titleKey, blocks);
		return;
	}

	[Token(Token = "0x600088F")]
	[Address(RVA = "0x5D40EA0", Offset = "0x5D3FEA0", VA = "0x5D40EA0")]
	private AottgSettingsGroup(string id, string title, string titleKey, AottgSettingsRowBlock[] blocks)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGroup.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$.ctor): clean
		this._showHeader = true;
		base();
		this._id = id;
		this._title = title;
		this._titleKey = titleKey;
		if (blocks == null) {
			blocks = (AottgSettingsRowBlock[])new AottgSettingsRowBlock[0];
		}
		this._blocks = blocks;
		return;
	}

	[Token(Token = "0x6000890")]
	[Address(RVA = "0x5D40F50", Offset = "0x5D3FF50", VA = "0x5D40F50")]
	internal static AottgSettingsGroup Untranslated(string id, string title, params AottgSettingDescriptor[] rows)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGroup.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$Untranslated): clean
		AottgSettingsRowBlock[] pGVar1;
		AottgComponent[] rows_00;
		AottgSettingsRowBlock pGVar2;
		AottgSettingsGroup __this;

		pGVar1 = (AottgSettingsRowBlock[])new AottgSettingsRowBlock[1];
		rows_00 = AottgSettingsGroup.BuildRows(rows);
		pGVar2 = AottgSettingsRowBlock.TwoColumn(rows_00);
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		if ((int)pGVar1.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		pGVar1[0] = pGVar2;
		__this._showHeader = true;
		__this = new AottgSettingsGroup();
		__this._id = id;
		__this._title = title;
		__this._titleKey = null;
		__this._blocks = pGVar1;
		return __this;
	}

	[Token(Token = "0x6000892")]
	[Address(RVA = "0x5D411F0", Offset = "0x5D401F0", VA = "0x5D411F0")]
	public AottgSettingsGroup HideHeader()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGroup.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$HideHeader): clean
		__this._showHeader = false;
		return __this;
	}

	[Token(Token = "0x6000893")]
	[Address(RVA = "0x5D41200", Offset = "0x5D40200", VA = "0x5D41200")]
	public AottgSettingsGroup UseTwoColumnLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGroup.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$UseTwoColumnLayout): clean
		uint uVar1;
		AottgSettingsRowBlock __this_00;
		AottgSettingsRowBlock[] pGVar2;
		ulong uVar3;

		pGVar2 = __this._blocks;
		if (pGVar2 != null) {
			uVar3 = 0;
			do {
				uVar1 = (uint)pGVar2.Length;
				if ((long)(int)uVar1 <= (long)uVar3) {
					return __this;
				}
				if (uVar1 <= uVar3) {
					throw new IndexOutOfRangeException();
				}
				__this_00 = pGVar2[uVar3];
				if (__this_00 != null) {
					if (__this_00 == null) break;
					__this_00.SetLayoutMode(0);
					pGVar2 = __this._blocks;
				}
				uVar3 = uVar3 + 1;
			} while (pGVar2 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000894")]
	[Address(RVA = "0x5D41370", Offset = "0x5D40370", VA = "0x5D41370", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGroup.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$Build): 4 lines keep C-only constructs
		String value;
		bool bVar1;
		AottgSettingsGroup.c__DisplayClass15_0 __this_00;
		String pSVar2;
		Action<AottgUi> __this_01;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar3;
		String value_00;
		String keywords;
		String value_01;
		GisketchSearchDefinition pGVar4;
		AottgSettingsSearchContext __this_02;
		AottgSettingsSearchContext GStack_88;

		if (Il2CppMethodInitialized_075485c9 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_c__DisplayClass15_0_Build_b__0) ;
			Il2CppMethodInitialized_075485c9 = true;
		}
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSettingsGroup.c__DisplayClass15_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			bVar1 = String.IsNullOrEmpty(this._titleKey);
			if (bVar1) {
				pSVar2 = this._title;
			}
			else {
				pSVar2 = this._titleKey;
				pSVar2 = Aottg2GisketchLocale.Text(pSVar2);
			}
			__this_00.title = pSVar2;
			GStack_88.CategoryTitle = null;
			GStack_88.GroupId = null;
			GStack_88.ScreenTitle = null;
			GStack_88.CategoryId = null;
			GStack_88.GroupTitle = null;
			GStack_88 = new AottgSettingsSearchContext(this._searchContext.ScreenTitle, this._searchContext.CategoryId, this._searchContext.CategoryTitle, this._id, __this_00.title);
			__this_02 = &__this_00.groupContext;
			__this_00.groupContext.GroupTitle = GStack_88.GroupTitle;
			__this_00.groupContext.CategoryTitle = GStack_88.CategoryTitle;
			__this_00.groupContext.GroupId = GStack_88.GroupId;
			__this_00.groupContext.ScreenTitle = GStack_88.ScreenTitle;
			__this_00.groupContext.CategoryId = GStack_88.CategoryId;
			__this_01 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_c__DisplayClass15_0_Build_b__0);
			pSVar2 = this._id;
			width = AottgUi.Percent(100.0);
			layout = AottgUi.Layout("Column", null, "Stretch", null, null, 20.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			if (ui != null) {
				pGVar3 = ui.Panel("clear", __this_01, pSVar2, layout, null);
				value_00 = __this_00.groupContext.CategoryTitle;
				pSVar2 = __this_00.groupContext.GroupTitle;
				bVar1 = String.IsNullOrEmpty(value_00);
				if (bVar1) {
					value_00 = pSVar2;
					if (pSVar2 == null) {
						value_00 = (String)**(ulong*)(g_data_07556758 + 0xb8);
					}
				}
				else {
					bVar1 = String.IsNullOrEmpty(pSVar2);
					if (bVar1) {
					}
					else {
						value_00 = String.Concat(value_00, " > ", pSVar2);
					}
				}
				keywords = __this_02.Keywords(__this_00.title);
				pSVar2 = __this_00.groupContext.CategoryId;
				value_01 = __this_00.groupContext.CategoryTitle;
				value = __this_00.groupContext.GroupTitle;
				bVar1 = String.IsNullOrEmpty(value_01);
				if (bVar1) {
					value_01 = value;
					if (value == null) {
						value_01 = (String)**(ulong*)(g_data_07556758 + 0xb8);
					}
				}
				else {
					bVar1 = String.IsNullOrEmpty(value);
					if (!bVar1) {
						value_01 = String.Concat(value_01, " > ", value);
					}
				}
				pGVar4 = AottgUi.Search(value_00, keywords, false, "menuList", "section", pSVar2, value_01, false);
				if (pGVar3 != null) {
					pGVar3.search = pGVar4;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000895")]
	[Address(RVA = "0x5D419A0", Offset = "0x5D409A0", VA = "0x5D419A0", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGroup.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$ApplySearchContext): clean
		this._searchContext.GroupTitle = context.GroupTitle;
		this._searchContext.CategoryTitle = context.CategoryTitle;
		this._searchContext.GroupId = context.GroupId;
		this._searchContext.ScreenTitle = context.ScreenTitle;
		this._searchContext.CategoryId = context.CategoryId;
		return;
	}

	[Token(Token = "0x6000896")]
	[Address(RVA = "0x5D3AFF0", Offset = "0x5D39FF0", VA = "0x5D3AFF0", Slot = "6")]
	public void SyncState(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGroup.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$SyncState): clean
		uint uVar1;
		AottgSettingsRowBlock __this_00;
		bool bVar2;
		AottgSettingsRowBlock[] pGVar3;
		ulong uVar4;

		bVar2 = ((Object)root == null);
		if (bVar2) {
			return;
		}
		pGVar3 = this._blocks;
		if (pGVar3 != null) {
			uVar4 = 0;
			do {
				uVar1 = (uint)pGVar3.Length;
				if ((long)(int)uVar1 <= (long)uVar4) {
					return;
				}
				if (uVar1 <= uVar4) {
					throw new IndexOutOfRangeException();
				}
				__this_00 = pGVar3[uVar4];
				if (__this_00 != null) {
					if (__this_00 == null) break;
					__this_00.SyncState(root);
					pGVar3 = this._blocks;
				}
				uVar4 = uVar4 + 1;
			} while (pGVar3 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000897")]
	[Address(RVA = "0x5D41B10", Offset = "0x5D40B10", VA = "0x5D41B10")]
	internal void AddVirtualScrollItems(List<GisketchNodeDefinition> items, AottgUi owner, AottgSettingsSearchContext context, bool separateFromPreviousGroup)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGroup.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$AddVirtualScrollItems): 4 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		GisketchNodeDefinition[] pGVar3;
		AottgSettingsRowBlock __this_00;
		AottgSettingsSearchContext groupContext;
		AottgSettingsSearchContext context_00;
		bool bVar4;
		MethodInfo pMVar5;
		GisketchNodeDefinition item;
		AottgSettingsRowBlock[] pGVar6;
		String str2;
		String pSVar7;
		MethodInfo method_00;
		ulong uVar8;
		AottgSettingsSearchContext local_88;
		String local_58;
		String pSStack_50;
		String local_48;
		String pSStack_40;
		String local_38;

		if ((items == null) ||(owner == null)) {
			return;
		}
		this._searchContext.GroupTitle = context.GroupTitle;
		this._searchContext.CategoryTitle = context.CategoryTitle;
		this._searchContext.GroupId = context.GroupId;
		this._searchContext.ScreenTitle = context.ScreenTitle;
		this._searchContext.CategoryId = context.CategoryId;
		bVar4 = String.IsNullOrEmpty(this._titleKey);
		if (bVar4) {
			pMVar5 = (MethodInfo)this._title;
		}
		else {
			pSVar7 = this._titleKey;
			pMVar5 = (MethodInfo)Aottg2GisketchLocale.Text(pSVar7) ;
		}
		method_00 = (MethodInfo)this._searchContext.CategoryTitle;
		local_88.CategoryTitle = null;
		local_88.GroupId = null;
		local_88.ScreenTitle = null;
		local_88.CategoryId = null;
		local_88.GroupTitle = null;
		local_88 = new AottgSettingsSearchContext(this._searchContext.ScreenTitle, this._searchContext.CategoryId, (String)method_00, this._id, (String)pMVar5);
		local_38 = local_88.GroupTitle;
		local_48 = local_88.CategoryTitle;
		pSStack_40 = local_88.GroupId;
		local_58 = local_88.ScreenTitle;
		pSStack_50 = local_88.CategoryId;
		if ((this._showHeader != false) &&(bVar4 = String.IsNullOrEmpty((String)pMVar5), !bVar4)) {
			groupContext.CategoryId = pSStack_50;
			groupContext.ScreenTitle = local_58;
			groupContext.CategoryTitle = local_48;
			groupContext.GroupId = pSStack_40;
			groupContext.GroupTitle = local_38;
			item = this.HeaderNode((String)pMVar5, groupContext, separateFromPreviousGroup);
			pMVar5 = MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add;
			piVar1 = &items._version;
			*piVar1 = *piVar1 + 1;
			pGVar3 = items._items;
			if (pGVar3 == null) goto label_05e41ddf;
			uVar2 = items._size;
			if (uVar2 < (uint)pGVar3.Length) {
				items._size = uVar2 + 1;
				pGVar3[(int)uVar2] = item;
			}
			else {
				items.AddWithResize((object)item);
			}
		}
		pGVar6 = this._blocks;
		if (pGVar6 != null) {
			uVar8 = 0;
			do {
				uVar2 = (uint)pGVar6.Length;
				if ((long)(int)uVar2 <= (long)uVar8) {
					return;
				}
				if (uVar2 <= uVar8) {
					throw new IndexOutOfRangeException();
				}
				__this_00 = pGVar6[uVar8];
				if (__this_00 != null) {
					local_88.ScreenTitle =(String)CONCAT44(local_88.ScreenTitle._4_4_, (int)uVar8);
					if (Il2CppMethodInitialized_075485cc == false) {
						Il2CppMethodInitialized_075485cc = true;
						pGVar6 = this._blocks;
						if (pGVar6 == null) break;
					}
					pSVar7 = this._id;
					if ((int)pGVar6.Length != 1) {
						str2 = local_88.ToString();
						pSVar7 = String.Concat(pSVar7, "-block-", str2);
					}
					if (__this_00 == null) break;
					context_00.CategoryId = pSStack_50;
					context_00.ScreenTitle = local_58;
					context_00.CategoryTitle = local_48;
					context_00.GroupId = pSStack_40;
					context_00.GroupTitle = local_38;
					__this_00.AddVirtualScrollItems(items, owner, pSVar7, context_00, uVar8 != 0);
					pGVar6 = this._blocks;
				}
				uVar8 = uVar8 + 1;
			} while (pGVar6 != null);
		}
	label_05e41ddf: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000898")]
	[Address(RVA = "0x5D42160", Offset = "0x5D41160", VA = "0x5D42160")]
	private string BlockId(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGroup.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$BlockId): clean
		AottgSettingsRowBlock[] pGVar1;
		String str2;
		String str0;
		int local_c;

		local_c = index;
		pGVar1 = this._blocks;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		str0 = this._id;
		if ((int)pGVar1.Length != 1) {
			str2 = local_c.ToString();
			str0 = String.Concat(str0, "-block-", str2);
		}
		return str0;
	}

	[Token(Token = "0x6000899")]
	[Address(RVA = "0x5D41DF0", Offset = "0x5D40DF0", VA = "0x5D41DF0")]
	private GisketchNodeDefinition HeaderNode(string title, AottgSettingsSearchContext groupContext, bool separateFromPreviousGroup)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGroup.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$HeaderNode): 1 lines keep C-only constructs
		String sectionId;
		String value;
		bool bVar1;
		GisketchNodeDefinition __this_00;
		String pSVar2;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar3;
		String title_00;
		String keywords;
		GisketchSearchDefinition pGVar4;

		__this_00 = il2cpp_codegen_object_new(typeof(GisketchNodeDefinition)) ;
		__this_00 = new GisketchNodeDefinition();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.type = "Text";
		pSVar2 = String.Concat(this._id, "-header");
		__this_00.id = pSVar2;
		__this_00.text = title;
		__this_00.textKey = this._titleKey;
		__this_00.style = "header";
		pSVar2 = null;
		if (separateFromPreviousGroup) {
			pSVar2 = "SettingsSpacingBefore";
		}
		__this_00.value = pSVar2;
		width = AottgUi.Percent(100.0);
		height = AottgUi.Points(72.0);
		pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		__this_00.layout = pGVar3;
		value = groupContext.GroupTitle;
		pSVar2 = groupContext.CategoryTitle;
		bVar1 = String.IsNullOrEmpty(pSVar2);
		if (bVar1) {
			title_00 = value;
			if (value == null) {
				title_00 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
		}
		else {
			bVar1 = String.IsNullOrEmpty(value);
			title_00 = pSVar2;
			if (!bVar1) {
				title_00 = String.Concat(pSVar2, " > ", value);
			}
		}
		keywords = groupContext.Keywords(title);
		sectionId = groupContext.CategoryId;
		bVar1 = String.IsNullOrEmpty(pSVar2);
		if (bVar1) {
			pSVar2 = value;
			if (value == null) {
				pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
		}
		else {
			bVar1 = String.IsNullOrEmpty(value);
			if (!bVar1) {
				pSVar2 = String.Concat(pSVar2, " > ", value);
			}
		}
		pGVar4 = AottgUi.Search(title_00, keywords, false, "menuList", "section", sectionId, pSVar2, false);
		__this_00.search = pGVar4;
		return __this_00;
	}

	[Token(Token = "0x600089A")]
	[Address(RVA = "0x5D41080", Offset = "0x5D40080", VA = "0x5D41080")]
	private static AottgComponent[] BuildRows(AottgSettingDescriptor[] rows)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGroup.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$BuildRows): 1 lines keep C-only constructs
		uint uVar1;
		AottgSettingDescriptor pGVar2;
		AottgComponent[] pGVar3;
		ulong uVar4;
		AottgSettingRow pGVar5;
		object pIVar6;
		ulong uVar7;
		long lVar8;

		if (rows == null) {
			pGVar3 = (AottgComponent[])new AottgComponent[0];
			return pGVar3;
		}
		pGVar3 = (AottgComponent[])new AottgComponent[(uint32_t)rows.Length];
		if (0 < (int)rows.Length) {
			if (pGVar3 == null) {
				pGVar2 = rows[0];
				pGVar5 = new AottgSettingRow(pGVar2);
				throw new NullReferenceException();
			}
			uVar4 = rows.Length & 0xffffffff;
			lVar8 = 0x20;
			uVar7 = 0;
			do {
				if (uVar4 <= uVar7) {
	label_05e4119a: ;
					throw new IndexOutOfRangeException();
				}
				pGVar2 = *(AottgSettingDescriptor*)((long)rows.m_Items + lVar8 + -0x20);
				pGVar5 = new AottgSettingRow(pGVar2);
				if (pGVar5 != null) {
					pIVar6 = il2cpp_vm_Object_IsInst((object)pGVar5, (((pGVar3.obj).klass)._1).element_class);
					if (pIVar6 == null) {
						pIVar6 = new ArrayTypeMismatchException();
						throw pIVar6;
					}
				}
				if ((uint)pGVar3.Length <= uVar7) goto label_05e4119a;
				*(AottgSettingRow*)((long)pGVar3.m_Items + lVar8 + -0x20) = pGVar5 ;
				uVar7 = uVar7 + 1;
				uVar1 = (uint)rows.Length;
				uVar4 = (ulong)uVar1;
				lVar8 = lVar8 + 8;
			} while ((long)uVar7 < (long)(int)uVar1);
		}
		return pGVar3;
	}

	[Token(Token = "0x600089B")]
	[Address(RVA = "0x5D417A0", Offset = "0x5D407A0", VA = "0x5D417A0")]
	private string LocalizedTitle()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGroup.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$LocalizedTitle): clean
		bool bVar1;
		String pSVar2;

		bVar1 = String.IsNullOrEmpty(this._titleKey);
		if (bVar1) {
			return this._title;
		}
		pSVar2 = this._titleKey;
		if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0) {
			pSVar2 = Aottg2GisketchLocale.Text(pSVar2);
			return pSVar2;
		}
		pSVar2 = Aottg2GisketchLocale.Text(pSVar2);
		return pSVar2;
	}

	[Token(Token = "0x600089C")]
	[Address(RVA = "0x5D40D80", Offset = "0x5D3FD80", VA = "0x5D40D80")]
	private static string GroupTitleKey(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGroup.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$GroupTitleKey): clean
		bool bVar1;
		int length;
		String pSVar2;
		String pSVar3;
		MethodInfo pMVar4;

		bVar1 = String.IsNullOrEmpty(id);
		if (bVar1) {
			return null;
		}
		if (id != null) {
			bVar1 = id.StartsWith("settings-");
			if (!bVar1) {
				return null;
			}
			if (("settings-" != null) &&(pSVar2 = id.Substring(("settings-".fields)._stringLength), pSVar2 != null)) {
				length = pSVar2.IndexOf(0x2d);
				if (length < 1) {
					return null;
				}
				if (length < pSVar2._stringLength + -1) {
					pSVar3 = pSVar2.Substring(0, length);
					pSVar3 = AottgSettingsGroup.Pascal(pSVar3);
					pMVar4 = (MethodInfo)(ulong)(length + 1U);
					pSVar2 = pSVar2.Substring(length + 1U);
					pSVar2 = AottgSettingsGroup.Pascal(pSVar2);
					pSVar2 = String.Concat("SettingsPopup.Groups.", pSVar3, ".", pSVar2);
					return pSVar2;
				}
				return null;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600089D")]
	[Address(RVA = "0x5D42350", Offset = "0x5D41350", VA = "0x5D42350")]
	internal static string Pascal(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGroup.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$Pascal): clean
		int capacity;
		bool bVar1;
		ushort uVar2;
		StringBuilder __this;
		String pSVar3;
		int iVar4;
		bool bVar5;

		bVar1 = String.IsNullOrEmpty(value);
		if (bVar1) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (value != null) {
			capacity = value._stringLength;
			__this = new StringBuilder(capacity);
			if (0 < value._stringLength) {
				if (__this == null) {
					uVar2 = value.get_Chars(0);
					if (uVar2 == 0x2d) {
						iVar4 = 1;
						do {
							if (value._stringLength <= iVar4) goto label_05e424c7;
							uVar2 = value.get_Chars(iVar4);
							iVar4 = iVar4 + 1;
						} while (uVar2 == 0x2d);
					}
					Char.ToUpperInvariant(uVar2);
					throw new NullReferenceException();
				}
				iVar4 = 0;
				bVar1 = true;
				do {
					uVar2 = value.get_Chars(iVar4);
					bVar5 = uVar2 == 0x2d;
					if (!bVar5) {
						if (bVar1) {
							uVar2 = Char.ToUpperInvariant(uVar2);
						}
						__this.Append(uVar2);
					}
					iVar4 = iVar4 + 1;
					bVar1 = bVar5;
				} while (iVar4 < value._stringLength);
			}
	label_05e424c7: ;
			if (__this != null) {
				return pSVar3;
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGroup.c.

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup.<>c__DisplayClass15_0$$.ctor: clean
	private void c__DisplayClass15_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup.<>c__DisplayClass15_0$$<Build>b__0: clean
	private void c__DisplayClass15_0__Build_b__0(AottgUi group)
	{
		uint uVar1;
		MethodInfo __this_00;
		bool bVar2;
		String pSVar3;
		GisketchNodeDefinition pGVar4;
		AottgSettingsRowBlock[] pGVar5;
		String pSVar6;
		AottgSettingsGroup pGVar7;
		ulong uVar8;
		int iStack_34;

		bVar2 = String.IsNullOrEmpty(this.title);
		if (!bVar2) {
			pGVar7 = this.__4__this;
			if (pGVar7 == null) goto label_05e426cf;
			pSVar6 = this.title;
			pSVar3 = String.Concat(pGVar7._id, "-header");
			if (group == null) goto label_05e426cf;
			pGVar4 = group.Text(pSVar6, "header", pSVar3, null, null);
			pGVar7 = this.__4__this;
			if ((pGVar7 == null) ||(pGVar4 == null)) goto label_05e426cf;
			pGVar4.textKey = pGVar7._titleKey;
		}
		pGVar7 = this.__4__this;
		if (pGVar7 != null) {
			uVar8 = 0;
			do {
				pGVar5 = pGVar7._blocks;
				if (pGVar5 == null) break;
				uVar1 = (uint)pGVar5.Length;
				if ((long)(int)uVar1 <= (long)uVar8) {
					return;
				}
				if (uVar1 <= uVar8) {
					throw new IndexOutOfRangeException();
				}
				__this_00 = (MethodInfo)pGVar5[uVar8];
				if (__this_00 != null) {
					iStack_34 = (int32_t)uVar8;
					if (Il2CppMethodInitialized_075485cc == false) {
						Il2CppMethodInitialized_075485cc = true;
						pGVar5 = pGVar7._blocks;
						if (pGVar5 == null) break;
					}
					pSVar6 = pGVar7._id;
					if ((int)pGVar5.Length != 1) {
						pSVar3 = iStack_34.ToString();
						pSVar6 = String.Concat(pSVar6, "-block-", pSVar3);
					}
					if (__this_00 == null) break;
					__this_00.Build(group, pSVar6, (AottgSettingsSearchContext)this.groupContext);
					pGVar7 = this.__4__this;
				}
				uVar8 = uVar8 + 1;
			} while (pGVar7 != null);
		}
	label_05e426cf: ;
		throw new NullReferenceException();
	}
}
