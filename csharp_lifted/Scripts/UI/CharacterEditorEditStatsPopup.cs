// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorEditStatsPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorEditStatsPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorEditStatsPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007BB")]
internal class CharacterEditorEditStatsPopup : BasePopup
{
	[Token(Token = "0x40026E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected IntSetting Speed;

	[Token(Token = "0x40026E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected IntSetting Acceleration;

	[Token(Token = "0x40026E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected IntSetting Ammunition;

	[Token(Token = "0x40026E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected IntSetting Gas;

	[Token(Token = "0x40026E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Text _pointsLeftLabel;

	[Token(Token = "0x17000CFC")]
	protected override string Title
	{
		[Token(Token = "0x6004A91")]
		[Address(RVA = "0x5BD3220", Offset = "0x5BD2220", VA = "0x5BD3220", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorEditStatsPopup.c (UI.CharacterEditorEditStatsPopup$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocaleCommon("Stats");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000CFD")]
	protected override float Width
	{
		[Token(Token = "0x6004A92")]
		[Address(RVA = "0x5BD3280", Offset = "0x5BD2280", VA = "0x5BD3280", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorEditStatsPopup.c (UI.CharacterEditorEditStatsPopup$$get_Width): clean
			return 325.0;
		}
	}

	[Token(Token = "0x17000CFE")]
	protected override float Height
	{
		[Token(Token = "0x6004A93")]
		[Address(RVA = "0x5BD3290", Offset = "0x5BD2290", VA = "0x5BD3290", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorEditStatsPopup.c (UI.CharacterEditorEditStatsPopup$$get_Height): clean
			return 425.0;
		}
	}

	[Token(Token = "0x17000CFF")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004A94")]
		[Address(RVA = "0x5BD32A0", Offset = "0x5BD22A0", VA = "0x5BD32A0", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorEditStatsPopup.c (UI.CharacterEditorEditStatsPopup$$get_VerticalSpacing): clean
			return 20.0;
		}
	}

	[Token(Token = "0x17000D00")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004A95")]
		[Address(RVA = "0x5BD32B0", Offset = "0x5BD22B0", VA = "0x5BD32B0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorEditStatsPopup.c (UI.CharacterEditorEditStatsPopup$$get_HorizontalPadding): clean
			return 0x19;
		}
	}

	[Token(Token = "0x17000D01")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004A96")]
		[Address(RVA = "0x5BD32C0", Offset = "0x5BD22C0", VA = "0x5BD32C0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorEditStatsPopup.c (UI.CharacterEditorEditStatsPopup$$get_VerticalPadding): clean
			return 0x19;
		}
	}

	[Token(Token = "0x6004A97")]
	[Address(RVA = "0x5BD32D0", Offset = "0x5BD22D0", VA = "0x5BD32D0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/CharacterEditorEditStatsPopup.c (UI.CharacterEditorEditStatsPopup$$Setup): 8 lines keep C-only constructs
		byte bVar1;
		Transform pUVar2;
		HumanCustomSettings pSVar3;
		Settings_SetSettingsContainer_HumanCustomSet__o __this_00;
		StringSetting pSVar4;
		IntSetting pSVar5;
		String subCategory;
		String pSVar6;
		ElementStyle __this_01;
		UnityAction pUVar7;
		BaseSetSetting pSVar8;
		HumanStats pCVar9;
		GameObject __this_02;
		Text pUVar10;
		String pSVar11;

		this.Setup(parent);
		pSVar6 = this.get_ThemePanel();
		__this_01 = new ElementStyle(0x18, 130.0, 20.0, pSVar6);
		pUVar2 = this.BottomBar;
		pSVar6 = UIManager.GetLocaleCommon("Save");
		pUVar7 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CharacterEditorEditStatsPopup_Setup_b__17_0);
		ElementFactory.CreateTextButton(pUVar2, __this_01, pSVar6, 0.0, pUVar7);
		pUVar2 = this.BottomBar;
		pSVar6 = UIManager.GetLocaleCommon("Back");
		pUVar7 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CharacterEditorEditStatsPopup_Setup_b__17_1);
		ElementFactory.CreateTextButton(pUVar2, __this_01, pSVar6, 0.0, pUVar7);
		subCategory = "Stats";
		pSVar6 = "CharacterEditor";
		pSVar3 = SettingsManager.HumanCustomSettings;
		if ((pSVar3 != null) &&(__this_00 = pSVar3.CustomSets, __this_00 != null)) {
			pSVar8 = __this_00.GetSelectedSet();
			if (pSVar8 != null) {
				bVar1 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
				if (((pSVar8.klass._2).typeHierarchyDepth < bVar1) ||((pSVar8.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(HumanCustomSet))) {
					throw new InvalidCastException();
				}
			}
			pCVar9 = new HumanStats(null);
			if ((pSVar8 != null) &&(pSVar4 = (*(ulong)((sbyte)pSVar8 + 0x108)), pSVar4 != null)) {
				pSVar11 = pSVar4._value;
				pCVar9 = HumanStats.Deserialize(pCVar9, pSVar11);
				__this_02 = ElementFactory.CreateDefaultLabel(this.SinglePanel, __this_01, (String)**(ulong*)(g_data_07556758 + 0xb8), 0, 4);
				if (__this_02 != null) {
					pUVar10 = __this_02.GetComponent<Text>();
					this._pointsLeftLabel = pUVar10;
					if ((pCVar9 != null) &&(pSVar5 = this.Speed, pSVar5 != null)) {
						pSVar5.Value = pCVar9.Speed;
						pSVar5 = this.Acceleration;
						if (pSVar5 != null) {
							pSVar5.Value = pCVar9.Acceleration;
							pSVar5 = this.Gas;
							if (pSVar5 != null) {
								pSVar5.Value = pCVar9.Gas;
								pSVar5 = this.Ammunition;
								if (pSVar5 != null) {
									pSVar5.Value = pCVar9.Ammunition;
									pUVar2 = this.SinglePanel;
									pSVar5 = this.Acceleration;
									pSVar11 = UIManager.GetLocale(pSVar6, subCategory, "Acceleration", "", "");
									pUVar7 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CharacterEditorEditStatsPopup_Setup_b__17_2);
									ElementFactory.CreateIncrementSetting(pUVar2, __this_01, (BaseSetting)pSVar5, pSVar11, "", 33.0, 30.0, null, pUVar7, null);
									pUVar2 = this.SinglePanel;
									pSVar5 = this.Speed;
									pSVar11 = UIManager.GetLocale(pSVar6, subCategory, "Speed", "", "");
									pUVar7 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CharacterEditorEditStatsPopup_Setup_b__17_3);
									ElementFactory.CreateIncrementSetting(pUVar2, __this_01, (BaseSetting)pSVar5, pSVar11, "", 33.0, 30.0, null, pUVar7, null);
									pUVar2 = this.SinglePanel;
									pSVar5 = this.Gas;
									pSVar11 = UIManager.GetLocale(pSVar6, subCategory, "Gas", "", "");
									pUVar7 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CharacterEditorEditStatsPopup_Setup_b__17_4);
									ElementFactory.CreateIncrementSetting(pUVar2, __this_01, (BaseSetting)pSVar5, pSVar11, "", 33.0, 30.0, null, pUVar7, null);
									pUVar2 = this.SinglePanel;
									pSVar5 = this.Ammunition;
									pSVar6 = UIManager.GetLocale(pSVar6, subCategory, "Ammunition", "", "");
									pUVar7 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CharacterEditorEditStatsPopup_Setup_b__17_5);
									ElementFactory.CreateIncrementSetting(pUVar2, __this_01, (BaseSetting)pSVar5, pSVar6, "", 33.0, 30.0, null, pUVar7, null);
									this.OnStatChanged(this.Speed);
									return;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004A98")]
	[Address(RVA = "0x5BD3D50", Offset = "0x5BD2D50", VA = "0x5BD3D50")]
	protected void OnButtonClick(string button)
	{
		// Lifted from source/cpp/UI/CharacterEditorEditStatsPopup.c (UI.CharacterEditorEditStatsPopup$$OnButtonClick): 5 lines keep C-only constructs
		byte bVar1;
		HumanCustomSettings pSVar2;
		Settings_SetSettingsContainer_HumanCustomSet__o __this_00;
		ImportPopup pUVar3;
		IntSetting pSVar4;
		BaseMenu pUVar5;
		code *vtableDispatch;
		bool bVar6;
		BaseMenu pUVar7;
		HumanStats pCVar8;
		String pSVar9;

		bVar6 = (button == "Back");
		if (bVar6) {
			this.Hide();
			return;
		}
		bVar6 = (button == "Save");
		if (!bVar6) {
			return;
		}
		pSVar2 = SettingsManager.HumanCustomSettings;
		if ((pSVar2 != null) &&(__this_00 = pSVar2.CustomSets, __this_00 != null)) {
			pUVar7 = (BaseMenu)__this_00.GetSelectedSet();
			if (pUVar7 != null) {
				bVar1 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
				if (((pUVar7.klass._2).typeHierarchyDepth < bVar1) ||((pUVar7.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(HumanCustomSet))) goto label_05cd4065;
			}
			pCVar8 = new HumanStats(null);
			if ((pUVar7 != null) &&(pUVar3 = (*(ulong)((sbyte)pUVar7 + 0x108)), pUVar3 != null)) {
				pSVar9 = (String)pUVar3.SinglePanel;
				pCVar8 = HumanStats.Deserialize(pCVar8, pSVar9);
				pSVar4 = this.Speed;
				if ((pSVar4 != null) && (pCVar8 != null)) {
					pCVar8.Speed = pSVar4._value;
					pSVar4 = this.Acceleration;
					if (pSVar4 != null) {
						pCVar8.Acceleration = pSVar4._value;
						pSVar4 = this.Gas;
						if (pSVar4 != null) {
							pCVar8.Gas = pSVar4._value;
							pSVar4 = this.Ammunition;
							if (pSVar4 != null) {
								pCVar8.Ammunition = pSVar4._value;
								pUVar3 = (*(ulong)((sbyte)pUVar7 + 0x108));
								pSVar9 = pCVar8.Serialize();
								if (pUVar3 != null) {
									pUVar3.Value = (object)pSVar9;
									pSVar2 = SettingsManager.HumanCustomSettings;
									if (pSVar2 != null) {
										pSVar2.Save();
										pUVar7 = UIManager.CurrentMenu;
										if (pUVar7 != null) {
											pUVar5 = pUVar7.klass;
											bVar1 = (typeof(CharacterEditorMenu)._2).typeHierarchyDepth;
											if ((bVar1 <= (pUVar5._2).typeHierarchyDepth) &&((pUVar5._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CharacterEditorMenu))) {
												vtableDispatch = (code)((Il2CppClass)pUVar5).vtable[9].methodPtr;
												(*vtableDispatch)(pUVar7,0,((Il2CppClass)pUVar5).vtable[9].method,vtableDispatch);
												return;
											}
	label_05cd4065: ;
											throw new InvalidCastException();
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

	[Token(Token = "0x6004A99")]
	[Address(RVA = "0x5BD3A80", Offset = "0x5BD2A80", VA = "0x5BD3A80")]
	protected void OnStatChanged(IntSetting setting)
	{
		// Lifted from source/cpp/UI/CharacterEditorEditStatsPopup.c (UI.CharacterEditorEditStatsPopup$$OnStatChanged): 4 lines keep C-only constructs
		int iVar1;
		int iVar2;
		int iVar3;
		IntSetting pSVar4;
		IntSetting pSVar5;
		IntSetting pSVar6;
		Text pUVar7;
		int iVar8;
		ulong in_RAX;
		IntSetting pSVar9;
		String pSVar10;
		object arg0;
		int iVar11;
		ulong uStack_38;

		uStack_38 = in_RAX;
		pSVar9 = this.Speed;
		if ((((pSVar9 == null) ||(pSVar4 = this.Gas, pSVar4 == null)) ||(pSVar5 = this.Ammunition, pSVar5 == null)) ||(pSVar6 = this.Acceleration, pSVar6 == null)) goto label_05cd3d43;
		iVar11 = pSVar9._value + pSVar4._value + pSVar5._value +pSVar6._value;
		if (0x140 < iVar11) {
			if (setting == null) goto label_05cd3d43;
			setting.Value = (setting._value - iVar11) + 0x140;
			if (setting._value < 0) {
				pSVar9 = this.Speed;
				if (pSVar9 == null) goto label_05cd3d43;
				pSVar9.SetDefault();
				pSVar9 = this.Gas;
				if (pSVar9 == null) goto label_05cd3d43;
				pSVar9.SetDefault();
				pSVar9 = this.Ammunition;
				if (pSVar9 == null) goto label_05cd3d43;
				pSVar9.SetDefault();
				pSVar9 = this.Acceleration;
				if (pSVar9 == null) goto label_05cd3d43;
				pSVar9.SetDefault();
			}
			this.SyncSettingElements();
			pSVar9 = this.Speed;
			if (pSVar9 == null) goto label_05cd3d43;
		}
		pSVar4 = this.Gas;
		if (((pSVar4 != null) &&(pSVar5 = this.Ammunition, pSVar5 != null)) &&(pSVar6 = this.Acceleration, pSVar6 != null)) {
			iVar11 = pSVar9._value;
			iVar1 = pSVar4._value;
			iVar2 = pSVar5._value;
			iVar3 = pSVar6._value;
			pUVar7 = this._pointsLeftLabel;
			pSVar10 = UIManager.GetLocale("CharacterEditor", "Stats", "PointsLeft", "", "");
			iVar8 = Math.Max(0, 0x140 - (iVar11 + iVar1 + iVar2 + iVar3));
			uStack_38 = CONCAT44(iVar8, (undefined4)uStack_38);
			arg0 = (object)(((long)&uStack_38 + 4));
			pSVar10 = String.Format(pSVar10, arg0);
			if (pUVar7 != null) {
				pUVar7.set_text(pSVar10);
				return;
			}
		}
	label_05cd3d43: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004A9A")]
	[Address(RVA = "0x5BD4070", Offset = "0x5BD3070", VA = "0x5BD4070")]
	public CharacterEditorEditStatsPopup()
	{
		// Lifted from source/cpp/UI/CharacterEditorEditStatsPopup.c (UI.CharacterEditorEditStatsPopup$$.ctor): clean
		IntSetting pSVar1;

		pSVar1 = new IntSetting(0x50, 0x32, 100);
		this.Speed = pSVar1;
		pSVar1 = new IntSetting(0x50, 0x32, 100);
		this.Acceleration = pSVar1;
		pSVar1 = new IntSetting(0x50, 0x32, 100);
		this.Ammunition = pSVar1;
		pSVar1 = new IntSetting(0x50, 0x32, 100);
		this.Gas = pSVar1;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/CharacterEditorEditStatsPopup.c.

	// UI.CharacterEditorEditStatsPopup$$<Setup>b__17_0: clean
	private void Setup_b__17_0()
	{


		this.OnButtonClick("Save");
		return;
	}

	// UI.CharacterEditorEditStatsPopup$$<Setup>b__17_1: clean
	private void Setup_b__17_1()
	{


		this.OnButtonClick("Back");
		return;
	}

	// UI.CharacterEditorEditStatsPopup$$<Setup>b__17_2: clean
	private void Setup_b__17_2()
	{


		this.OnStatChanged(this.Acceleration);
		return;
	}

	// UI.CharacterEditorEditStatsPopup$$<Setup>b__17_3: clean
	private void Setup_b__17_3()
	{


		this.OnStatChanged(this.Speed);
		return;
	}

	// UI.CharacterEditorEditStatsPopup$$<Setup>b__17_4: clean
	private void Setup_b__17_4()
	{


		this.OnStatChanged(this.Gas);
		return;
	}

	// UI.CharacterEditorEditStatsPopup$$<Setup>b__17_5: clean
	private void Setup_b__17_5()
	{


		this.OnStatChanged(this.Ammunition);
		return;
	}
}
