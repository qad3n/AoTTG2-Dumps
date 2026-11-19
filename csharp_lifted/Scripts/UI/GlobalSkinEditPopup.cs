// ==================== AoTTG2 cross-reference ====================
// Type: UI.GlobalSkinEditPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/GlobalSkinEditPopup.c
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

[Token(Token = "0x20007CE")]
internal class GlobalSkinEditPopup : BasePopup
{
	[Token(Token = "0x20007CF")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinAndRestoreSettings_003Ed__27 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002733")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002734")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002735")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public DummyHuman character;

		[Token(Token = "0x4002736")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public bool originalGlobal;

		[Token(Token = "0x4002737")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
		public bool originalCustom;

		[Token(Token = "0x17000D32")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004B63")]
			[Address(RVA = "0x5BE21E0", Offset = "0x5BE11E0", VA = "0x5BE21E0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/GlobalSkinEditPopup.c (UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000D33")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004B65")]
			[Address(RVA = "0x5BE2230", Offset = "0x5BE1230", VA = "0x5BE2230", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/GlobalSkinEditPopup.c (UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004B60")]
		[Address(RVA = "0x5BE13F0", Offset = "0x5BE03F0", VA = "0x5BE13F0")]
		[DebuggerHidden]
		public _003CLoadSkinAndRestoreSettings_003Ed__27(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/GlobalSkinEditPopup.c (UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004B61")]
		[Address(RVA = "0x5BE2040", Offset = "0x5BE1040", VA = "0x5BE2040", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/GlobalSkinEditPopup.c (UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004B62")]
		[Address(RVA = "0x5BE2050", Offset = "0x5BE1050", VA = "0x5BE2050", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/GlobalSkinEditPopup.c (UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$MoveNext): clean
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
					if (__this_00 == null) goto label_05ce21d5;
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
		label_05ce21d5: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6004B64")]
		[Address(RVA = "0x5BE21F0", Offset = "0x5BE11F0", VA = "0x5BE21F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/GlobalSkinEditPopup.c (UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_UI_GlobalSkinEditPopup_LoadSkinAndRestoreSettings_d__27_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x400272F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private HumanCustomSkinSet _currentGlobalSet;

	[Token(Token = "0x4002730")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Dictionary<string, string> _backupValues;

	[Token(Token = "0x4002731")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Dictionary<string, float> _backupFloatValues;

	[Token(Token = "0x4002732")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private bool _hasBackup;

	[Token(Token = "0x17000D2A")]
	protected override string Title
	{
		[Token(Token = "0x6004B49")]
		[Address(RVA = "0x5BDF210", Offset = "0x5BDE210", VA = "0x5BDF210", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/GlobalSkinEditPopup.c (UI.GlobalSkinEditPopup$$get_Title): clean
			CustomSkinSettings pSVar1;
			HumanCustomSkinSettings __this_00;
			StringSetting pSVar2;
			String pSVar3;
			BaseSetSetting pSVar4;
			String str2;

			pSVar3 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "EditGlobal", "", "");
			pSVar1 = SettingsManager.CustomSkinSettings;
			if ((pSVar1 == null) ||(__this_00 = pSVar1.Human, __this_00 == null)) {
		label_05cdf338: ;
				throw new NullReferenceException();
			}
			pSVar4 = __this_00.GetSelectedSet();
			if (pSVar4 == null) {
				str2 = null;
			}
			else {
				pSVar2 = pSVar4.Name;
				if (pSVar2 == null) goto label_05cdf338;
				str2 = pSVar2._value;
			}
			pSVar3 = String.Concat(pSVar3, ": ", str2);
			return pSVar3;
		}
	}

	[Token(Token = "0x17000D2B")]
	protected override float Width
	{
		[Token(Token = "0x6004B4A")]
		[Address(RVA = "0x5BDF340", Offset = "0x5BDE340", VA = "0x5BDF340", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/GlobalSkinEditPopup.c (UI.GlobalSkinEditPopup$$get_Width): clean
			return 1100.0;
		}
	}

	[Token(Token = "0x17000D2C")]
	protected override float Height
	{
		[Token(Token = "0x6004B4B")]
		[Address(RVA = "0x5BDF350", Offset = "0x5BDE350", VA = "0x5BDF350", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/GlobalSkinEditPopup.c (UI.GlobalSkinEditPopup$$get_Height): clean
			return 700.0;
		}
	}

	[Token(Token = "0x17000D2D")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004B4C")]
		[Address(RVA = "0x5BDF360", Offset = "0x5BDE360", VA = "0x5BDF360", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/GlobalSkinEditPopup.c (UI.GlobalSkinEditPopup$$get_VerticalSpacing): clean
			return 15.0;
		}
	}

	[Token(Token = "0x17000D2E")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004B4D")]
		[Address(RVA = "0x5BDF370", Offset = "0x5BDE370", VA = "0x5BDF370", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/GlobalSkinEditPopup.c (UI.GlobalSkinEditPopup$$get_HorizontalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x17000D2F")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004B4E")]
		[Address(RVA = "0x5BDF380", Offset = "0x5BDE380", VA = "0x5BDF380", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/GlobalSkinEditPopup.c (UI.GlobalSkinEditPopup$$get_VerticalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x17000D30")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6004B4F")]
		[Address(RVA = "0x5BDF390", Offset = "0x5BDE390", VA = "0x5BDF390", Slot = "13")]
		get
		{
			// Lifted from source/cpp/UI/GlobalSkinEditPopup.c (UI.GlobalSkinEditPopup$$get_DoublePanel): clean
			return true;
		}
	}

	[Token(Token = "0x17000D31")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004B50")]
		[Address(RVA = "0x5BDF3A0", Offset = "0x5BDE3A0", VA = "0x5BDF3A0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/UI/GlobalSkinEditPopup.c (UI.GlobalSkinEditPopup$$get_ScrollBar): clean
			return true;
		}
	}

	[Token(Token = "0x6004B51")]
	[Address(RVA = "0x5BDF3B0", Offset = "0x5BDE3B0", VA = "0x5BDF3B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/GlobalSkinEditPopup.c (UI.GlobalSkinEditPopup$$Setup): 10 lines keep C-only constructs
		HumanCustomSkinSet* targetAddress;
		byte bVar1;
		CustomSkinSettings pSVar2;
		HumanCustomSkinSettings __this_00;
		Transform pUVar3;
		StringSetting pSVar4;
		FloatSetting pSVar5;
		int fontSize;
		String pSVar6;
		ElementStyle __this_01;
		ElementStyle __this_02;
		HumanCustomSkinSet pSVar7;
		UnityAction pUVar8;
		MethodInfo method_00;

		this.Setup(parent);
		pSVar6 = this.get_ThemePanel();
		__this_01 = new ElementStyle(0x18, 200.0, 20.0, pSVar6);
		fontSize = this.get_ButtonFontSize();
		pSVar6 = this.get_ThemePanel();
		__this_02 = new ElementStyle(fontSize, 120.0, 20.0, pSVar6);
		pSVar2 = SettingsManager.CustomSkinSettings;
		if ((pSVar2 != null) &&(__this_00 = pSVar2.Human, __this_00 != null)) {
			pSVar7 = (HumanCustomSkinSet)__this_00.GetSelectedSet();
			if (pSVar7 != null) {
				bVar1 = (typeof(HumanCustomSkinSet)._2).typeHierarchyDepth;
				if (((((BaseSetSetting)pSVar7.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseSetSetting)pSVar7.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(HumanCustomSkinSet))) {
					throw new InvalidCastException();
				}
			}
			targetAddress = &this._currentGlobalSet;
			this._currentGlobalSet = pSVar7;
			pSVar7 = this._currentGlobalSet;
			if (pSVar7 != null) {
				pUVar3 = this.DoublePanelLeft;
				pSVar4 = pSVar7.Hair;
				pSVar6 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Hair", "", "");
				ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar6, "", 300.0, 40.0, false, null, null, null, null);
				pSVar7 = *targetAddress;
				if (pSVar7 != null) {
					pUVar3 = this.DoublePanelLeft;
					pSVar4 = pSVar7.Eye;
					pSVar6 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Eye", "", "");
					ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar6, "", 300.0, 40.0, false, null, null, null, null);
					pSVar7 = this._currentGlobalSet;
					if (pSVar7 != null) {
						pUVar3 = this.DoublePanelLeft;
						pSVar4 = pSVar7.Glass;
						pSVar6 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Glass", "", "");
						ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar6, "", 300.0, 40.0, false, null, null, null, null);
						pSVar7 = this._currentGlobalSet;
						if (pSVar7 != null) {
							pUVar3 = this.DoublePanelLeft;
							pSVar4 = pSVar7.Face;
							pSVar6 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Face", "", "");
							ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar6, "", 300.0, 40.0, false, null, null, null, null);
							pSVar7 = this._currentGlobalSet;
							if (pSVar7 != null) {
								pUVar3 = this.DoublePanelLeft;
								pSVar4 = pSVar7.Skin;
								pSVar6 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Skin", "", "");
								ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar6, "", 300.0, 40.0, false, null, null, null, null);
								pSVar7 = this._currentGlobalSet;
								if (pSVar7 != null) {
									pUVar3 = this.DoublePanelLeft;
									pSVar4 = pSVar7.Costume;
									pSVar6 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Costume", "", "");
									ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar6, "", 300.0, 40.0, false, null, null, null, null);
									pSVar7 = this._currentGlobalSet;
									if (pSVar7 != null) {
										pUVar3 = this.DoublePanelLeft;
										pSVar4 = pSVar7.Logo;
										pSVar6 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Logo", "", "");
										ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar6, "", 300.0, 40.0, false, null, null, null, null);
										pSVar7 = this._currentGlobalSet;
										if (pSVar7 != null) {
											pUVar3 = this.DoublePanelLeft;
											pSVar4 = pSVar7.GearL;
											pSVar6 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "GearL", "", "");
											ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar6, "", 300.0, 40.0, false, null, null, null, null);
											pSVar7 = this._currentGlobalSet;
											if (pSVar7 != null) {
												pUVar3 = this.DoublePanelLeft;
												pSVar4 = pSVar7.GearR;
												pSVar6 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "GearR", "", "");
												ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar6, "", 300.0, 40.0, false, null, null, null, null);
												pSVar7 = this._currentGlobalSet;
												if (pSVar7 != null) {
													pUVar3 = this.DoublePanelLeft;
													pSVar4 = pSVar7.Gas;
													pSVar6 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Gas", "", "");
													ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar6, "", 300.0, 40.0, false, null, null, null, null);
													pSVar7 = this._currentGlobalSet;
													if (pSVar7 != null) {
														pUVar3 = this.DoublePanelLeft;
														pSVar4 = pSVar7.Hoodie;
														pSVar6 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Hoodie", "", "");
														ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar6, "", 300.0, 40.0, false, null, null, null, null);
														pSVar7 = this._currentGlobalSet;
														if (pSVar7 != null) {
															pUVar3 = this.DoublePanelLeft;
															pSVar4 = pSVar7.Cloak;
															pSVar6 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Cloak", "", "");
															ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar6, "", 300.0, 40.0, false, null, null, null, null);
															pSVar7 = this._currentGlobalSet;
															if (pSVar7 != null) {
																pUVar3 = this.DoublePanelRight;
																pSVar4 = pSVar7.WeaponTrail;
																pSVar6 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "WeaponTrail", "", "");
																ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar6, "", 300.0, 40.0, false, null, null, null, null);
																pSVar7 = this._currentGlobalSet;
																if (pSVar7 != null) {
																	pUVar3 = this.DoublePanelRight;
																	pSVar4 = pSVar7.Horse;
																	pSVar6 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Horse", "", "");
																	ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar6, "", 300.0, 40.0, false, null, null, null, null);
																	pSVar7 = this._currentGlobalSet;
																	if (pSVar7 != null) {
																		pUVar3 = this.DoublePanelRight;
																		pSVar4 = pSVar7.ThunderspearL;
																		pSVar6 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "ThunderspearL", "", "");
																		ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar6, "", 300.0, 40.0, false, null, null, null, null);
																		pSVar7 = this._currentGlobalSet;
																		if (pSVar7 != null) {
																			pUVar3 = this.DoublePanelRight;
																			pSVar4 = pSVar7.ThunderspearR;
																			pSVar6 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "ThunderspearR", "", "");
																			ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar6, "", 300.0, 40.0, false, null, null, null, null) ;
																			pSVar7 = this._currentGlobalSet;
																			if (pSVar7 != null) {
																				pUVar3 = this.DoublePanelRight;
																				pSVar4 = pSVar7.HookL;
																				pSVar6 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "HookL", "", "");
																				ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar6, "", 300.0, 40.0, false, null, null, null, null);
																				pSVar7 = this._currentGlobalSet;
																				if (pSVar7 != null) {
																					pUVar3 = this.DoublePanelRight;
																					pSVar5 = pSVar7.HookLTiling;
																					pSVar6 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "HookLTiling", "", "");
																					ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar5, pSVar6, "", 300.0, 40.0, false, null, null, null, null);
																					pSVar7 = this._currentGlobalSet;
																					if (pSVar7 != null) {
																						pUVar3 = this.DoublePanelRight;
																						pSVar4 = pSVar7.HookR;
																						pSVar6 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "HookR", "", "");
																						ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar6, "", 300.0, 40.0, false, null, null, null, null);
																						pSVar7 = this._currentGlobalSet;
																						if (pSVar7 != null) {
																							pUVar3 = this.DoublePanelRight;
																							pSVar5 = pSVar7.HookRTiling;
																							pSVar6 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "HookRTiling", "", "");
																							ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar5, pSVar6, "", 300.0, 40.0, false, null, null, null, null);
																							pSVar7 = this._currentGlobalSet;
																							if (pSVar7 != null) {
																								pUVar3 = this.DoublePanelRight;
																								pSVar4 = pSVar7.Hat;
																								pSVar6 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Hat", "", "");
																								ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar6, "", 300.0, 40.0, false, null, null, null, null);
																								pSVar7 = this._currentGlobalSet;
																								if (pSVar7 != null) {
																									pUVar3 = this.DoublePanelRight;
																									pSVar4 = pSVar7.Head;
																									pSVar6 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Head", "", "");
																									ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar6, "", 300.0, 40.0, false, null, null, null, null);
																									pSVar7 = this._currentGlobalSet;
																									if (pSVar7 != null) {
																										pUVar3 = this.DoublePanelRight;
																										pSVar4 = pSVar7.Back;
																										pSVar6 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Back", "", "") ;
																										method_00 = (MethodInfo *)"";
																										ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)pSVar4, pSVar6, "", 300.0, 40.0, false, null, null, null, null);
																										pUVar3 = this.BottomBar;
																										pSVar6 = UIManager.GetLocaleCommon("Clear") ;
																										pUVar8 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction)) ;
																										pUVar8 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_GlobalSkinEditPopup_Setup_b__20_0);
																										ElementFactory.CreateTextButton(pUVar3, __this_02, pSVar6, 0.0, pUVar8);
																										pUVar3 = this.BottomBar;
																										pSVar6 = UIManager.GetLocaleCommon("Apply") ;
																										pUVar8 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction)) ;
																										pUVar8 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_GlobalSkinEditPopup_Setup_b__20_1);
																										ElementFactory.CreateTextButton(pUVar3, __this_02, pSVar6, 0.0, pUVar8);
																										pUVar3 = this.BottomBar;
																										pSVar6 = UIManager.GetLocaleCommon("Cancel") ;
																										pUVar8 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction)) ;
																										pUVar8 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_GlobalSkinEditPopup_Setup_b__20_2);
																										ElementFactory.CreateTextButton(pUVar3, __this_02, pSVar6, 0.0, pUVar8);
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

	[Token(Token = "0x6004B52")]
	[Address(RVA = "0x5BE03A0", Offset = "0x5BDF3A0", VA = "0x5BE03A0")]
	private void OnButtonClick(string name)
	{
		// Lifted from source/cpp/UI/GlobalSkinEditPopup.c (UI.GlobalSkinEditPopup$$OnButtonClick): clean
		bool bVar1;
		MethodInfo pMVar2;

		pMVar2 = (MethodInfo *)"Save";
		bVar1 = (name == "Save");
		if (bVar1) {
			this.OnSaveClick();
			return;
		}
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
		return;
	}

	[Token(Token = "0x6004B53")]
	[Address(RVA = "0x5BE0B60", Offset = "0x5BDFB60", VA = "0x5BE0B60")]
	private void CreateBackup()
	{
		// Lifted from source/cpp/UI/GlobalSkinEditPopup.c (UI.GlobalSkinEditPopup$$CreateBackup): 10 lines keep C-only constructs
		byte bVar1;
		Dictionary<object, object> pSVar2;
		Dictionary<string, float> pSVar3;
		HumanCustomSkinSet pSVar4;
		object a;
		object setting;
		bool bVar5;
		int iVar6;
		Dictionary.Enumerator<object, object> local_88;
		byte[] local_58 = new byte[16];
		String local_48;
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
		if ((this._currentGlobalSet == null) ||(this._hasBackup != false)) {
			return;
		}
		pSVar2 = (Dictionary<object, object>)this._backupValues;
		if (pSVar2 != null) {
			pSVar2.Clear();
			pSVar3 = this._backupFloatValues;
			if (pSVar3 != null) {
				pSVar3.Clear();
				pSVar4 = this._currentGlobalSet;
				if ((pSVar4 != null) &&(pSVar2 = (Dictionary<object, object>)pSVar4.TypedSettings, pSVar2 != null)) {
					local_58.GetEnumerator(pSVar2);
					local_88._getEnumeratorRetType = local_38;
					local_88._36_4_ = uStack_34;
					local_88._current.key = (object)local_48;
					local_88._current.value = (object)pSStack_40;
					local_88._dictionary = (Dictionary<TKey, TValue>)local_58._0_8_;
					local_88._version = local_58._8_4_;
					local_88._index = local_58._12_4_;
					local_58._0_8_ = null;
					local_58._8_8_ = &local_88;
					while(true) {
						do {
							while(true) {
								do {
									bVar5 = local_88.MoveNext();
									setting = local_88._current.value;
									a = local_88._current.key;
									if (!bVar5) {
										local_88.Dispose();
										this._hasBackup = true;
										return;
									}
									bVar5 = ((String)local_88._current.key == "Name");
								} while (((bVar5) ||(bVar5 = ((String)a == "Preset"))) ||(bVar5 = ((String)a == "UniqueId")));
								iVar6 = SettingsUtil.GetSettingType((BaseSetting)setting);
								if (iVar6 != 3) break;
								if ((BaseSetting)setting == null) {
									throw new NullReferenceException();
								}
								bVar1 = (typeof(FloatSetting)._2).typeHierarchyDepth;
								if (((((BaseSetting)setting.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseSetting)setting.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(FloatSetting))) {
									throw new InvalidCastException();
								}
								pSVar3 = this._backupFloatValues;
								if (pSVar3 == null) {
									throw new NullReferenceException();
								}
								pSVar3.set_Item(a, *(float)((long)&((BaseSetting)((long)setting + 0x18)).klass + 4));
							}
						} while (iVar6 != 4);
						if ((BaseSetting)setting == null) {
							throw new NullReferenceException();
						}
						bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
						if (((((BaseSetting)setting.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseSetting)setting.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(StringSetting))) break;
						pSVar2 = (Dictionary<object, object>)this._backupValues;
						if (pSVar2 == null) {
							throw new NullReferenceException();
						}
						pSVar2.set_Item(a, ((BaseSetting)((long)setting + 0x18)).monitor);
					}
					throw new InvalidCastException();
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004B54")]
	[Address(RVA = "0x5BE0F50", Offset = "0x5BDFF50", VA = "0x5BE0F50")]
	private void RestoreBackup()
	{
		// Lifted from source/cpp/UI/GlobalSkinEditPopup.c (UI.GlobalSkinEditPopup$$RestoreBackup): 9 lines keep C-only constructs
		byte bVar1;
		HumanCustomSkinSet pSVar2;
		Dictionary<object, object> pSVar3;
		Dictionary<string, float> pSVar4;
		object a;
		object __this_00;
		bool bVar5;
		int iVar6;
		String value;
		float value_00;
		Dictionary.Enumerator<object, object> local_88;
		byte[] local_58 = new byte[16];
		String local_48;
		TypedSetting<T> pSStack_40;
		int local_38;
		uint uStack_34;

		local_88._current.key = null;
		local_88._current.value = null;
		local_88._dictionary = null;
		local_88._version = 0;
		local_88._index = 0;
		local_88._getEnumeratorRetType = 0;
		local_88._36_4_ = 0;
		pSVar2 = this._currentGlobalSet;
		if ((pSVar2 != null) && (this._hasBackup != false)) {
			pSVar3 = (Dictionary<object, object>)pSVar2.TypedSettings;
			if (pSVar3 == null) {
				throw new NullReferenceException();
			}
			local_58.GetEnumerator(pSVar3);
			local_88._getEnumeratorRetType = local_38;
			local_88._36_4_ = uStack_34;
			local_88._current.key = (object)local_48;
			local_88._current.value = (object)pSStack_40;
			local_88._dictionary = (Dictionary<TKey, TValue>)local_58._0_8_;
			local_88._version = local_58._8_4_;
			local_88._index = local_58._12_4_;
			local_58._0_8_ = null;
			local_58._8_8_ = &local_88;
			while(true) {
				bVar5 = local_88.MoveNext();
				__this_00 = local_88._current.value;
				a = local_88._current.key;
				if (!bVar5) break;
				bVar5 = ((String)local_88._current.key == "Name");
				if (!bVar5) {
					bVar5 = ((String)a == "Preset");
					if (!bVar5) {
						bVar5 = ((String)a == "UniqueId");
						if (!bVar5) {
							iVar6 = SettingsUtil.GetSettingType((BaseSetting)__this_00);
							if (iVar6 == 3) {
								pSVar4 = this._backupFloatValues;
								if (pSVar4 == null) {
									throw new NullReferenceException();
								}
								bVar5 = pSVar4.ContainsKey(a);
								if (bVar5) {
									pSVar4 = this._backupFloatValues;
									if (pSVar4 == null) {
										throw new NullReferenceException();
									}
									value_00 = pSVar4.get_Item(a);
									if ((TypedSetting<T>)__this_00 == null) {
										throw new NullReferenceException();
									}
									bVar1 = (typeof(FloatSetting)._2).typeHierarchyDepth;
									if (((((TypedSetting<T>)__this_00.klass)._2).typeHierarchyDepth < bVar1) ||((((TypedSetting<T>)__this_00.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(FloatSetting))) {
										throw new InvalidCastException();
									}
									__this_00.Value = value_00;
								}
							}
							else if (iVar6 == 4) {
								pSVar3 = (Dictionary<object, object>)this._backupValues;
								if (pSVar3 == null) {
									throw new NullReferenceException();
								}
								bVar5 = pSVar3.ContainsKey(a);
								if (bVar5) {
									pSVar3 = (Dictionary<object, object>)this._backupValues;
									if (pSVar3 == null) {
										throw new NullReferenceException();
									}
									value = pSVar3.get_Item(a);
									if ((TypedSetting<T>)__this_00 == null) {
										throw new NullReferenceException();
									}
									bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
									if (((((TypedSetting<T>)__this_00.klass)._2).typeHierarchyDepth < bVar1) ||((((TypedSetting<T>)__this_00.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(StringSetting))) {
										throw new InvalidCastException();
									}
									__this_00.Value = (object)value;
								}
							}
						}
					}
				}
			}
			local_88.Dispose();
		}
		return;
	}

	[Token(Token = "0x6004B55")]
	[Address(RVA = "0x5BD7170", Offset = "0x5BD6170", VA = "0x5BD7170")]
	public void OnCancelClick()
	{
		// Lifted from source/cpp/UI/GlobalSkinEditPopup.c (UI.GlobalSkinEditPopup$$OnCancelClick): clean
		if (this._hasBackup != false) {
			this.RestoreBackup();
		}
		this.Hide();
		return;
	}

	[Token(Token = "0x6004B56")]
	[Address(RVA = "0x5BE08A0", Offset = "0x5BDF8A0", VA = "0x5BE08A0")]
	private void OnClearClick()
	{
		// Lifted from source/cpp/UI/GlobalSkinEditPopup.c (UI.GlobalSkinEditPopup$$OnClearClick): 6 lines keep C-only constructs
		sbyte cVar1;
		HumanCustomSkinSet pSVar2;
		Dictionary<object, object> __this_00;
		object pIVar3;
		String a;
		bool bVar4;
		uint uVar5;
		Object[] pSVar6;
		uint uVar7;
		byte[] auStack_88 = new byte[16];
		String pSStack_78;
		object pIStack_70;
		byte[] auStack_58 = new byte[16];
		String pSStack_48;
		object pIStack_40;

		if (Il2CppMethodInitialized_07547bef == false) {
			Il2CppMethodInitialized_07547bef = true;
			cVar1 = this._hasBackup;
		}
		else {
			cVar1 = this._hasBackup;
		}
		if (cVar1 == false) {
			this.CreateBackup();
			pSVar2 = this._currentGlobalSet;
		}
		else {
			pSVar2 = this._currentGlobalSet;
		}
		if ((pSVar2 != null) &&(__this_00 = (Dictionary<object, object>)pSVar2.TypedSettings, __this_00 != null)) {
			auStack_58.GetEnumerator(__this_00);
			pSStack_78 = pSStack_48;
			pIStack_70 = pIStack_40;
			auStack_88._0_8_ = auStack_58._0_8_;
			auStack_88._8_8_ = auStack_58._8_8_;
			auStack_58._0_8_ = null;
			auStack_58._8_8_ = (Dictionary.Enumerator<object, object>)auStack_88;
			while (true) {
				bVar4 = auStack_88.MoveNext();
				pIVar3 = pIStack_70;
				a = pSStack_78;
				if (!(bVar4)) break;
				bVar4 = (pSStack_78 == "Name");
				if (((!bVar4) && (bVar4 = (a == "Preset"), !bVar4) ) && (bVar4 = (a == "UniqueId"), !bVar4)) {
					if (pIVar3 == null) {
						throw new NullReferenceException();
					}
					(*pIVar3.klass.vtable[4].methodPtr)(pIVar3,pIVar3.klass.vtable[4].method);
				}
			}
			auStack_88.Dispose();
			pSVar6 = this.GetComponentsInChildren<InputSettingElement>();
			if (pSVar6 != null) {
				uVar5 = (uint)pSVar6.Length;
				if (0 < (int)uVar5) {
					uVar7 = 0;
					do {
						if (uVar5 <= uVar7) {
							throw new IndexOutOfRangeException();
						}
						pIVar3 = pSVar6[(int)uVar7];
						if (pIVar3 == null) goto label_05ce0ad9;
						(*pIVar3.klass.vtable[6].methodPtr)(pIVar3,pIVar3.klass.vtable[6].method);
						uVar7 = uVar7 + 1;
						uVar5 = (uint)pSVar6.Length;
					} while ((int)uVar7 < (int)uVar5);
				}
				return;
			}
		}
	label_05ce0ad9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004B57")]
	[Address(RVA = "0x5BE0480", Offset = "0x5BDF480", VA = "0x5BE0480")]
	private void OnSaveClick()
	{
		// Lifted from source/cpp/UI/GlobalSkinEditPopup.c (UI.GlobalSkinEditPopup$$OnSaveClick): 7 lines keep C-only constructs
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
		GlobalSkinEditPopup.d__27<LoadSkinAndRestoreSettings> __this_03;
		BaseMenu __this_04;
		DummyHuman x;

		if (this._currentGlobalSet == null) {
			return;
		}
		__this_00 = (Dictionary<object, object>)this._backupValues;
		if (__this_00 == null) goto label_05ce0895;
		__this_00.Clear();
		__this_01 = this._backupFloatValues;
		if (__this_01 == null) goto label_05ce0895;
		__this_01.Clear();
		this._hasBackup = false;
		if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			pUVar12 = UIManager.CurrentMenu;
			if (pUVar12 != null) goto label_05ce05c3;
	label_05ce05e3: ;
			__this_04 = null;
			uVar4 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			pUVar12 = UIManager.CurrentMenu;
			if (pUVar12 == null) goto label_05ce05e3;
	label_05ce05c3: ;
			bVar1 = (typeof(CharacterEditorHumanMenu)._2).typeHierarchyDepth;
			if ((pUVar12.klass._2).typeHierarchyDepth < bVar1) goto label_05ce05e3;
			__this_04 = null;
			if ((pUVar12.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CharacterEditorHumanMenu)) {
				__this_04 = pUVar12;
			}
			uVar4 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar4 == 0) {
		}
		bVar11 = ((Object)__this_04 != null);
		if (!bVar11) goto label_05ce0818;
		pGVar5 = SceneLoader.CurrentGameManager;
		if (pGVar5 == null) goto label_05ce0895;
		bVar1 = (typeof(CharacterEditorGameManager)._2).typeHierarchyDepth;
		if (((pGVar5.klass._2).typeHierarchyDepth < bVar1) ||((pGVar5.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorGameManager))) {
			throw new InvalidCastException();
		}
		pCVar6 = (DummyHuman)(*(ulong)((sbyte)pGVar5 + 0x38));
		if (pCVar6 == null) {
	label_05ce068c: ;
			x = null;
			uVar4 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			bVar1 = (typeof(DummyHuman)._2).typeHierarchyDepth;
			if ((pCVar6.klass._2).typeHierarchyDepth < bVar1) goto label_05ce068c;
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
					__this_03 = il2cpp_codegen_object_new(typeof(GlobalSkinEditPopup.d__27<LoadSkinAndRestoreSettings>));
					__this_03 = new Object();
					__this_03.__1__state = 0;
					__this_03.character = x;
					__this_03.originalGlobal = bVar2;
					__this_03.originalCustom = bVar3;
					if (__this_04 != null) {
						__this_04.StartCoroutine((IEnumerator)__this_03);
						goto label_05ce0818;
					}
				}
			}
	label_05ce0895: ;
			throw new NullReferenceException();
		}
	label_05ce0818: ;
		this.Hide();
		return;
	}

	[Token(Token = "0x6004B58")]
	[Address(RVA = "0x5BE1370", Offset = "0x5BE0370", VA = "0x5BE1370")]
	[IteratorStateMachine(typeof(_003CLoadSkinAndRestoreSettings_003Ed__27))]
	private IEnumerator LoadSkinAndRestoreSettings(DummyHuman character, bool originalGlobal, bool originalCustom)
	{
		// Lifted from source/cpp/UI/GlobalSkinEditPopup.c (UI.GlobalSkinEditPopup$$LoadSkinAndRestoreSettings): clean
		GlobalSkinEditPopup.d__27<LoadSkinAndRestoreSettings> __this_00;

		__this_00 = new GlobalSkinEditPopup.d__27<LoadSkinAndRestoreSettings>();
		__this_00.__1__state = 0;
		__this_00.character = character;
		__this_00.originalGlobal = originalGlobal;
		__this_00.originalCustom = originalCustom;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004B59")]
	[Address(RVA = "0x5BE1410", Offset = "0x5BE0410", VA = "0x5BE1410", Slot = "21")]
	public override void Show()
	{
		// Lifted from source/cpp/UI/GlobalSkinEditPopup.c (UI.GlobalSkinEditPopup$$Show): 28 lines keep C-only constructs
		byte bVar1;
		CustomSkinSettings pSVar2;
		HumanCustomSkinSettings __this_00;
		Dictionary<object, object> __this_01;
		Dictionary<string, float> __this_02;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		HumanCustomSkinSet pSVar5;
		bool bVar6;
		HumanCustomSkinSet pSVar7;
		Transform pUVar8;
		VirtualInvokeData pVVar9;
		Component pUVar10;
		Object pUVar11;
		object pIVar12;
		ulong uVar13;
		long lVar14;
		object pIStack_60;
		object pIStack_58;
		object* ppIStack_48;
		object* ppIStack_40;
		long lStack_38;

		pIStack_60 = null;
		pIStack_58 = null;
		pSVar2 = SettingsManager.CustomSkinSettings;
		if ((pSVar2 != null) &&(__this_00 = pSVar2.Human, __this_00 != null)) {
			pSVar7 = (HumanCustomSkinSet)__this_00.GetSelectedSet();
			pSVar5 = typeof(HumanCustomSkinSet);
			if (pSVar7 == null) {
				this._currentGlobalSet = null;
			}
			else {
				bVar1 = (typeof(HumanCustomSkinSet)._2).typeHierarchyDepth;
				if (((((BaseSetSetting)pSVar7.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseSetSetting)pSVar7.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(HumanCustomSkinSet))) {
	label_05ce1798: ;
					throw new InvalidCastException();
				}
				this._currentGlobalSet = pSVar7;
				if (((((BaseSetSetting)pSVar7.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseSetSetting)pSVar7.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=(Il2CppClass)pSVar5)) goto label_05ce1798;
			}
			__this_01 = (Dictionary<object, object>)this._backupValues;
			if (__this_01 != null) {
				__this_01.Clear();
				__this_02 = this._backupFloatValues;
				if (__this_02 != null) {
					__this_02.Clear();
					this._hasBackup = false;
					pUVar8 = this.DoublePanelLeft;
					if ((pUVar8 != null) &&(pUVar8 = pUVar8.transform , pUVar8 != null)) {
						pIStack_60 = (object)pUVar8.GetEnumerator();
						ppIStack_48 = &pIStack_60;
						ppIStack_40 = &pIStack_58;
						do {
							pIVar12 = pIStack_60;
							if (pIStack_60 == null) {
								throw new NullReferenceException();
							}
							pIVar3 = pIStack_60.klass;
							uVar13 = (ulong)(pIVar3._2).interface_offsets_count;
							bVar6 = pIVar12.get_Current();
							pIVar12 = pIStack_60;
							if (!bVar6) {
								pIVar12 = (pIStack_60 as IDisposable);
								pIStack_58 = pIVar12;
								if (pIVar12 == null) goto label_05ce1856;
								pIVar3 = pIVar12.klass;
								uVar13 = (ulong)(pIVar3._2).interface_offsets_count;
								if (uVar13 == 0) goto label_05ce182f;
								pIVar4 = (pIVar3._1).interfaceOffsets;
								lVar14 = 0;
								goto label_05ce1820;
							}
							if (pIStack_60 == null) {
								throw new NullReferenceException();
							}
							pIVar3 = pIStack_60.klass;
							uVar13 = (ulong)(pIVar3._2).interface_offsets_count;
							pUVar10 = (Component)pIVar12.get_Current();
							if (pUVar10 == null) {
								throw new NullReferenceException();
							}
							bVar1 = (typeof(Transform)._2).typeHierarchyDepth;
							if (((pUVar10.klass._2).typeHierarchyDepth < bVar1) ||((pUVar10.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(Transform))) {
								throw new InvalidCastException();
							}
							pUVar11 = (Object)pUVar10.gameObject ;
							Object.Destroy(pUVar11);
						} while(true);
					}
				}
			}
		}
		goto label_05ce1db2;
		while (true) {
			lVar14 = lVar14 + 0x10;
			if (!(uVar13 * 0x10 != lVar14)) break;
	label_05ce1820: ;
			if (*(IDisposable*)((long)&pIVar4.interfaceType + lVar14) == typeof(IDisposable)) {
				pVVar9 = pIVar3.vtable + *(int)((long)&pIVar4.offset + lVar14);
				goto label_05ce184d;
			}
		}
	label_05ce182f: ;
	label_05ce184d: ;
		pIVar12.get_Current();
	label_05ce1856: ;
		pUVar8 = this.DoublePanelRight;
		if ((pUVar8 != null) &&(pUVar8 = pUVar8.transform, pUVar8 != null)) {
			lStack_38 = 0;
			pIStack_60 = (object)pUVar8.GetEnumerator();
			ppIStack_48 = &pIStack_60;
			ppIStack_40 = &pIStack_58;
			do {
				pIVar12 = pIStack_60;
				if (pIStack_60 == null) {
					throw new NullReferenceException();
				}
				pIVar3 = pIStack_60.klass;
				uVar13 = (ulong)(pIVar3._2).interface_offsets_count;
				bVar6 = pIVar12.get_Current();
				pIVar12 = pIStack_60;
				if (!bVar6) {
					pIVar12 = (pIStack_60 as IDisposable);
					pIStack_58 = pIVar12;
					if (pIVar12 == null) goto label_05ce1ab6;
					pIVar3 = pIVar12.klass;
					uVar13 = (ulong)(pIVar3._2).interface_offsets_count;
					if (uVar13 == 0) goto label_05ce1a8f;
					pIVar4 = (pIVar3._1).interfaceOffsets;
					lVar14 = 0;
					goto label_05ce1a80;
				}
				if (pIStack_60 == null) {
					throw new NullReferenceException();
				}
				pIVar3 = pIStack_60.klass;
				uVar13 = (ulong)(pIVar3._2).interface_offsets_count;
				pUVar10 = (Component)pIVar12.get_Current();
				if (pUVar10 == null) {
					throw new NullReferenceException();
				}
				bVar1 = (typeof(Transform)._2).typeHierarchyDepth;
				if (((pUVar10.klass._2).typeHierarchyDepth < bVar1) ||((pUVar10.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(Transform))) {
					throw new InvalidCastException();
				}
				pUVar11 = (Object)pUVar10.gameObject;
				Object.Destroy(pUVar11);
			} while(true);
		}
		goto label_05ce1db2;
		while (true) {
			lVar14 = lVar14 + 0x10;
			if (!(uVar13 * 0x10 != lVar14)) break;
	label_05ce1cf0: ;
			if (*(IDisposable*)((long)&pIVar4.interfaceType + lVar14) == typeof(IDisposable)) {
				pVVar9 = pIVar3.vtable + *(int)((long)&pIVar4.offset + lVar14);
				goto label_05ce1d1d;
			}
		}
	label_05ce1cff: ;
	label_05ce1d1d: ;
		pIVar12.get_Current();
	label_05ce1d26: ;
		this.Setup(null);
		if ((this._currentGlobalSet != null) &&(this._hasBackup == false)) {
			this.CreateBackup();
		}
		this.Show();
		return;
		while (true) {
			lVar14 = lVar14 + 0x10;
			if (!(uVar13 * 0x10 != lVar14)) break;
	label_05ce1a80: ;
			if (*(IDisposable*)((long)&pIVar4.interfaceType + lVar14) == typeof(IDisposable)) {
				pVVar9 = pIVar3.vtable + *(int)((long)&pIVar4.offset + lVar14);
				goto label_05ce1aad;
			}
		}
	label_05ce1a8f: ;
	label_05ce1aad: ;
		pIVar12.get_Current();
	label_05ce1ab6: ;
		if (lStack_38 != 0) {
			throw;
		}
		pUVar8 = this.BottomBar;
		if ((pUVar8 != null) &&(pUVar8 = pUVar8.transform, pUVar8 != null)) {
			pIStack_60 = (object)pUVar8.GetEnumerator();
			ppIStack_48 = &pIStack_60;
			ppIStack_40 = &pIStack_58;
			do {
				pIVar12 = pIStack_60;
				if (pIStack_60 == null) {
					throw new NullReferenceException();
				}
				pIVar3 = pIStack_60.klass;
				uVar13 = (ulong)(pIVar3._2).interface_offsets_count;
				bVar6 = pIVar12.get_Current();
				pIVar12 = pIStack_60;
				if (!bVar6) {
					pIVar12 = (pIStack_60 as IDisposable);
					pIStack_58 = pIVar12;
					if (pIVar12 == null) goto label_05ce1d26;
					pIVar3 = pIVar12.klass;
					uVar13 = (ulong)(pIVar3._2).interface_offsets_count;
					if (uVar13 == 0) goto label_05ce1cff;
					pIVar4 = (pIVar3._1).interfaceOffsets;
					lVar14 = 0;
					goto label_05ce1cf0;
				}
				if (pIStack_60 == null) {
					throw new NullReferenceException();
				}
				pIVar3 = pIStack_60.klass;
				uVar13 = (ulong)(pIVar3._2).interface_offsets_count;
				pUVar10 = (Component)pIVar12.get_Current();
				if (pUVar10 == null) {
					throw new NullReferenceException();
				}
				bVar1 = (typeof(Transform)._2).typeHierarchyDepth;
				if (((pUVar10.klass._2).typeHierarchyDepth < bVar1) ||((pUVar10.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(Transform))) {
					throw new InvalidCastException();
				}
				pUVar11 = (Object)pUVar10.gameObject;
				Object.Destroy(pUVar11);
			} while(true);
		}
	label_05ce1db2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004B5A")]
	[Address(RVA = "0x5BE1E70", Offset = "0x5BE0E70", VA = "0x5BE1E70", Slot = "59")]
	protected override void OnDisable()
	{
		// Lifted from source/cpp/UI/GlobalSkinEditPopup.c (UI.GlobalSkinEditPopup$$OnDisable): clean
		if (this._hasBackup != false) {
			this.RestoreBackup();
		}
		this.OnDisable();
		return;
	}

	[Token(Token = "0x6004B5B")]
	[Address(RVA = "0x5BE1E90", Offset = "0x5BE0E90", VA = "0x5BE1E90", Slot = "58")]
	public override void HideImmediate()
	{
		// Lifted from source/cpp/UI/GlobalSkinEditPopup.c (UI.GlobalSkinEditPopup$$HideImmediate): clean
		if (this._hasBackup != false) {
			this.RestoreBackup();
		}
		this.HideImmediate();
		return;
	}

	[Token(Token = "0x6004B5C")]
	[Address(RVA = "0x5BE1EB0", Offset = "0x5BE0EB0", VA = "0x5BE1EB0")]
	public GlobalSkinEditPopup()
	{
		// Lifted from source/cpp/UI/GlobalSkinEditPopup.c (UI.GlobalSkinEditPopup$$.ctor): clean
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
	// iterator and async state machines), lifted from source/cpp/UI/GlobalSkinEditPopup.c.

	// UI.GlobalSkinEditPopup$$<Setup>b__20_0: clean
	private void Setup_b__20_0()
	{


		this.OnButtonClick("Clear");
		return;
	}

	// UI.GlobalSkinEditPopup$$<Setup>b__20_1: clean
	private void Setup_b__20_1()
	{


		this.OnButtonClick("Save");
		return;
	}

	// UI.GlobalSkinEditPopup$$<Setup>b__20_2: clean
	private void Setup_b__20_2()
	{


		this.OnButtonClick("Cancel");
		return;
	}
}
