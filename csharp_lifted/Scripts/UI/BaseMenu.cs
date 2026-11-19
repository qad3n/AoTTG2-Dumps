// ==================== AoTTG2 cross-reference ====================
// Type: UI.BaseMenu
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/BaseMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/BaseMenu.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ApplicationManagers;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200077E")]
internal abstract class BaseMenu : MonoBehaviour
{
	[Token(Token = "0x200077F")]
	[CompilerGenerated]
	private sealed class _003CWaitAndApplyScale_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40025D7")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40025D8")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40025D9")]
		[FieldOffset(Offset = "0x20")]
		public SceneName sceneName;

		[Token(Token = "0x40025DA")]
		[FieldOffset(Offset = "0x28")]
		public BaseMenu _003C_003E4__this;

		[Token(Token = "0x17000C43")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600485A")]
			[Address(RVA = "0x5BB35A0", Offset = "0x5BB25A0", VA = "0x5BB35A0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/BaseMenu.c (UI.BaseMenu.<WaitAndApplyScale>d__17$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000C44")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600485C")]
			[Address(RVA = "0x5BB35F0", Offset = "0x5BB25F0", VA = "0x5BB35F0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/BaseMenu.c (UI.BaseMenu.<WaitAndApplyScale>d__17$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004857")]
		[Address(RVA = "0x5BB3310", Offset = "0x5BB2310", VA = "0x5BB3310")]
		[DebuggerHidden]
		public _003CWaitAndApplyScale_003Ed__17(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/BaseMenu.c (UI.BaseMenu.<WaitAndApplyScale>d__17$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004858")]
		[Address(RVA = "0x5BB3330", Offset = "0x5BB2330", VA = "0x5BB3330", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/BaseMenu.c (UI.BaseMenu.<WaitAndApplyScale>d__17$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004859")]
		[Address(RVA = "0x5BB3340", Offset = "0x5BB2340", VA = "0x5BB3340", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/BaseMenu.c (UI.BaseMenu.<WaitAndApplyScale>d__17$$MoveNext): 2 lines keep C-only constructs
			int iVar1;
			BaseMenu __this_00;
			UISettings __this_01;
			Vector2 value;
			int iVar2;
			uint uVar3;
			CanvasScaler __this_02;
			object pIVar4;
			RectTransform __this_03;
			Object[] pSVar5;
			uint uVar6;
			float fVar7;
			float fVar8;
			Vector3 UVar9;

			iVar1 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar1 == 2) {
				this.__1__state = -1;
				if (__this_00 == null) {
		label_05cb3587: ;
					throw new NullReferenceException();
				}
				__this_03 = __this_00.GetComponent<RectTransform>();
				if (__this_03 == null) goto label_05cb3587;
				UVar9 = __this_03.localScale;
				UIManager.CurrentCanvasScale = UVar9.x;
				pSVar5 = __this_00.GetComponentsInChildren<BaseScaler>(true);
				if (pSVar5 == null) goto label_05cb3587;
				uVar3 = (uint)pSVar5.Length;
				uVar6 = 0;
				if ((int)uVar3 < 1) goto label_05cb357c;
				do {
					if (uVar3 <= uVar6) {
						throw new IndexOutOfRangeException();
					}
					pIVar4 = pSVar5[(int)uVar6];
					if (pIVar4 == null) goto label_05cb3587;
					(*pIVar4.klass.vtable[5].methodPtr)(pIVar4,pIVar4.klass.vtable[5].method);
					uVar6 = uVar6 + 1;
					uVar3 = (uint)pSVar5.Length;
				} while ((int)uVar6 < (int)uVar3);
		label_05cb353b: ;
				uVar6 = 0;
			}
			else {
				if (iVar1 == 1) {
					this.__1__state = -1;
					pIVar4 = new WaitForEndOfFrame();
					this.__2__current = pIVar4;
					iVar2 = 2;
				}
				else {
					if (iVar1 != 0) goto label_05cb353b;
					this.__1__state = -1;
					__this_01 = SettingsManager.UISettings;
					if (__this_01 == null) goto label_05cb3587;
					fVar7 = __this_01.AppliedMasterScale;
					if (__this_00 == null) goto label_05cb3587;
					iVar1 = this.sceneName;
					__this_02 = __this_00.GetComponent<CanvasScaler>() ;
					if (__this_02 == null) goto label_05cb3587;
					fVar8 = 1.0;
					if (3 < iVar1 - 3U) {
						fVar8 = 1.0 / fVar7;
					}
					value.y = fVar8 * 1080.0;
					value.x = fVar8 * 1920.0;
					__this_02.referenceResolution = value;
					pIVar4 = new WaitForEndOfFrame();
					this.__2__current = pIVar4;
					iVar2 = 1;
				}
				this.__1__state = iVar2;
				uVar6 = 1;
			}
		label_05cb357c: ;
			return SUB41(uVar6, 0);
		}

		[Token(Token = "0x600485B")]
		[Address(RVA = "0x5BB35B0", Offset = "0x5BB25B0", VA = "0x5BB35B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/BaseMenu.c (UI.BaseMenu.<WaitAndApplyScale>d__17$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_BaseMenu_WaitAndApplyScale_d__17_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x40025C8")]
	[FieldOffset(Offset = "0x20")]
	protected List<BasePopup> _popups;

	[Token(Token = "0x40025C9")]
	[FieldOffset(Offset = "0x28")]
	public TooltipPopup TooltipPopup;

	[Token(Token = "0x40025CA")]
	[FieldOffset(Offset = "0x30")]
	public MessagePopup MessagePopup;

	[Token(Token = "0x40025CB")]
	[FieldOffset(Offset = "0x38")]
	public ConfirmPopup ConfirmPopup;

	[Token(Token = "0x40025CC")]
	[FieldOffset(Offset = "0x40")]
	public ExternalLinkPopup ExternalLinkPopup;

	[Token(Token = "0x40025CD")]
	[FieldOffset(Offset = "0x48")]
	public ColorPickPopup ColorPickPopup;

	[Token(Token = "0x40025CE")]
	[FieldOffset(Offset = "0x50")]
	public IconPickPopup IconPickPopup;

	[Token(Token = "0x40025CF")]
	[FieldOffset(Offset = "0x58")]
	public RoleSpritePickPopup RoleSpritePickPopup;

	[Token(Token = "0x40025D0")]
	[FieldOffset(Offset = "0x60")]
	public Vector3Popup Vector3Popup;

	[Token(Token = "0x40025D1")]
	[FieldOffset(Offset = "0x68")]
	public ExportPopup ExportPopup;

	[Token(Token = "0x40025D2")]
	[FieldOffset(Offset = "0x70")]
	public ImportPopup ImportPopup;

	[Token(Token = "0x40025D3")]
	[FieldOffset(Offset = "0x78")]
	public NewImportPopup NewImportPopup;

	[Token(Token = "0x40025D4")]
	[FieldOffset(Offset = "0x80")]
	public KeybindPopup KeybindPopup;

	[Token(Token = "0x40025D5")]
	[FieldOffset(Offset = "0x88")]
	public SetNamePopup SetNamePopup;

	[Token(Token = "0x40025D6")]
	[FieldOffset(Offset = "0x90")]
	public SelectListPopup SelectListPopup;

	[Token(Token = "0x6004850")]
	[Address(RVA = "0x5BB2270", Offset = "0x5BB1270", VA = "0x5BB2270", Slot = "4")]
	public virtual void Setup()
	{
		// Lifted from source/cpp/UI/BaseMenu.c (UI.BaseMenu$$Setup): clean
		bool bVar1;
		AottgMobileMenuSafeArea x;
		GameObject __this_00;

		this.SetupPopups();
		bVar1 = MobilePlatformUtility.IsMobileRuntime();
		if (bVar1) {
			x = this.GetComponent<AottgMobileMenuSafeArea>();
			bVar1 = ((Object)x == null);
			if (bVar1) {
				__this_00 = this.gameObject;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.AddComponent<AottgMobileMenuSafeArea>() ;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6004851")]
	[Address(RVA = "0x5BB2340", Offset = "0x5BB1340", VA = "0x5BB2340")]
	public void ApplyScale(SceneName sceneName)
	{
		// Lifted from source/cpp/UI/BaseMenu.c (UI.BaseMenu$$ApplyScale): clean
		BaseMenu.d__17<WaitAndApplyScale> __this_00;

		__this_00 = new BaseMenu.d__17<WaitAndApplyScale>(0);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		__this_00.sceneName = sceneName;
		this.StartCoroutine((IEnumerator)__this_00);
		return;
	}

	[Token(Token = "0x6004852")]
	[Address(RVA = "0x5BB23C0", Offset = "0x5BB13C0", VA = "0x5BB23C0")]
	[IteratorStateMachine(typeof(_003CWaitAndApplyScale_003Ed__17))]
	protected IEnumerator WaitAndApplyScale(SceneName sceneName)
	{
		// Lifted from source/cpp/UI/BaseMenu.c (UI.BaseMenu$$WaitAndApplyScale): clean
		BaseMenu.d__17<WaitAndApplyScale> __this_00;

		__this_00 = new BaseMenu.d__17<WaitAndApplyScale>(0);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		__this_00.sceneName = sceneName;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004853")]
	[Address(RVA = "0x5BB2430", Offset = "0x5BB1430", VA = "0x5BB2430", Slot = "5")]
	protected virtual void SetupPopups()
	{
		// Lifted from source/cpp/UI/BaseMenu.c (UI.BaseMenu$$SetupPopups): 38 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<BasePopup> pSVar3;
		BasePopup[] pUVar4;
		MethodInfo pMVar5;
		bool bVar6;
		Transform pUVar7;
		GameObject pUVar8;
		TooltipPopup pUVar9;
		MessagePopup pUVar10;
		ConfirmPopup pUVar11;
		ExternalLinkPopup pUVar12;
		ColorPickPopup pUVar13;
		Vector3Popup pUVar14;
		ExportPopup pUVar15;
		ImportPopup pUVar16;
		NewImportPopup pUVar17;
		KeybindPopup pUVar18;
		SetNamePopup pUVar19;
		SelectListPopup pUVar20;
		IconPickPopup pUVar21;
		RoleSpritePickPopup pUVar22;
		AottgExternalLinkDialogHost x;

		if (Il2CppMethodInitialized_07547aad == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_SelectListPopup) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_IconPickPopup) ;
			Il2CppMethodInitialized_07547aad = true;
		}
		pUVar7 = this.transform;
		pUVar8 = ElementFactory.CreateTooltipPopup<TooltipPopup>(pUVar7, false);
		if (pUVar8 != null) {
			pUVar9 = pUVar8.GetComponent<TooltipPopup>();
			this.TooltipPopup = pUVar9;
			pUVar7 = this.transform;
			pUVar10 = ElementFactory.CreateDefaultPopup<MessagePopup>(pUVar7, false);
			if (pUVar10 != null) {
				pUVar10 = pUVar10.GetComponent<MessagePopup>();
				this.MessagePopup = pUVar10;
				pUVar7 = this.transform;
				pUVar11 = ElementFactory.CreateDefaultPopup<ConfirmPopup>(pUVar7, false) ;
				if (pUVar11 != null) {
					pUVar11 = pUVar11.GetComponent<ConfirmPopup>() ;
					this.ConfirmPopup = pUVar11;
					pUVar7 = this.transform;
					pUVar12 = ElementFactory.CreateDefaultPopup<ExternalLinkPopup>(pUVar7, false);
					if (pUVar12 != null) {
						pUVar12 = pUVar12.GetComponent<ExternalLinkPopup>();
						this.ExternalLinkPopup = pUVar12;
						pUVar7 = this.transform;
						pUVar13 = ElementFactory.CreateDefaultPopup<ColorPickPopup>(pUVar7, false);
						if (pUVar13 != null) {
							pUVar13 = pUVar13.GetComponent<ColorPickPopup>();
							this.ColorPickPopup = pUVar13;
							pUVar7 = this.transform ;
							pUVar14 = ElementFactory.CreateDefaultPopup<Vector3Popup>(pUVar7, false);
							if (pUVar14 != null) {
								pUVar14 = pUVar14.GetComponent<Vector3Popup>();
								this.Vector3Popup = pUVar14;
								pUVar7 = this.transform;
								pUVar15 = ElementFactory.CreateDefaultPopup<ExportPopup>(pUVar7, false);
								if (pUVar15 != null) {
									pUVar15 = pUVar15.GetComponent<ExportPopup>();
									this.ExportPopup = pUVar15;
									pUVar7 = this.transform;
									pUVar16 = ElementFactory.CreateDefaultPopup<ImportPopup>(pUVar7, false);
									if (pUVar16 != null) {
										pUVar16 = pUVar16.GetComponent<ImportPopup>();
										this.ImportPopup = pUVar16;
										pUVar7 = this.transform;
										pUVar17 = ElementFactory.CreateDefaultPopup<NewImportPopup>(pUVar7, false);
										if (pUVar17 != null) {
											pUVar17 = pUVar17.GetComponent<NewImportPopup>();
											this.NewImportPopup = pUVar17;
											pUVar7 = this.transform;
											pUVar18 = ElementFactory.CreateDefaultPopup<KeybindPopup>(pUVar7, false);
											if (pUVar18 != null) {
												pUVar18 = pUVar18.GetComponent<KeybindPopup>();
												this.KeybindPopup = pUVar18;
												pUVar7 = this.transform;
												pUVar19 = ElementFactory.CreateDefaultPopup<SetNamePopup>(pUVar7, false);
												if (pUVar19 != null) {
													pUVar19 = pUVar19.GetComponent<SetNamePopup>();
													this.SetNamePopup = pUVar19;
													pUVar7 = this.transform;
													pUVar20 = ElementFactory.CreateDefaultPopup<SelectListPopup>(pUVar7, false);
													if (pUVar20 != null) {
														pUVar20 = pUVar20.GetComponent<SelectListPopup>();
														this.SelectListPopup = pUVar20;
														pUVar7 = this.transform;
														pUVar21 = ElementFactory.CreateDefaultPopup<IconPickPopup>(pUVar7, false);
														if (pUVar21 != null) {
															pUVar21 = pUVar21.GetComponent<IconPickPopup>();
															this.IconPickPopup = pUVar21;
															pUVar7 = this.transform;
															pUVar22 = ElementFactory.CreateDefaultPopup<RoleSpritePickPopup>(pUVar7, false);
															if (pUVar22 != null) {
																pUVar22 = pUVar22.GetComponent<RoleSpritePickPopup>();
																this.RoleSpritePickPopup = pUVar22;
																x = this.GetComponent<AottgExternalLinkDialogHost>();
																bVar6 = ((Object)x == null);
																if (bVar6) {
																	pUVar8 = this.gameObject;
																	if (pUVar8 == null) goto label_05cb2f4b;
																	pUVar8.AddComponent<AottgExternalLinkDialogHost>();
																}
																pSVar3 = this._popups;
																if (pSVar3 != null) {
																	pUVar9 = this.TooltipPopup;
																	piVar1 = &pSVar3._version;
																	*piVar1 = *piVar1 + 1;
																	pUVar4 = pSVar3._items;
																	if (pUVar4 != null) {
																		uVar2 = pSVar3._size;
																		if (uVar2 < (uint)pUVar4.Length) {
																			pSVar3._size = uVar2 + 1;
																			pUVar4[(int)uVar2] = (BasePopup)pUVar9;
																		}
																		else {
																			pSVar3.AddWithResize((object)pUVar9);
																		}
																		pSVar3 = this._popups;
																		if (pSVar3 != null) {
																			pUVar10 = this.MessagePopup;
																			piVar1 = &pSVar3._version;
																			*piVar1 = *piVar1 + 1;
																			pUVar4 = pSVar3._items;
																			if (pUVar4 != null) {
																				uVar2 = pSVar3._size;
																				if (uVar2 < (uint)pUVar4.Length) {
																					pSVar3._size = uVar2 + 1;
																					pUVar4[(int)uVar2] = (BasePopup)pUVar10;
																				}
																				else {
																					pSVar3.AddWithResize((object)pUVar10);
																				}
																				pSVar3 = this._popups;
																				if (pSVar3 != null) {
																					pUVar11 = this.ConfirmPopup;
																					piVar1 = &pSVar3._version;
																					*piVar1 = *piVar1 + 1;
																					pUVar4 = pSVar3._items;
																					if (pUVar4 != null) {
																						uVar2 = pSVar3._size;
																						if (uVar2 < (uint)pUVar4.Length) {
																							pSVar3._size = uVar2 + 1;
																							pUVar4[(int)uVar2] = (BasePopup)pUVar11;
																						}
																						else {
																							pSVar3.AddWithResize((object)pUVar11);
																						}
																						pSVar3 = this._popups;
																						if (pSVar3 != null) {
																							pUVar12 = this.ExternalLinkPopup;
																							piVar1 = &pSVar3._version;
																							*piVar1 = *piVar1 + 1;
																							pUVar4 = pSVar3._items;
																							if (pUVar4 != null) {
																								uVar2 = pSVar3._size;
																								if (uVar2 < (uint)pUVar4.Length) {
																									pSVar3._size = uVar2 + 1;
																									pUVar4[(int)uVar2] = (BasePopup)pUVar12;
																								}
																								else {
																									pSVar3.AddWithResize((object)pUVar12);
																								}
																								pSVar3 = this._popups;
																								if (pSVar3 != (List<BasePopup>)0x0) {
																									pUVar13 = this.ColorPickPopup;
																									piVar1 = &pSVar3._version;
																									*piVar1 = *piVar1 + 1;
																									pUVar4 = pSVar3._items;
																									if (pUVar4 != null) {
																										uVar2 = pSVar3._size;
																										if (uVar2 < (uint)pUVar4.Length) {
																											pSVar3._size = uVar2 + 1;
																											pUVar4[(int)uVar2] = (BasePopup)pUVar13;
																										}
																										else {
																											pSVar3.AddWithResize((object)pUVar13);
																										}
																										pSVar3 = this._popups;
																										if (pSVar3 != null) {
																											pUVar14 = this.Vector3Popup;
																											piVar1 = &pSVar3._version;
																											*piVar1 = *piVar1 + 1;
																											pUVar4 = pSVar3._items;
																											if (pUVar4 != null) {
																												uVar2 = pSVar3._size;
																												if (uVar2 < (uint)pUVar4.Length) {
																													pSVar3._size = uVar2 + 1;
																													pUVar4[(int)uVar2] =(BasePopup)pUVar14;
																												}
																												else {
																													pSVar3.AddWithResize((object)pUVar14);
																												}
																												pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add ;
																												pSVar3 = this._popups;
																												if (pSVar3 != null) {
																													pUVar15 = this.ExportPopup;
																													piVar1 = &pSVar3._version;
																													*piVar1 = *piVar1 + 1;
																													pUVar4 = pSVar3._items;
																													if (pUVar4 != null) {
																														uVar2 = pSVar3._size;
																														if (uVar2 < (uint)pUVar4.Length) {
																															pSVar3._size = uVar2 + 1;
																															pUVar4[(int)uVar2] =(BasePopup)pUVar15;
																														}
																														else {

																												pSVar3.AddWithResize((object)pUVar15);
																												}
																												pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add ;
																												pSVar3 = this._popups;
																												if (pSVar3 != null) {
																													pUVar16 = this.ImportPopup;
																													piVar1 = &pSVar3._version;
																													*piVar1 = *piVar1 + 1;
																													pUVar4 = pSVar3._items;
																													if (pUVar4 != null) {
																														uVar2 = pSVar3._size;
																														if (uVar2 < (uint)pUVar4.Length) {
																															pSVar3._size = uVar2 + 1;
																															pUVar4[(int)uVar2] =(BasePopup)pUVar16;
																														}
																														else {

																												pSVar3.AddWithResize((object)pUVar16);
																												}
																												pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add ;
																												pSVar3 = this._popups;
																												if (pSVar3 != null) {
																													pUVar17 = this.NewImportPopup;
																													piVar1 = &pSVar3._version;
																													*piVar1 = *piVar1 + 1;
																													pUVar4 = pSVar3._items;
																													if (pUVar4 != null) {
																														uVar2 = pSVar3._size;
																														if (uVar2 < (uint)pUVar4.Length) {
																															pSVar3._size = uVar2 + 1;
																															pUVar4[(int)uVar2] =(BasePopup)pUVar17;
																														}
																														else {

																												pSVar3.AddWithResize((object)pUVar17);
																												}
																												pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add ;
																												pSVar3 = this._popups;
																												if (pSVar3 != null) {
																													pUVar18 = this.KeybindPopup;
																													piVar1 = &pSVar3._version;
																													*piVar1 = *piVar1 + 1;
																													pUVar4 = pSVar3._items;
																													if (pUVar4 != null) {
																														uVar2 = pSVar3._size;
																														if (uVar2 < (uint)pUVar4.Length) {
																															pSVar3._size = uVar2 + 1;
																															pUVar4[(int)uVar2] =(BasePopup)pUVar18;
																														}
																														else {

																												pSVar3.AddWithResize((object)pUVar18);
																												}
																												pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add ;
																												pSVar3 = this._popups;
																												if (pSVar3 != null) {
																													pUVar19 = this.SetNamePopup;
																													piVar1 = &pSVar3._version;
																													*piVar1 = *piVar1 + 1;
																													pUVar4 = pSVar3._items;
																													if (pUVar4 != null) {
																														uVar2 = pSVar3._size;
																														if (uVar2 < (uint)pUVar4.Length) {
																															pSVar3._size = uVar2 + 1;
																															pUVar4[(int)uVar2] =(BasePopup)pUVar19;
																														}
																														else {

																												pSVar3.AddWithResize((object)pUVar19);
																												}
																												pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add ;
																												pSVar3 = this._popups;
																												if (pSVar3 != null) {
																													pUVar20 = this.SelectListPopup;
																													piVar1 = &pSVar3._version;
																													*piVar1 = *piVar1 + 1;
																													pUVar4 = pSVar3._items;
																													if (pUVar4 != null) {
																														uVar2 = pSVar3._size;
																														if (uVar2 < (uint)pUVar4.Length) {
																															pSVar3._size = uVar2 + 1;
																															pUVar4[(int)uVar2] =(BasePopup)pUVar20;
																														}
																														else {

																												pSVar3.AddWithResize((object)pUVar20);
																												}
																												pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add ;
																												pSVar3 = this._popups;
																												if (pSVar3 != null) {
																													pUVar21 = this.IconPickPopup;
																													piVar1 = &pSVar3._version;
																													*piVar1 = *piVar1 + 1;
																													pUVar4 = pSVar3._items;
																													if (pUVar4 != null) {
																														uVar2 = pSVar3._size;
																														if (uVar2 < (uint)pUVar4.Length) {
																															pSVar3._size = uVar2 + 1;
																															pUVar4[(int)uVar2] =(BasePopup)pUVar21;
																														}
																														else {

																												pSVar3.AddWithResize((object)pUVar21);
																												}
																												pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add ;
																												pSVar3 = this._popups;
																												if (pSVar3 != null) {
																													pUVar22 = this.RoleSpritePickPopup;
																													piVar1 = &pSVar3._version;
																													*piVar1 = *piVar1 + 1;
																													pUVar4 = pSVar3._items;
																													if (pUVar4 != null) {
																														uVar2 = pSVar3._size;
																														if (uVar2 < (uint)pUVar4.Length) {
																															pSVar3._size = uVar2 + 1;
																															pUVar4[(int)uVar2] =(BasePopup)pUVar22;
																															return;
																														}

																												pSVar3.AddWithResize((object)pUVar22);
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
	label_05cb2f4b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004854")]
	[Address(RVA = "0x5BB2F50", Offset = "0x5BB1F50", VA = "0x5BB2F50", Slot = "6")]
	public virtual void RebuildPopups()
	{
		// Lifted from source/cpp/UI/BaseMenu.c (UI.BaseMenu$$RebuildPopups): 6 lines keep C-only constructs
		int piVar1;
		int length;
		List<BasePopup> pSVar2;
		bool bVar3;
		Object pUVar4;
		byte[] auStack_60 = new byte[16];
		Object pUStack_50;
		byte[] auStack_48 = new byte[16];
		Object pUStack_38;

		pSVar2 = this._popups;
		if (pSVar2 != null) {
			auStack_60.GetEnumerator((List<object>)pSVar2);
			pUStack_38 = pUStack_50;
			auStack_48._0_8_ = auStack_60._0_8_;
			auStack_48._8_8_ = auStack_60._8_8_;
			auStack_60._0_8_ = null;
			auStack_60._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_48;
			while(true) {
				bVar3 = auStack_48.MoveNext();
				pUVar4 = pUStack_38;
				if (!bVar3) break;
				bVar3 = (pUVar4 != null);
				if (bVar3) {
					if (pUVar4 == null) {
						throw new NullReferenceException();
					}
					pUVar4 = (Object)pUVar4.gameObject;
					Object.Destroy(pUVar4);
				}
			}
			auStack_48.Dispose();
			pSVar2 = this._popups;
			if (pSVar2 != null) {
				piVar1 = &pSVar2._version;
				*piVar1 = *piVar1 + 1;
				length = pSVar2._size;
				pSVar2._size = 0;
				if (0 < length) {
					Array.Clear((Array)pSVar2._items, 0, length);
				}
				this.SetupPopups();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004855")]
	[Address(RVA = "0x5BB3150", Offset = "0x5BB2150", VA = "0x5BB3150", Slot = "7")]
	protected virtual void HideAllPopups()
	{
		// Lifted from source/cpp/UI/BaseMenu.c (UI.BaseMenu$$HideAllPopups): 3 lines keep C-only constructs
		List<BasePopup> __this_00;
		bool bVar1;
		System_Collections_Generic_List_Enumerator_T__o SStack_38;
		byte puStack_18;

		SStack_38._list = null;
		SStack_38._index = 0;
		SStack_38._version = 0;
		SStack_38._current = null;
		__this_00 = this._popups;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		SStack_38 = __this_00.GetEnumerator();
		puStack_18 = (byte)&SStack_38;
		while(true) {
			bVar1 = SStack_38.MoveNext();
			if (!bVar1) {
				SStack_38.Dispose();
				return;
			}
			if (SStack_38._current == null) break;
			(*(SStack_38._current).klass.vtable[0x16].methodPtr)(SStack_38._current,(SStack_38._current).klass.vtable[0x16].method);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004856")]
	[Address(RVA = "0x5BB3290", Offset = "0x5BB2290", VA = "0x5BB3290")]
	protected BaseMenu()
	{
		// Lifted from source/cpp/UI/BaseMenu.c (UI.BaseMenu$$.ctor): clean
		List<BasePopup> __this_00;

		__this_00 = new List<BasePopup>();
		this._popups = __this_00;
		base();
		return;
	}
}
