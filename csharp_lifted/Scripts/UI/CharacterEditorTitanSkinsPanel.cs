// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorTitanSkinsPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorTitanSkinsPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x20007CD")]
internal class CharacterEditorTitanSkinsPanel : HeadedPanel
{
	[Token(Token = "0x4002729")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static int _previewSetIndex;

	[Token(Token = "0x400272A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private static bool _previewEnabled;

	[Token(Token = "0x400272B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5")]
	private static bool _hasInitialized;

	[Token(Token = "0x400272C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private CharacterEditorMenu _menu;

	[Token(Token = "0x400272D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private IntSetting _setIndex;

	[Token(Token = "0x400272E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private BoolSetting _enabled;

	[Token(Token = "0x17000D24")]
	protected override string Title
	{
		[Token(Token = "0x6004B3A")]
		[Address(RVA = "0x5BDE790", Offset = "0x5BDD790", VA = "0x5BDE790", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorTitanSkinsPanel.c (UI.CharacterEditorTitanSkinsPanel$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocale("SettingsPopup", "Top", "SkinsButton", "", "");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000D25")]
	protected override float Width
	{
		[Token(Token = "0x6004B3B")]
		[Address(RVA = "0x5BDE830", Offset = "0x5BDD830", VA = "0x5BDE830", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorTitanSkinsPanel.c (UI.CharacterEditorTitanSkinsPanel$$get_Width): clean
			return 330.0;
		}
	}

	[Token(Token = "0x17000D26")]
	protected override float Height
	{
		[Token(Token = "0x6004B3C")]
		[Address(RVA = "0x5BDE840", Offset = "0x5BDD840", VA = "0x5BDE840", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorTitanSkinsPanel.c (UI.CharacterEditorTitanSkinsPanel$$get_Height): clean
			return 300.0;
		}
	}

	[Token(Token = "0x17000D27")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004B3D")]
		[Address(RVA = "0x5BDE850", Offset = "0x5BDD850", VA = "0x5BDE850", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorTitanSkinsPanel.c (UI.CharacterEditorTitanSkinsPanel$$get_VerticalSpacing): clean
			return 20.0;
		}
	}

	[Token(Token = "0x17000D28")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004B3E")]
		[Address(RVA = "0x5BDE860", Offset = "0x5BDD860", VA = "0x5BDE860", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorTitanSkinsPanel.c (UI.CharacterEditorTitanSkinsPanel$$get_HorizontalPadding): clean
			return 0x19;
		}
	}

	[Token(Token = "0x17000D29")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004B3F")]
		[Address(RVA = "0x5BDE870", Offset = "0x5BDD870", VA = "0x5BDE870", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorTitanSkinsPanel.c (UI.CharacterEditorTitanSkinsPanel$$get_VerticalPadding): clean
			return 0x19;
		}
	}

	[Token(Token = "0x6004B40")]
	[Address(RVA = "0x5BDE880", Offset = "0x5BDD880", VA = "0x5BDE880")]
	public static void ResetPreview()
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanSkinsPanel.c (UI.CharacterEditorTitanSkinsPanel$$ResetPreview): clean

		CharacterEditorTitanSkinsPanel._previewSetIndex = 0;
		CharacterEditorTitanSkinsPanel._previewEnabled = false;
		CharacterEditorTitanSkinsPanel._hasInitialized = false;
		return;
	}

	[Token(Token = "0x6004B41")]
	[Address(RVA = "0x5BDE8C0", Offset = "0x5BDD8C0", VA = "0x5BDE8C0")]
	private static void EnsureInitialized()
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanSkinsPanel.c (UI.CharacterEditorTitanSkinsPanel$$EnsureInitialized): clean
		CustomSkinSettings pSVar2;
		BaseCustomSkinSettings<TitanCustomSkinSet> pSVar3;
		IntSetting pSVar4;
		BoolSetting pSVar5;

		if (CharacterEditorTitanSkinsPanel._hasInitialized != false) {
			return;
		}
		pSVar2 = SettingsManager.CustomSkinSettings;
		if (((pSVar2 != null) &&(pSVar3 = pSVar2.Titan, pSVar3 != null )) && (pSVar4 = pSVar3.SelectedSetIndex, pSVar4 != null)) {
			CharacterEditorTitanSkinsPanel._previewSetIndex = pSVar4._value;
			pSVar5 = pSVar3.SkinsEnabled;
			if (pSVar5 != null) {
				CharacterEditorTitanSkinsPanel._previewEnabled = pSVar5._value;
				CharacterEditorTitanSkinsPanel._hasInitialized = true;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004B42")]
	[Address(RVA = "0x5BDE980", Offset = "0x5BDD980", VA = "0x5BDE980")]
	public static TitanCustomSkinSet GetPreviewSkinSet()
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanSkinsPanel.c (UI.CharacterEditorTitanSkinsPanel$$GetPreviewSkinSet): 4 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		CustomSkinSettings pSVar3;
		BaseCustomSkinSettings<TitanCustomSkinSet> pSVar4;
		ListSetting<T> obj;
		int iVar7;
		TitanCustomSkinSet pSVar9;
		TitanCustomSkinSet* ppSVar11;

		if (Il2CppMethodInitialized_07547be6 == false) {
			ppSVar11 = &typeof(TitanCustomSkinSet);
			Il2CppMethodInitialized_07547be6 = true;
		}
		CharacterEditorTitanSkinsPanel.EnsureInitialized();
		if (CharacterEditorTitanSkinsPanel._previewEnabled != false) {
			pSVar3 = SettingsManager.CustomSkinSettings;
			if ((pSVar3 == null) ||(pSVar4 = pSVar3.Titan, pSVar4 == null)) {
	label_05cdeb59: ;
				throw new NullReferenceException();
			}
			iVar2 = CharacterEditorTitanSkinsPanel._previewSetIndex;
			if (-1 < iVar2) {
				obj = pSVar4.Sets;
				if (obj == null) goto label_05cdeb59;
				iVar7 = obj.GetItemAt();
				if (iVar2 < iVar7) {
					iVar7 = CharacterEditorTitanSkinsPanel._previewSetIndex;
					pSVar9 = (TitanCustomSkinSet)obj.GetItemAt(iVar7);
					if (pSVar9 != null) {
						bVar1 = (typeof(TitanCustomSkinSet)._2).typeHierarchyDepth;
						if (bVar1 <= (((Il2CppClass)pSVar9.klass)._2).typeHierarchyDepth) {
							if ((((Il2CppClass)pSVar9.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(TitanCustomSkinSet)) {
								return pSVar9;
							}
							return null;
						}
					}
				}
			}
		}
		return null;
	}

	[Token(Token = "0x6004B43")]
	[Address(RVA = "0x5BDEB60", Offset = "0x5BDDB60", VA = "0x5BDEB60", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanSkinsPanel.c (UI.CharacterEditorTitanSkinsPanel$$Setup): 5 lines keep C-only constructs
		byte bVar1;
		bool defaultValue;
		int defaultValue_00;
		CharacterEditorMenu pUVar2;
		CustomSkinSettings pSVar3;
		BaseCustomSkinSettings<TitanCustomSkinSet> __this_00;
		Transform parent_00;
		Il2CppClass pIVar4;
		IntSetting pSVar5;
		BoolSetting pSVar6;
		String pSVar7;
		ElementStyle __this_01;
		String[] options;
		UnityAction pUVar8;
		GameObject setting;
		CharacterEditorTitanSkinsPanel __this_02;
		MethodInfo pMVar9;

		this.Setup(parent);
		if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			pUVar2 = (CharacterEditorMenu)UIManager.CurrentMenu;
			pIVar4 = typeof(CharacterEditorMenu);
		}
		else {
			pUVar2 = (CharacterEditorMenu)UIManager.CurrentMenu;
			pIVar4 = typeof(CharacterEditorMenu);
		}
		typeof(CharacterEditorMenu) = (CharacterEditorMenu)pIVar4;
		if (pUVar2 == null) {
			this._menu = null;
	label_05cded09: ;
			pMVar9 = (MethodInfo)&this._menu;
			pSVar3 = SettingsManager.CustomSkinSettings;
			if (pSVar3 != null) {
				__this_00 = pSVar3.Titan;
				CharacterEditorTitanSkinsPanel.EnsureInitialized();
				defaultValue_00 = CharacterEditorTitanSkinsPanel._previewSetIndex;
				pSVar5 = new IntSetting(defaultValue_00, -0x80000000, 0x7fffffff);
				this._setIndex = pSVar5;
				defaultValue = CharacterEditorTitanSkinsPanel._previewEnabled;
				pSVar6 = new BoolSetting(defaultValue);
				this._enabled = pSVar6;
				pSVar7 = this.get_ThemePanel();
				__this_01 = new ElementStyle(0x18, 110.0, 20.0, pSVar7);
				parent_00 = this.SinglePanel;
				pSVar5 = this._setIndex;
				pSVar7 = UIManager.GetLocale("SettingsPopup", "Skins.Common", "Set", "", "");
				if (__this_00 != null) {
					options = __this_00.GetSetNames();
					pUVar8 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CharacterEditorTitanSkinsPanel_Setup_b__21_0);
					ElementFactory.CreateDropdownSetting(parent_00, __this_01, (BaseSetting)pSVar5, pSVar7, options, "", 160.0, 40.0, 180.0, (Nullable<float>)0x0, pUVar8, null, null);
					__this_02 = (CharacterEditorTitanSkinsPanel)this.SinglePanel;
					pSVar6 = this._enabled;
					pSVar7 = UIManager.GetLocale("SettingsPopup", "Skins.Common", "SkinsEnabled", "", "");
					pUVar8 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CharacterEditorTitanSkinsPanel_Setup_b__21_1);
					setting = ElementFactory.CreateToggleSetting((Transform)__this_02, __this_01, (BaseSetting)pSVar6, pSVar7, "", 30.0, 30.0, pUVar8);
					__this_02.ExpandLabel(setting);
					return;
				}
			}
			throw new NullReferenceException();
		}
		bVar1 = (pIVar4._2).typeHierarchyDepth;
		if ((bVar1 <= (pUVar2.klass._2).typeHierarchyDepth) &&((pUVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] == pIVar4)) {
			this._menu = pUVar2;
			if ((bVar1 <= (pUVar2.klass._2).typeHierarchyDepth) &&((pUVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] == pIVar4)) goto label_05cded09;
		}
		throw new InvalidCastException();
	}

	[Token(Token = "0x6004B44")]
	[Address(RVA = "0x5BDEFC0", Offset = "0x5BDDFC0", VA = "0x5BDEFC0")]
	private void ExpandLabel(GameObject setting)
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanSkinsPanel.c (UI.CharacterEditorTitanSkinsPanel$$ExpandLabel): clean
		bool bVar1;
		Transform pUVar2;
		Text __this_00;
		LayoutElement x;

		if ((setting != null) &&(pUVar2 = setting.transform, pUVar2 != null)) {
			pUVar2 = pUVar2.Find("Label");
			bVar1 = ((Object)pUVar2 == null);
			if (bVar1) {
				return;
			}
			if (pUVar2 != null) {
				__this_00 = pUVar2.GetComponent<Text>();
				bVar1 = ((Object)__this_00 != null);
				if (bVar1) {
					if (__this_00 == null) goto label_05cdf131;
					__this_00.horizontalOverflow = 1;
					__this_00.verticalOverflow = 1;
				}
				x = pUVar2.GetComponent<LayoutElement>();
				bVar1 = ((Object)x != null);
				if (!bVar1) {
					return;
				}
				if (x != null) {
					x.set_preferredWidth(220.0);
					return;
				}
			}
		}
	label_05cdf131: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004B45")]
	[Address(RVA = "0x5BDF140", Offset = "0x5BDE140", VA = "0x5BDF140")]
	private void OnSkinsChanged()
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanSkinsPanel.c (UI.CharacterEditorTitanSkinsPanel$$OnSkinsChanged): clean
		IntSetting pSVar1;
		BoolSetting pSVar3;
		CharacterEditorMenu pUVar4;

		pSVar1 = this._setIndex;
		if (pSVar1 != null) {
			CharacterEditorTitanSkinsPanel._previewSetIndex = pSVar1._value;
			pSVar3 = this._enabled;
			if (pSVar3 != null) {
				CharacterEditorTitanSkinsPanel._previewEnabled = pSVar3._value;
				pUVar4 = this._menu;
				if (pUVar4 != null) {
					pUVar4.ResetCharacter(false);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004B46")]
	[Address(RVA = "0x5BDF1E0", Offset = "0x5BDE1E0", VA = "0x5BDF1E0")]
	public CharacterEditorTitanSkinsPanel()
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanSkinsPanel.c (UI.CharacterEditorTitanSkinsPanel$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/CharacterEditorTitanSkinsPanel.c.

	// UI.CharacterEditorTitanSkinsPanel$$<Setup>b__21_0: clean
	private void Setup_b__21_0()
	{
		this.OnSkinsChanged();
		return;
	}

	// UI.CharacterEditorTitanSkinsPanel$$<Setup>b__21_1: clean
	private void Setup_b__21_1()
	{
		this.OnSkinsChanged();
		return;
	}
}
