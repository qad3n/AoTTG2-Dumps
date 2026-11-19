// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterCategoryPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/CharacterCategoryPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterCategoryPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x200080A")]
internal class CharacterCategoryPanel : CategoryPanel
{
	[Token(Token = "0x40027FC")]
	protected const string LocaleCategory = "CharacterPopup";

	[Token(Token = "0x40027FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected AottgInGameView View;

	[Token(Token = "0x40027FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private readonly Dictionary<string, Action> _settingActions;

	[Token(Token = "0x40027FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private readonly Dictionary<string, Action<string>> _choiceActions;

	[Token(Token = "0x17000D64")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6004CF3")]
		[Address(RVA = "0x5BFC630", Offset = "0x5BFB630", VA = "0x5BFC630", Slot = "13")]
		get
		{
			// Lifted from source/cpp/UI/CharacterCategoryPanel.c (UI.CharacterCategoryPanel$$get_DoublePanel): clean
			return true;
		}
	}

	[Token(Token = "0x17000D65")]
	protected CharacterPopup Popup
	{
		[Token(Token = "0x6004CF4")]
		[Address(RVA = "0x5BFC640", Offset = "0x5BFB640", VA = "0x5BFC640")]
		get
		{
			// Lifted from source/cpp/UI/CharacterCategoryPanel.c (UI.CharacterCategoryPanel$$get_Popup): 1 lines keep C-only constructs
			byte bVar1;
			CharacterPopup pUVar2;

			pUVar2 = (CharacterPopup)this.Parent;
			if (pUVar2 != null) {
				bVar1 = (typeof(CharacterPopup)._2).typeHierarchyDepth;
				if (((pUVar2.klass._2).typeHierarchyDepth < bVar1) ||((pUVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(CharacterPopup))) {
					throw new InvalidCastException();
				}
			}
			return pUVar2;
		}
	}

	[Token(Token = "0x6004CF5")]
	[Address(RVA = "0x5BFC6A0", Offset = "0x5BFB6A0", VA = "0x5BFC6A0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/CharacterCategoryPanel.c (UI.CharacterCategoryPanel$$Setup): 2 lines keep C-only constructs
		Vector2 position;
		Vector2 value;
		AottgInGameView pGVar1;
		RectTransform __this_00;
		Transform pUVar2;
		Transform pUVar3;
		float fVar4;
		float fVar5;
		Nullable<float> local_30;

		this.Parent = parent;
		pGVar1 = new AottgInGameView();
		this.View = pGVar1;
		__this_00 = (RectTransform)this.transform;
		fVar4 = this.GetWidth();
		fVar5 = this.GetHeight();
		if (__this_00 != null) {
			if (__this_00.klass != typeof(RectTransform)) {
				throw new InvalidCastException();
			}
			value.y = fVar5;
			value.x = fVar4;
			__this_00.sizeDelta = value;
			pGVar1 = this.View;
			pUVar2 = this.transform;
			fVar4 = this.GetWidth();
			fVar5 = this.GetHeight();
			local_30.hasValue = false;
			local_30._1_3_ = 0;
			local_30.value = 0.0;
			local_30 = new Nullable<float>(32.0);
			if (pGVar1 != null) {
				pUVar2 = pGVar1.Panel(pUVar2, "clear", fVar4, fVar5, true, (Nullable<float>)local_30);
				position = (Vector2.zeroVector);
				AottgInGameView.Position(pUVar2, (Vector2)position);
				pUVar3 = this.CreateColumn(pUVar2);
				this.DoublePanelLeft = pUVar3;
				pUVar2 = this.CreateColumn(pUVar2);
				this.DoublePanelRight = pUVar2;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004CF6")]
	[Address(RVA = "0x5BFC900", Offset = "0x5BFB900", VA = "0x5BFC900")]
	private Transform CreateColumn(Transform parent)
	{
		// Lifted from source/cpp/UI/CharacterCategoryPanel.c (UI.CharacterCategoryPanel$$CreateColumn): 1 lines keep C-only constructs
		AottgInGameView __this_00;
		GisketchNodeDefinition __this_01;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar1;
		GameObject __this_02;
		Transform pUVar2;
		float value;

		__this_00 = this.View;
		__this_01 = il2cpp_codegen_object_new(typeof(GisketchNodeDefinition)) ;
		__this_01 = new GisketchNodeDefinition();
		if (__this_01 != null) {
			__this_01.type = "Panel";
			__this_01.style = "clear";
			width = AottgUi.Points(440.0);
			value = this.GetHeight();
			height = AottgUi.Points(value);
			pGVar1 = AottgUi.Layout("Column", "FlexStart", "Center", null, null, 18.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 20.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			__this_01.layout = pGVar1;
			if (__this_00 != null) {
				__this_02 = __this_00.Build(parent, __this_01);
				if (__this_02 != null) {
					return pUVar2;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004CF7")]
	[Address(RVA = "0x5BFCAD0", Offset = "0x5BFBAD0", VA = "0x5BFCAD0")]
	public void OpenSetting(string id)
	{
		// Lifted from source/cpp/UI/CharacterCategoryPanel.c (UI.CharacterCategoryPanel$$OpenSetting): 1 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		bool bVar1;
		object pIStack_18;

		pIStack_18 = null;
		__this_00 = (Dictionary<object, object>)this._settingActions;
		if (__this_00 == null) {
	label_05cfcb3c: ;
			throw new NullReferenceException();
		}
		bVar1 = __this_00.TryGetValue((object)id, ref pIStack_18);
		if (bVar1) {
			if (pIStack_18 == null) goto label_05cfcb3c;
			(*pIStack_18[1].monitor)(pIStack_18[4].klass,pIStack_18[2].monitor);
		}
		return;
	}

	[Token(Token = "0x6004CF8")]
	[Address(RVA = "0x5BFCB50", Offset = "0x5BFBB50", VA = "0x5BFCB50")]
	protected static string[] Labels(string group, IEnumerable<string> options)
	{
		// Lifted from source/cpp/UI/CharacterCategoryPanel.c (UI.CharacterCategoryPanel$$Labels): 4 lines keep C-only constructs
		CharacterCategoryPanel.c__DisplayClass11_0 __this;
		Func<string, string> __this_00;
		System_Collections_Generic_IEnumerable_TResult__o source;
		String[] pSVar1;

		__this = new CharacterCategoryPanel.c__DisplayClass11_0();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.group = group;
		__this_00 = new Func<string, string>((object)__this, (intptr_t)MethodInfo_UI_CharacterCategoryPanel_c__DisplayClass11_0_Labels_b__0);
		source = Enumerable.Select<string, string>((System_Collections_Generic_IEnumerable_TSource__o)options, (System_Func_TSource__TResult__o)__this_00);
		pSVar1 = (String[])Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)source);
		return pSVar1;
	}

	[Token(Token = "0x6004CF9")]
	[Address(RVA = "0x5BFCC50", Offset = "0x5BFBC50", VA = "0x5BFCC50")]
	protected void Choice(Transform parent, BaseSetting setting, string title, string[] options, [Optional] Action changed, [Optional] string[] labels)
	{
		// Lifted from source/cpp/UI/CharacterCategoryPanel.c (UI.CharacterCategoryPanel$$Choice): 14 lines keep C-only constructs
		CharacterCategoryPanel.c__DisplayClass12_0 targetAddress;
		byte bVar1;
		uint uVar2;
		Dictionary<object, object> pSVar3;
		AottgInGameView __this_00;
		String[] options_00;
		BasePanel pUVar4;
		CharacterCategoryPanel pUVar5;
		uint uVar6;
		CharacterCategoryPanel.c__DisplayClass12_0 __this_01;
		String pSVar7;
		GisketchNodeDefinition __this_02;
		Func<T1, T2, TResult> __this_03;
		System_Collections_Generic_IEnumerable_TResult__o source;
		GisketchChoiceOptionDefinition[] pGVar8;
		String pSVar9;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar10;
		GameObject __this_04;
		AottgChoiceControl pGVar11;
		Action<string> __this_05;
		uint uVar12;
		String* method_00;
		int local_64;
		CharacterCategoryPanel local_60;
		Transform local_58;
		BaseSetting* local_50;
		Enum local_48;

		local_60 = this;
		__this_01 = il2cpp_codegen_object_new(typeof(CharacterCategoryPanel.c__DisplayClass12_0)) ;
		__this_01 = new Object();
		if (__this_01 != null) {
			targetAddress = &__this_01.fields;
			__this_01.options = options;
			local_50 = &__this_01.setting;
			__this_01.setting = setting;
			__this_01.changed = changed;
			pUVar5 = local_60;
			pSVar3 = (Dictionary<object, object>)local_60._choiceActions;
			if (pSVar3 != null) {
				local_64 = pSVar3.Count;
				pSVar7 = local_64.ToString();
				method_00 = &"character-choice-";
				pSVar7 = String.Concat("character-choice-", pSVar7);
				__this_00 = pUVar5.View;
				local_58 = pUVar5.SettingRow(parent, title);
				__this_02 = new GisketchNodeDefinition();
				if (__this_02 != null) {
					__this_02.type = "Dropdown";
					__this_02.id = pSVar7;
					__this_02.style = "dropdown";
					__this_02.options = targetAddress.options;
					if (labels == null) {
						pGVar8 = null;
					}
					else {
						__this_03 = (Func<T1, T2, TResult>)il2cpp_codegen_object_new(typeof(Func<string, int, GisketchChoiceOptionDefinition>));
						__this_03 = new Func<object, int, object>((object)__this_01, (intptr_t)MethodInfo_UI_CharacterCategoryPanel_c__DisplayClass12_0_Choice_b__1);
						source = Enumerable.Select<string, GisketchChoiceOptionDefinition>((System_Collections_Generic_IEnumerable_TSource__o)labels, (System_Func_TSource__int__TResult__o)__this_03);
						pGVar8 = (GisketchChoiceOptionDefinition[])Enumerable.ToArray<GisketchChoiceOptionDefinition>((System_Collections_Generic_IEnumerable_TSource__o)source);
					}
					__this_02.choiceOptions = pGVar8;
					local_48.klass = (Enum)typeof(AottgButtonVariant);
					local_48.monitor = (IntPtr)0xffffffffffffffff;
					pSVar9 = local_48.ToString();
					pSVar9 = String.Concat("button", pSVar9);
					__this_02.choiceArrowStyle = pSVar9;
					options_00 = targetAddress.options;
					uVar6 = AottgCharacterPickerPopup.GetIndex(*local_50, options_00);
					if (options_00 != null) {
						uVar2 = (uint)options_00.Length;
						uVar12 = uVar2 - 1;
						if ((int)uVar6 < (int)uVar12) {
							uVar12 = uVar6;
						}
						if ((int)uVar6 < 0) {
							uVar12 = 0;
						}
						if (uVar2 <= uVar12) {
							throw new IndexOutOfRangeException();
						}
						__this_02.value = options_00[(int)uVar12];
						__this_02.action = "ingame.character.choice";
						width = AottgUi.Points(240.0);
						height = AottgUi.Points(48.0);
						pGVar10 = AottgUi.Layout("Row", null, "Center", null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
						__this_02.layout = pGVar10;
						pUVar5 = local_60;
						if (__this_00 != null) {
							__this_04 = __this_00.Build(local_58, __this_02);
							if (__this_04 != null) {
								pGVar11 = __this_04.GetComponent<AottgChoiceControl>();
								pUVar4 = pUVar5.Parent;
								if (pUVar4 != null) {
									bVar1 = (typeof(CharacterPopup)._2).typeHierarchyDepth;
									if (((pUVar4.klass._2).typeHierarchyDepth < bVar1) ||((pUVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterPopup))) {
										throw new InvalidCastException();
									}
									if (pGVar11 != null) {
										pGVar11._OverlayManager_k__BackingField =(GisketchOverlayManager)(*(ulong)((sbyte)pUVar4 + 0xc8));
										pSVar3 = (Dictionary<object, object>)pUVar5._choiceActions;
										__this_05 = new Action<string>((object)__this_01, (intptr_t)MethodInfo_UI_CharacterCategoryPanel_c__DisplayClass12_0_Choice_b__0);
										if (pSVar3 != null) {
											pSVar3.set_Item((object)pSVar7, (object)__this_05) ;
											return;
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

	[Token(Token = "0x6004CFA")]
	[Address(RVA = "0x5BFD370", Offset = "0x5BFC370", VA = "0x5BFD370")]
	protected void TeamChoice(Transform parent, BaseSetting setting)
	{
		// Lifted from source/cpp/UI/CharacterCategoryPanel.c (UI.CharacterCategoryPanel$$TeamChoice): clean
		String[] options;
		String title;
		String[] labels;

		options = (String[])new string[2];
		if (options == null) {
			throw new NullReferenceException();
		}
		if ((int)options.Length != 0) {
			options[0] = TeamInfo.Blue;
			if ((options.Length & 0xfffffffe) != 0) {
				options[1] = TeamInfo.Red;
				title = UIManager.GetLocaleCommon("Team");
				labels = CharacterCategoryPanel.Labels("Team", (IEnumerable<string>)options);
				this.Choice(parent, setting, title, options, null, labels);
				return;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6004CFB")]
	[Address(RVA = "0x5BFD4C0", Offset = "0x5BFC4C0", VA = "0x5BFD4C0")]
	public void SelectChoice(string id, string value)
	{
		// Lifted from source/cpp/UI/CharacterCategoryPanel.c (UI.CharacterCategoryPanel$$SelectChoice): 1 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		bool bVar1;
		object pIStack_20;

		pIStack_20 = null;
		__this_00 = (Dictionary<object, object>)this._choiceActions;
		if (__this_00 == null) {
	label_05cfd53d: ;
			throw new NullReferenceException();
		}
		bVar1 = __this_00.TryGetValue((object)id, ref pIStack_20);
		if (bVar1) {
			if (pIStack_20 == null) goto label_05cfd53d;
			(*pIStack_20[1].monitor)(pIStack_20[4].klass,value,pIStack_20[2].monitor);
		}
		return;
	}

	[Token(Token = "0x6004CFC")]
	[Address(RVA = "0x5BFD550", Offset = "0x5BFC550", VA = "0x5BFD550")]
	protected void IconPicker(Transform parent, BaseSetting setting, string title, string[] options, string[] icons, [Optional] Action changed, [Optional] string[] tooltips, [Optional][DefaultParameterValue(144f)] float previewSize, [Optional] string[] labels)
	{
		// Lifted from source/cpp/UI/CharacterCategoryPanel.c (UI.CharacterCategoryPanel$$IconPicker): 9 lines keep C-only constructs
		String[]* targetAddress;
		String[]* targetAddress_00;
		Dictionary<object, object> pSVar1;
		AottgInGameView __this_00;
		String[] options_00;
		uint uVar2;
		CharacterCategoryPanel.c__DisplayClass15_0 __this_01;
		String pSVar3;
		Transform parent_00;
		Button __this_02;
		TMP_Text pTVar4;
		Action __this_03;
		uint uVar5;
		String* method_00;
		uint uVar6;
		String[] pSVar7;
		int local_44;
		String local_40;
		Transform local_38;

		local_40 = (String)CONCAT44(local_40._4_4_, previewSize);
		local_38 = parent;
		local_44 = 0;
		__this_01 = il2cpp_codegen_object_new(typeof(CharacterCategoryPanel.c__DisplayClass15_0)) ;
		__this_01 = new Object();
		if (__this_01 != null) {
			__this_01.__4__this = this;
			__this_01.setting = setting;
			__this_01.title = title;
			targetAddress = &__this_01.options;
			__this_01.options = options;
			__this_01.icons = icons;
			__this_01.tooltips = tooltips;
			__this_01.changed = changed;
			__this_01.previewSize = local_40._0_4_;
			targetAddress_00 = &__this_01.labels;
			__this_01.labels = labels;
			pSVar1 = (Dictionary<object, object>)this._settingActions;
			if (pSVar1 != null) {
				local_44 = pSVar1.Count;
				pSVar3 = local_44.ToString();
				method_00 = &"character-setting-";
				local_40 = String.Concat("character-setting-", pSVar3);
				pSVar7 = *targetAddress_00;
				if (pSVar7 == null) {
					pSVar7 = *targetAddress;
				}
				__this_01.displayed = pSVar7;
				parent_00 = this.SettingRow(local_38, __this_01.title);
				__this_00 = this.View;
				pSVar7 = __this_01.displayed;
				options_00 = __this_01.options;
				uVar2 = AottgCharacterPickerPopup.GetIndex(__this_01.setting, options_00);
				pSVar3 = local_40;
				if ((options_00 != null) && (pSVar7 != null)) {
					uVar6 = (int)options_00.Length - 1;
					if ((int)uVar2 < (int)uVar6) {
						uVar6 = uVar2;
					}
					uVar5 = 0;
					if (-1 < (int)uVar2) {
						uVar5 = uVar6;
					}
					if ((uint)pSVar7.Length <= uVar5) {
						throw new IndexOutOfRangeException();
					}
					if (__this_00 != null) {
						__this_02 = __this_00.Button(parent_00, pSVar7[(int)uVar5], "ingame.character.setting", local_40, 240.0, 48.0, 3);
						if (__this_02 != null) {
							pTVar4 = __this_02.GetComponentInChildren<TMP_Text>();
							__this_01.label = pTVar4;
							pSVar1 = (Dictionary<object, object>)this._settingActions;
							__this_03 = new Action((object)__this_01, (intptr_t)MethodInfo_UI_CharacterCategoryPanel_c__DisplayClass15_0_IconPicker_b__0);
							if (pSVar1 != null) {
								pSVar1.set_Item((object)pSVar3, (object)__this_03);
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004CFD")]
	[Address(RVA = "0x5BFD320", Offset = "0x5BFC320", VA = "0x5BFD320")]
	private static string CurrentOption(BaseSetting setting, string[] options)
	{
		// Lifted from source/cpp/UI/CharacterCategoryPanel.c (UI.CharacterCategoryPanel$$CurrentOption): clean
		uint uVar1;
		uint uVar2;
		uint uVar3;

		uVar2 = AottgCharacterPickerPopup.GetIndex(setting, options);
		if (options == null) {
			throw new NullReferenceException();
		}
		uVar1 = (uint)options.Length;
		uVar3 = uVar1 - 1;
		if ((int)uVar2 < (int)uVar3) {
			uVar3 = uVar2;
		}
		if ((int)uVar2 < 0) {
			uVar3 = 0;
		}
		if (uVar1 <= uVar3) {
			throw new IndexOutOfRangeException();
		}
		return options[(int)uVar3];
	}

	[Token(Token = "0x6004CFE")]
	[Address(RVA = "0x5BFD850", Offset = "0x5BFC850", VA = "0x5BFD850")]
	private static int CurrentIndex(BaseSetting setting, string[] options)
	{
		// Lifted from source/cpp/UI/CharacterCategoryPanel.c (UI.CharacterCategoryPanel$$CurrentIndex): clean
		int iVar1;
		int iVar2;

		iVar1 = AottgCharacterPickerPopup.GetIndex(setting, options);
		if (options == null) {
			throw new NullReferenceException();
		}
		iVar2 = (int)options.Length + -1;
		if (iVar1 < iVar2) {
			iVar2 = iVar1;
		}
		if (iVar1 < 0) {
			iVar2 = 0;
		}
		return iVar2;
	}

	[Token(Token = "0x6004CFF")]
	[Address(RVA = "0x5BFD1F0", Offset = "0x5BFC1F0", VA = "0x5BFD1F0")]
	private Transform SettingRow(Transform parent, string title)
	{
		// Lifted from source/cpp/UI/CharacterCategoryPanel.c (UI.CharacterCategoryPanel$$SettingRow): 1 lines keep C-only constructs
		AottgInGameView pGVar1;
		Transform parent_00;
		TMP_Text __this_00;
		Nullable<float> local_28;

		pGVar1 = this.View;
		local_28.hasValue = false;
		local_28._1_3_ = 0;
		local_28.value = 0.0;
		local_28 = new Nullable<float>(16.0);
		if (pGVar1 != null) {
			parent_00 = pGVar1.Panel(parent, "clear", 440.0, 48.0, true, (Nullable<float>)local_28);
			pGVar1 = this.View;
			if (pGVar1 != null) {
				__this_00 = pGVar1.Text(parent_00, title, 184.0, 48.0, "inGameInfo");
				if (__this_00 != null) {
					__this_00.enableAutoSizing = true;
					__this_00.fontSizeMin = 14.0;
					__this_00.fontSizeMax = 22.0;
					return parent_00;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D00")]
	[Address(RVA = "0x5BFD890", Offset = "0x5BFC890", VA = "0x5BFD890")]
	public CharacterCategoryPanel()
	{
		// Lifted from source/cpp/UI/CharacterCategoryPanel.c (UI.CharacterCategoryPanel$$.ctor): clean
		Dictionary<string, Action> __this_00;
		Dictionary<string, Action<string>> __this_01;

		__this_00 = new Dictionary<string, Action>();
		this._settingActions = __this_00;
		__this_01 = new Dictionary<string, Action<string>>() ;
		this._choiceActions = __this_01;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/CharacterCategoryPanel.c.

	// UI.CharacterCategoryPanel.<>c__DisplayClass11_0$$.ctor: clean
	private void c__DisplayClass11_0__ctor()
	{
		base();
		return;
	}

	// UI.CharacterCategoryPanel.<>c__DisplayClass12_0$$.ctor: clean
	private void c__DisplayClass12_0__ctor()
	{
		base();
		return;
	}

	// UI.CharacterCategoryPanel.<>c__DisplayClass15_0$$.ctor: clean
	private void c__DisplayClass15_0__ctor()
	{
		base();
		return;
	}

	// UI.CharacterCategoryPanel.<>c__DisplayClass11_0$$<Labels>b__0: clean
	private String c__DisplayClass11_0__Labels_b__0(String option)
	{
		String pSVar1;

		pSVar1 = this.group;
		pSVar1 = UIManager.GetLocale("CharacterPopup", pSVar1, option, "", option);
		return pSVar1;
	}

	// UI.CharacterCategoryPanel.<>c__DisplayClass12_0$$<Choice>b__1: clean
	private GisketchChoiceOptionDefinition c__DisplayClass12_0__Choice_b__1(String label, int index)
	{
		String[] pSVar1;
		GisketchChoiceOptionDefinition __this_00;

		__this_00 = new GisketchChoiceOptionDefinition();
		pSVar1 = this.options;
		if (pSVar1 != null) {
			if ((uint)pSVar1.Length <= (uint)index) {
				throw new IndexOutOfRangeException();
			}
			if (__this_00 != null) {
				__this_00.value = pSVar1[index];
				__this_00.text = label;
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}

	// UI.CharacterCategoryPanel.<>c__DisplayClass12_0$$<Choice>b__0: clean
	private void c__DisplayClass12_0__Choice_b__0(String value)
	{
		Action pSVar1;
		int index;

		index = Array.IndexOf<string>((Object[])this.options, (object)value);
		if (-1 < index) {
			AottgCharacterPickerPopup.SetIndex(this.setting, this.options, index);
			pSVar1 = this.changed;
			if (pSVar1 != null) {
				(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar1.method);
				return;
			}
		}
		return;
	}

	// UI.CharacterCategoryPanel.<>c__DisplayClass15_0$$<IconPicker>b__0: 2 lines keep C-only constructs
	private void c__DisplayClass15_0__IconPicker_b__0()
	{
		byte bVar1;
		CharacterCategoryPanel pUVar2;
		BasePanel pUVar3;
		RawImage __this_00;
		BaseSetting setting;
		String title;
		String[] options;
		String[] icons;
		String[] tooltips;
		Action<int> __this_01;

		pUVar2 = this.__4__this;
		if (pUVar2 != null) {
			pUVar3 = pUVar2.Parent;
			if (pUVar3 != null) {
				bVar1 = (typeof(CharacterPopup)._2).typeHierarchyDepth;
				if (((pUVar3.klass._2).typeHierarchyDepth < bVar1) ||((pUVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(CharacterPopup))) {
					throw new InvalidCastException();
				}
				__this_00 = (*(ulong)((sbyte)pUVar3 + 0xc0));
				setting = this.setting;
				title = this.title;
				options = this.options;
				icons = this.icons;
				tooltips = this.tooltips;
				__this_01 = this.__9__1;
				if (__this_01 == null) {
					__this_01 = new Action<int>((object)this, (intptr_t)MethodInfo_UI_CharacterCategoryPanel_c__DisplayClass15_0_IconPicker_b__1);
					this.__9__1 = __this_01;
				}
				if (__this_00 != null) {
					__this_00.Show(setting, title, options, icons, tooltips, __this_01, this.previewSize, this.labels) ;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// UI.CharacterCategoryPanel.<>c__DisplayClass15_0$$<IconPicker>b__1: 2 lines keep C-only constructs
	private void c__DisplayClass15_0__IconPicker_b__1(int selected)
	{
		String[] pSVar1;
		TMP_Text pTVar2;
		Action pSVar3;
		code *vtableDispatch;
		ulong extraout_RDX;

		pSVar1 = this.displayed;
		if (pSVar1 != null) {
			if ((uint)pSVar1.Length <= (uint)selected) {
				throw new IndexOutOfRangeException();
			}
			pTVar2 = this.label;
			if (pTVar2 != null) {
				pTVar2.set_text(pSVar1[selected]);
				pSVar3 = this.changed;
				if (pSVar3 == null) {
					return;
				}
				vtableDispatch = (code)pSVar3.invoke_impl;
				(*vtableDispatch)(pSVar3.method_code,pSVar3.method,extraout_RDX,vtableDispatch);
				return;
			}
		}
		throw new NullReferenceException();
	}
}
