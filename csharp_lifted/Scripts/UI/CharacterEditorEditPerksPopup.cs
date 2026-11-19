// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorEditPerksPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorEditPerksPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorEditPerksPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007B9")]
internal class CharacterEditorEditPerksPopup : BasePopup
{
	[Token(Token = "0x40026E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _pointsLeftLabel;

	[Token(Token = "0x40026E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Dictionary<string, GameObject> _perkButtons;

	[Token(Token = "0x40026E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Dictionary<string, string> _perkDescriptions;

	[Token(Token = "0x17000CF6")]
	protected override string Title
	{
		[Token(Token = "0x6004A81")]
		[Address(RVA = "0x5BD1290", Offset = "0x5BD0290", VA = "0x5BD1290", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorEditPerksPopup.c (UI.CharacterEditorEditPerksPopup$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocale("CharacterEditor", "Perks", "Title", "", "");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000CF7")]
	protected override float Width
	{
		[Token(Token = "0x6004A82")]
		[Address(RVA = "0x5BD1330", Offset = "0x5BD0330", VA = "0x5BD1330", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorEditPerksPopup.c (UI.CharacterEditorEditPerksPopup$$get_Width): clean
			return 580.0;
		}
	}

	[Token(Token = "0x17000CF8")]
	protected override float Height
	{
		[Token(Token = "0x6004A83")]
		[Address(RVA = "0x5BD1340", Offset = "0x5BD0340", VA = "0x5BD1340", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorEditPerksPopup.c (UI.CharacterEditorEditPerksPopup$$get_Height): clean
			return 590.0;
		}
	}

	[Token(Token = "0x17000CF9")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004A84")]
		[Address(RVA = "0x5BD1350", Offset = "0x5BD0350", VA = "0x5BD1350", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorEditPerksPopup.c (UI.CharacterEditorEditPerksPopup$$get_VerticalSpacing): clean
			return 25.0;
		}
	}

	[Token(Token = "0x17000CFA")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004A85")]
		[Address(RVA = "0x5BD1360", Offset = "0x5BD0360", VA = "0x5BD1360", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorEditPerksPopup.c (UI.CharacterEditorEditPerksPopup$$get_HorizontalPadding): clean
			return 0x3c;
		}
	}

	[Token(Token = "0x17000CFB")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004A86")]
		[Address(RVA = "0x5BD1370", Offset = "0x5BD0370", VA = "0x5BD1370", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorEditPerksPopup.c (UI.CharacterEditorEditPerksPopup$$get_VerticalPadding): clean
			return 0x1e;
		}
	}

	[Token(Token = "0x6004A87")]
	[Address(RVA = "0x5BD1380", Offset = "0x5BD0380", VA = "0x5BD1380", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/CharacterEditorEditPerksPopup.c (UI.CharacterEditorEditPerksPopup$$Setup): 4 lines keep C-only constructs
		byte bVar1;
		HumanCustomSettings pSVar2;
		Settings_SetSettingsContainer_HumanCustomSet__o __this_00;
		StringSetting pSVar3;
		String pSVar4;
		ElementStyle __this_01;
		UnityAction pUVar5;
		BaseSetSetting pSVar6;
		HumanStats __this_02;
		GameObject pUVar7;
		Text pUVar8;
		Transform pUVar9;
		ElementStyle pUVar10;
		MethodInfo pMVar11;
		ElementStyle pUVar12;

		this.Setup(parent);
		pSVar4 = this.get_ThemePanel();
		__this_01 = new ElementStyle(0x18, 130.0, 20.0, pSVar4);
		pUVar9 = this.BottomBar;
		pSVar4 = UIManager.GetLocaleCommon("Save");
		pUVar5 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CharacterEditorEditPerksPopup_Setup_b__15_0);
		ElementFactory.CreateTextButton(pUVar9, __this_01, pSVar4, 0.0, pUVar5);
		pUVar9 = this.BottomBar;
		pSVar4 = UIManager.GetLocaleCommon("Back");
		pUVar5 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CharacterEditorEditPerksPopup_Setup_b__15_1);
		ElementFactory.CreateTextButton(pUVar9, __this_01, pSVar4, 0.0, pUVar5);
		pSVar2 = SettingsManager.HumanCustomSettings;
		if ((pSVar2 != null) &&(__this_00 = pSVar2.CustomSets, __this_00 != null)) {
			pSVar6 = __this_00.GetSelectedSet();
			if (pSVar6 != null) {
				bVar1 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
				if (((pSVar6.klass._2).typeHierarchyDepth < bVar1) ||((pSVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(HumanCustomSet))) {
					throw new InvalidCastException();
				}
			}
			__this_02 = new HumanStats(null);
			if ((pSVar6 != null) &&(pSVar3 = (*(ulong)((sbyte)pSVar6 + 0x108)), pSVar3 != null)) {
				pSVar4 = pSVar3._value;
				HumanStats.Deserialize(__this_02, pSVar4);
				pUVar7 = ElementFactory.CreateDefaultLabel(this.SinglePanel, __this_01, (String)**(ulong*)(g_data_07556758 + 0xb8), 0, 4);
				if (pUVar7 != null) {
					pUVar8 = pUVar7.GetComponent<Text>();
					this._pointsLeftLabel = pUVar8;
					pUVar7 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 20.0, 3);
					if (pUVar7 != null) {
						pUVar9 = pUVar7.transform;
						pSVar4 = UIManager.GetLocale("CharacterEditor", "Perks", "RefillTimeDescription", "", "");
						this.CreatePerkButton(pUVar9, __this_01, "RefillTime", pSVar4);
						pUVar7 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 20.0, 3);
						if (pUVar7 != null) {
							pUVar10 = (ElementStyle)pUVar7.transform;
							pSVar4 = UIManager.GetLocale("CharacterEditor", "Perks", "DurableBladesDescription", "", "");
							pMVar11 = (MethodInfo *)"DurableBlades";
							pUVar12 = pUVar10;
							this.CreatePerkButton((Transform)pUVar10, __this_01, "DurableBlades", pSVar4);
							ElementFactory.CreateRawImage((Transform)pUVar10, pUVar12, "Icons/Navigation/ArrowRightIcon", 32.0, 32.0);
							pSVar4 = UIManager.GetLocale("CharacterEditor", "Perks", "AdvancedAlloyDescription", "", "");
							this.CreatePerkButton((Transform)pUVar10, __this_01, "AdvancedAlloy", pSVar4);
							pUVar7 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 20.0, 3);
							if (pUVar7 != null) {
								pUVar10 = (ElementStyle)pUVar7.transform;
								pSVar4 = UIManager.GetLocale("CharacterEditor", "Perks", "VerticalDashDescription", "", "");
								pMVar11 = (MethodInfo *)"VerticalDash";
								pUVar12 = pUVar10;
								this.CreatePerkButton((Transform)pUVar10, __this_01, "VerticalDash", pSVar4);
								ElementFactory.CreateRawImage((Transform)pUVar10, pUVar12, "Icons/Navigation/ArrowRightIcon", 32.0, 32.0);
								pSVar4 = UIManager.GetLocale("CharacterEditor", "Perks", "OmniDashDescription", "", "");
								this.CreatePerkButton((Transform)pUVar10, __this_01, "OmniDash", pSVar4);
								this.OnPerkChanged("");
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004A88")]
	[Address(RVA = "0x5BD1FD0", Offset = "0x5BD0FD0", VA = "0x5BD1FD0")]
	protected void CreatePerkButton(Transform group, ElementStyle style, string name, string desc)
	{
		// Lifted from source/cpp/UI/CharacterEditorEditPerksPopup.c (UI.CharacterEditorEditPerksPopup$$CreatePerkButton): 2 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		String title;
		CharacterEditorEditPerksPopup.c__DisplayClass16_0 __this_00;
		UnityAction __this_01;
		GameObject value;

		if (Il2CppMethodInitialized_07547b93 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CharacterEditorEditPerksPopup.c__DisplayClass16_0)) ;
			Il2CppMethodInitialized_07547b93 = true;
		}
		__this_00 = new CharacterEditorEditPerksPopup.c__DisplayClass16_0();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			__this_00.name = name;
			pSVar1 = (Dictionary<object, object>)this._perkDescriptions;
			if (pSVar1 != null) {
				pSVar1.Add((object)__this_00.name, (object)desc);
				pSVar1 = (Dictionary<object, object>)this._perkButtons;
				title = __this_00.name;
				__this_01 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_UI_CharacterEditorEditPerksPopup_c__DisplayClass16_0_CreatePerkButton_b__0);
				value = ElementFactory.CreatePerkButton(group, style, title, desc, 195.0, 95.0, 120.0, __this_01);
				if (pSVar1 != null) {
					pSVar1.Add((object)title, (object)value);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004A89")]
	[Address(RVA = "0x5BD2140", Offset = "0x5BD1140", VA = "0x5BD2140")]
	protected void CreateArrow(Transform group, ElementStyle style)
	{
		// Lifted from source/cpp/UI/CharacterEditorEditPerksPopup.c (UI.CharacterEditorEditPerksPopup$$CreateArrow): clean
		ElementStyle style_00;

		style_00 = (ElementStyle)group;
		ElementFactory.CreateRawImage(group, style_00, "Icons/Navigation/ArrowRightIcon", 32.0, 32.0);
		return;
	}

	[Token(Token = "0x6004A8A")]
	[Address(RVA = "0x5BD2E40", Offset = "0x5BD1E40", VA = "0x5BD2E40")]
	protected void OnButtonClick(string button)
	{
		// Lifted from source/cpp/UI/CharacterEditorEditPerksPopup.c (UI.CharacterEditorEditPerksPopup$$OnButtonClick): 4 lines keep C-only constructs
		byte bVar1;
		HumanCustomSettings pSVar2;
		Settings_SetSettingsContainer_HumanCustomSet__o __this_00;
		ImportPopup pUVar3;
		BaseMenu pUVar4;
		bool bVar5;
		BaseMenu pUVar6;
		HumanStats pCVar7;
		String pSVar8;

		bVar5 = (button == "Back");
		if (bVar5) {
	label_05cd307a: ;
			this.Hide();
			return;
		}
		bVar5 = (button == "Save");
		if (!bVar5) {
			return;
		}
		pSVar2 = SettingsManager.HumanCustomSettings;
		if ((pSVar2 != null) &&(__this_00 = pSVar2.CustomSets, __this_00 != null)) {
			pUVar6 = (BaseMenu)__this_00.GetSelectedSet();
			if (pUVar6 != null) {
				bVar1 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
				if (((pUVar6.klass._2).typeHierarchyDepth < bVar1) ||((pUVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(HumanCustomSet))) goto label_05cd30ab;
			}
			pCVar7 = new HumanStats(null);
			if ((pUVar6 != null) &&(pUVar3 = (*(ulong)((sbyte)pUVar6 + 0x108)), pUVar3 != null)) {
				pSVar8 = (String)pUVar3.SinglePanel;
				pCVar7 = HumanStats.Deserialize(pCVar7, pSVar8);
				if (pCVar7 != null) {
					pUVar3 = (*(ulong)((sbyte)pUVar6 + 0x108));
					pSVar8 = pCVar7.Serialize();
					if (pUVar3 != null) {
						pUVar3.Value = (object)pSVar8;
						pUVar6 = UIManager.CurrentMenu;
						if (pUVar6 != null) {
							pUVar4 = pUVar6.klass;
							bVar1 = (typeof(CharacterEditorMenu)._2).typeHierarchyDepth;
							if (((pUVar4._2).typeHierarchyDepth < bVar1) ||((pUVar4._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(CharacterEditorMenu) )) {
	label_05cd30ab: ;
								throw new InvalidCastException();
							}
							(*(code)((Il2CppClass)pUVar4).vtable[9].methodPtr)(pUVar6,0,((Il2CppClass)pUVar4).vtable[9].method);
							goto label_05cd307a;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004A8B")]
	[Address(RVA = "0x5BD2180", Offset = "0x5BD1180", VA = "0x5BD2180")]
	protected void OnPerkChanged(string perkName)
	{
		// Lifted from source/cpp/UI/CharacterEditorEditPerksPopup.c (UI.CharacterEditorEditPerksPopup$$OnPerkChanged): 9 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		int iVar3;
		HumanCustomSettings pSVar4;
		Settings_SetSettingsContainer_HumanCustomSet__o __this_00;
		StringSetting pSVar5;
		Dictionary<object, object> pSVar6;
		bool bVar7;
		int iVar8;
		int iVar9;
		BaseSetSetting pSVar10;
		HumanStats pCVar11;
		BasePerk pCVar12;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_01;
		String pSVar13;
		String[] values;
		GameObject __this_02;
		Transform pUVar14;
		Text pUVar15;
		String pSVar16;
		object arg0;
		int iVar17;
		int local_6c;
		CharacterEditorEditPerksPopup local_68;
		byte[] local_60 = new byte[16];
		String local_50;
		byte[] local_48 = new byte[8];
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o pSStack_40;
		String local_38;

		local_68 = this;
		local_48 = (byte[])0x0;
		local_38 = null;
		local_6c = 0;
		pSVar4 = SettingsManager.HumanCustomSettings;
		if ((pSVar4 == null) ||(__this_00 = pSVar4.CustomSets, __this_00 == null)) goto label_05cd291e;
		pSVar10 = __this_00.GetSelectedSet();
		if (pSVar10 != null) {
			bVar1 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
			if (((pSVar10.klass._2).typeHierarchyDepth < bVar1) ||((pSVar10.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(HumanCustomSet))) {
				throw new InvalidCastException();
			}
		}
		pCVar11 = new HumanStats(null);
		if ((pSVar10 == null) ||(pSVar5 = (*(ulong)((sbyte)pSVar10 + 0x108)), pSVar5 == null)) goto label_05cd291e;
		pSVar16 = pSVar5._value;
		pCVar11 = HumanStats.Deserialize(pCVar11, pSVar16);
		if (pCVar11 == null) goto label_05cd291e;
		iVar2 = HumanStats.MaxPerkPoints;
		iVar8 = pCVar11.GetPerkPoints();
		pSVar6 = (Dictionary<object, object>)pCVar11.Perks;
		if (pSVar6 == null) goto label_05cd291e;
		bVar7 = pSVar6.ContainsKey((object)perkName);
		if (bVar7) {
			pSVar6 = (Dictionary<object, object>)pCVar11.Perks;
			if (pSVar6 == null) goto label_05cd291e;
			pCVar12 = pSVar6.get_Item((object)perkName);
			if (pCVar12 == null) goto label_05cd291e;
			iVar3 = pCVar12.CurrPoints;
			iVar9 = pCVar12.get_MaxPoints();
			iVar17 = 0;
			if ((iVar3 < iVar9) && (iVar8 < iVar2)) {
				bVar7 = pCVar12.HasRequirements(pCVar11.Perks);
				if (!bVar7) goto label_05cd24a9;
				iVar17 = pCVar12.CurrPoints + 1;
			}
			pCVar12.CurrPoints = iVar17;
		}
	label_05cd24a9: ;
		pSVar6 = (Dictionary<object, object>)local_68._perkButtons;
		if (pSVar6 != null) {
			__this_01 = pSVar6.Keys ;
			if (__this_01 != null) {
				local_60.GetEnumerator(__this_01);
				local_38 = local_50;
				local_48 = (byte[])local_60._0_8_;
				pSStack_40 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_60._8_8_;
				local_60._0_8_ = null;
				local_60._8_8_ =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_48;
				while(true) {
					bVar7 = local_48.MoveNext();
					pSVar16 = local_38;
					if (!bVar7) break;
					pSVar6 = (Dictionary<object, object>)pCVar11.Perks;
					if (pSVar6 == null) {
						throw new NullReferenceException();
					}
					pCVar12 = pSVar6.get_Item((object)local_38);
					if (pCVar12 == null) {
						throw new NullReferenceException();
					}
					bVar7 = pCVar12.HasRequirements(pCVar11.Perks) ;
					if (!bVar7) {
						pCVar12.CurrPoints = 0;
					}
					pSVar13 = Util.PascalToSentence(pSVar16);
					values = (String[])new string[7];
					if (values == null) {
						throw new NullReferenceException();
					}
					if ((int)values.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					values[0] = "_b_";
					if ((values.Length & 0xfffffffe) == 0) {
						throw new IndexOutOfRangeException();
					}
					values[1] = pSVar13;
					if ((uint)values.Length < 3) {
						throw new IndexOutOfRangeException();
					}
					values[2] = "</b>\n(";
					pSVar13 = (pCVar12.CurrPoints).ToString();
					if ((values.Length & 0xfffffffc) == 0) {
						throw new IndexOutOfRangeException();
					}
					values[3] = pSVar13;
					if ((uint)values.Length < 5) {
						throw new IndexOutOfRangeException();
					}
					values[4] = "/";
					local_6c = pCVar12.get_MaxPoints();
					pSVar13 = local_6c.ToString();
					if ((uint)values.Length < 6) {
						throw new IndexOutOfRangeException();
					}
					values[5] = pSVar13;
					if ((uint)values.Length < 7) {
						throw new IndexOutOfRangeException();
					}
					values[6] = ")";
					pSVar13 = String.Concat(values);
					pSVar6 = (Dictionary<object, object>)local_68._perkButtons;
					if (pSVar6 == null) {
						throw new NullReferenceException();
					}
					__this_02 = pSVar6.get_Item((object)pSVar16);
					if (__this_02 == null) {
						throw new NullReferenceException();
					}
					pUVar14 = __this_02.transform;
					if (pUVar14 == null) {
						throw new NullReferenceException();
					}
					pUVar14 = pUVar14.Find("Text");
					if (pUVar14 == null) {
						throw new NullReferenceException();
					}
					pUVar15 = pUVar14.GetComponent<Text>();
					if (pUVar15 == null) {
						throw new NullReferenceException();
					}
					pUVar15.set_text(pSVar13);
				}
				local_48.Dispose();
				iVar8 = pCVar11.GetPerkPoints();
				pUVar15 = local_68._pointsLeftLabel;
				pSVar16 = UIManager.GetLocale("CharacterEditor", "Stats", "PointsLeft", "", "");
				iVar8 = Math.Max(0, iVar2 - iVar8);
				local_60._0_4_ = iVar8;
				arg0 = (object)local_60;
				pSVar16 = String.Format(pSVar16, arg0);
				pSVar16 = String.Concat("_b_", pSVar16, "</b>");
				if (pUVar15 != null) {
					pUVar15.set_text(pSVar16);
					pSVar5 = (*(ulong)((sbyte)pSVar10 + 0x108));
					pSVar16 = pCVar11.Serialize();
					if (pSVar5 != null) {
						pSVar5.Value = (object)pSVar16;
						return;
					}
				}
			}
		}
	label_05cd291e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004A8C")]
	[Address(RVA = "0x5BD30B0", Offset = "0x5BD20B0", VA = "0x5BD30B0")]
	public CharacterEditorEditPerksPopup()
	{
		// Lifted from source/cpp/UI/CharacterEditorEditPerksPopup.c (UI.CharacterEditorEditPerksPopup$$.ctor): clean
		Dictionary<string, GameObject> __this_00;
		Dictionary<string, string> __this_01;

		__this_00 = new Dictionary<string, GameObject>();
		this._perkButtons = __this_00;
		__this_01 = new Dictionary<string, string>();
		this._perkDescriptions = __this_01;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/CharacterEditorEditPerksPopup.c.

	// UI.CharacterEditorEditPerksPopup.<>c__DisplayClass16_0$$.ctor: clean
	private void c__DisplayClass16_0__ctor()
	{
		base();
		return;
	}

	// UI.CharacterEditorEditPerksPopup$$<Setup>b__15_0: clean
	private void Setup_b__15_0()
	{


		this.OnButtonClick("Save");
		return;
	}

	// UI.CharacterEditorEditPerksPopup$$<Setup>b__15_1: clean
	private void Setup_b__15_1()
	{


		this.OnButtonClick("Back");
		return;
	}

	// UI.CharacterEditorEditPerksPopup.<>c__DisplayClass16_0$$<CreatePerkButton>b__0: clean
	private void c__DisplayClass16_0__CreatePerkButton_b__0()
	{
		CharacterEditorEditPerksPopup __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnPerkChanged(this.name);
		return;
	}
}
