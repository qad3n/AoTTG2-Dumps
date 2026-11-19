// ==================== AoTTG2 cross-reference ====================
// Type: UI.PresetSkinEditPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/PresetSkinEditPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Characters;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x20007D1")]
internal class PresetSkinEditPopup : BasePopup
{
	[Token(Token = "0x20007D2")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinAndRestoreSettingsCoroutine_003Ed__28 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400273E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400273F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002740")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public DummyHuman character;

		[Token(Token = "0x4002741")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public bool originalGlobal;

		[Token(Token = "0x4002742")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
		public bool originalCustom;

		[Token(Token = "0x17000D3C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004B85")]
			[Address(RVA = "0x5BE4AF0", Offset = "0x5BE3AF0", VA = "0x5BE4AF0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/PresetSkinEditPopup.c (UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000D3D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004B87")]
			[Address(RVA = "0x5BE4B40", Offset = "0x5BE3B40", VA = "0x5BE4B40", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/PresetSkinEditPopup.c (UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004B82")]
		[Address(RVA = "0x5BE4640", Offset = "0x5BE3640", VA = "0x5BE4640")]
		[DebuggerHidden]
		public _003CLoadSkinAndRestoreSettingsCoroutine_003Ed__28(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/PresetSkinEditPopup.c (UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004B83")]
		[Address(RVA = "0x5BE4950", Offset = "0x5BE3950", VA = "0x5BE4950", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/PresetSkinEditPopup.c (UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004B84")]
		[Address(RVA = "0x5BE4960", Offset = "0x5BE3960", VA = "0x5BE4960", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/PresetSkinEditPopup.c (UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$MoveNext): clean
			int iVar1;
			CustomSkinSettings pSVar2;
			HumanCustomSkinSettings pSVar3;
			BoolSetting pSVar4;
			DummyHuman __this_00;
			WaitForSeconds pUVar5;

			iVar1 = this.__1__state;
			if (iVar1 != 2) {
				if (iVar1 == 1) {
					this.__1__state = -1;
					__this_00 = this.character;
					if (__this_00 == null) goto label_05ce4ae5;
					__this_00.LoadSkin();
					pUVar5 = new WaitForSeconds(0.1);
					this.__2__current = (object)pUVar5;
					this.__1__state = 2;
				}
				else {
					if (iVar1 != 0) {
						return false;
					}
					this.__1__state = -1;
					pUVar5 = new WaitForSeconds(0.1);
					this.__2__current = (object)pUVar5;
					this.__1__state = 1;
				}
				return true;
			}
			this.__1__state = -1;
			pSVar2 = SettingsManager.CustomSkinSettings;
			if (((pSVar2 != null) &&(pSVar3 = pSVar2.Human, pSVar3 != null)) &&(pSVar4 = pSVar3.GlobalSkinOverridesEnabled, pSVar4 != null)) {
				pSVar4.Value = this.originalGlobal;
				pSVar2 = SettingsManager.CustomSkinSettings;
				if (((pSVar2 != null) &&(pSVar3 = pSVar2.Human, pSVar3 != null)) &&(pSVar4 = pSVar3.SetSpecificSkinsEnabled, pSVar4 != null)) {
					pSVar4.Value = this.originalCustom;
					return false;
				}
			}
		label_05ce4ae5: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6004B86")]
		[Address(RVA = "0x5BE4B00", Offset = "0x5BE3B00", VA = "0x5BE4B00", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/PresetSkinEditPopup.c (UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_UI_PresetSkinEditPopup_LoadSkinAndRestoreSettingsCoroutine_d__28_System_Collections_IEnumerator);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x400273A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private HumanCustomSet _currentPreset;

	[Token(Token = "0x400273B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Dictionary<string, string> _backupValues;

	[Token(Token = "0x400273C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Dictionary<string, float> _backupFloatValues;

	[Token(Token = "0x400273D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private bool _hasBackup;

	[Token(Token = "0x17000D34")]
	protected override string Title
	{
		[Token(Token = "0x6004B6A")]
		[Address(RVA = "0x5BE25F0", Offset = "0x5BE15F0", VA = "0x5BE25F0", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/PresetSkinEditPopup.c (UI.PresetSkinEditPopup$$get_Title): 1 lines keep C-only constructs
			HumanCustomSettings pSVar1;
			Settings_SetSettingsContainer_HumanCustomSet__o __this_00;
			StringSetting pSVar2;
			String pSVar3;
			BaseSetSetting pSVar4;
			String str2;

			pSVar3 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Preset", "", "");
			pSVar1 = SettingsManager.HumanCustomSettings;
			if ((pSVar1 == null) ||(__this_00 = pSVar1.CustomSets, __this_00 == null)) {
		label_05ce2718: ;
				throw new NullReferenceException();
			}
			pSVar4 = __this_00.GetSelectedSet();
			if (pSVar4 == null) {
				str2 = null;
			}
			else {
				pSVar2 = pSVar4.Name;
				if (pSVar2 == null) goto label_05ce2718;
				str2 = pSVar2._value;
			}
			pSVar3 = String.Concat(pSVar3, ": ", str2);
			return pSVar3;
		}
	}

	[Token(Token = "0x17000D35")]
	protected override float Width
	{
		[Token(Token = "0x6004B6B")]
		[Address(RVA = "0x5BE2720", Offset = "0x5BE1720", VA = "0x5BE2720", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/PresetSkinEditPopup.c (UI.PresetSkinEditPopup$$get_Width): clean
			return 1100.0;
		}
	}

	[Token(Token = "0x17000D36")]
	protected override float Height
	{
		[Token(Token = "0x6004B6C")]
		[Address(RVA = "0x5BE2730", Offset = "0x5BE1730", VA = "0x5BE2730", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/PresetSkinEditPopup.c (UI.PresetSkinEditPopup$$get_Height): clean
			return 700.0;
		}
	}

	[Token(Token = "0x17000D37")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004B6D")]
		[Address(RVA = "0x5BE2740", Offset = "0x5BE1740", VA = "0x5BE2740", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/PresetSkinEditPopup.c (UI.PresetSkinEditPopup$$get_VerticalSpacing): clean
			return 15.0;
		}
	}

	[Token(Token = "0x17000D38")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004B6E")]
		[Address(RVA = "0x5BE2750", Offset = "0x5BE1750", VA = "0x5BE2750", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/PresetSkinEditPopup.c (UI.PresetSkinEditPopup$$get_HorizontalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x17000D39")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004B6F")]
		[Address(RVA = "0x5BE2760", Offset = "0x5BE1760", VA = "0x5BE2760", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/PresetSkinEditPopup.c (UI.PresetSkinEditPopup$$get_VerticalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x17000D3A")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6004B70")]
		[Address(RVA = "0x5BE2770", Offset = "0x5BE1770", VA = "0x5BE2770", Slot = "13")]
		get
		{
			// Lifted from source/cpp/UI/PresetSkinEditPopup.c (UI.PresetSkinEditPopup$$get_DoublePanel): clean
			return true;
		}
	}

	[Token(Token = "0x17000D3B")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004B71")]
		[Address(RVA = "0x5BE2780", Offset = "0x5BE1780", VA = "0x5BE2780", Slot = "15")]
		get
		{
			// Lifted from source/cpp/UI/PresetSkinEditPopup.c (UI.PresetSkinEditPopup$$get_ScrollBar): clean
			return true;
		}
	}

	[Token(Token = "0x6004B72")]
	[Address(RVA = "0x5BE2790", Offset = "0x5BE1790", VA = "0x5BE2790", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/PresetSkinEditPopup.c (UI.PresetSkinEditPopup$$Setup): 12 lines keep C-only constructs
		byte bVar1;
		HumanCustomSettings pSVar2;
		Settings_SetSettingsContainer_HumanCustomSet__o __this_00;
		Transform pUVar3;
		StringSetting pSVar4;
		FloatSetting pSVar5;
		HumanCustomSet pSVar6;
		int fontSize;
		String pSVar7;
		ElementStyle __this_01;
		ElementStyle __this_02;
		HumanCustomSet pSVar8;
		UnityAction pUVar9;
		HumanCustomSet* targetAddress;
		MethodInfo method_00;

		this.Setup(parent);
		pSVar7 = this.get_ThemePanel();
		__this_01 = new ElementStyle(0x18, 200.0, 20.0, pSVar7);
		fontSize = this.get_ButtonFontSize();
		pSVar7 = this.get_ThemePanel();
		__this_02 = new ElementStyle(fontSize, 120.0, 20.0, pSVar7);
		pSVar2 = SettingsManager.HumanCustomSettings;
		if ((pSVar2 != null) &&(__this_00 = pSVar2.CustomSets, __this_00 != null)) {
			pSVar8 = (HumanCustomSet)__this_00.GetSelectedSet();
			pSVar6 = typeof(HumanCustomSet);
			if (pSVar8 == null) {
				this._currentPreset = null;
			}
			else {
				bVar1 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
				if (((((BaseSetSetting)pSVar8.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseSetSetting)pSVar8.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(HumanCustomSet))) {
	label_05ce3690: ;
					throw new InvalidCastException();
				}
				this._currentPreset = pSVar8;
				if (((((BaseSetSetting)pSVar8.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseSetSetting)pSVar8.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=(Il2CppClass)pSVar6)) goto label_05ce3690;
			}
			targetAddress = &this._currentPreset;
			pSVar8 = this._currentPreset;
			if (pSVar8 != null) {
				pUVar3 = this.DoublePanelLeft;
				pSVar4 = pSVar8.SkinHair;
				pSVar7 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Hair", "", "");
				ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar7, "", 300.0, 40.0, false, null, null, null, null);
				pSVar8 = *targetAddress;
				if (pSVar8 != null) {
					pUVar3 = this.DoublePanelLeft;
					pSVar4 = pSVar8.SkinEye;
					pSVar7 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Eye", "", "");
					ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar7, "", 300.0, 40.0, false, null, null, null, null);
					pSVar8 = this._currentPreset;
					if (pSVar8 != null) {
						pUVar3 = this.DoublePanelLeft;
						pSVar4 = pSVar8.SkinGlass;
						pSVar7 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Glass", "", "");
						ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar7, "", 300.0, 40.0, false, null, null, null, null);
						pSVar8 = this._currentPreset;
						if (pSVar8 != null) {
							pUVar3 = this.DoublePanelLeft;
							pSVar4 = pSVar8.SkinFace;
							pSVar7 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Face", "", "");
							ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar7, "", 300.0, 40.0, false, null, null, null, null);
							pSVar8 = this._currentPreset;
							if (pSVar8 != null) {
								pUVar3 = this.DoublePanelLeft;
								pSVar4 = pSVar8.SkinSkin;
								pSVar7 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Skin", "", "");
								ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar7, "", 300.0, 40.0, false, null, null, null, null);
								pSVar8 = this._currentPreset;
								if (pSVar8 != null) {
									pUVar3 = this.DoublePanelLeft;
									pSVar4 = pSVar8.SkinCostume;
									pSVar7 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Costume", "", "");
									ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar7, "", 300.0, 40.0, false, null, null, null, null);
									pSVar8 = this._currentPreset;
									if (pSVar8 != null) {
										pUVar3 = this.DoublePanelLeft;
										pSVar4 = pSVar8.SkinLogo;
										pSVar7 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Logo", "", "");
										ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar7, "", 300.0, 40.0, false, null, null, null, null);
										pSVar8 = this._currentPreset;
										if (pSVar8 != null) {
											pUVar3 = this.DoublePanelLeft;
											pSVar4 = pSVar8.SkinGearL;
											pSVar7 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "GearL", "", "");
											ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar7, "", 300.0, 40.0, false, null, null, null, null);
											pSVar8 = this._currentPreset;
											if (pSVar8 != null) {
												pUVar3 = this.DoublePanelLeft;
												pSVar4 = pSVar8.SkinGearR;
												pSVar7 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "GearR", "", "");
												ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar7, "", 300.0, 40.0, false, null, null, null, null);
												pSVar8 = this._currentPreset;
												if (pSVar8 != null) {
													pUVar3 = this.DoublePanelLeft;
													pSVar4 = pSVar8.SkinGas;
													pSVar7 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Gas", "", "");
													ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar7, "", 300.0, 40.0, false, null, null, null, null);
													pSVar8 = this._currentPreset;
													if (pSVar8 != null) {
														pUVar3 = this.DoublePanelLeft;
														pSVar4 = pSVar8.SkinHoodie;
														pSVar7 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Hoodie", "", "");
														ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar7, "", 300.0, 40.0, false, null, null, null, null);
														pSVar8 = this._currentPreset;
														if (pSVar8 != null) {
															pUVar3 = this.DoublePanelLeft;
															pSVar4 = pSVar8.SkinCloak;
															pSVar7 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Cloak", "", "");
															ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar7, "", 300.0, 40.0, false, null, null, null, null);
															pSVar8 = this._currentPreset;
															if (pSVar8 != null) {
																pUVar3 = this.DoublePanelRight;
																pSVar4 = pSVar8.SkinWeaponTrail;
																pSVar7 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "WeaponTrail", "", "");
																ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar7, "", 300.0, 40.0, false, null, null, null, null);
																pSVar8 = this._currentPreset;
																if (pSVar8 != null) {
																	pUVar3 = this.DoublePanelRight;
																	pSVar4 = pSVar8.SkinHorse;
																	pSVar7 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Horse", "", "");
																	ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar7, "", 300.0, 40.0, false, null, null, null, null);
																	pSVar8 = this._currentPreset;
																	if (pSVar8 != null) {
																		pUVar3 = this.DoublePanelRight;
																		pSVar4 = pSVar8.SkinThunderspearL;
																		pSVar7 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "ThunderspearL", "", "");
																		ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar7, "", 300.0, 40.0, false, null, null, null, null);
																		pSVar8 = this._currentPreset;
																		if (pSVar8 != null) {
																			pUVar3 = this.DoublePanelRight;
																			pSVar4 = pSVar8.SkinThunderspearR;
																			pSVar7 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "ThunderspearR", "", "");
																			ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar7, "", 300.0, 40.0, false, null, null, null, null) ;
																			pSVar8 = this._currentPreset;
																			if (pSVar8 != null) {
																				pUVar3 = this.DoublePanelRight;
																				pSVar4 = pSVar8.SkinHookL;
																				pSVar7 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "HookL", "", "");
																				ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar7, "", 300.0, 40.0, false, null, null, null, null);
																				pSVar8 = this._currentPreset;
																				if (pSVar8 != null) {
																					pUVar3 = this.DoublePanelRight;
																					pSVar5 = pSVar8.SkinHookLTiling;
																					pSVar7 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "HookLTiling", "", "");
																					ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar5, pSVar7, "", 300.0, 40.0, false, null, null, null, null);
																					pSVar8 = this._currentPreset;
																					if (pSVar8 != null) {
																						pUVar3 = this.DoublePanelRight;
																						pSVar4 = pSVar8.SkinHookR;
																						pSVar7 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "HookR", "", "");
																						ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar7, "", 300.0, 40.0, false, null, null, null, null);
																						pSVar8 = this._currentPreset;
																						if (pSVar8 != null) {
																							pUVar3 = this.DoublePanelRight;
																							pSVar5 = pSVar8.SkinHookRTiling;
																							pSVar7 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "HookRTiling", "", "");
																							ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar5, pSVar7, "", 300.0, 40.0, false, null, null, null, null);
																							pSVar8 = this._currentPreset;
																							if (pSVar8 != null) {
																								pUVar3 = this.DoublePanelRight;
																								pSVar4 = pSVar8.SkinHat;
																								pSVar7 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Hat", "", "");
																								ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar7, "", 300.0, 40.0, false, null, null, null, null);
																								pSVar8 = this._currentPreset;
																								if (pSVar8 != null) {
																									pUVar3 = this.DoublePanelRight;
																									pSVar4 = pSVar8.SkinHead;
																									pSVar7 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Head", "", "");
																									ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar7, "", 300.0, 40.0, false, null, null, null, null);
																									pSVar8 = this._currentPreset;
																									if (pSVar8 != null) {
																										pUVar3 = this.DoublePanelRight;
																										pSVar4 = pSVar8.SkinBack;
																										pSVar7 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Back", "", "") ;
																										method_00 = (MethodInfo *)"";
																										ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar7, "", 300.0, 40.0, false, null, null, null, null);
																										pUVar3 = this.BottomBar;
																										pSVar7 = UIManager.GetLocaleCommon("Clear") ;
																										pUVar9 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction)) ;
																										pUVar9 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_PresetSkinEditPopup_Setup_b__20_0);
																										ElementFactory.CreateTextButton(pUVar3, __this_02, pSVar7, 0.0, pUVar9);
																										pUVar3 = this.BottomBar;
																										pSVar7 = UIManager.GetLocaleCommon("Apply") ;
																										pUVar9 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction)) ;
																										pUVar9 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_PresetSkinEditPopup_Setup_b__20_1);
																										ElementFactory.CreateTextButton(pUVar3, __this_02, pSVar7, 0.0, pUVar9);
																										pUVar3 = this.BottomBar;
																										pSVar7 = UIManager.GetLocaleCommon("Cancel") ;
																										pUVar9 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction)) ;
																										pUVar9 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_PresetSkinEditPopup_Setup_b__20_2);
																										ElementFactory.CreateTextButton(pUVar3, __this_02, pSVar7, 0.0, pUVar9);
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
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004B73")]
	[Address(RVA = "0x5BE36A0", Offset = "0x5BE26A0", VA = "0x5BE36A0")]
	private void OnButtonClick(string name)
	{
		// Lifted from source/cpp/UI/PresetSkinEditPopup.c (UI.PresetSkinEditPopup$$OnButtonClick): clean
		bool bVar1;
		MethodInfo pMVar2;

		pMVar2 = (MethodInfo *)"Cancel";
		bVar1 = (name == "Cancel");
		if (bVar1) {
			if (this._hasBackup != false) {
				this.RestoreBackup();
			}
			this.Hide();
			return;
		}
		pMVar2 = (MethodInfo *)"Clear";
		bVar1 = (name == "Clear");
		if (bVar1) {
			this.OnClearClick();
			return;
		}
		pMVar2 = (MethodInfo *)"Save";
		bVar1 = (name == "Save");
		if (bVar1) {
			this.OnSaveClick();
			return;
		}
		return;
	}

	[Token(Token = "0x6004B74")]
	[Address(RVA = "0x5BE37B0", Offset = "0x5BE27B0", VA = "0x5BE37B0")]
	private void OnClearClick()
	{
		// Lifted from source/cpp/UI/PresetSkinEditPopup.c (UI.PresetSkinEditPopup$$OnClearClick): 4 lines keep C-only constructs
		HumanCustomSet pSVar1;
		Dictionary<object, object> __this_00;
		object pIVar2;
		bool bVar3;
		uint uVar4;
		Object[] pSVar5;
		uint uVar6;
		System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_48;

		local_48._current.key = null;
		local_48._current.value = null;
		local_48._dictionary = null;
		local_48._version = 0;
		local_48._index = 0;
		local_48._getEnumeratorRetType = 0;
		local_48._36_4_ = 0;
		if (this._hasBackup == false) {
			this.CreateBackup();
		}
		pSVar1 = this._currentPreset;
		if ((pSVar1 != null) &&(__this_00 = (Dictionary<object, object>)pSVar1.TypedSettings, __this_00 != null)) {
			local_48 = __this_00.GetEnumerator();
			while(true) {
				bVar3 = local_48.MoveNext();
				if (!bVar3) break;
				if (local_48._current.value == null) {
					throw new NullReferenceException();
				}
				(*(local_48._current.value).klass.vtable[4].methodPtr)(local_48._current.value,(local_48._current.value).klass.vtable[4].method);
			}
			local_48.Dispose();
			pSVar5 = this.GetComponentsInChildren<InputSettingElement>();
			if (pSVar5 != null) {
				uVar4 = (uint)pSVar5.Length;
				if (0 < (int)uVar4) {
					uVar6 = 0;
					do {
						if (uVar4 <= uVar6) {
							throw new IndexOutOfRangeException();
						}
						pIVar2 = pSVar5[(int)uVar6];
						if (pIVar2 == null) goto label_05ce393a;
						(*pIVar2.klass.vtable[6].methodPtr)(pIVar2,pIVar2.klass.vtable[6].method);
						uVar6 = uVar6 + 1;
						uVar4 = (uint)pSVar5.Length;
					} while ((int)uVar6 < (int)uVar4);
				}
				return;
			}
		}
	label_05ce393a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004B75")]
	[Address(RVA = "0x5BE3DE0", Offset = "0x5BE2DE0", VA = "0x5BE3DE0")]
	private void CreateBackup()
	{
		// Lifted from source/cpp/UI/PresetSkinEditPopup.c (UI.PresetSkinEditPopup$$CreateBackup): 10 lines keep C-only constructs
		byte bVar1;
		Dictionary<object, object> pSVar2;
		Dictionary<string, float> pSVar3;
		HumanCustomSet pSVar4;
		object key;
		object pIVar5;
		bool bVar6;
		int iVar7;
		Dictionary.Enumerator<object, object> local_88;
		byte[] local_58 = new byte[16];
		object local_48;
		BaseSetting pSStack_40;
		int local_38;
		uint uStack_34;

		local_88._current.key = null;
		local_88._current.value = null;
		local_88._dictionary = null;
		local_88._version = 0;
		local_88._index = 0;
		local_88._getEnumeratorRetType = 0;
		local_88._36_4_ = 0;
		pSVar2 = (Dictionary<object, object>)this._backupValues;
		if (pSVar2 != null) {
			pSVar2.Clear();
			pSVar3 = this._backupFloatValues;
			if (pSVar3 != null) {
				pSVar3.Clear();
				pSVar4 = this._currentPreset;
				if ((pSVar4 != null) &&(pSVar2 = (Dictionary<object, object>)pSVar4.TypedSettings, pSVar2 != null)) {
					local_58.GetEnumerator(pSVar2);
					local_88._getEnumeratorRetType = local_38;
					local_88._36_4_ = uStack_34;
					local_88._current.key = local_48;
					local_88._current.value = (object)pSStack_40;
					local_88._dictionary = (Dictionary<TKey, TValue>)local_58._0_8_;
					local_88._version = local_58._8_4_;
					local_88._index = local_58._12_4_;
					local_58._0_8_ = null;
					local_58._8_8_ = &local_88;
					while(true) {
						do {
							while(true) {
								bVar6 = local_88.MoveNext();
								pIVar5 = local_88._current.value;
								key = local_88._current.key;
								if (!bVar6) {
									local_88.Dispose();
									this._hasBackup = true;
									return;
								}
								iVar7 = SettingsUtil.GetSettingType((BaseSetting)local_88._current.value);
								if (iVar7 != 3) break;
								if ((BaseSetting)pIVar5 == null) {
									throw new NullReferenceException();
								}
								bVar1 = (typeof(FloatSetting)._2).typeHierarchyDepth;
								if (((((BaseSetting)pIVar5.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseSetting)pIVar5.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(FloatSetting))) {
									throw new InvalidCastException();
								}
								pSVar3 = this._backupFloatValues;
								if (pSVar3 == null) {
									throw new NullReferenceException();
								}
								pSVar3.set_Item(key, *(float)((long)&((BaseSetting)((long)pIVar5 + 0x18)).klass + 4));
							}
						} while (iVar7 != 4);
						if ((BaseSetting)pIVar5 == null) {
							throw new NullReferenceException();
						}
						bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
						if (((((BaseSetting)pIVar5.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseSetting)pIVar5.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(StringSetting))) break;
						pSVar2 = (Dictionary<object, object>)this._backupValues;
						if (pSVar2 == null) {
							throw new NullReferenceException();
						}
						pSVar2.set_Item(key, ((BaseSetting)((long)pIVar5 + 0x18)).monitor);
					}
					throw new InvalidCastException();
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004B76")]
	[Address(RVA = "0x5BE4130", Offset = "0x5BE3130", VA = "0x5BE4130")]
	private void RestoreBackup()
	{
		// Lifted from source/cpp/UI/PresetSkinEditPopup.c (UI.PresetSkinEditPopup$$RestoreBackup): 10 lines keep C-only constructs
		byte bVar1;
		HumanCustomSet pSVar2;
		Dictionary<object, object> pSVar3;
		Dictionary<string, float> pSVar4;
		object pIVar5;
		TypedSetting<T> __this_00;
		bool bVar6;
		int iVar7;
		uint uVar8;
		String value;
		Object[] pSVar9;
		uint uVar10;
		float value_00;
		byte[] local_88 = new byte[8];
		object local_78;
		TypedSetting<T> pSStack_70;
		ulong local_68;
		byte[] local_58 = new byte[16];
		object local_48;
		TypedSetting<T> pSStack_40;
		int local_38;
		uint uStack_34;

		local_78 = null;
		pSStack_70 = null;
		local_88 = (byte[])0x0;
		local_68._0_4_ = 0;
		local_68._4_4_ = 0;
		if ((this._hasBackup == false) ||(pSVar2 = this._currentPreset, pSVar2 == null)) {
			return;
		}
		pSVar3 = (Dictionary<object, object>)pSVar2.TypedSettings;
		if (pSVar3 != null) {
			local_58.GetEnumerator(pSVar3);
			local_68._0_4_ = local_38;
			local_68._4_4_ = uStack_34;
			local_78 = local_48;
			pSStack_70 = pSStack_40;
			local_88 = (byte[])local_58._0_8_;
			local_58._0_8_ = null;
			local_58._8_8_ = local_88;
			while(true) {
				bVar6 = local_88.MoveNext();
				__this_00 = pSStack_70;
				pIVar5 = local_78;
				if (!bVar6) break;
				iVar7 = SettingsUtil.GetSettingType((BaseSetting)pSStack_70);
				if (iVar7 == 3) {
					pSVar4 = this._backupFloatValues;
					if (pSVar4 == null) {
						throw new NullReferenceException();
					}
					bVar6 = pSVar4.ContainsKey(pIVar5);
					if (bVar6) {
						pSVar4 = this._backupFloatValues;
						if (pSVar4 == null) {
							throw new NullReferenceException();
						}
						value_00 = pSVar4.get_Item(pIVar5);
						if (__this_00 == null) {
							throw new NullReferenceException();
						}
						bVar1 = (typeof(FloatSetting)._2).typeHierarchyDepth;
						if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(FloatSetting))) {
							throw new InvalidCastException();
						}
						__this_00.Value = value_00;
					}
				}
				else if (iVar7 == 4) {
					pSVar3 = (Dictionary<object, object>)this._backupValues;
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
					bVar6 = pSVar3.ContainsKey(pIVar5);
					if (bVar6) {
						pSVar3 = (Dictionary<object, object>)this._backupValues;
						if (pSVar3 == null) {
							throw new NullReferenceException();
						}
						value = pSVar3.get_Item(pIVar5);
						if (__this_00 == null) {
							throw new NullReferenceException();
						}
						bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
						if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(StringSetting))) {
							throw new InvalidCastException();
						}
						__this_00.Value = (object)value;
					}
				}
			}
			local_88.Dispose();
			pSVar9 = this.GetComponentsInChildren<InputSettingElement>();
			if (pSVar9 != null) {
				uVar8 = (uint)pSVar9.Length;
				if ((int)uVar8 < 1) {
					return;
				}
				uVar10 = 0;
				while(true) {
					if (uVar8 <= uVar10) {
						throw new IndexOutOfRangeException();
					}
					pIVar5 = pSVar9[(int)uVar10];
					if (pIVar5 == null) break;
					(*pIVar5.klass.vtable[6].methodPtr)(pIVar5,pIVar5.klass.vtable[6].method);
					uVar10 = uVar10 + 1;
					uVar8 = (uint)pSVar9.Length;
					if ((int)uVar8 <= (int)uVar10) {
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004B77")]
	[Address(RVA = "0x5BE3780", Offset = "0x5BE2780", VA = "0x5BE3780")]
	public void OnCancelClick()
	{
		// Lifted from source/cpp/UI/PresetSkinEditPopup.c (UI.PresetSkinEditPopup$$OnCancelClick): clean
		if (this._hasBackup != false) {
			this.RestoreBackup();
		}
		this.Hide();
		return;
	}

	[Token(Token = "0x6004B78")]
	[Address(RVA = "0x5BE39B0", Offset = "0x5BE29B0", VA = "0x5BE39B0")]
	private void OnSaveClick()
	{
		// Lifted from source/cpp/UI/PresetSkinEditPopup.c (UI.PresetSkinEditPopup$$OnSaveClick): 7 lines keep C-only constructs
		byte bVar1;
		bool bVar2;
		bool bVar3;
		uint uVar4;
		Dictionary<object, object> __this_00;
		Dictionary<string, float> __this_01;
		BaseGameManager pGVar5;
		DummyHuman pCVar6;
		CustomSkinSettings pSVar7;
		HumanCustomSkinSettings pSVar8;
		BoolSetting pSVar9;
		BoolSetting pSVar10;
		HumanSetup __this_02;
		bool bVar11;
		bool value;
		BaseMenu pUVar12;
		PresetSkinEditPopup.d__28<LoadSkinAndRestoreSettingsCoroutine> __this_03;
		BaseMenu __this_04;
		DummyHuman x;

		if (this._currentPreset == null) {
			return;
		}
		__this_00 = (Dictionary<object, object>)this._backupValues;
		if (__this_00 == null) goto label_05ce3dd4;
		__this_00.Clear();
		__this_01 = this._backupFloatValues;
		if (__this_01 == null) goto label_05ce3dd4;
		__this_01.Clear();
		this._hasBackup = false;
		bVar11 = CharacterEditorCostumePanel.GetPersistentCustomPreview();
		if (!bVar11) goto label_05ce3d57;
		if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			pUVar12 = UIManager.CurrentMenu;
			if (pUVar12 != null) goto label_05ce3b02;
	label_05ce3b22: ;
			__this_04 = null;
			uVar4 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			pUVar12 = UIManager.CurrentMenu;
			if (pUVar12 == null) goto label_05ce3b22;
	label_05ce3b02: ;
			bVar1 = (typeof(CharacterEditorHumanMenu)._2).typeHierarchyDepth;
			if ((pUVar12.klass._2).typeHierarchyDepth < bVar1) goto label_05ce3b22;
			__this_04 = null;
			if ((pUVar12.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CharacterEditorHumanMenu)) {
				__this_04 = pUVar12;
			}
			uVar4 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar4 == 0) {
		}
		bVar11 = ((Object)__this_04 != null);
		if (!bVar11) goto label_05ce3d57;
		pGVar5 = SceneLoader.CurrentGameManager;
		if (pGVar5 == null) goto label_05ce3dd4;
		bVar1 = (typeof(CharacterEditorGameManager)._2).typeHierarchyDepth;
		if (((pGVar5.klass._2).typeHierarchyDepth < bVar1) ||((pGVar5.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorGameManager))) {
			throw new InvalidCastException();
		}
		pCVar6 = (DummyHuman)(*(ulong)((sbyte)pGVar5 + 0x38));
		if (pCVar6 == null) {
	label_05ce3bcb: ;
			x = null;
			uVar4 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			bVar1 = (typeof(DummyHuman)._2).typeHierarchyDepth;
			if ((pCVar6.klass._2).typeHierarchyDepth < bVar1) goto label_05ce3bcb;
			x = null;
			if ((pCVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(DummyHuman)) {
				x = pCVar6;
			}
			uVar4 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar4 == 0) {
		}
		bVar11 = ((Object)x != null);
		if (bVar11) {
			bVar11 = CharacterEditorCostumePanel.GetPersistentGlobalPreview();
			value = CharacterEditorCostumePanel.GetPersistentCustomPreview();
			pSVar7 = SettingsManager.CustomSkinSettings;
			if ((((pSVar7 != null) &&(pSVar8 = pSVar7.Human, pSVar8 != null)) &&(pSVar9 = pSVar8.GlobalSkinOverridesEnabled, pSVar9 != null)) &&(pSVar10 = pSVar8.SetSpecificSkinsEnabled, pSVar10 != null)) {
				bVar2 = ((Settings_TypedSetting_bool__Fields)&pSVar9.fields)._value;
				bVar3 = pSVar10._value;
				pSVar9.Value = bVar11;
				pSVar7 = SettingsManager.CustomSkinSettings;
				if (((pSVar7 != null) &&(pSVar8 = pSVar7.Human, pSVar8 != null)) &&((pSVar9 = pSVar8.SetSpecificSkinsEnabled, pSVar9 != null &&((pSVar9.Value = value, x != null &&(__this_02 = x.Setup, __this_02 != null)))))) {
					__this_02.Load(__this_02.CustomSet, __this_02.Weapon, false) ;
					__this_03 = il2cpp_codegen_object_new((Il2CppClass)typeof(PresetSkinEditPopup.d__28<LoadSkinAndRestoreSettingsCoroutine>));
					__this_03 = new Object();
					__this_03.__1__state = 0;
					__this_03.character = x;
					__this_03.originalGlobal = bVar2;
					__this_03.originalCustom = bVar3;
					if (__this_04 != null) {
						__this_04.StartCoroutine((IEnumerator)__this_03);
						goto label_05ce3d57;
					}
				}
			}
	label_05ce3dd4: ;
			throw new NullReferenceException();
		}
	label_05ce3d57: ;
		this.Hide();
		return;
	}

	[Token(Token = "0x6004B79")]
	[Address(RVA = "0x5BE45C0", Offset = "0x5BE35C0", VA = "0x5BE45C0")]
	private void LoadSkinAndRestoreSettings(DummyHuman character, bool originalGlobal, bool originalCustom)
	{
		// Lifted from source/cpp/UI/PresetSkinEditPopup.c (UI.PresetSkinEditPopup$$LoadSkinAndRestoreSettings): 1 lines keep C-only constructs
		PresetSkinEditPopup.d__28<LoadSkinAndRestoreSettingsCoroutine> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(PresetSkinEditPopup.d__28<LoadSkinAndRestoreSettingsCoroutine>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.character = character;
		__this_00.originalGlobal = originalGlobal;
		__this_00.originalCustom = originalCustom;
		this.StartCoroutine((IEnumerator)__this_00);
		return;
	}

	[Token(Token = "0x6004B7A")]
	[Address(RVA = "0x5BE4540", Offset = "0x5BE3540", VA = "0x5BE4540")]
	[IteratorStateMachine(typeof(_003CLoadSkinAndRestoreSettingsCoroutine_003Ed__28))]
	private IEnumerator LoadSkinAndRestoreSettingsCoroutine(DummyHuman character, bool originalGlobal, bool originalCustom)
	{
		// Lifted from source/cpp/UI/PresetSkinEditPopup.c (UI.PresetSkinEditPopup$$LoadSkinAndRestoreSettingsCoroutine): 1 lines keep C-only constructs
		PresetSkinEditPopup.d__28<LoadSkinAndRestoreSettingsCoroutine> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(PresetSkinEditPopup.d__28<LoadSkinAndRestoreSettingsCoroutine>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.character = character;
		__this_00.originalGlobal = originalGlobal;
		__this_00.originalCustom = originalCustom;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004B7B")]
	[Address(RVA = "0x5BE4660", Offset = "0x5BE3660", VA = "0x5BE4660", Slot = "21")]
	public override void Show()
	{
		// Lifted from source/cpp/UI/PresetSkinEditPopup.c (UI.PresetSkinEditPopup$$Show): 6 lines keep C-only constructs
		byte bVar1;
		HumanCustomSettings pSVar2;
		Settings_SetSettingsContainer_HumanCustomSet__o __this_00;
		HumanCustomSet pSVar3;
		HumanCustomSet method_00;
		HumanCustomSet* targetAddress;

		pSVar2 = SettingsManager.HumanCustomSettings;
		if ((pSVar2 != null) &&(__this_00 = pSVar2.CustomSets, __this_00 != null)) {
			method_00 = (HumanCustomSet)__this_00.GetSelectedSet();
			pSVar3 = typeof(HumanCustomSet);
			if (method_00 == null) {
				this._currentPreset = null;
			}
			else {
				bVar1 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
				if (((((BaseSetSetting)method_00.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseSetSetting)method_00.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(HumanCustomSet))) {
	label_05ce4773: ;
					throw new InvalidCastException();
				}
				this._currentPreset = method_00;
				if (((((BaseSetSetting)method_00.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseSetSetting)method_00.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=(Il2CppClass)pSVar3)) goto label_05ce4773;
			}
			targetAddress = &this._currentPreset;
			if ((*targetAddress != null) && (this._hasBackup == false)) {
				this.CreateBackup();
			}
		}
		this.Show();
		return;
	}

	[Token(Token = "0x6004B7C")]
	[Address(RVA = "0x5BE4780", Offset = "0x5BE3780", VA = "0x5BE4780", Slot = "59")]
	protected override void OnDisable()
	{
		// Lifted from source/cpp/UI/PresetSkinEditPopup.c (UI.PresetSkinEditPopup$$OnDisable): clean
		if (this._hasBackup != false) {
			this.RestoreBackup();
		}
		this.OnDisable();
		return;
	}

	[Token(Token = "0x6004B7D")]
	[Address(RVA = "0x5BE47A0", Offset = "0x5BE37A0", VA = "0x5BE47A0", Slot = "58")]
	public override void HideImmediate()
	{
		// Lifted from source/cpp/UI/PresetSkinEditPopup.c (UI.PresetSkinEditPopup$$HideImmediate): clean
		if (this._hasBackup != false) {
			this.RestoreBackup();
		}
		this.HideImmediate();
		return;
	}

	[Token(Token = "0x6004B7E")]
	[Address(RVA = "0x5BE47C0", Offset = "0x5BE37C0", VA = "0x5BE47C0")]
	public PresetSkinEditPopup()
	{
		// Lifted from source/cpp/UI/PresetSkinEditPopup.c (UI.PresetSkinEditPopup$$.ctor): clean
		Dictionary<string, string> __this_00;
		Dictionary<string, float> __this_01;

		__this_00 = new Dictionary<string, string>();
		this._backupValues = __this_00;
		__this_01 = new Dictionary<string, float>();
		this._backupFloatValues = __this_01;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/PresetSkinEditPopup.c.

	// UI.PresetSkinEditPopup$$<Setup>b__20_0: clean
	private void Setup_b__20_0()
	{


		this.OnButtonClick("Clear");
		return;
	}

	// UI.PresetSkinEditPopup$$<Setup>b__20_1: clean
	private void Setup_b__20_1()
	{


		this.OnButtonClick("Save");
		return;
	}

	// UI.PresetSkinEditPopup$$<Setup>b__20_2: clean
	private void Setup_b__20_2()
	{


		this.OnButtonClick("Cancel");
		return;
	}
}
