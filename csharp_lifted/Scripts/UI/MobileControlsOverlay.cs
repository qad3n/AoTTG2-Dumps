// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileControlsOverlay
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileControlsOverlay.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Characters;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000737")]
internal class MobileControlsOverlay : MonoBehaviour
{
	[Token(Token = "0x4002441")]
	private const float ReferenceWidth = 1920f;

	[Token(Token = "0x4002442")]
	private const float ReferenceHeight = 1080f;

	[Token(Token = "0x4002443")]
	private const int RestoreUITouchCount = 3;

	[Token(Token = "0x4002444")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private CanvasGroup _canvasGroup;

	[Token(Token = "0x4002445")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private InGameMenu _menu;

	[Token(Token = "0x4002446")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private MapEditorMenu _mapEditorMenu;

	[Token(Token = "0x4002447")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private bool _visible;

	[Token(Token = "0x4002448")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private RectTransform _buttonsLayer;

	[Token(Token = "0x4002449")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly List<GameObject> _generalButtons;

	[Token(Token = "0x400244A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly List<GameObject> _humanButtons;

	[Token(Token = "0x400244B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private readonly List<GameObject> _titanButtons;

	[Token(Token = "0x400244C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private readonly List<GameObject> _annieShifterButtons;

	[Token(Token = "0x400244D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private readonly List<GameObject> _erenShifterButtons;

	[Token(Token = "0x400244E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private readonly List<GameObject> _mapEditorButtons;

	[Token(Token = "0x400244F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private readonly List<GameObject> _coreInputControls;

	[Token(Token = "0x4002450")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private readonly List<MobileInputJoystick> _moveJoysticks;

	[Token(Token = "0x4002451")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private MobileInputLayoutRole _coreLayoutRole;

	[Token(Token = "0x4002452")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private bool _restoreTouchArmed;

	[Token(Token = "0x60045ED")]
	[Address(RVA = "0x5B63560", Offset = "0x5B62560", VA = "0x5B63560")]
	public void Setup(InGameMenu menu)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$Setup): clean
		this._menu = menu;
		this.SetupCommon();
		return;
	}

	[Token(Token = "0x60045EE")]
	[Address(RVA = "0x5B638C0", Offset = "0x5B628C0", VA = "0x5B638C0")]
	public void Setup(MapEditorMenu menu)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$Setup): clean
		this._mapEditorMenu = menu;
		this.SetupCommon();
		return;
	}

	[Token(Token = "0x60045EF")]
	[Address(RVA = "0x5B63580", Offset = "0x5B62580", VA = "0x5B63580")]
	private void SetupCommon()
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$SetupCommon): 9 lines keep C-only constructs
		Vector2 anchorMin;
		Vector2 UVar1;
		Vector2 anchorMax;
		Object __this_00;
		RectTransform pUVar2;
		GameObject pUVar3;
		CanvasGroup pUVar4;
		UnityEngine_Vector2_StaticFields pUVar5;
		Action pSVar6;
		Transform __this_01;
		MethodInfo* method_00;
		Vector2* __this_02;
		float fVar8;
		float fVar9;

		__this_00 = (Object)this.gameObject;
		if (__this_00 != null) {
			__this_00.name = "AoTTG Mobile Controls";
			pUVar2 = this.GetComponent<RectTransform>();
			if (pUVar2 != null) {
				pUVar2.anchorMin = (Vector2)(Vector2.zeroVector);
				pUVar2.anchorMax = (Vector2)(Vector2.oneVector);
				pUVar2.offsetMin = (Vector2)(Vector2.zeroVector);
				pUVar2.offsetMax = (Vector2)(Vector2.zeroVector);
				pUVar3 = this.gameObject;
				if (pUVar3 != null) {
					method_00 = &MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup;
					pUVar4 = pUVar3.AddComponent<CanvasGroup>();
					__this_02 = (Vector2*)&this._canvasGroup;
					this._canvasGroup = pUVar4;
					if (Il2CppMethodInitialized_0753ecc8 == false) {
						__this_02 = &typeof(Vector2);
						Il2CppMethodInitialized_0753ecc8 = true;
					}
					pUVar5 = typeof(Vector2).static_fields;
					anchorMin = (pUVar5.zeroVector);
					if (Il2CppMethodInitialized_07542885 == false) {
						__this_02 = &typeof(Vector2);
						Il2CppMethodInitialized_07542885 = true;
						pUVar5 = typeof(Vector2).static_fields;
						UVar1 = (pUVar5.oneVector);
						fVar8 = UVar1.x;
						fVar9 = UVar1.y;
						if (Il2CppMethodInitialized_0753ecc8 == false) {
							__this_02 = &typeof(Vector2);
							Il2CppMethodInitialized_0753ecc8 = true;
							pUVar5 = typeof(Vector2).static_fields;
						}
					}
					else {
						UVar1 = (pUVar5.oneVector);
						fVar8 = UVar1.x;
						fVar9 = UVar1.y;
					}
					UVar1 = (pUVar5.zeroVector);
					anchorMax.y = fVar9;
					anchorMax.x = fVar8;
					pUVar3 = __this_02.CreateRect("ButtonsLayer", pUVar2, (Vector2)anchorMin, anchorMax, (Vector2)UVar1, (Vector2)UVar1);
					if (pUVar3 != null) {
						pUVar2 = pUVar3.GetComponent<RectTransform>();
						this._buttonsLayer = pUVar2;
						pSVar6 = new Action((object)this, (intptr_t)MethodInfo_UI_MobileControlsOverlay_RebuildAllControls);
						MobileInputLayoutManager.add_OnSelectionChanged(pSVar6);
						pSVar6 = new Action((object)this, (intptr_t)MethodInfo_UI_MobileControlsOverlay_RebuildAllControls);
						MobileInputLayoutManager.add_OnLayoutsChanged(pSVar6);
						__this_01 = this.transform;
						if (__this_01 != null) {
							__this_01.SetAsLastSibling();
							this.RefreshVisibility();
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60045F0")]
	[Address(RVA = "0x5B64100", Offset = "0x5B63100", VA = "0x5B64100")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$OnDestroy): 2 lines keep C-only constructs
		Action pSVar1;

		pSVar1 = new Action((object)this, (intptr_t)MethodInfo_UI_MobileControlsOverlay_RebuildAllControls);
		MobileInputLayoutManager.remove_OnSelectionChanged(pSVar1);
		pSVar1 = new Action((object)this, (intptr_t)MethodInfo_UI_MobileControlsOverlay_RebuildAllControls);
		MobileInputLayoutManager.remove_OnLayoutsChanged(pSVar1);
		return;
	}

	[Token(Token = "0x60045F1")]
	[Address(RVA = "0x5B64380", Offset = "0x5B63380", VA = "0x5B64380")]
	private void Update()
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$Update): clean
		MapEditorMenu x;
		InGameMenu pUVar1;
		bool bVar2;

		bVar2 = MobileLayoutEditorOverlay.IsOpen;
		if (bVar2) {
			MobileInputBridge.ClearState();
		}
		else {
			x = this._mapEditorMenu;
			bVar2 = ((Object)x != null);
			if (!bVar2) {
				if ((typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor == 0) {
					bVar2 = MobileInputBridge.Enabled;
				}
				else {
					bVar2 = MobileInputBridge.Enabled;
				}
				if (bVar2) {
					pUVar1 = this._menu;
					if (((typeof(Object))._2).cctor_finished_or_no_cctor == 0) {
					}
					bVar2 = ((Object)pUVar1 != null);
					if (bVar2) {
						pUVar1 = this._menu;
						if (pUVar1 == null) {
							throw new NullReferenceException();
						}
						bVar2 = pUVar1.IsActive();
						if (!bVar2) {
							this.UpdateRestoreGesture();
							return;
						}
					}
				}
				this.RefreshVisibility();
				this.UpdateAutoGas();
				this.UpdateAutoReel();
				return;
			}
		}
		this.RefreshVisibility();
		return;
	}

	[Token(Token = "0x60045F2")]
	[Address(RVA = "0x5B64D00", Offset = "0x5B63D00", VA = "0x5B64D00")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$LateUpdate): clean
		uint uVar1;
		InGameMenu x;
		bool bVar2;

		if (Il2CppMethodInitialized_075478a8 == false) {
			Il2CppMethodInitialized_075478a8 = true;
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar2 = MobileInputBridge.Enabled;
		}
		else {
			bVar2 = MobileInputBridge.Enabled;
		}
		if (bVar2) {
			x = this._menu;
			if (((typeof(Object))._2).cctor_finished_or_no_cctor == 0) {
			}
			bVar2 = ((Object)x != null);
			if ((bVar2) && (bVar2 = MobileLayoutEditorOverlay.IsOpen, !bVar2)) {
				MobileAimAssist.UpdateBladeFacingLock();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60045F3")]
	[Address(RVA = "0x5B64DB0", Offset = "0x5B63DB0", VA = "0x5B64DB0")]
	private void OnDisable()
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$OnDisable): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075478a9 == false) {
			Il2CppMethodInitialized_075478a9 = true;
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			MobileInputBridge.ClearState();
			return;
		}
		MobileInputBridge.ClearState();
		return;
	}

	[Token(Token = "0x60045F4")]
	[Address(RVA = "0x5B64E10", Offset = "0x5B63E10", VA = "0x5B64E10")]
	private void OnApplicationFocus(bool focused)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$OnApplicationFocus): clean
		if (focused) {
			return;
		}
		if (((typeof(MobileInputBridge))._2).cctor_finished_or_no_cctor == 0) {
			MobileInputBridge.ClearState();
			return;
		}
		MobileInputBridge.ClearState();
		return;
	}

	[Token(Token = "0x60045F5")]
	[Address(RVA = "0x5B64E70", Offset = "0x5B63E70", VA = "0x5B64E70")]
	private void OnApplicationPause(bool paused)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$OnApplicationPause): clean
		if (!paused) {
			return;
		}
		if (((typeof(MobileInputBridge))._2).cctor_finished_or_no_cctor == 0) {
			MobileInputBridge.ClearState();
			return;
		}
		MobileInputBridge.ClearState();
		return;
	}

	[Token(Token = "0x60045F6")]
	[Address(RVA = "0x5B64520", Offset = "0x5B63520", VA = "0x5B64520")]
	private void UpdateRestoreGesture()
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$UpdateRestoreGesture): clean
		InGameMenu __this_00;
		int iVar1;

		MobileInputBridge.ClearState();
		this._visible = false;
		iVar1 = Input.touchCount;
		if (iVar1 < 3) {
			this._restoreTouchArmed = false;
		}
		else if (this._restoreTouchArmed == false) {
			this._restoreTouchArmed = true;
			__this_00 = this._menu;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.ToggleUI(true);
			this.RefreshVisibility();
			return;
		}
		return;
	}

	[Token(Token = "0x60045F7")]
	[Address(RVA = "0x5B63CA0", Offset = "0x5B62CA0", VA = "0x5B63CA0")]
	private void RefreshVisibility()
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$RefreshVisibility): clean
		uint uVar1;
		InGameMenu pUVar2;
		EmoteHandler pUVar3;
		MapEditorMenu pUVar4;
		MapEditorTopPanel __this_00;
		ItemHandler pUVar5;
		CanvasGroup pUVar6;
		bool bVar7;
		byte bVar8;
		int iVar9;
		uint role;
		int iVar10;
		Transform pUVar11;
		sbyte cVar12;
		float value;

		pUVar2 = this._menu;
		cVar12 = false;
		bVar7 = ((Object)pUVar2 != null);
		if (bVar7) {
			pUVar2 = this._menu;
			if ((pUVar2 == null) ||(pUVar3 = pUVar2.EmoteHandler, pUVar3 == null)) goto label_05c640fb;
			cVar12 = true;
			if (pUVar3.IsActive != false) goto label_05c63d4a;
			pUVar5 = pUVar2.ItemHandler;
			if (pUVar5 == null) goto label_05c640fb;
			cVar12 = pUVar5.IsActive;
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		else {
	label_05c63d4a: ;
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar8 = false;
		bVar7 = MobileInputBridge.Enabled;
		if (bVar7) {
			bVar8 = false;
			bVar7 = MobileLayoutEditorOverlay.IsOpen;
			if (!bVar7) {
				pUVar4 = this._mapEditorMenu;
				bVar8 = false;
				bVar7 = ((Object)pUVar4 != null);
				if (bVar7) {
					pUVar4 = this._mapEditorMenu;
					bVar8 = false;
					bVar7 = ((Object)pUVar4 != null);
					if (bVar7) {
						pUVar4 = this._mapEditorMenu;
						if (pUVar4 == null) goto label_05c640fb;
						bVar8 = false;
						bVar7 = pUVar4.IsPopupActive();
						if (!bVar7) {
							pUVar4 = this._mapEditorMenu;
							if ((pUVar4 == null) ||(__this_00 = pUVar4._topPanel, __this_00 == null)) goto label_05c640fb;
							bVar8 = false;
							bVar7 = __this_00.IsDropdownOpen();
							if (!bVar7) {
								pUVar4 = this._mapEditorMenu;
								if (pUVar4 == null) goto label_05c640fb;
								bVar8 = pUVar4.IsInputFocused ^ 1;
							}
						}
					}
				}
				else {
					bVar7 = InGameMenu.InMenu();
					if (!bVar7 || cVar12 != false) {
						bVar7 = ChatManager.IsChatActive();
						bVar8 = !bVar7;
					}
				}
			}
		}
		if ((this._visible != false) && ((bool)bVar8 == false)) {
			MobileInputBridge.ClearState();
		}
		this._visible = (bool)bVar8;
		pUVar6 = this._canvasGroup;
		if (pUVar6 != null) {
			if ((bool)bVar8 == false) {
				value = 0.0;
			}
			else {
				value = 1.0;
			}
			pUVar6.alpha = value;
			pUVar6 = this._canvasGroup;
			if (pUVar6 == null) goto label_05c640fb;
			pUVar6.interactable = (bool)bVar8 != false;
			pUVar6 = this._canvasGroup;
			if (pUVar6 == null) goto label_05c640fb;
			pUVar6.blocksRaycasts = (bool)bVar8 != false;
			if ((bool)bVar8 == false) {
				return;
			}
			if (cVar12 == false) {
				if ((typeof(DebugConsole)._2).cctor_finished_or_no_cctor == 0) {
					cVar12 = DebugConsole.Enabled;
				}
				else {
					cVar12 = DebugConsole.Enabled;
				}
				if (cVar12 == false) {
					pUVar4 = this._mapEditorMenu;
					bVar7 = ((Object)pUVar4 != null);
					if (!bVar7) {
						pUVar11 = this.transform;
						if (pUVar11 == null) goto label_05c640fb;
						iVar9 = pUVar11.GetSiblingIndex();
						pUVar11 = this.transform;
						if ((pUVar11 == null) ||(pUVar11 = pUVar11.parent, pUVar11 == null)) goto label_05c640fb;
						iVar10 = pUVar11.childCount;
						if (iVar9 != iVar10 + -1) {
							pUVar11 = this.transform;
							if (pUVar11 == null) goto label_05c640fb;
							pUVar11.SetAsLastSibling();
						}
						goto label_05c6401f;
					}
				}
			}
			pUVar11 = this.transform;
			if (pUVar11 != null) {
				iVar9 = pUVar11.GetSiblingIndex();
				if (iVar9 != 0) {
					pUVar11 = this.transform;
					if (pUVar11 == null) goto label_05c640fb;
					pUVar11.SetAsFirstSibling();
				}
	label_05c6401f: ;
				pUVar4 = this._mapEditorMenu;
				bVar7 = ((Object)pUVar4 != null);
				if ((!bVar7) &&(role = this.GetCurrentLayoutRole(), role != this._coreLayoutRole)) {
					this.RebuildCoreControls(role);
				}
				this.UpdateButtonVisibility();
				return;
			}
		}
	label_05c640fb: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60045F8")]
	[Address(RVA = "0x5B64EF0", Offset = "0x5B63EF0", VA = "0x5B64EF0")]
	private void UpdateButtonVisibility()
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$UpdateButtonVisibility): 3 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		uint uVar3;
		BaseGameManager pGVar4;
		MapEditorMenu pUVar5;
		byte bVar6;
		bool bVar7;
		MapEditorMenu x;
		byte bVar8;
		List<GameObject> group;
		MapEditorMenu __this_00;
		byte bVar9;
		bool bVar10;
		bool bVar11;

		__this_00 = this._mapEditorMenu;
		bVar7 = ((Object)__this_00 != null);
		if (bVar7) {
			group = this._mapEditorButtons;
			bVar7 = true;
			goto label_05c6515d;
		}
		pGVar4 = SceneLoader.CurrentGameManager;
		if (pGVar4 == null) {
	label_05c65012: ;
			x = null;
			uVar3 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			bVar9 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((pGVar4.klass._2).typeHierarchyDepth < bVar9) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar9 - 1] !=typeof(InGameManager))) goto label_05c65012;
			x = (*(ulong)((sbyte)pGVar4 + 0x80));
			uVar3 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		bVar9 = 0;
		__this_00 = x;
		bVar7 = ((Object)x != null);
		if (bVar7) {
			if (x == null) {
				throw new NullReferenceException();
			}
			bVar9 = *(byte)&x.NewImportPopup ^ 1;
	label_05c65056: ;
			pUVar5 = x.klass;
			bVar1 = (pUVar5._2).typeHierarchyDepth;
			bVar8 = (typeof(Human)._2).typeHierarchyDepth;
			if (bVar1 < bVar8) {
				bVar10 = false;
			}
			else {
				__this_00 = (MapEditorMenu)(pUVar5._2).typeHierarchy;
				bVar10 = *(Human*)((long)__this_00 + (ulong)bVar8 * 8 + -8) == typeof(Human);
			}
			bVar8 = (typeof(BasicTitan)._2).typeHierarchyDepth;
			if (bVar1 < bVar8) {
				bVar11 = false;
			}
			else {
				__this_00 = (MapEditorMenu)(pUVar5._2).typeHierarchy;
				bVar11 = *(BasicTitan*)((long)__this_00 + (ulong)bVar8 * 8 + -8) == typeof(BasicTitan);
			}
			bVar8 = (typeof(ErenShifter)._2).typeHierarchyDepth;
			if ((bVar1 < bVar8) ||(__this_00 = (MapEditorMenu)(pUVar5._2).typeHierarchy, *(ErenShifter*)((long)__this_00 + (ulong)bVar8 * 8 + -8) != typeof(ErenShifter))) {
				bVar2 = (typeof(BaseShifter)._2).typeHierarchyDepth;
				bVar8 = 0;
				bVar6 = 0;
				if (bVar2 <= bVar1) {
					bVar7 = (pUVar5._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(BaseShifter) ;
					goto label_05c65118;
				}
			}
			else {
				bVar6 = 1;
			}
			bVar8 = bVar6;
			bVar7 = false;
		}
		else {
			if (x != null) goto label_05c65056;
			bVar10 = false;
			bVar11 = false;
			bVar7 = false;
			bVar8 = 0;
		}
	label_05c65118: ;
		__this_00.SetGroupActive(this._generalButtons, true);
		__this_00.SetGroupActive(this._humanButtons, (bool)(bVar10 & bVar9));
		__this_00.SetGroupActive(this._titanButtons, (bool)(bVar11 & bVar9));
		__this_00.SetGroupActive(this._annieShifterButtons, (bool)(bVar7 & bVar9));
		group = this._erenShifterButtons;
		bVar7 = (bool)(bVar8 & bVar9);
	label_05c6515d: ;
		__this_00.SetGroupActive(group, bVar7);
		return;
	}

	[Token(Token = "0x60045F9")]
	[Address(RVA = "0x5B65350", Offset = "0x5B64350", VA = "0x5B65350")]
	private BaseCharacter GetCurrentCharacter()
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$GetCurrentCharacter): 1 lines keep C-only constructs
		byte bVar1;
		BaseGameManager pGVar2;

		pGVar2 = SceneLoader.CurrentGameManager;
		if (pGVar2 != null) {
			bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if ((bVar1 <= (pGVar2.klass._2).typeHierarchyDepth) &&((pGVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(InGameManager))) {
				return (*(ulong)((sbyte)pGVar2 + 0x80));
			}
		}
		return null;
	}

	[Token(Token = "0x60045FA")]
	[Address(RVA = "0x5B653D0", Offset = "0x5B643D0", VA = "0x5B653D0")]
	private MobileInputLayoutRole GetCurrentLayoutRole()
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$GetCurrentLayoutRole): 2 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		MapEditorMenu x;
		BaseGameManager pGVar3;
		long lVar4;
		bool bVar5;
		int iVar6;
		long plVar7;

		x = this._mapEditorMenu;
		bVar5 = ((Object)x != null);
		if (bVar5) {
			return 5;
		}
		pGVar3 = SceneLoader.CurrentGameManager;
		if (pGVar3 != null) {
			bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if ((bVar1 <= (pGVar3.klass._2).typeHierarchyDepth) &&((pGVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(InGameManager))) {
				plVar7 = (*(ulong)((sbyte)pGVar3 + 0x80));
				goto joined_r0x05c654a1;
			}
		}
		plVar7 = null;
	joined_r0x05c654a1: ;
		if (plVar7 != null) {
			lVar4 = *plVar7;
			bVar1 = *(byte)(lVar4 + 0x130);
			bVar2 = (typeof(BasicTitan)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&(*(BasicTitan*)(*(long)(lVar4 + 200) + -8 + (ulong)bVar2 * 8) == typeof(BasicTitan))) {
				return 2;
			}
			bVar2 = (typeof(ErenShifter)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&(*(ErenShifter*)(*(long)(lVar4 + 200) + -8 + (ulong)bVar2 * 8) == typeof(ErenShifter))) {
				return 4;
			}
			bVar2 = (typeof(BaseShifter)._2).typeHierarchyDepth;
			if (bVar2 <= bVar1) {
				iVar6 = (uint)(*(BaseShifter*)(*(long)(lVar4 + 200) + -8 + (ulong)bVar2 * 8) == typeof(BaseShifter)) * 2 + 1;
			}
		}
		return iVar6;
	}

	[Token(Token = "0x60045FB")]
	[Address(RVA = "0x5B64ED0", Offset = "0x5B63ED0", VA = "0x5B64ED0")]
	private void UpdateCoreControlLayout()
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$UpdateCoreControlLayout): clean
		int role;

		role = this.GetCurrentLayoutRole();
		if (role == this._coreLayoutRole) {
			return;
		}
		this.RebuildCoreControls(role);
		return;
	}

	[Token(Token = "0x60045FC")]
	[Address(RVA = "0x5B65CA0", Offset = "0x5B64CA0", VA = "0x5B65CA0")]
	private void RebuildAllControls()
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$RebuildAllControls): 28 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		int iVar3;
		List<GameObject> pSVar4;
		RectTransform pUVar5;
		Il2CppClass pIVar6;
		Il2CppRuntimeInterfaceOffsetPair pIVar7;
		List<MobileInputJoystick> pSVar8;
		MapEditorMenu x;
		bool bVar9;
		int iVar10;
		VirtualInvokeData pVVar11;
		Component __this_00;
		Object obj;
		object pIVar12;
		ulong uVar13;
		List<GameObject>* ppSVar14;
		MethodInfo pMVar15;
		long lVar16;
		object local_58;
		object local_50;
		byte local_40;
		object* local_38;

		local_58 = null;
		local_50 = null;
		MobileInputBridge.ClearState();
		MobileInputBridge.ClearDisplayNames();
		pSVar4 = this._coreInputControls;
		if (pSVar4 == null) goto label_05c6623c;
		piVar1 = &pSVar4._version;
		*piVar1 = *piVar1 + 1;
		iVar10 = pSVar4._size;
		pSVar4._size = 0;
		if (0 < iVar10) {
			Array.Clear((Array)pSVar4._items, 0, iVar10);
		}
		pSVar4 = this._generalButtons;
		if (pSVar4 == null) goto label_05c6623c;
		piVar1 = &pSVar4._version;
		*piVar1 = *piVar1 + 1;
		iVar10 = pSVar4._size;
		pSVar4._size = 0;
		if (0 < iVar10) {
			Array.Clear((Array)pSVar4._items, 0, iVar10);
		}
		pSVar4 = this._humanButtons;
		if (pSVar4 == null) goto label_05c6623c;
		piVar1 = &pSVar4._version;
		*piVar1 = *piVar1 + 1;
		iVar10 = pSVar4._size;
		pSVar4._size = 0;
		if (0 < iVar10) {
			Array.Clear((Array)pSVar4._items, 0, iVar10);
		}
		pSVar4 = this._titanButtons;
		if (pSVar4 == null) goto label_05c6623c;
		piVar1 = &pSVar4._version;
		*piVar1 = *piVar1 + 1;
		iVar10 = pSVar4._size;
		pSVar4._size = 0;
		if (0 < iVar10) {
			Array.Clear((Array)pSVar4._items, 0, iVar10);
		}
		pSVar4 = this._annieShifterButtons;
		if (pSVar4 == null) goto label_05c6623c;
		piVar1 = &pSVar4._version;
		*piVar1 = *piVar1 + 1;
		iVar10 = pSVar4._size;
		pSVar4._size = 0;
		if (0 < iVar10) {
			Array.Clear((Array)pSVar4._items, 0, iVar10);
		}
		pSVar4 = this._erenShifterButtons;
		if (pSVar4 == null) goto label_05c6623c;
		piVar1 = &pSVar4._version;
		*piVar1 = *piVar1 + 1;
		iVar10 = pSVar4._size;
		pSVar4._size = 0;
		if (0 < iVar10) {
			Array.Clear((Array)pSVar4._items, 0, iVar10);
		}
		pSVar4 = this._mapEditorButtons;
		if (pSVar4 == null) goto label_05c6623c;
		piVar1 = &pSVar4._version;
		*piVar1 = *piVar1 + 1;
		iVar3 = pSVar4._size;
		pSVar4._size = 0;
		if (0 < iVar3) {
			Array.Clear((Array)pSVar4._items, 0, iVar3);
		}
		pUVar5 = this._buttonsLayer;
		bVar9 = ((Object)pUVar5 != null);
		if (bVar9) {
			pUVar5 = this._buttonsLayer;
			if (pUVar5 != null) {
				local_58 = (object)pUVar5.GetEnumerator();
				local_40 = (byte)&local_58;
				local_38 = &local_50;
				do {
					pIVar12 = local_58;
					if (local_58 == null) {
						throw new NullReferenceException();
					}
					pIVar6 = local_58.klass;
					uVar13 = (ulong)(pIVar6._2).interface_offsets_count;
					bVar9 = pIVar12.Dispose();
					pIVar12 = local_58;
					if (!bVar9) {
						pIVar12 = (local_58 as IDisposable);
						local_50 = pIVar12;
						if (pIVar12 == null) goto label_05c6611f;
						pIVar6 = pIVar12.klass;
						uVar13 = (ulong)(pIVar6._2).interface_offsets_count;
						if (uVar13 == 0) goto label_05c660ef;
						pIVar7 = (pIVar6._1).interfaceOffsets;
						lVar16 = 0;
						goto label_05c660e0;
					}
					if (local_58 == null) {
						throw new NullReferenceException();
					}
					pIVar6 = local_58.klass;
					uVar13 = (ulong)(pIVar6._2).interface_offsets_count;
					__this_00 = (Component)pIVar12.Dispose();
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					bVar2 = (typeof(Transform)._2).typeHierarchyDepth;
					if (((__this_00.klass._2).typeHierarchyDepth < bVar2) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(Transform))) {
						throw new InvalidCastException();
					}
					obj = (Object)__this_00.gameObject;
					Object.Destroy(obj);
				} while(true);
			}
			goto label_05c6623c;
		}
		goto label_05c6611f;
		while (true) {
			lVar16 = lVar16 + 0x10;
			if (!(uVar13 * 0x10 != lVar16)) break;
	label_05c660e0: ;
			if (*(IDisposable*)((long)&pIVar7.interfaceType + lVar16) == typeof(IDisposable)) {
				pVVar11 = pIVar6.vtable + *(int)((long)&pIVar7.offset + lVar16);
				goto label_05c6610d;
			}
		}
	label_05c660ef: ;
	label_05c6610d: ;
		pIVar12.Dispose();
	label_05c6611f: ;
		pSVar8 = this._moveJoysticks;
		if (pSVar8 != null) {
			piVar1 = &pSVar8._version;
			*piVar1 = *piVar1 + 1;
			iVar3 = pSVar8._size;
			pSVar8._size = 0;
			if (0 < iVar3) {
				Array.Clear((Array)pSVar8._items, 0, iVar3);
			}
			x = this._mapEditorMenu;
			pMVar15 = null;
			bVar9 = ((Object)x != null);
			if (bVar9) {
				ppSVar14 = &this._mapEditorButtons;
				iVar10 = 5;
				this.RebuildCoreControls(5);
			}
			else {
				ppSVar14 = &this._erenShifterButtons;
				iVar10 = this.GetCurrentLayoutRole();
				this.RebuildCoreControls(iVar10);
				this.AddLayoutControls(this._buttonsLayer, 0, this._generalButtons);
				this.AddLayoutControls(this._buttonsLayer, 1, this._humanButtons);
				this.AddLayoutControls(this._buttonsLayer, 2, this._titanButtons);
				this.AddLayoutControls(this._buttonsLayer, 3, this._annieShifterButtons);
				iVar10 = 4;
			}
			pMVar15 = (MethodInfo)this._buttonsLayer;
			this.AddLayoutControls((RectTransform)pMVar15, iVar10, *ppSVar14);
			this.UpdateButtonVisibility();
			return;
		}
	label_05c6623c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60045FD")]
	[Address(RVA = "0x5B66E00", Offset = "0x5B65E00", VA = "0x5B66E00")]
	public void RebuildForScale()
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$RebuildForScale): clean
		this.RebuildAllControls();
		return;
	}

	[Token(Token = "0x60045FE")]
	[Address(RVA = "0x5B65650", Offset = "0x5B64650", VA = "0x5B65650")]
	private void RebuildCoreControls(MobileInputLayoutRole role)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$RebuildCoreControls): 9 lines keep C-only constructs
		int piVar1;
		int iVar2;
		List<MobileInputJoystick> pSVar3;
		object pIVar4;
		RectTransform pUVar5;
		bool bVar6;
		MobileInputLayout pUVar7;
		List<MobileInputControlLayout> pSVar8;
		UI_MobileControlsOverlay___c_StaticFields pUVar9;
		Predicate<T> pSVar10;
		List<MobileInputControlLayout> pSVar11;
		MobileInputControlLayout pUVar12;
		Object pUVar13;
		GameObject __this_00;
		Transform __this_01;
		int iVar14;
		List<GameObject> pSVar15;
		byte[] local_68 = new byte[8];
		Object local_58;
		byte[] local_50 = new byte[16];
		Object local_40;
		List<MobileInputControlLayout> local_38;

		local_68 = (byte[])0x0;
		local_58 = null;
		this._coreLayoutRole = role;
		pSVar15 = this._coreInputControls;
		if (pSVar15 == null) goto label_05c65c1f;
		local_50.GetEnumerator((List<object>)pSVar15);
		local_58 = local_40;
		local_68 = (byte[])local_50._0_8_;
		local_50._0_8_ = null;
		local_50._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_68;
		while (true) {
			bVar6 = local_68.MoveNext();
			pUVar13 = local_58;
			if (!(bVar6)) break;
			bVar6 = (pUVar13 != null);
			if (bVar6) {
				Object.Destroy(pUVar13);
			}
		}
		local_68.Dispose();
		pSVar15 = this._coreInputControls;
		if (pSVar15 == null) goto label_05c65c1f;
		piVar1 = &pSVar15._version;
		*piVar1 = *piVar1 + 1;
		iVar2 = pSVar15._size;
		pSVar15._size = 0;
		if (0 < iVar2) {
			Array.Clear((Array)pSVar15._items, 0, iVar2);
		}
		pSVar3 = this._moveJoysticks;
		if (pSVar3 == null) goto label_05c65c1f;
		piVar1 = &pSVar3._version;
		*piVar1 = *piVar1 + 1;
		iVar2 = pSVar3._size;
		pSVar3._size = 0;
		if (0 < iVar2) {
			Array.Clear((Array)pSVar3._items, 0, iVar2);
		}
		pUVar7 = MobileInputLayoutManager.GetSelectedLayout(role);
		if (pUVar7 == null) {
	label_05c65993: ;
			pSVar8 = new List<MobileInputControlLayout>() ;
			if (pUVar7 != null) goto label_05c659c0;
	label_05c65a95: ;
			pSVar11 = new List<MobileInputControlLayout>() ;
			if (pSVar11 == null) goto label_05c65c1f;
		}
		else {
			pSVar8 = pUVar7.Controls;
			if ((typeof(MobileControlsOverlay.c)._2).cctor_finished_or_no_cctor == 0) {
				pUVar9 = typeof(MobileControlsOverlay.c).static_fields;
				pSVar10 = (Predicate<T>)pUVar9.__9__35_0;
			}
			else {
				pUVar9 = typeof(MobileControlsOverlay.c).static_fields;
				pSVar10 = (Predicate<T>)pUVar9.__9__35_0;
			}
			if (pSVar10 == null) {
				if (((typeof(MobileControlsOverlay.c))._2).cctor_finished_or_no_cctor == 0) {
					pUVar9 = typeof(MobileControlsOverlay.c).static_fields;
				}
				pIVar4 = (object)pUVar9.__9;
				pSVar10 = new Predicate<MobileInputControlLayout>(pIVar4, (intptr_t)MethodInfo_UI_MobileControlsOverlay_c_RebuildCoreControls_b__35_0);
				pUVar9 = typeof(MobileControlsOverlay.c).static_fields;
				pUVar9.__9__35_0 = (Predicate<MobileInputControlLayout>)pSVar10;
			}
			if (pSVar8 == null) goto label_05c65c1f;
			pSVar8 = (List<MobileInputControlLayout>)pSVar8.FindAll(pSVar10);
			if (pSVar8 == null) goto label_05c65993;
	label_05c659c0: ;
			pSVar11 = pUVar7.Controls;
			if ((typeof(MobileControlsOverlay.c)._2).cctor_finished_or_no_cctor == 0) {
				pUVar9 = typeof(MobileControlsOverlay.c).static_fields;
				pSVar10 = (Predicate<T>)pUVar9.__9__35_1;
			}
			else {
				pUVar9 = typeof(MobileControlsOverlay.c).static_fields;
				pSVar10 = (Predicate<T>)pUVar9.__9__35_1;
			}
			if (pSVar10 == null) {
				if (((typeof(MobileControlsOverlay.c))._2).cctor_finished_or_no_cctor == 0) {
					pUVar9 = typeof(MobileControlsOverlay.c).static_fields;
				}
				pIVar4 = (object)pUVar9.__9;
				pSVar10 = new Predicate<MobileInputControlLayout>(pIVar4, (intptr_t)MethodInfo_UI_MobileControlsOverlay_c_RebuildCoreControls_b__35_1);
				pUVar9 = typeof(MobileControlsOverlay.c).static_fields;
				pUVar9.__9__35_1 = (Predicate<MobileInputControlLayout>)pSVar10;
			}
			if (pSVar11 == null) goto label_05c65c1f;
			pSVar11 = (List<MobileInputControlLayout>)pSVar11.FindAll(pSVar10);
			if (pSVar11 == null) goto label_05c65a95;
		}
		iVar14 = pSVar11._size;
		local_38 = pSVar8;
		if (iVar14 == 0) {
			if (role != 5) {
				this.CreateLookArea(this._buttonsLayer, role, null);
			}
		}
		else if (0 < iVar14) {
			iVar14 = 0;
			do {
				pUVar5 = this._buttonsLayer;
				pUVar12 = pSVar11.get_Item(iVar14);
				this.CreateLookArea(pUVar5, role, pUVar12);
				iVar14 = iVar14 + 1;
			} while (iVar14 < pSVar11._size);
		}
		pSVar8 = local_38;
		if (local_38 != null) {
			iVar14 = local_38._size;
			if (iVar14 == 0) {
				if (role != 5) {
					this.CreateJoystick(this._buttonsLayer, role, null);
				}
			}
			else if (0 < iVar14) {
				iVar14 = 0;
				do {
					pUVar5 = this._buttonsLayer;
					pUVar12 = pSVar8.get_Item(iVar14);
					this.CreateJoystick(pUVar5, role, pUVar12);
					iVar14 = iVar14 + 1;
				} while (iVar14 < pSVar8._size);
			}
			pSVar15 = this._coreInputControls;
			if (pSVar15 != null) {
				iVar14 = 0;
				do {
					if (pSVar15._size <= iVar14) {
						return;
					}
					pUVar13 = (Object)pSVar15.get_Item(iVar14);
					bVar6 = (pUVar13 != null);
					if (bVar6) {
						pSVar15 = this._coreInputControls;
						if (((pSVar15 == null) ||(__this_00 = pSVar15.get_Item(iVar14), __this_00 == null)) ||(__this_01 = __this_00.transform, __this_01 == null)) break;
						__this_01.SetAsFirstSibling();
					}
					iVar14 = iVar14 + 1;
					pSVar15 = this._coreInputControls;
				} while (pSVar15 != null);
			}
		}
	label_05c65c1f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60045FF")]
	[Address(RVA = "0x5B651A0", Offset = "0x5B641A0", VA = "0x5B651A0")]
	private void SetGroupActive(List<GameObject> group, bool active)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$SetGroupActive): 2 lines keep C-only constructs
		object x;
		bool bVar1;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		byte local_38;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		if (group == null) {
			throw new NullReferenceException();
		}
		local_58 = group.GetEnumerator();
		local_38 = (byte)&local_58;
		while(true) {
			do {
				bVar1 = local_58.MoveNext();
				x = local_58._current;
				if (!bVar1) {
					local_58.Dispose();
					return;
				}
				bVar1 = ((Object)x != null);
			} while (!bVar1);
			if ((Object)x == null) break;
			bVar1 = x.activeSelf;
			if (bVar1 != active) {
				x.SetActive(active);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004600")]
	[Address(RVA = "0x5B66F90", Offset = "0x5B65F90", VA = "0x5B66F90")]
	private void CreateLookArea(RectTransform parent, MobileInputLayoutRole role, [Optional] MobileInputControlLayout control)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$CreateLookArea): 18 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		List<GameObject> __this_00;
		GameObject[] pUVar7;
		Vector2 UVar8;
		Vector2 size;
		UnityEngine_Vector2_StaticFields pUVar9;
		GameObject __this_01;
		MobileInputLookArea pUVar10;
		uint in_register_00000014;
		MethodInfo pMVar11;
		String* ppSVar12;
		Vector2* __this_02;
		float fVar13;
		float fVar14;
		Vector2 anchorMax;
		byte[] auVar15 = new byte[16];
		float fVar16;
		float fVar17;
		Vector2 anchoredPosition;

		pMVar11 = (MethodInfo)CONCAT44(in_register_00000014, role);
		__this_02 = (Vector2*)this;
		if (Il2CppMethodInitialized_075478b3 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasRenderer) ;
			ppSVar12 = &"LookArea";
			Il2CppMethodInitialized_075478b3 = true;
			__this_02 = (Vector2*)ppSVar12;
		}
		if (control == null) {
			if (Il2CppMethodInitialized_07542885 == false) {
				__this_02 = &typeof(Vector2);
				Il2CppMethodInitialized_07542885 = true;
			}
			pUVar9 = typeof(Vector2).static_fields;
			anchorMax = (pUVar9.oneVector);
			if (Il2CppMethodInitialized_0753ecc8 == false) {
				__this_02 = &typeof(Vector2);
				Il2CppMethodInitialized_0753ecc8 = true;
				pUVar9 = typeof(Vector2).static_fields;
			}
			anchoredPosition = (pUVar9.zeroVector);
			fVar16 = anchoredPosition.x;
			fVar17 = anchoredPosition.y;
			fVar13 = 0.28;
			fVar14 = 0.5;
		}
		else {
			UVar8 = __this_02.GetLayoutReferenceSize(parent);
			fVar13 = UVar8.x;
			if (UVar8.y <= UVar8.x) {
				fVar13 = UVar8.y;
			}
			fVar17 = 1.0;
			if (1.0 <= fVar13) {
				fVar17 = fVar13;
			}
			uVar2 = control.Width;
			uVar4 = control.Height;
			auVar15._4_4_ = uVar4;
			auVar15._0_4_ = uVar2;
			auVar15._8_8_ = 0;
			auVar15 = maxps(_DAT_0100a840, auVar15);
			fVar16 = fVar17 * auVar15._0_4_;
			fVar17 = fVar17 * auVar15._4_4_;
			UVar8 = __this_02.GetLayoutReferenceSize(parent);
			uVar3 = control.X;
			uVar5 = control.Y;
			anchoredPosition.x = ((float)uVar3 + -0.5) * UVar8.x;
			anchoredPosition.y = ((float)uVar5 + -0.5) * UVar8.y;
			fVar13 = (float)g_data_0100a730;
			fVar14 = g_data_0100a730._4_4_;
			anchorMax = g_data_0100a730;
		}
		UVar8.y = fVar14;
		UVar8.x = fVar13;
		size.y = fVar17;
		size.x = fVar16;
		__this_01 = __this_02.CreateRect("LookArea", parent, UVar8, (Vector2)anchorMax, size, (Vector2)anchoredPosition);
		__this_00 = this._coreInputControls;
		if (__this_00 != null) {
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pUVar7 = __this_00._items;
			if (pUVar7 != null) {
				uVar6 = __this_00._size;
				if (uVar6 < (uint)pUVar7.Length) {
					__this_00._size = uVar6 + 1;
					pUVar7[(int)uVar6] = __this_01;
				}
				else {
					__this_00.AddWithResize((object)__this_01);
				}
				if (__this_01 != null) {
					__this_01.AddComponent<CanvasRenderer>();
					__this_01.AddComponent<MobileInputRaycastArea>();
					pUVar10 = __this_01.AddComponent<MobileInputLookArea>();
					if (pUVar10 != null) {
						pUVar10._sensitivity = *(float)(&g_data_0100ac10 + (ulong)(role == 5) * 4);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004601")]
	[Address(RVA = "0x5B671C0", Offset = "0x5B661C0", VA = "0x5B671C0")]
	private void CreateJoystick(RectTransform parent, MobileInputLayoutRole role, [Optional] MobileInputControlLayout control)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$CreateJoystick): 49 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		List<GameObject> __this_00;
		GameObject[] pUVar8;
		MobileInputJoystick[] pUVar9;
		int shape;
		MobileInputControlLayout __this_01;
		MobileControlsOverlay __this_02;
		RectTransform pUVar10;
		MobileInputJoystick __this_03;
		RectTransform pUVar11;
		GameObject pUVar12;
		Image image;
		Image pUVar13;
		MobileInputSkin pUVar14;
		MobileInputSkin activeSkin;
		MobileInputSkin reelRingSkin;
		MobileInputSkin reelInSkin;
		MobileInputSkin reelOutSkin;
		MethodInfo pMVar15;
		uint in_register_00000014;
		String* __this_04;
		MobileInputControlLayout __this_05;
		MobileControlsOverlay __this_06;
		Vector2* ppUVar17;
		Vector2* __this_07;
		byte[] auVar22 = new byte[12];
		byte[] auVar23 = new byte[12];
		float fVar18;
		float fVar19;
		Vector2 UVar20;
		ulong extraout_XMM0_Qb;
		byte[] auVar21 = new byte[16];
		byte[] auVar24 = new byte[16];
		Vector2 size;
		Vector2 size_00;
		byte[] auVar25 = new byte[12];
		byte[] auVar26 = new byte[12];
		Vector2 local_98;
		Vector2 local_88;
		Vector2 local_78;

		pMVar15 = (MethodInfo)CONCAT44(in_register_00000014, role);
		__this_04 = (String*)this;
		if (Il2CppMethodInitialized_075478b4 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasRenderer) ;
			__this_04 = &"MoveJoystickTouchArea";
			Il2CppMethodInitialized_075478b4 = true;
		}
		if (control == null) {
			fVar19 = this.GetReferenceScale();
			fVar18 = this.GetReferenceScale();
			__this_01 = new MobileInputControlLayout();
			if (__this_01 == null) goto label_05c67d4d;
			fVar19 = (float)(~-(uint)(0.0 < fVar19) & 0x3f800000 | (uint)fVar19 & -(uint)(0.0 < fVar19));
			local_98.y = fVar19 * 470.0;
			local_98.x = fVar19 * 620.0;
			fVar19 = (float)(~-(uint)(0.0 < fVar18) & 0x3f800000 | (uint)fVar18 & -(uint)(0.0 < fVar18));
			local_88.y = fVar19 * 365.0;
			local_88.x = fVar19 * 315.0;
			local_78.x = 0.0;
			local_78.y = 0.0;
		}
		else {
			auVar24._0_8_ = __this_04.GetLayoutReferenceSize(parent);
			auVar24._8_8_ = extraout_XMM0_Qb;
			fVar19 = auVar24._4_4_;
			if (fVar19 <= auVar24._0_4_) {
				auVar24._0_4_ = fVar19;
			}
			auVar25 = ZEXT812(0x3f800000);
			if (auVar25._0_4_ <= auVar24._0_4_) {
				auVar25._4_8_ = auVar25._4_8_;
				auVar25._0_4_ = auVar24._0_4_;
			}
			uVar2 = control.Width;
			uVar4 = control.Height;
			auVar21._4_4_ = uVar4;
			auVar21._0_4_ = uVar2;
			auVar21._8_8_ = 0;
			auVar24 = maxps(_DAT_0100a840, auVar21);
			local_98.y = auVar25._0_4_ * auVar24._4_4_;
			local_98.x = auVar25._0_4_ * auVar24._0_4_;
			UVar20 = __this_04.GetLayoutReferenceSize(parent);
			uVar3 = control.X;
			uVar5 = control.Y;
			local_88.y = ((float)uVar5 + -0.5) * UVar20.y;
			local_88.x = ((float)uVar3 + -0.5) * UVar20.x;
			local_78.x = 0.5;
			local_78.y = 0.5;
			__this_01 = control;
		}
		__this_05 = __this_01;
		shape = __this_01.GetShape();
		__this_02 = (MobileControlsOverlay)__this_05.CreateRect("MoveJoystickTouchArea", parent, (Vector2)local_78, (Vector2)local_78, local_98, local_88);
		__this_00 = this._coreInputControls;
		if (__this_00 == null) goto label_05c67d4d;
		piVar1 = &__this_00._version;
		*piVar1 = *piVar1 + 1;
		pUVar8 = __this_00._items;
		if (pUVar8 == null) goto label_05c67d4d;
		uVar6 = __this_00._size;
		if (uVar6 < (uint)pUVar8.Length) {
			pMVar15 = (MethodInfo)(ulong)(uVar6 + 1);
			__this_00._size = uVar6 + 1;
			pUVar8[(int)uVar6] = (GameObject)__this_02;
		}
		else {
			__this_00.AddWithResize((object)__this_02);
		}
		if (__this_02 == null) goto label_05c67d4d;
		__this_06 = __this_02;
		pUVar10 = __this_02.GetComponent<RectTransform>();
		__this_06.RegisterButtonRect(pUVar10, control);
		__this_02.AddComponent<CanvasRenderer>();
		__this_02.AddComponent<MobileInputRaycastArea>();
		__this_03 = __this_02.AddComponent<MobileInputJoystick>();
		ppUVar17 = (Vector2*)this._moveJoysticks;
		if ((MobileControlsOverlay)ppUVar17 == null) goto label_05c67d4d;
		piVar1 = (int)((long)&(((MobileControlsOverlay)ppUVar17).fields).m_CancellationTokenSource + 4);
		*piVar1 = *piVar1 + 1;
		pUVar9 = (MobileInputJoystick[])(((MobileControlsOverlay)ppUVar17).fields).m_CachedPtr;
		if (pUVar9 == null) goto label_05c67d4d;
		uVar6 = *(uint)&(((MobileControlsOverlay)ppUVar17).fields).m_CancellationTokenSource;
		if (uVar6 < (uint)pUVar9.Length) {
			pMVar15 = (MethodInfo)(ulong)(uVar6 + 1);
			*(uint)&(((MobileControlsOverlay)ppUVar17).fields).m_CancellationTokenSource = uVar6 + 1;
			ppUVar17 = (Vector2*)(pUVar9.m_Items + (int)uVar6);
			pUVar9[(int)uVar6] = __this_03;
		}
		else {
			ppUVar17.AddWithResize((object)__this_03);
		}
		if (local_98.y <= local_98.x) {
			local_98.x = local_98.y;
		}
		fVar19 = __this_01.JoystickBaseScale;
		auVar22 = ZEXT812(0x40000000);
		if (fVar19 <= auVar22._0_4_) {
			auVar22._4_8_ = auVar22._4_8_;
			auVar22._0_4_ = fVar19;
		}
		UVar20.x =(float)(~-(uint)(0.0 < fVar19) & 0x3ee66666 |(~-(uint)(0.01 <= fVar19) & 0x3c23d70a | auVar22._0_4_ & -(uint)(0.01 <= fVar19)) & -(uint)(0.0 < fVar19)) * local_98.x;
		UVar20.y = UVar20.x;
		if (Il2CppMethodInitialized_0753ecc8 == false) {
			ppUVar17 = &typeof(Vector2);
			Il2CppMethodInitialized_0753ecc8 = true;
		}
		ppUVar17 = (Vector2*)ppUVar17.CreateRect("MoveJoystick", pUVar10, (Vector2)0x3f0000003f000000, (Vector2)0x3f0000003f000000, UVar20, (Vector2)(Vector2.zeroVector));
		if ((MobileControlsOverlay)ppUVar17 == null) goto label_05c67d4d;
		pUVar10 = ppUVar17.GetComponent<RectTransform>();
		fVar19 = __this_01.JoystickReelOutRingDiameter;
		auVar23 = ZEXT812(0x3f800000);
		if (auVar23._0_4_ <= fVar19) {
			auVar23._4_8_ = auVar23._4_8_;
			auVar23._0_4_ = fVar19;
		}
		fVar18 = this.GetReferenceScale();
		fVar18 = fVar18 * (float)(~-(uint)(0.0 < fVar19) & 0x43be0000 | auVar23._0_4_ & -(uint)(0.0 < fVar19));
		__this_07 = ppUVar17;
		pUVar11 = ppUVar17.GetComponent<RectTransform>();
		size.y = fVar18;
		size.x = fVar18;
		if (Il2CppMethodInitialized_0753ecc8 == false) {
			__this_07 = &typeof(Vector2);
			Il2CppMethodInitialized_0753ecc8 = true;
		}
		pUVar12 = __this_07.CreateRect("ReelOutRing", pUVar11, (Vector2)0x3f0000003f000000, (Vector2)0x3f0000003f000000, size, (Vector2)(Vector2.zeroVector));
		if ((pUVar12 == null) ||(image = pUVar12.AddComponent<Image>(), image == null)) goto label_05c67d4d;
		image.set_raycastTarget(0);
		if (Il2CppMethodInitialized_07547920 == false) {
			Il2CppMethodInitialized_07547920 = true;
			pUVar14 = __this_01.JoystickRingSkin;
			if (pUVar14 == null) goto label_05c67a57;
	label_05c676ed: ;
			uVar7 = (typeof(MobileControlSkinManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			pUVar14 = __this_01.JoystickRingSkin;
			if (pUVar14 != null) goto label_05c676ed;
	label_05c67a57: ;
			pUVar14.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pUVar14.PreserveAspect = true;
			pUVar14 = new MobileInputSkin();
			pUVar14.R = 1.0;
			pUVar14.G = 1.0;
			pUVar14.B = 1.0;
			pUVar14.A = 0.08;
			uVar7 = (typeof(MobileControlSkinManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar7 == 0) {
		}
		MobileControlSkinManager.ApplySkin(image, pUVar14, shape);
		pUVar12.SetActive(role != 5);
		pUVar13 = ppUVar17.AddComponent<Image>();
		pUVar14 = __this_01.Skin;
		if (pUVar14 == null) {
			pUVar14.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pUVar14.PreserveAspect = true;
			pUVar14 = new MobileInputSkin();
			pUVar14.R = 0.0;
			pUVar14.G = 0.0;
			pUVar14.B = 0.0;
			pUVar14.A = 0.38;
		}
		MobileControlSkinManager.ApplySkin(pUVar13, pUVar14, shape);
		fVar19 = __this_01.JoystickHandleScale;
		auVar26 = ZEXT812(0x40000000);
		if (fVar19 <= auVar26._0_4_) {
			auVar26._4_8_ = auVar26._4_8_;
			auVar26._0_4_ = fVar19;
		}
		fVar19 = UVar20.x *(float)(~-(uint)(0.0 < fVar19) & 0x3edc28f6 |(~-(uint)(0.01 <= fVar19) & 0x3c23d70a | auVar26._0_4_ & -(uint)(0.01 <= fVar19)) & -(uint)(0.0 < fVar19));
		pUVar11 = ppUVar17.GetComponent<RectTransform>();
		size_00.y = fVar19;
		size_00.x = fVar19;
		if (Il2CppMethodInitialized_0753ecc8 == false) {
			ppUVar17 = &typeof(Vector2);
			Il2CppMethodInitialized_0753ecc8 = true;
		}
		pUVar12 = ppUVar17.CreateRect("Handle", pUVar11, (Vector2)0x3f0000003f000000, (Vector2)0x3f0000003f000000, size_00, (Vector2)(Vector2.zeroVector));
		if (pUVar12 == null) goto label_05c67d4d;
		pUVar11 = pUVar12.GetComponent<RectTransform>();
		pUVar13 = pUVar12.AddComponent<Image>();
		pUVar14 = __this_01.JoystickHandleSkin;
		if (pUVar14 == null) {
			pUVar14.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pUVar14.PreserveAspect = true;
			pUVar14 = new MobileInputSkin();
			pUVar14.R = 1.0;
			pUVar14.G = 1.0;
			pUVar14.B = 1.0;
			pUVar14.A = 0.35;
		}
		MobileControlSkinManager.ApplySkin(pUVar13, pUVar14, shape);
		if (Il2CppMethodInitialized_0754791c == false) {
			Il2CppMethodInitialized_0754791c = true;
			pUVar14 = __this_01.Skin;
			if (pUVar14 == null) goto label_05c67ae8;
	label_05c6794b: ;
			if (g_data_0754791f != false) goto label_05c67958;
	label_05c67b45: ;
			g_data_0754791f = true;
			activeSkin = __this_01.JoystickActiveSkin;
			if (activeSkin == null) goto label_05c67b65;
	label_05c67965: ;
			if (Il2CppMethodInitialized_07547920 != false) goto label_05c67972;
	label_05c67bc4: ;
			Il2CppMethodInitialized_07547920 = true;
			reelRingSkin = __this_01.JoystickRingSkin;
			if (reelRingSkin == null) goto label_05c67be7;
	label_05c67982: ;
			if (g_data_07547921 != false) goto label_05c6798f;
	label_05c67c4a: ;
			g_data_07547921 = true;
			reelInSkin = __this_01.JoystickReelInSkin;
			if (reelInSkin == null) goto label_05c67c6d;
	label_05c6799f: ;
			if (g_data_07547922 != false) goto label_05c679ac;
	label_05c67cca: ;
			g_data_07547922 = true;
			reelOutSkin = __this_01.JoystickReelOutSkin;
		}
		else {
			pUVar14 = __this_01.Skin;
			if (pUVar14 != null) goto label_05c6794b;
	label_05c67ae8: ;
			pUVar14.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pUVar14.PreserveAspect = true;
			pUVar14 = new MobileInputSkin();
			pUVar14.R = 0.0;
			pUVar14.G = 0.0;
			pUVar14.B = 0.0;
			pUVar14.A = 0.38;
			if (g_data_0754791f == false) goto label_05c67b45;
	label_05c67958: ;
			activeSkin = __this_01.JoystickActiveSkin;
			if (activeSkin != null) goto label_05c67965;
	label_05c67b65: ;
			activeSkin.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			activeSkin.PreserveAspect = true;
			activeSkin = new MobileInputSkin();
			activeSkin.R = 1.0;
			activeSkin.G = 1.0;
			activeSkin.B = 1.0;
			activeSkin.A = 0.4;
			if (Il2CppMethodInitialized_07547920 == false) goto label_05c67bc4;
	label_05c67972: ;
			reelRingSkin = __this_01.JoystickRingSkin;
			if (reelRingSkin != null) goto label_05c67982;
	label_05c67be7: ;
			reelRingSkin.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			reelRingSkin.PreserveAspect = true;
			reelRingSkin = new MobileInputSkin();
			reelRingSkin.R = 1.0;
			reelRingSkin.G = 1.0;
			reelRingSkin.B = 1.0;
			reelRingSkin.A = 0.08;
			if (g_data_07547921 == false) goto label_05c67c4a;
	label_05c6798f: ;
			reelInSkin = __this_01.JoystickReelInSkin;
			if (reelInSkin != null) goto label_05c6799f;
	label_05c67c6d: ;
			reelInSkin.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			reelInSkin.PreserveAspect = true;
			reelInSkin = new MobileInputSkin();
			reelInSkin.R = 1.0;
			reelInSkin.G = 0.15;
			reelInSkin.B = 0.12;
			reelInSkin.A = 0.24;
			if (g_data_07547922 == false) goto label_05c67cca;
	label_05c679ac: ;
			reelOutSkin = __this_01.JoystickReelOutSkin;
		}
		if (reelOutSkin == null) {
			reelOutSkin.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			reelOutSkin.PreserveAspect = true;
			reelOutSkin = new MobileInputSkin();
			reelOutSkin.R = 0.15;
			reelOutSkin.G = 0.95;
			reelOutSkin.B = 0.45;
			reelOutSkin.A = 0.22;
		}
		if (__this_03 != null) {
			__this_03.Setup(pUVar10, pUVar11, fVar19, image, fVar18 * 0.5, pUVar14, activeSkin, reelRingSkin, reelInSkin, reelOutSkin, shape, __this_01.BindReelInAngle, __this_01.BindReelOutAngle);
			this.RegisterMoveJoystickDisplayNames(role);
			return;
		}
	label_05c67d4d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004602")]
	[Address(RVA = "0x5B645B0", Offset = "0x5B635B0", VA = "0x5B645B0")]
	private void UpdateAutoGas()
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$UpdateAutoGas): 3 lines keep C-only constructs
		Vector2 UVar1;
		uint uVar2;
		BaseGameManager pGVar3;
		Object pUVar4;
		bool bVar5;
		byte bVar6;
		Object x;
		float local_38;
		float fStack_34;

		pGVar3 = SceneLoader.CurrentGameManager;
		if (pGVar3 != null) {
			bVar6 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((bVar6 <= (pGVar3.klass._2).typeHierarchyDepth) &&((pGVar3.klass._2).typeHierarchy[(ulong)bVar6 - 1] ==typeof(InGameManager))) &&(pUVar4 = (*(ulong)((sbyte)pGVar3 + 0x80)), pUVar4 != null)) {
				bVar6 = (typeof(Human)._2).typeHierarchyDepth;
				if (bVar6 <= (pUVar4.klass._2).typeHierarchyDepth) {
					x = null;
					if ((pUVar4.klass._2).typeHierarchy[(ulong)bVar6 - 1] == typeof(Human)) {
						x = pUVar4;
					}
					uVar2 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
					goto joined_r0x05c64668;
				}
			}
		}
		x = null;
		uVar2 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
	joined_r0x05c64668: ;
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_07547975 == false) {
			Il2CppMethodInitialized_07547975 = true;
			uVar2 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(MobileInputBridge))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		UVar1 = (MobileInputBridge._moveVector);
		if (this._visible == false) {
			bVar6 = 0;
		}
		else {
			bVar6 = 0;
			bVar5 = (x != null);
			if (bVar5) {
				if (x == null) {
					throw new NullReferenceException();
				}
				if ((*(sbyte)&(*(ulong)((sbyte)x + 0x78)) == false) && (*(sbyte)((long)&(*(ulong)((sbyte)x + 0xd0)) + 4) == false)) {
					bVar6 = MobileInputBridge.AutoUseGasEnabled;
				}
			}
		}
		local_38 = UVar1.x;
		fStack_34 = UVar1.y;
		MobileInputBridge.SetAutoGas((bool)(bVar6 & 0.04 < fStack_34 * fStack_34 + local_38 * local_38));
		return;
	}

	[Token(Token = "0x6004603")]
	[Address(RVA = "0x5B64800", Offset = "0x5B63800", VA = "0x5B64800")]
	private void UpdateAutoReel()
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$UpdateAutoReel): 19 lines keep C-only constructs
		float fVar1;
		byte bVar2;
		uint uVar3;
		MobileInputJoystick x;
		BaseGameManager pGVar4;
		Human human;
		List<MobileInputJoystick> __this_00;
		object __this_01;
		bool bVar5;
		bool bVar6;
		InGameManager in_RCX;
		MobileInputJoystick __this_02;
		float fVar7;
		byte bVar8;
		Vector3 UStack_98;
		Vector3 UStack_88;
		Vector2 UStack_78;
		byte[] auStack_60 = new byte[16];
		MobileInputJoystick pUStack_50;
		System_Collections_Generic_List_Enumerator_object__o SStack_48;

		UStack_88.z = 0.0;
		UStack_88.x = 0.0;
		UStack_88.y = 0.0;
		UStack_98.z = 0.0;
		UStack_98.x = 0.0;
		UStack_98.y = 0.0;
		x = MobileInputJoystick._ActiveJoystick_k__BackingField;
		if ((this._visible == false) ||(pGVar4 = SceneLoader.CurrentGameManager, pGVar4 == null)) {
	label_05c64af9: ;
			bVar6 = false;
			bVar8 = 0;
		}
		else {
			bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
			bVar6 = false;
			bVar8 = 0;
			in_RCX = typeof(InGameManager);
			if (bVar2 <= (pGVar4.klass._2).typeHierarchyDepth) {
				bVar6 = false;
				bVar8 = 0;
				if ((pGVar4.klass._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(InGameManager)) {
					human = (*(ulong)((sbyte)pGVar4 + 0x80));
					if (human == null) goto label_05c64af9;
					bVar2 = (typeof(Human)._2).typeHierarchyDepth;
					in_RCX = (InGameManager)(ulong)bVar2;
					bVar6 = false;
					bVar8 = 0;
					if (bVar2 <= (human.klass._2).typeHierarchyDepth) {
						bVar6 = false;
						bVar8 = 0;
						if ((human.klass._2).typeHierarchy [(long)((long)&in_RCX[-1].vtable._57_OnFinishLoading.method + 7)] ==typeof(Human)) {
							bVar6 = false;
							bVar8 = 0;
							if (human.Dead == false) {
								if ((typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor == 0) {
									if (Il2CppMethodInitialized_07547975 != false) goto label_05c649e7;
	label_05c64c57: ;
									Il2CppMethodInitialized_07547975 = true;
									uVar3 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
								}
								else {
									if (Il2CppMethodInitialized_07547975 == false) goto label_05c64c57;
	label_05c649e7: ;
									uVar3 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
								}
								if (uVar3 == 0) {
								}
								UStack_78 = (MobileInputBridge._moveVector);
								bVar6 = false;
								__this_02 = x;
								bVar5 = ((Object)x != null);
								in_RCX = null;
								bVar8 = 0;
								if (bVar5) {
									if (x == null) goto label_05c64c8c;
									if (x._PulledPastReelOutRing_k__BackingField == false) goto label_05c64af9;
									bVar5 = __this_02.TryGetHorizontalMoveDirection((Vector2)UStack_78, ref UStack_88);
									bVar6 = false;
									in_RCX = null;
									bVar8 = 0;
									if (bVar5) {
										bVar5 = __this_02.TryGetHorizontalHookDirection(human, ref UStack_98);
										bVar6 = false;
										in_RCX = null;
										bVar8 = 0;
										if (bVar5) {
											bVar6 = false;
											fVar7 = (float)il2cpp_runtime_helper_059d7e70(UStack_88.x, UStack_88.z, UStack_98._0_8_, 0);
											fVar1 = x._reelInAngle;
											bVar8 = -(fVar7 < fVar1 && 0.0 < fVar1);
											fVar1 = x._reelOutAngle;
											if (fVar1 < 180.0) {
												bVar6 = fVar1 < fVar7;
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
		__this_00 = this._moveJoysticks;
		if (__this_00 != null) {
			auStack_60.GetEnumerator((List<object>)__this_00);
			SStack_48._current = (object)pUStack_50;
			SStack_48._list = (List<T>)auStack_60._0_8_;
			SStack_48._index = auStack_60._8_4_;
			SStack_48._version = auStack_60._12_4_;
			auStack_60._0_8_ = null;
			UStack_78.x = (float)(uint)bVar6;
			auStack_60._8_8_ = &SStack_48;
			while(true) {
				do {
					bVar6 = SStack_48.MoveNext() ;
					__this_01 = SStack_48._current;
					if (!bVar6) {
						SStack_48.Dispose();
						MobileInputBridge.SetAutoReel((bool)(bVar8 & 1), UStack_78.x._0_1_);
						return;
					}
					bVar6 = ((Object)__this_01 != null);
				} while (!bVar6);
				bVar6 = ((Object)__this_01 == (Object)x);
				bVar5 = ((Object)__this_01 == (Object)x);
				if ((MobileInputJoystick)__this_01 == null) break;
				__this_01.SetReelRingColor((bool)(bVar6 & bVar8), (bool)(bVar5 & UStack_78.x._0_1_));
			}
			throw new NullReferenceException();
		}
	label_05c64c8c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004604")]
	[Address(RVA = "0x5B69020", Offset = "0x5B68020", VA = "0x5B69020")]
	private bool TryGetHorizontalMoveDirection(Vector2 move, out Vector3 direction)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$TryGetHorizontalMoveDirection): 87 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		ulong uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		byte[] auVar7 = new byte[16];
		byte[] auVar8 = new byte[16];
		bool bVar10;
		Camera x;
		Transform pUVar11;
		UnityEngine_Vector3_StaticFields pUVar12;
		float fVar13;
		uint uVar14;
		uint extraout_XMM0_Db;
		uint extraout_XMM0_Db_00;
		uint extraout_XMM0_Db_01;
		uint in_XMM0_Dc;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint in_XMM0_Dd;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		byte[] auVar17 = new byte[12];
		byte[] auVar15 = new byte[16];
		byte[] auVar16 = new byte[16];
		float fVar18;
		float fVar19;
		float fVar20;
		float fVar21;
		float fVar22;
		float fVar23;
		float fVar24;
		float fVar25;
		Vector3 UVar26;
		byte[] local_90 = new byte[12];
		float fStack_84;
		float fStack_80;
		float fStack_7c;
		float local_78;
		float fStack_74;
		float fStack_70;
		float fStack_6c;
		float local_5c;
		byte[] local_58 = new byte[16];
		byte[] local_48 = new byte[16];
		byte[] local_38 = new byte[16];

		local_58._8_4_ = in_XMM0_Dc;
		local_58._0_8_ = move;
		local_58._12_4_ = in_XMM0_Dd;
		pUVar12 = typeof(Vector3).static_fields;
		uVar3._0_4_ = (pUVar12.zeroVector).y;
		fVar19 = (pUVar12.zeroVector).z;
		auVar15 = ZEXT416((uint)fVar19);
		direction.x = (pUVar12.zeroVector).x;
		direction.y = (float)uVar3;
		direction.z = fVar19;
		x = Camera.main;
		bVar10 = ((Object)x == null);
		if (bVar10) {
			return false;
		}
		if ((x != null) &&(pUVar11 = x.transform, pUVar11 != null)) {
			UVar26 = pUVar11.forward;
			auVar17 = auVar15._4_12_;
			fVar19 = UVar26.z;
			fStack_80 = (float)extraout_XMM0_Dc;
			fStack_7c = (float)extraout_XMM0_Dd;
			pUVar11 = x.transform;
			if (pUVar11 != null) {
				UVar26 = pUVar11.right;
				local_48._0_4_ = UVar26.z;
				local_48._4_12_ = auVar17;
				local_78 = fVar19 * fVar19 + (float)local_90._8_4_ * (float)local_90._8_4_ + 0.0;
				if (local_78 < 0.001) {
					return false;
				}
				local_38._8_4_ = extraout_XMM0_Dc_00;
				local_38._0_8_ = UVar26._0_8_;
				local_38._12_4_ = extraout_XMM0_Dd_00;
				local_5c = (float)local_48._0_4_ * (float)local_48._0_4_ + UVar26.x * UVar26.x + 0.0;
				if (0.001 <= local_5c) {
					if (Il2CppMethodInitialized_0753e729 == false) {
						local_90._0_8_ = 0;
						Il2CppMethodInitialized_0753e729 = true;
						uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					else {
						local_90._0_8_ = 0;
						uVar6 = *(uint)((long)typeof(Math) + 0xe4);
					}
					if (uVar6 == 0) {
					}
					if (0.0 <= local_78) {
						uVar14 = 0;
						uVar3._0_4_ = SQRT(local_78);
					}
					else {
						uVar3._0_4_ = sqrtf(local_78);
						uVar14 = extraout_XMM0_Db;
					}
					if (1e-05 < (float)uVar3) {
						fVar19 = fVar19 / (float)uVar3;
						auVar15._4_4_ = (float)uVar3;
						auVar15._0_4_ = (float)uVar3;
						auVar15._8_4_ = uVar14;
						auVar15._12_4_ = uVar14;
						auVar15 = divps(ZEXT416((uint)local_90._8_4_), auVar15);
						local_90._0_8_ = auVar15._0_8_;
						uVar3._0_4_ = auVar15._0_4_;
						uVar3._4_4_ = auVar15._4_4_;
					}
					else {
						pUVar12 = *(UnityEngine_Vector3_StaticFields*)((long)typeof(Vector3) + 0xb8);
						fVar19 = (pUVar12.zeroVector).z;
						uVar3._0_4_ = (pUVar12.zeroVector).x;
						uVar3._4_4_ = (pUVar12.zeroVector).y;
					}
					fVar23 = 0.0;
					fVar25 = 0.0;
					if (Il2CppMethodInitialized_0753e72d == false) {
						Il2CppMethodInitialized_0753e72d = true;
						uVar3._0_4_ = (float)local_90._8_4_;
						uVar3._4_4_ = fStack_84;
						fVar23 = fStack_80;
						fVar25 = fStack_7c;
					}
					local_90._0_4_ = 0.0;
					local_90._4_4_ = 0.0;
					if (Il2CppMethodInitialized_0753e729 == false) {
						Il2CppMethodInitialized_0753e729 = true;
						uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						uVar3._0_4_ = (float)local_90._8_4_;
						uVar3._4_4_ = fStack_84;
						fVar23 = fStack_80;
						fVar25 = fStack_7c;
					}
					else {
						uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					if (uVar6 == 0) {
						uVar3._4_4_ = fStack_84;
						fVar23 = fStack_80;
						fVar25 = fStack_7c;
					}
					uVar14 = 0;
					if (local_5c < 0.0) {
						local_78 = (float)local_58._4_4_;
						fStack_74 = (float)local_58._4_4_;
						fStack_70 = (float)local_58._4_4_;
						fStack_6c = (float)local_58._4_4_;
						fVar13 = sqrtf(local_5c);
						uVar14 = extraout_XMM0_Db_00;
						fVar20 = local_78;
						fVar21 = fStack_74;
						fVar22 = fStack_70;
						fVar24 = fStack_6c;
						uVar3._4_4_ = fStack_84;
					}
					else {
						fVar13 = SQRT(local_5c);
						fVar20 = (float)local_58._4_4_;
						fVar21 = (float)local_58._4_4_;
						fVar22 = (float)local_58._4_4_;
						fVar24 = (float)local_58._4_4_;
					}
					if (fVar13 <= 1e-05) {
						pUVar12 = typeof(Vector3).static_fields;
						fVar18 = (pUVar12.zeroVector).z;
					}
					else {
						fVar18 = (float)local_48._0_4_ / fVar13;
						auVar7._4_4_ = fVar13;
						auVar7._0_4_ = fVar13;
						auVar7._8_4_ = uVar14;
						auVar7._12_4_ = uVar14;
						auVar15 = divps(ZEXT416((uint)local_38._0_4_), auVar7);
						local_90._0_4_ = auVar15._0_4_;
						local_90._4_4_ = auVar15._4_4_;
						pUVar12 = (UnityEngine_Vector3_StaticFields)local_90;
					}
					uVar1 = (pUVar12.zeroVector).x;
					uVar4 = (pUVar12.zeroVector).y;
					fVar20 = fVar20 * (float)uVar3 + (float)uVar1 * (float)local_58._0_4_;
					uVar3._0_4_ = fVar21 * fVar19 + fVar18 * (float)local_58._0_4_;
					fVar23 = fVar22 * fVar23 + (float)local_58._0_4_ * 0.0;
					fVar25 = fVar24 * fVar25 + (float)local_58._0_4_ * 0.0;
					direction.x = fVar20;
					direction.y = uVar3._4_4_ * (float)local_58._4_4_ + (float)uVar4 * (float)local_58._0_4_;
					direction.z = (float)uVar3;
					direction.y = 0.0;
					fVar19 = 0.0;
					if ((float)uVar3 * (float)uVar3 + fVar20 * fVar20 + 0.0 < 0.001) {
						return false;
					}
					if (Il2CppMethodInitialized_0753e729 == false) {
						Il2CppMethodInitialized_0753e729 = true;
						fVar19 = direction.y;
						uVar3._0_4_ = direction.z;
						fVar20 = direction.x;
						fVar23 = 0.0;
						fVar25 = 0.0;
					}
					if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
						local_78 = fVar20;
						fStack_74 = (float)uVar3;
						fStack_70 = fVar23;
						fStack_6c = fVar25;
						fVar20 = local_78;
						uVar3._0_4_ = fStack_74;
					}
					fVar19 = (float)uVar3 * (float)uVar3 + fVar19 * fVar19 + fVar20 * fVar20;
					if (fVar19 < 0.0) {
						fVar19 = sqrtf(fVar19);
						uVar14 = extraout_XMM0_Db_01;
					}
					else {
						uVar14 = 0;
						fVar19 = SQRT(fVar19);
					}
					if (1e-05 < fVar19) {
						uVar2 = direction.x;
						uVar5 = direction.y;
						auVar16._4_4_ = uVar5;
						auVar16._0_4_ = uVar2;
						auVar16._8_8_ = 0;
						auVar8._4_4_ = fVar19;
						auVar8._0_4_ = fVar19;
						auVar8._8_4_ = uVar14;
						auVar8._12_4_ = uVar14;
						auVar15 = divps(auVar16, auVar8);
						direction.x = (float)auVar15._0_4_;
						direction.y = (float)auVar15._4_4_;
						fVar19 = direction.z / fVar19;
					}
					else {
						direction.x = 0.0;
						direction.y = 0.0;
						fVar19 = 0.0;
					}
					direction.z = fVar19;
					return true;
				}
				return false;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004605")]
	[Address(RVA = "0x5B69540", Offset = "0x5B68540", VA = "0x5B69540")]
	private bool TryGetHorizontalHookDirection(Human human, out Vector3 direction)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$TryGetHorizontalHookDirection): 14 lines keep C-only constructs
		uint uVar1;
		float fVar2;
		uint uVar3;
		float fVar4;
		uint uVar5;
		BaseComponentCache pUVar7;
		Transform pUVar8;
		bool bVar9;
		bool bVar10;
		HookUseable pCVar11;
		uint uVar12;
		uint extraout_XMM0_Db;
		byte[] auVar13 = new byte[16];
		byte[] auVar14 = new byte[16];
		float fVar15;
		Vector3 UVar16;
		Vector3 UVar17;
		float local_38;
		float fStack_34;

		fVar2 = (Vector3.zeroVector).y;
		fVar15 = (Vector3.zeroVector).z;
		direction.x = (Vector3.zeroVector).x;
		direction.y = fVar2;
		direction.z = fVar15;
		if (human == null) goto label_05c69848;
		pUVar7 = human.Cache;
		if (pUVar7 == null) {
			return false;
		}
		pUVar8 = pUVar7.Transform;
		bVar10 = false;
		bVar9 = ((Object)pUVar8 == null);
		if (bVar9) {
			return false;
		}
		pCVar11 = human.HookLeft;
		if (pCVar11 != null) {
			bVar10 = pCVar11.IsHooked();
		}
		pCVar11 = human.HookRight;
		if (pCVar11 == null) {
			bVar9 = false;
		}
		else {
			bVar9 = pCVar11.IsHooked();
		}
		if ((bVar10 == false) && (bVar9 == false)) {
			return false;
		}
		if ((bVar10 & bVar9) == 0) {
			if (bVar10 == false) {
				pCVar11 = human.HookRight;
			}
			else {
				pCVar11 = human.HookLeft;
			}
			if (pCVar11 == null) goto label_05c69848;
			UVar16 = pCVar11.GetHookPosition();
			fVar15 = UVar16.z;
			fVar2 = UVar16.x;
			fVar4 = UVar16.y;
			pUVar7 = human.Cache;
		}
		else {
			pCVar11 = human.HookLeft;
			if (pCVar11 == null) goto label_05c69848;
			UVar16 = pCVar11.GetHookPosition();
			pCVar11 = human.HookRight;
			if (pCVar11 == null) goto label_05c69848;
			UVar17 = pCVar11.GetHookPosition();
			local_38 = UVar16.x;
			fStack_34 = UVar16.y;
			fVar2 = (local_38 + UVar17.x) * 0.5;
			fVar4 = (fStack_34 + UVar17.y) * 0.5;
			fVar15 = (UVar16.z + UVar17.z) * 0.5;
			pUVar7 = human.Cache;
		}
		if ((pUVar7 != null) &&(pUVar8 = pUVar7.Transform, pUVar8 != null)) {
			UVar16 = pUVar8.position;
			fVar2 = fVar2 - UVar16.x;
			fVar15 = fVar15 - UVar16.z;
			direction.x = fVar2;
			direction.y = fVar4 - UVar16.y;
			direction.z = fVar15;
			direction.y = 0.0;
			if (fVar15 * fVar15 + fVar2 * fVar2 + 0.0 < 0.001) {
				return false;
			}
			if (Il2CppMethodInitialized_0753e729 == false) {
				Il2CppMethodInitialized_0753e729 = true;
				fVar2 = direction.x;
				fVar4 = direction.y;
				fVar15 = direction.z;
				uVar5 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				fVar4 = 0.0;
				uVar5 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar5 == 0) {
			}
			uVar12 = 0;
			fVar15 = fVar15 * fVar15 + fVar4 * fVar4 + fVar2 * fVar2;
			if (fVar15 < 0.0) {
				fVar15 = sqrtf(fVar15);
				uVar12 = extraout_XMM0_Db;
			}
			else {
				fVar15 = SQRT(fVar15);
			}
			if (fVar15 <= 1e-05) {
				direction.x = 0.0;
				direction.y = 0.0;
				fVar15 = 0.0;
			}
			else {
				uVar1 = direction.x;
				uVar3 = direction.y;
				auVar13._4_4_ = uVar3;
				auVar13._0_4_ = uVar1;
				auVar13._8_8_ = 0;
				auVar14._4_4_ = fVar15;
				auVar14._0_4_ = fVar15;
				auVar14._8_4_ = uVar12;
				auVar14._12_4_ = uVar12;
				auVar14 = divps(auVar13, auVar14);
				direction.x = (float)auVar14._0_4_;
				direction.y = (float)auVar14._4_4_;
				fVar15 = direction.z / fVar15;
			}
			direction.z = fVar15;
			return true;
		}
	label_05c69848: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004606")]
	[Address(RVA = "0x5B66DC0", Offset = "0x5B65DC0", VA = "0x5B66DC0")]
	private void CreateActionButtons(RectTransform parent)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$CreateActionButtons): clean


		this.AddLayoutControls(parent, 1, this._humanButtons);
		return;
	}

	[Token(Token = "0x6004607")]
	[Address(RVA = "0x5B66DB0", Offset = "0x5B65DB0", VA = "0x5B66DB0")]
	private void CreateGeneralButtons(RectTransform parent)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$CreateGeneralButtons): clean


		this.AddLayoutControls(parent, 0, this._generalButtons);
		return;
	}

	[Token(Token = "0x6004608")]
	[Address(RVA = "0x5B69950", Offset = "0x5B68950", VA = "0x5B69950")]
	private void AddHookButton(RectTransform parent, MobileInputControlLayout control, MobileInputLayoutRole role, List<GameObject> group)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$AddHookButton): 6 lines keep C-only constructs
		int piVar1;
		bool bVar2;
		GameObject[] pUVar3;
		uint uVar4;
		GameObject __this_00;
		MobileInputHookButton __this_01;
		MobileInputSkin normalSkin;
		MobileInputSkin pressedSkin;
		MethodInfo pMVar5;
		MethodInfo pMVar6;
		MobileInputHookButton __this_02;
		List<GameObject> group_00;
		MethodInfo local_58;
		RectTransform local_50;
		List<GameObject> local_48;
		RectTransform local_40;
		MobileControlsOverlay local_38;

		group_00 = group;
		local_50 = null;
		local_58 = null;
		pMVar5 = (MethodInfo)&local_50;
		__this_00 = this.CreateHoldControlObject(parent, control, "HookButton", group_00, (RectTransform*)pMVar5, (RectTransform*)&local_58);
		pMVar6 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
		if (group == null) goto label_05c69c47;
		piVar1 = &group._version;
		*piVar1 = *piVar1 + 1;
		pUVar3 = group._items;
		if (pUVar3 == null) goto label_05c69c47;
		uVar4 = group._size;
		if (uVar4 < (uint)pUVar3.Length) {
			group._size = uVar4 + 1;
			pUVar3[(int)uVar4] = __this_00;
		}
		else {
			group.AddWithResize((object)__this_00);
		}
		if ((__this_00 == null) ||(pMVar6 = MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputHookButton, __this_01 = __this_00.AddComponent<MobileInputHookButton>(), control == null)) goto label_05c69c47;
		local_40 = local_50;
		local_38 = this;
		if (Il2CppMethodInitialized_0754791c == false) {
			Il2CppMethodInitialized_0754791c = true;
			normalSkin = control.Skin;
			if (normalSkin != null) goto label_05c69a8f;
	label_05c69b68: ;
			normalSkin.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			normalSkin.PreserveAspect = true;
			pMVar6 = null;
			normalSkin = new MobileInputSkin();
			normalSkin.R = 0.0;
			normalSkin.G = 0.0;
			normalSkin.B = 0.0;
			normalSkin.A = 0.38;
			if (g_data_0754791d != false) goto label_05c69aa1;
	label_05c69bcc: ;
			g_data_0754791d = true;
			pressedSkin = control.OnSkin;
		}
		else {
			normalSkin = control.Skin;
			if (normalSkin == null) goto label_05c69b68;
	label_05c69a8f: ;
			if (g_data_0754791d == false) goto label_05c69bcc;
	label_05c69aa1: ;
			pressedSkin = control.OnSkin;
		}
		if (pressedSkin == null) {
			pressedSkin.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pressedSkin.PreserveAspect = true;
			pMVar6 = null;
			pressedSkin = new MobileInputSkin();
			pressedSkin.R = 1.0;
			pressedSkin.G = 1.0;
			pressedSkin.B = 1.0;
			pressedSkin.A = 0.38;
		}
		local_48 = group;
		uVar4 = control.GetShape();
		if (__this_01 != null) {
			__this_01.CacheInputs();
			pMVar6 = (MethodInfo)(ulong)uVar4;
			__this_01.Setup(local_40, normalSkin, pressedSkin, uVar4);
			bVar2 = control.DisableContentMovement;
			__this_01._movingContent = (RectTransform)local_58;
			pMVar5 = local_58;
			__this_01._moveContentWithTouch = (bool)(bVar2 ^ 1);
			__this_02 = __this_01;
			__this_01.ResetMovingContent();
			if (local_38 != null) {
				pMVar5 = (MethodInfo)control.Label;
				__this_02.RegisterControlDisplayNames(role, control, (String)pMVar5);
				__this_02.RegisterSlideButtons((MobileInputHoldControl)__this_01, local_48);
				return;
			}
		}
	label_05c69c47: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004609")]
	[Address(RVA = "0x5B6A390", Offset = "0x5B69390", VA = "0x5B6A390")]
	private GameObject CreateHoldButton(RectTransform parent, MobileInputControlLayout control, MobileInputLayoutRole role, List<GameObject> group)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$CreateHoldButton): 3 lines keep C-only constructs
		bool bVar1;
		uint shape;
		GameObject __this_00;
		MobileControlsOverlay __this_01;
		String[] actionIds;
		MobileInput[] pSVar2;
		MobileInputSkin normalSkin;
		MobileInputSkin pressedSkin;
		MethodInfo pMVar3;
		MobileControlsOverlay __this_02;
		List<GameObject> group_00;
		MethodInfo local_60;
		Il2CppClass local_58;
		GameObject local_50;
		List<GameObject> local_48;
		MobileControlsOverlay local_40;
		Il2CppClass local_38;

		group_00 = group;
		local_58 = null;
		local_60 = null;
		pMVar3 = (MethodInfo)&local_58;
		__this_00 = this.CreateHoldControlObject(parent, control, "HoldButton", group_00, (RectTransform*)pMVar3, (RectTransform*)&local_60);
		if (__this_00 == null) goto label_05c6a6ab;
		__this_01 = (MobileControlsOverlay)__this_00.AddComponent<MobileInputHoldButton>();
		local_38 = local_58;
		if (control == null) goto label_05c6a6ab;
		local_40 = this;
		actionIds = control.GetActionIds();
		local_48 = group;
		pSVar2 = MobileInputBridge.GetActionInputs(actionIds);
		if (Il2CppMethodInitialized_0754791c == false) {
			Il2CppMethodInitialized_0754791c = true;
			normalSkin = control.Skin;
			if (normalSkin == null) goto label_05c6a4ff;
	label_05c6a4ae: ;
			if (g_data_0754791d != false) goto label_05c6a4c0;
	label_05c6a563: ;
			g_data_0754791d = true;
			pressedSkin = control.OnSkin;
			if (pressedSkin == null) goto label_05c6a583;
	label_05c6a4cd: ;
			shape = control.GetShape();
		}
		else {
			normalSkin = control.Skin;
			if (normalSkin != null) goto label_05c6a4ae;
	label_05c6a4ff: ;
			normalSkin.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			normalSkin.PreserveAspect = true;
			normalSkin = new MobileInputSkin();
			normalSkin.R = 0.0;
			normalSkin.G = 0.0;
			normalSkin.B = 0.0;
			normalSkin.A = 0.38;
			if (g_data_0754791d == false) goto label_05c6a563;
	label_05c6a4c0: ;
			pressedSkin = control.OnSkin;
			if (pressedSkin != null) goto label_05c6a4cd;
	label_05c6a583: ;
			pressedSkin.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pressedSkin.PreserveAspect = true;
			pressedSkin = new MobileInputSkin();
			pressedSkin.R = 1.0;
			pressedSkin.G = 1.0;
			pressedSkin.B = 1.0;
			pressedSkin.A = 0.38;
			shape = control.GetShape();
		}
		if (__this_01 != null) {
			if (pSVar2 == null) {
				pSVar2 = (MobileInput[])new MobileInput[0];
			}
			__this_01._coreInputControls = (List<GameObject>)pSVar2;
			__this_01.Setup((RectTransform)local_38, normalSkin, pressedSkin, shape);
			bVar1 = control.DisableContentMovement;
			__this_01._humanButtons = (List<GameObject>)local_60;
			pMVar3 = local_60;
			*(byte)((long)&__this_01._erenShifterButtons + 1) = bVar1 ^ 1;
			__this_02 = __this_01;
			__this_01.ResetMovingContent();
			if (local_40 != null) {
				pMVar3 = (MethodInfo)control.Label;
				__this_02.RegisterControlDisplayNames(role, control, (String)pMVar3);
				__this_02.RegisterSlideButtons((MobileInputHoldControl)__this_01, local_48);
				return local_50;
			}
		}
	label_05c6a6ab: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600460A")]
	[Address(RVA = "0x5B69C50", Offset = "0x5B68C50", VA = "0x5B69C50")]
	private GameObject CreateHoldControlObject(RectTransform parent, MobileInputControlLayout control, string suffix, List<GameObject> group, out RectTransform holdRect, out RectTransform contentRect)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$CreateHoldControlObject): 15 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		Vector2 anchorMin;
		Vector2 size;
		Vector2 UVar5;
		Vector2 size_00;
		int shape;
		String pSVar6;
		MobileControlsOverlay pUVar7;
		RectTransform pUVar8;
		UnityEngine_Vector2_StaticFields pUVar9;
		GameObject __this_00;
		Image image;
		MobileInputSkin skin;
		MobileControlSkinManager* ppUVar10;
		MobileControlsOverlay __this_01;
		Vector2* __this_02;
		Vector2 anchorMax;
		byte[] auVar11 = new byte[16];
		float fVar12;
		float fVar13;
		Vector2 anchoredPosition;

		if (Il2CppMethodInitialized_075478bb == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasRenderer) ;
			ppUVar10 = &typeof(MobileControlSkinManager);
			Il2CppMethodInitialized_075478bb = true;
			this = (MobileControlsOverlay)ppUVar10;
		}
		UVar5 = this.GetLayoutReferenceSize(parent);
		if (control != null) {
			fVar12 = UVar5.x;
			if (UVar5.y <= UVar5.x) {
				fVar12 = UVar5.y;
			}
			fVar13 = 1.0;
			if (1.0 <= fVar12) {
				fVar13 = fVar12;
			}
			uVar1 = control.Width;
			uVar3 = control.Height;
			auVar11._4_4_ = uVar3;
			auVar11._0_4_ = uVar1;
			auVar11._8_8_ = 0;
			auVar11 = maxps(_DAT_0100a840, auVar11);
			fVar12 = fVar13 * auVar11._0_4_;
			fVar13 = fVar13 * auVar11._4_4_;
			pUVar7 = (MobileControlsOverlay)control.Id;
			pSVar6 = String.Concat((String)pUVar7, suffix);
			UVar5 = pUVar7.GetLayoutReferenceSize(parent);
			uVar2 = control.X;
			uVar4 = control.Y;
			anchoredPosition.x = ((float)uVar2 + -0.5) * UVar5.x;
			anchoredPosition.y = ((float)uVar4 + -0.5) * UVar5.y;
			UVar5.y = fVar13;
			UVar5.x = fVar12;
			pUVar7 = (MobileControlsOverlay)pUVar7.CreateRect(pSVar6, parent, (Vector2)0x3f0000003f000000, (Vector2)0x3f0000003f000000, UVar5, anchoredPosition);
			if (pUVar7 != null) {
				__this_01 = pUVar7;
				pUVar8 = pUVar7.GetComponent<RectTransform>();
				__this_01.RegisterButtonRect(pUVar8, control);
				pUVar7.AddComponent<CanvasRenderer>();
				pUVar7.AddComponent<MobileInputRaycastArea>();
				pSVar6 = control.Id;
				__this_02 = (Vector2*)pUVar7;
				pUVar8 = pUVar7.GetComponent<RectTransform>();
				if (Il2CppMethodInitialized_0753ecc8 == false) {
					__this_02 = &typeof(Vector2);
					Il2CppMethodInitialized_0753ecc8 = true;
				}
				pUVar9 = typeof(Vector2).static_fields;
				anchorMin = (pUVar9.zeroVector);
				if (Il2CppMethodInitialized_07542885 == false) {
					__this_02 = &typeof(Vector2);
					Il2CppMethodInitialized_07542885 = true;
					pUVar9 = typeof(Vector2).static_fields;
					anchorMax = (pUVar9.oneVector);
					if (Il2CppMethodInitialized_0753ecc8 == false) {
						__this_02 = &typeof(Vector2);
						Il2CppMethodInitialized_0753ecc8 = true;
						pUVar9 = typeof(Vector2).static_fields;
					}
				}
				else {
					anchorMax = (pUVar9.oneVector);
				}
				size = (pUVar9.zeroVector);
				__this_00 = __this_02.CreateRect(pSVar6, pUVar8, (Vector2)anchorMin, (Vector2)anchorMax, (Vector2)size, (Vector2)size);
				if (__this_00 != null) {
					pUVar8 = __this_00.GetComponent<RectTransform>();
					*holdRect = pUVar8;
					image = __this_00.AddComponent<Image>();
					skin = control.Skin;
					if (skin == null) {
						skin.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
						skin.PreserveAspect = true;
						skin = new MobileInputSkin();
						skin.R = 0.0;
						skin.G = 0.0;
						skin.B = 0.0;
						skin.A = 0.38;
					}
					shape = control.GetShape();
					MobileControlSkinManager.ApplySkin(image, skin, shape);
					size_00.y = fVar13;
					size_00.x = fVar12;
					pUVar8 = image.AddButtonLabel(*holdRect, control, size_00);
					*contentRect = pUVar8;
					return (GameObject)pUVar7;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600460B")]
	[Address(RVA = "0x5B6A0C0", Offset = "0x5B690C0", VA = "0x5B6A0C0")]
	private void RegisterSlideButtons(MobileInputHoldControl hold, List<GameObject> buttons)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$RegisterSlideButtons): 10 lines keep C-only constructs
		MobileInput[] pSVar1;
		object pIVar2;
		System_Collections_Generic_List_Enumerator_object__o pSVar3;
		bool bVar4;
		MobileInputButton pUVar5;
		RectTransform rectTransform;
		System_Collections_Generic_List_Enumerator_object__o local_68;
		MobileInputHoldControl local_50;
		byte[] local_48 = new byte[16];
		GameObject local_38;

		local_50 = hold;
		local_68._list = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._current = null;
		if (buttons == null) {
			throw new NullReferenceException();
		}
		local_48.GetEnumerator((List<object>)buttons);
		local_68._current = (object)local_38;
		local_68._list = (List<T>)local_48._0_8_;
		local_68._index = local_48._8_4_;
		local_68._version = local_48._12_4_;
		local_48._0_8_ = null;
		local_48._8_8_ = &local_68;
		pSVar3 = &local_68;
		if (local_50 == null) {
			while (true) {
				local_48._8_8_ = pSVar3;
				bVar4 = local_68.MoveNext();
				pIVar2 = local_68._current;
				if (!(bVar4)) break;
				if ((GameObject)local_68._current == null) goto label_05c6a307;
				pUVar5 = local_68._current.GetComponent<MobileInputButton>();
				bVar4 = ((Object)pUVar5 != null);
				pSVar3 = (System_Collections_Generic_List_Enumerator_object__o)local_48._8_8_;
				if (bVar4) {
					if (pUVar5 == null) goto label_05c6a30c;
					pSVar1 = pUVar5._inputs;
					if ((pSVar1 != null) && ((int)pSVar1.Length != 0)) {
						pIVar2.GetComponent<RectTransform>();
						throw new NullReferenceException();
					}
				}
			}
		}
		else {
			while (true) {
				bVar4 = local_68.MoveNext();
				pIVar2 = local_68._current;
				if (!(bVar4)) break;
				if ((GameObject)local_68._current == null) {
	label_05c6a307: ;
					throw new NullReferenceException();
				}
				pUVar5 = local_68._current.GetComponent<MobileInputButton>();
				bVar4 = ((Object)pUVar5 != null);
				if (bVar4) {
					if (pUVar5 == null) {
	label_05c6a30c: ;
						throw new NullReferenceException();
					}
					pSVar1 = pUVar5._inputs;
					if ((pSVar1 != null) && ((int)pSVar1.Length != 0)) {
						rectTransform = pIVar2.GetComponent<RectTransform>();
						local_50.RegisterSlideButton(rectTransform, pUVar5);
					}
				}
			}
		}
		local_68.Dispose();
		return;
	}

	[Token(Token = "0x600460C")]
	[Address(RVA = "0x5B6AEA0", Offset = "0x5B69EA0", VA = "0x5B6AEA0")]
	private void AddGasModeButton(RectTransform parent, MobileInputControlLayout control, List<GameObject> group)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$AddGasModeButton): 14 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		GameObject[] pUVar7;
		Vector2 UVar8;
		Vector2 size;
		int iVar9;
		String name;
		MobileControlsOverlay pUVar10;
		RectTransform pUVar11;
		Image image;
		MobileInputSkin pUVar12;
		MobileGasModeButton __this_00;
		MethodInfo method_00;
		MethodInfo pMVar13;
		String* ppSVar15;
		MobileControlsOverlay __this_01;
		byte[] auVar16 = new byte[16];
		float fVar17;
		float fVar18;
		Vector2 anchoredPosition;

		if (Il2CppMethodInitialized_075478bd == false) {
			ppSVar15 = &"Button";
			Il2CppMethodInitialized_075478bd = true;
			this = (MobileControlsOverlay)ppSVar15;
		}
		UVar8 = this.GetLayoutReferenceSize(parent);
		if (control == null) goto label_05c6b2c8;
		fVar17 = UVar8.x;
		if (UVar8.y <= UVar8.x) {
			fVar17 = UVar8.y;
		}
		fVar18 = 1.0;
		if (1.0 <= fVar17) {
			fVar18 = fVar17;
		}
		uVar2 = control.Width;
		uVar4 = control.Height;
		auVar16._4_4_ = uVar4;
		auVar16._0_4_ = uVar2;
		auVar16._8_8_ = 0;
		auVar16 = maxps(_DAT_0100a840, auVar16);
		fVar17 = fVar18 * auVar16._0_4_;
		fVar18 = fVar18 * auVar16._4_4_;
		pUVar10 = (MobileControlsOverlay)control.Id;
		name = String.Concat((String)pUVar10, "Button");
		UVar8 = pUVar10.GetLayoutReferenceSize(parent);
		uVar3 = control.X;
		uVar5 = control.Y;
		anchoredPosition.x = ((float)uVar3 + -0.5) * UVar8.x;
		anchoredPosition.y = ((float)uVar5 + -0.5) * UVar8.y;
		UVar8.y = fVar18;
		UVar8.x = fVar17;
		pUVar10 = (MobileControlsOverlay)pUVar10.CreateRect(name, parent, (Vector2)0x3f0000003f000000, (Vector2)0x3f0000003f000000, UVar8, anchoredPosition);
		if (group == null) goto label_05c6b2c8;
		piVar1 = &group._version;
		*piVar1 = *piVar1 + 1;
		pUVar7 = group._items;
		if (pUVar7 == null) goto label_05c6b2c8;
		uVar6 = group._size;
		if (uVar6 < (uint)pUVar7.Length) {
			pMVar13 = (MethodInfo)(ulong)(uVar6 + 1);
			group._size = uVar6 + 1;
			pUVar7[(int)uVar6] = (GameObject)pUVar10;
		}
		else {
			group.AddWithResize((object)pUVar10);
		}
		if (pUVar10 == null) goto label_05c6b2c8;
		__this_01 = pUVar10;
		pUVar11 = pUVar10.GetComponent<RectTransform>();
		__this_01.RegisterButtonRect(pUVar11, control);
		image = pUVar10.AddComponent<Image>();
		pUVar12 = control.Skin;
		if (pUVar12 == null) {
			pUVar12.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pUVar12.PreserveAspect = true;
			pUVar12 = new MobileInputSkin();
			pUVar12.R = 0.0;
			pUVar12.G = 0.0;
			pUVar12.B = 0.0;
			pUVar12.A = 0.38;
		}
		iVar9 = control.GetShape();
		MobileControlSkinManager.ApplySkin(image, pUVar12, iVar9);
		__this_00 = pUVar10.AddComponent<MobileGasModeButton>();
		if (Il2CppMethodInitialized_0754791c == false) {
			Il2CppMethodInitialized_0754791c = true;
			pUVar12 = control.Skin;
			if (pUVar12 != null) goto label_05c6b116;
	label_05c6b1df: ;
			pUVar12.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pUVar12.PreserveAspect = true;
			pUVar12 = new MobileInputSkin();
			pUVar12.R = 0.0;
			pUVar12.G = 0.0;
			pUVar12.B = 0.0;
			pUVar12.A = 0.38;
			if (g_data_0754791d != false) goto label_05c6b128;
	label_05c6b243: ;
			g_data_0754791d = true;
			method_00 = (MethodInfo)control.OnSkin;
		}
		else {
			pUVar12 = control.Skin;
			if (pUVar12 == null) goto label_05c6b1df;
	label_05c6b116: ;
			if (g_data_0754791d == false) goto label_05c6b243;
	label_05c6b128: ;
			method_00 = (MethodInfo)control.OnSkin;
		}
		if (method_00 == null) {
			method_00.klass = (Il2CppClass)**(ulong*)(g_data_07556758 + 0xb8);
			*(bool)&method_00.return_type = true;
			method_00 = new MobileInputSkin();
			*(float)&method_00.invoker_method = 1.0;
			*(float)((long)&method_00.invoker_method + 4) = 1.0;
			method_00.name = (sbyte)0x3ec28f5c3f800000;
			iVar9 = control.GetShape();
		}
		else {
			iVar9 = control.GetShape();
		}
		if (__this_00 != null) {
			__this_00._image = image;
			__this_00._offSkin = pUVar12;
			__this_00._onSkin = (MobileInputSkin)method_00;
			__this_00._shape = iVar9;
			__this_00.Refresh();
			pUVar11 = pUVar10.GetComponent<RectTransform>();
			size.y = fVar18;
			size.x = fVar17;
			pUVar10.AddButtonLabel(pUVar11, control, size);
			return;
		}
	label_05c6b2c8: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600460D")]
	[Address(RVA = "0x5B66DD0", Offset = "0x5B65DD0", VA = "0x5B66DD0")]
	private void CreateTitanButtons(RectTransform parent)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$CreateTitanButtons): clean


		this.AddLayoutControls(parent, 2, this._titanButtons);
		return;
	}

	[Token(Token = "0x600460E")]
	[Address(RVA = "0x5B66DE0", Offset = "0x5B65DE0", VA = "0x5B66DE0")]
	private void CreateAnnieShifterButtons(RectTransform parent)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$CreateAnnieShifterButtons): clean


		this.AddLayoutControls(parent, 3, this._annieShifterButtons);
		return;
	}

	[Token(Token = "0x600460F")]
	[Address(RVA = "0x5B66DF0", Offset = "0x5B65DF0", VA = "0x5B66DF0")]
	private void CreateErenShifterButtons(RectTransform parent)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$CreateErenShifterButtons): clean


		this.AddLayoutControls(parent, 4, this._erenShifterButtons);
		return;
	}

	[Token(Token = "0x6004610")]
	[Address(RVA = "0x5B644D0", Offset = "0x5B634D0", VA = "0x5B644D0")]
	private bool IsMapEditorOverlay()
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$IsMapEditorOverlay): clean
		MapEditorMenu x;
		bool bVar1;

		x = this._mapEditorMenu;
		bVar1 = ((Object)x != null);
		return bVar1;
	}

	[Token(Token = "0x6004611")]
	[Address(RVA = "0x5B66270", Offset = "0x5B65270", VA = "0x5B66270")]
	private void AddLayoutControls(RectTransform parent, MobileInputLayoutRole role, List<GameObject> group)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$AddLayoutControls): 24 lines keep C-only constructs
		int piVar1;
		List<MobileInputControlLayout> __this_00;
		String pSVar2;
		MobileInputControlLayout[] pUVar3;
		GameObject[] pUVar4;
		MobileInputControlLayout pUVar6;
		bool bVar7;
		MobileInputLayout pUVar8;
		List<MobileInputControlLayout> __this_01;
		String[] pSVar9;
		GameObject pUVar10;
		uint uVar11;
		ulong uVar12;
		MethodInfo pMVar13;
		ulong uVar14;
		int local_8c;
		MobileControlsOverlay local_88;
		RectTransform local_80;
		byte[] local_78 = new byte[8];
		MobileInputControlLayout local_68;
		byte[] local_58 = new byte[16];
		MobileInputControlLayout local_48;
		uint local_3c;
		List<MobileInputControlLayout> local_38;

		local_88 = this;
		local_80 = parent;
		local_78 = (byte[])0x0;
		local_68 = null;
		if ((typeof(MobileInputLayoutManager)._2).cctor_finished_or_no_cctor == 0) {
			pUVar8 = MobileInputLayoutManager.GetSelectedLayout(role);
		}
		else {
			pUVar8 = MobileInputLayoutManager.GetSelectedLayout(role);
		}
		if (pUVar8 == null) {
			return;
		}
		local_38 = new List<MobileInputControlLayout>();
		__this_01 = new List<MobileInputControlLayout>();
		__this_00 = pUVar8.Controls;
		if (__this_00 != null) {
			local_58.GetEnumerator((List<object>)__this_00);
			local_68 = local_48;
			local_78 = (byte[])local_58._0_8_;
			local_58._0_8_ = null;
			local_58._8_8_ = local_78;
	label_05c66400: ;
			bVar7 = local_78.MoveNext();
			pUVar6 = local_68;
			if (bVar7) {
				if (local_68 == null) {
					throw new NullReferenceException();
				}
				local_3c = 0;
				pSVar2 = pUVar6.Kind;
				pMVar13 = (MethodInfo)&local_3c;
				bVar7 = Enum.TryParse<MobileInputControlKind>(pSVar2, (int)pMVar13);
				uVar11 = 0;
				if (bVar7) {
					uVar11 = local_3c;
				}
				if ((uVar11 & 0xfffffffe) != 6) {
					if ((role != 1) || (uVar11 != 3)) {
						switch(uVar11) {
						case 0x5c6651b:
							pSVar9 = pUVar6.GetActionIds();
							if ((pSVar9 != null) && (0 < (int)pSVar9.Length)) {
								uVar12 = pSVar9.Length & 0xffffffff;
								uVar14 = 0;
								do {
									if (uVar12 <= uVar14) {
										throw new IndexOutOfRangeException();
									}
									bVar7 = (pSVar9[uVar14] != "None");
									pMVar13 = MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_Add;
									if (bVar7) {
										if (local_38 != null) {
											piVar1 = &local_38._version;
											*piVar1 = *piVar1 + 1;
											pUVar3 = local_38._items;
											if (pUVar3 != null) {
												uVar11 = local_38._size;
												if (uVar11 < (uint)pUVar3.Length) {
													local_38._size = uVar11 + 1;
													pUVar3[(int)uVar11] = pUVar6;
												}
												else {
													local_38.AddWithResize((object)pUVar6);
												}
												goto label_05c66400;
											}
										}
										throw new NullReferenceException();
									}
									uVar14 = uVar14 + 1;
									uVar11 = (uint)pSVar9.Length;
									uVar12 = (ulong)uVar11;
								} while ((long)uVar14 < (long)(int)uVar11);
							}
						}
						pUVar10 = local_88.CreateLayoutButton(local_80, pUVar6, role);
						pMVar13 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
						if (group != null) {
							piVar1 = &group._version;
							*piVar1 = *piVar1 + 1;
							pUVar4 = group._items;
							if (pUVar4 != null) {
								uVar11 = group._size;
								if (uVar11 < (uint)pUVar4.Length) {
									group._size = uVar11 + 1;
									pUVar4[(int)uVar11] = pUVar10;
								}
								else {
									group.AddWithResize((object)pUVar10);
								}
								goto label_05c66400;
							}
						}
						throw new NullReferenceException();
					}
					if (__this_01 != null) {
						piVar1 = &__this_01._version;
						*piVar1 = *piVar1 + 1;
						pUVar3 = __this_01._items;
						if (pUVar3 != null) {
							uVar11 = __this_01._size;
							if (uVar11 < (uint)pUVar3.Length) {
								__this_01._size = uVar11 + 1;
								pUVar3[(int)uVar11] = pUVar6;
							}
							else {
								__this_01.AddWithResize((object)pUVar6);
							}
							goto label_05c66400;
						}
					}
					throw new NullReferenceException();
				}
				goto label_05c66400;
			}
			local_78.Dispose();
			if (local_38 != null) {
				local_58.GetEnumerator((List<object>)local_38);
				local_68 = local_48;
				local_78 = (byte[])local_58._0_8_;
				local_58._0_8_ = null;
				local_58._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_78;
				if (group == null) {
					bVar7 = local_78.MoveNext();
					if (bVar7) {
						local_88.CreateLayoutButton(local_80, local_68, role);
	label_05c66c15: ;
						throw new NullReferenceException();
					}
				}
				else {
					while (bVar7 = local_78.MoveNext()) {
						pUVar10 = local_88.CreateLayoutButton(local_80, local_68, role);
						pMVar13 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
						piVar1 = &group._version;
						*piVar1 = *piVar1 + 1;
						pUVar4 = group._items;
						if (pUVar4 == null) goto label_05c66c15;
						uVar11 = group._size;
						if (uVar11 < (uint)pUVar4.Length) {
							group._size = uVar11 + 1;
							pUVar4[(int)uVar11] = pUVar10;
						}
						else {
							group.AddWithResize((object)pUVar10);
						}
					}
				}
				local_78.Dispose();
				if (__this_01 != null) {
					local_58.GetEnumerator((List<object>)__this_01);
					local_68 = local_48;
					local_78 = (byte[])local_58._0_8_;
					local_58._0_8_ = null;
					local_58._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_78;
					if (group == null) {
						while (true) {
							bVar7 = local_78.MoveNext();
							pUVar6 = local_68;
							if (!(bVar7)) break;
							if (local_68 == null) {
	label_05c66baf: ;
								throw new NullReferenceException();
							}
							local_8c = 0;
							pSVar2 = pUVar6.Kind;
							bVar7 = Enum.TryParse<MobileInputControlKind>(pSVar2, ref local_8c);
							if (!bVar7 || local_8c != 3) {
								local_88.CreateHoldButton(local_80, pUVar6, role, null);
	label_05c66bd6: ;
								throw new NullReferenceException();
							}
							local_88.AddHookButton(local_80, pUVar6, role, null);
						}
					}
					else {
						while (true) {
							bVar7 = local_78.MoveNext();
							pUVar6 = local_68;
							if (!(bVar7)) break;
							if (local_68 == null) goto label_05c66baf;
							local_8c = 0;
							pSVar2 = pUVar6.Kind;
							bVar7 = Enum.TryParse<MobileInputControlKind>(pSVar2, ref local_8c);
							if (bVar7 && local_8c == 3) {
								local_88.AddHookButton(local_80, pUVar6, role, group);
							}
							else {
								pUVar10 = local_88.CreateHoldButton(local_80, pUVar6, role, group);
								pMVar13 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
								piVar1 = &group._version;
								*piVar1 = *piVar1 + 1;
								pUVar4 = group._items;
								if (pUVar4 == null) goto label_05c66bd6;
								uVar11 = group._size;
								if (uVar11 < (uint)pUVar4.Length) {
									group._size = uVar11 + 1;
									pUVar4[(int)uVar11] = pUVar10;
								}
								else {
									group.AddWithResize((object)pUVar10);
								}
							}
						}
					}
					local_78.Dispose();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004612")]
	[Address(RVA = "0x5B6B680", Offset = "0x5B6A680", VA = "0x5B6B680")]
	private bool HasButtonAction(string[] actionIds)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$HasButtonAction): clean
		uint uVar1;
		bool bVar2;
		ulong uVar3;
		ulong uVar4;

		if ((actionIds == null) || ((int)actionIds.Length < 1)) {
			return false;
		}
		uVar3 = actionIds.Length & 0xffffffff;
		uVar4 = 0;
		while(true) {
			if (uVar3 <= uVar4) {
				throw new IndexOutOfRangeException();
			}
			bVar2 = (actionIds[uVar4] != "None");
			if (bVar2) break;
			uVar4 = uVar4 + 1;
			uVar1 = (uint)actionIds.Length;
			uVar3 = (ulong)uVar1;
			if ((long)(int)uVar1 <= (long)uVar4) {
				return false;
			}
		}
		return true;
	}

	[Token(Token = "0x6004613")]
	[Address(RVA = "0x5B6A6B0", Offset = "0x5B696B0", VA = "0x5B6A6B0")]
	private MobileInput[] GetControlInputs(MobileInputControlLayout control)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$GetControlInputs): clean
		MobileInput[] pSVar1;

		if (control == null) {
			throw new NullReferenceException();
		}
		if ((typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor == 0) {
			return pSVar1;
		}
		return pSVar1;
	}

	[Token(Token = "0x6004614")]
	[Address(RVA = "0x5B6C0F0", Offset = "0x5B6B0F0", VA = "0x5B6C0F0")]
	private GameObject CreateLayoutButton(RectTransform parent, MobileInputControlLayout control, MobileInputLayoutRole role)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$CreateLayoutButton): 19 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		Vector2 UVar5;
		Vector2 size;
		bool bVar6;
		int iVar7;
		String pSVar8;
		MobileControlsOverlay pUVar9;
		RectTransform pUVar10;
		Image image;
		MobileInputSkin pUVar11;
		String[] actionIds;
		MethodInfo pMVar12;
		uint in_register_0000000c;
		MethodInfo pMVar13;
		sbyte cVar14;
		String* __this_00;
		MobileControlsOverlay pUVar15;
		bool aimAssistOnRelease;
		float fVar16;
		byte[] auVar17 = new byte[16];
		Vector2 anchoredPosition;
		int local_68;
		int local_64;
		MobileInput[] local_60;
		MobileControlsOverlay local_58;
		MobileControlsOverlay local_50;
		float local_48;
		float fStack_44;
		float fStack_40;
		float fStack_3c;

		pMVar13 = (MethodInfo)CONCAT44(in_register_0000000c, role);
		__this_00 = (String*)this;
		if (Il2CppMethodInitialized_075478c2 == false) {
			__this_00 = &"Button";
			Il2CppMethodInitialized_075478c2 = true;
		}
		UVar5 = __this_00.GetLayoutReferenceSize(parent);
		if (control == null) goto label_05c6c58f;
		fVar16 = UVar5.x;
		if (UVar5.y <= UVar5.x) {
			fVar16 = UVar5.y;
		}
		fStack_3c = 1.0;
		if (1.0 <= fVar16) {
			fStack_3c = fVar16;
		}
		uVar1 = control.Width;
		uVar3 = control.Height;
		auVar17._4_4_ = uVar3;
		auVar17._0_4_ = uVar1;
		auVar17._8_8_ = 0;
		auVar17 = maxps(_DAT_0100a840, auVar17);
		local_48 = fStack_3c * auVar17._0_4_;
		fStack_44 = fStack_3c * auVar17._4_4_;
		fStack_40 = fStack_3c * auVar17._8_4_;
		fStack_3c = fStack_3c * auVar17._12_4_;
		pUVar9 = (MobileControlsOverlay)control.Id;
		local_58 = this;
		pSVar8 = String.Concat((String)pUVar9, "Button");
		UVar5 = pUVar9.GetLayoutReferenceSize(parent);
		uVar2 = control.X;
		uVar4 = control.Y;
		anchoredPosition.x = ((float)uVar2 + -0.5) * UVar5.x;
		anchoredPosition.y = ((float)uVar4 + -0.5) * UVar5.y;
		UVar5.y = fStack_44;
		UVar5.x = local_48;
		pUVar9 = (MobileControlsOverlay)pUVar9.CreateRect(pSVar8, parent, (Vector2)0x3f0000003f000000, (Vector2)0x3f0000003f000000, UVar5, anchoredPosition);
		if (pUVar9 == null) goto label_05c6c58f;
		pUVar15 = pUVar9;
		pUVar10 = pUVar9.GetComponent<RectTransform>();
		pUVar15.RegisterButtonRect(pUVar10, control);
		pMVar12 = MethodInfo_UnityEngine_GameObject_AddComponent_Image;
		image = pUVar9.AddComponent<Image>();
		pUVar11 = control.Skin;
		if (pUVar11 == null) {
			pUVar11.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pUVar11.PreserveAspect = true;
			pMVar12 = null;
			pUVar11 = new MobileInputSkin();
			pUVar11.R = 0.0;
			pUVar11.G = 0.0;
			pUVar11.B = 0.0;
			pUVar11.A = 0.38;
		}
		iVar7 = control.GetShape();
		MobileControlSkinManager.ApplySkin(image, pUVar11, iVar7);
		pMVar13 = MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputButton;
		local_50 = (MobileControlsOverlay)pUVar9.AddComponent<MobileInputButton>();
		bVar6 = true;
		if (role == 1) {
			local_68 = 0;
			pSVar8 = control.Kind;
			pMVar13 = (MethodInfo)&local_68;
			bVar6 = Enum.TryParse<MobileInputControlKind>(pSVar8, (int)pMVar13);
			bVar6 = local_68 != 0 && bVar6;
		}
		local_64 = role;
		actionIds = control.GetActionIds();
		cVar14 = false;
		pMVar13 = null;
		local_60 = MobileInputBridge.GetActionInputs(actionIds);
		aimAssistOnRelease = false;
		if (bVar6) {
			if (Il2CppMethodInitialized_0754791c == false) goto label_05c6c499;
	label_05c6c3c8: ;
			pMVar12 = (MethodInfo)control.Skin;
			if (pMVar12 == null) goto label_05c6c4ba;
	label_05c6c3d6: ;
			if (g_data_0754791d == false) goto label_05c6c519;
	label_05c6c3e3: ;
			pUVar11 = control.OnSkin;
		}
		else {
			cVar14 = control.AimAssistOnPress;
			aimAssistOnRelease = control.AimAssistOnRelease != false;
			if (Il2CppMethodInitialized_0754791c != false) goto label_05c6c3c8;
	label_05c6c499: ;
			Il2CppMethodInitialized_0754791c = true;
			pMVar12 = (MethodInfo)control.Skin;
			if (pMVar12 != null) goto label_05c6c3d6;
	label_05c6c4ba: ;
			pMVar12.klass = (Il2CppClass)**(ulong*)(g_data_07556758 + 0xb8);
			*(bool)&pMVar12.return_type = true;
			pMVar13 = null;
			pMVar12 = new MobileInputSkin();
			*(float)&pMVar12.invoker_method = 0.0;
			*(float)((long)&pMVar12.invoker_method + 4) = 0.0;
			pMVar12.name = (sbyte)0x3ec28f5c00000000;
			if (g_data_0754791d != false) goto label_05c6c3e3;
	label_05c6c519: ;
			g_data_0754791d = true;
			pUVar11 = control.OnSkin;
		}
		if (pUVar11 == null) {
			pUVar11.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pUVar11.PreserveAspect = true;
			pMVar13 = null;
			pUVar11 = new MobileInputSkin();
			pUVar11.R = 1.0;
			pUVar11.G = 1.0;
			pUVar11.B = 1.0;
			pUVar11.A = 0.38;
		}
		iVar7 = control.GetShape();
		if ((local_50 != null) &&(pUVar15 = local_50, local_50.Setup(local_60, cVar14 != false, aimAssistOnRelease, (MobileInputSkin)pMVar12, pUVar11, iVar7), local_58 != null)) {
			pMVar13 = (MethodInfo)control.Label;
			pUVar15.RegisterControlDisplayNames(local_64, control, (String)pMVar13);
			pUVar15 = pUVar9;
			pUVar10 = pUVar9.GetComponent<RectTransform>();
			size.y = fStack_44;
			size.x = local_48;
			pUVar15.AddButtonLabel(pUVar10, control, size);
			return (GameObject)pUVar9;
		}
	label_05c6c58f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004615")]
	[Address(RVA = "0x5B6BAE0", Offset = "0x5B6AAE0", VA = "0x5B6BAE0")]
	private GameObject CreateLayoutPopup(RectTransform parent, MobileInputControlLayout control, MobileInputLayoutRole role)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$CreateLayoutPopup): 34 lines keep C-only constructs
		System_Collections_Generic_List_Enumerator_T__o __return_storage_ptr__;
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		List<MobileInputControlLayout> __this_00;
		Vector2 UVar5;
		Vector2 size;
		_union_13 parent_00;
		bool bVar6;
		int iVar7;
		int iVar8;
		String pSVar9;
		MobileControlsOverlay pUVar10;
		RectTransform pUVar11;
		Image pUVar12;
		MobileInputSkin pUVar13;
		MobileControlsOverlay pUVar14;
		MobileInputSkin __this_01;
		GameObject __this_02;
		MobileInputButton button;
		uint in_register_0000000c;
		MethodInfo pMVar15;
		String* ppSVar16;
		MobileControlsOverlay __this_03;
		float fVar17;
		byte[] auVar18 = new byte[16];
		Vector2 anchoredPosition;
		byte[] local_88 = new byte[40];
		MobileInputControlLayout local_58;
		_union_13 local_50;
		_union_14 local_48;
		float fStack_40;
		float fStack_3c;

		pMVar15 = (MethodInfo)CONCAT44(in_register_0000000c, role);
		local_88._24_8_ = this;
		if (Il2CppMethodInitialized_075478c3 == false) {
			ppSVar16 = &"Popup";
			Il2CppMethodInitialized_075478c3 = true;
			this = (MobileControlsOverlay)ppSVar16;
		}
		local_88._32_8_ = null;
		local_58 = null;
		UVar5 = this.GetLayoutReferenceSize(parent);
		if (control == null) goto label_05c6c07d;
		fVar17 = UVar5.x;
		if (UVar5.y <= UVar5.x) {
			fVar17 = UVar5.y;
		}
		fStack_3c = 1.0;
		if (1.0 <= fVar17) {
			fStack_3c = fVar17;
		}
		uVar1 = control.Width;
		uVar3 = control.Height;
		auVar18._4_4_ = uVar3;
		auVar18._0_4_ = uVar1;
		auVar18._8_8_ = 0;
		auVar18 = maxps(_DAT_0100a840, auVar18);
		local_48._0_4_ = fStack_3c * auVar18._0_4_;
		local_48._4_4_ = fStack_3c * auVar18._4_4_;
		fStack_40 = fStack_3c * auVar18._8_4_;
		fStack_3c = fStack_3c * auVar18._12_4_;
		pUVar10 = (MobileControlsOverlay)control.Id;
		pSVar9 = String.Concat((String)pUVar10, "Popup");
		UVar5 = pUVar10.GetLayoutReferenceSize(parent);
		uVar2 = control.X;
		uVar4 = control.Y;
		anchoredPosition.x = ((float)uVar2 + -0.5) * UVar5.x;
		anchoredPosition.y = ((float)uVar4 + -0.5) * UVar5.y;
		UVar5.y = (float)local_48._4_4_;
		UVar5.x = (float)local_48._0_4_;
		pUVar10 = (MobileControlsOverlay)pUVar10.CreateRect(pSVar9, parent, (Vector2)0x3f0000003f000000, (Vector2)0x3f0000003f000000, UVar5, anchoredPosition);
		if (pUVar10 == null) goto label_05c6c07d;
		pUVar14 = pUVar10;
		pUVar11 = pUVar10.GetComponent<RectTransform>();
		pUVar14.RegisterButtonRect(pUVar11, control);
		pUVar12 = pUVar10.AddComponent<Image>();
		pUVar13 = control.Skin;
		if (pUVar13 == null) {
			pUVar13.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pUVar13.PreserveAspect = true;
			pUVar13 = new MobileInputSkin();
			pUVar13.R = 0.0;
			pUVar13.G = 0.0;
			pUVar13.B = 0.0;
			pUVar13.A = 0.38;
		}
		iVar7 = control.GetShape();
		MobileControlSkinManager.ApplySkin(pUVar12, pUVar13, iVar7);
		pUVar14 = (MobileControlsOverlay)pUVar10.AddComponent<MobileInputPopupButton>();
		local_88._0_8_ = (ulong)(uint)local_88._4_4_ << 0x20;
		pSVar9 = control.PopupMode;
		local_50.rgctx_data = (Il2CppRGCTXData)parent;
		pMVar15 = (MethodInfo)local_88;
		bVar6 = Enum.TryParse<MobileInputPopupMode>(pSVar9, (int)pMVar15);
		local_88._16_8_ = pUVar10;
		if (bVar6) {
			iVar7 = local_88._0_4_;
			if (Il2CppMethodInitialized_0754791c == false) goto label_05c6bde1;
	label_05c6bd92: ;
			pUVar13 = control.Skin;
			if (pUVar13 != null) goto label_05c6bd9b;
	label_05c6bdfd: ;
			pUVar13.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pUVar13.PreserveAspect = true;
			pMVar15 = null;
			pUVar13 = new MobileInputSkin();
			pUVar13.R = 0.0;
			pUVar13.G = 0.0;
			pUVar13.B = 0.0;
			pUVar13.A = 0.38;
			if (g_data_0754791d == false) goto label_05c6be59;
	label_05c6bda8: ;
			__this_01 = control.OnSkin;
			if (__this_01 != null) goto label_05c6bdb5;
	label_05c6be79: ;
			__this_01.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			__this_01.PreserveAspect = true;
			pMVar15 = null;
			__this_01 = new MobileInputSkin();
			__this_01.R = 1.0;
			__this_01.G = 1.0;
			__this_01.B = 1.0;
			__this_01.A = 0.38;
			iVar8 = control.GetShape();
		}
		else {
			iVar7 = 0;
			if (Il2CppMethodInitialized_0754791c != false) goto label_05c6bd92;
	label_05c6bde1: ;
			Il2CppMethodInitialized_0754791c = true;
			pUVar13 = control.Skin;
			if (pUVar13 == null) goto label_05c6bdfd;
	label_05c6bd9b: ;
			if (g_data_0754791d != false) goto label_05c6bda8;
	label_05c6be59: ;
			g_data_0754791d = true;
			__this_01 = control.OnSkin;
			if (__this_01 == null) goto label_05c6be79;
	label_05c6bdb5: ;
			iVar8 = control.GetShape();
		}
		if (pUVar14 != null) {
			*(int)&pUVar14._mapEditorMenu = iVar7;
			pUVar14._buttonsLayer = (RectTransform)pUVar13;
			pUVar14._generalButtons = (List<GameObject>)__this_01;
			*(int)&pUVar14._humanButtons = iVar8;
			pUVar12 = pUVar14.GetComponent<Image>();
			*(Image*)&pUVar14._visible = pUVar12;
			pUVar10 = pUVar14;
			pUVar14.SetOpen(false);
			if ((MobileControlsOverlay)local_88._24_8_ != null) {
				pMVar15 = (MethodInfo)control.Label;
				pUVar10.RegisterControlDisplayNames(role, control, (String)pMVar15);
				pUVar10 = (MobileControlsOverlay)local_88._16_8_;
				__this_03 = (MobileControlsOverlay)local_88._16_8_;
				pUVar11 = local_88._16_8_.GetComponent<RectTransform>() ;
				size.y = (float)local_48._4_4_;
				size.x = (float)local_48._0_4_;
				__this_03.AddButtonLabel(pUVar11, control, size);
				parent_00.methodMetadataHandle = local_50.methodMetadataHandle;
				__this_00 = control.Children;
				if (__this_00 != null) {
					__return_storage_ptr__ = (System_Collections_Generic_List_Enumerator_T__o)(local_88 + 0x20);
					__return_storage_ptr__.GetEnumerator((List<object>)__this_00);
					local_88._0_8_ = (Il2CppMethodPointer)0x0;
					local_88._8_8_ = __return_storage_ptr__;
					while (bVar6 = __return_storage_ptr__.MoveNext()) {
						pMVar15 = (MethodInfo)(ulong)(uint)role;
						__this_02 = local_88._24_8_.CreatePopupChildButton((RectTransform)parent_00.rgctx_data, control, local_58, role);
						if (__this_02 == null) {
							throw new NullReferenceException();
						}
						pUVar11 = __this_02.GetComponent<RectTransform>();
						button = __this_02.GetComponent<MobileInputButton>();
						pUVar14.RegisterChild(__this_02, pUVar11, button);
					}
					((local_88 + 0x20)).Dispose();
					pUVar10 = (MobileControlsOverlay)local_88._16_8_;
				}
				return (GameObject)pUVar10;
			}
		}
	label_05c6c07d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004616")]
	[Address(RVA = "0x5B6C7B0", Offset = "0x5B6B7B0", VA = "0x5B6C7B0")]
	private GameObject CreatePopupChildButton(RectTransform parent, MobileInputControlLayout popupControl, MobileInputControlLayout childControl, MobileInputLayoutRole role)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$CreatePopupChildButton): 15 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		Vector2 UVar7;
		Vector2 UVar8;
		Vector2 UVar9;
		int iVar10;
		String name;
		MobileControlsOverlay pUVar11;
		RectTransform pUVar12;
		Image image;
		MobileInputSkin pUVar13;
		MobileControlsOverlay pUVar14;
		String[] actionIds;
		MobileInput[] inputs;
		MethodInfo method_00;
		sbyte cVar15;
		MethodInfo pMVar16;
		String* ppSVar17;
		byte[] auVar18 = new byte[16];
		float fVar19;
		float local_78;
		float fStack_74;
		Vector2 local_58;

		if (Il2CppMethodInitialized_075478c4 == false) {
			ppSVar17 = &"Button";
			Il2CppMethodInitialized_075478c4 = true;
			this = (MobileControlsOverlay)ppSVar17;
		}
		UVar7 = this.GetLayoutReferenceSize(parent);
		if (childControl == null) goto label_05c6cc3f;
		uVar1 = childControl.Width;
		uVar4 = childControl.Height;
		auVar18._4_4_ = uVar4;
		auVar18._0_4_ = uVar1;
		pUVar11 = (MobileControlsOverlay)childControl.Id;
		name = String.Concat((String)pUVar11, "Button");
		UVar8 = pUVar11.GetLayoutReferenceSize(parent);
		UVar9 = pUVar11.GetLayoutReferenceSize(parent);
		if (popupControl == null) goto label_05c6cc3f;
		local_58.x = UVar7.x;
		local_58.y = UVar7.y;
		if (local_58.y <= local_58.x) {
			local_58.x = local_58.y;
		}
		local_58.y = 1.0;
		if (1.0 <= local_58.x) {
			local_58.y = local_58.x;
		}
		auVar18._8_8_ = 0;
		auVar18 = maxps(_DAT_0100a840, auVar18);
		local_58.x = local_58.y * auVar18._0_4_;
		local_58.y = local_58.y * auVar18._4_4_;
		local_78 = UVar8.x;
		fStack_74 = UVar8.y;
		if (fStack_74 <= local_78) {
			local_78 = fStack_74;
		}
		fVar19 = 1.0;
		if (1.0 <= local_78) {
			fVar19 = local_78;
		}
		uVar2 = popupControl.X;
		uVar5 = popupControl.Y;
		uVar3 = childControl.X;
		uVar6 = childControl.Y;
		UVar7.y = local_58.y;
		UVar7.x = local_58.x;
		UVar8.y = fVar19 * (float)uVar6 + UVar9.y * ((float)uVar5 + -0.5);
		UVar8.x = fVar19 * (float)uVar3 + UVar9.x * ((float)uVar2 + -0.5);
		pUVar11 = (MobileControlsOverlay)pUVar11.CreateRect(name, parent, (Vector2)0x3f0000003f000000, (Vector2)0x3f0000003f000000, UVar7, UVar8);
		if (pUVar11 == null) goto label_05c6cc3f;
		pUVar14 = pUVar11;
		pUVar12 = pUVar11.GetComponent<RectTransform>();
		pUVar14.RegisterButtonRect(pUVar12, childControl);
		pMVar16 = MethodInfo_UnityEngine_GameObject_AddComponent_Image;
		image = pUVar11.AddComponent<Image>();
		pUVar13 = childControl.Skin;
		if (pUVar13 == null) {
			pUVar13.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pUVar13.PreserveAspect = true;
			pMVar16 = null;
			pUVar13 = new MobileInputSkin();
			pUVar13.R = 0.0;
			pUVar13.G = 0.0;
			pUVar13.B = 0.0;
			pUVar13.A = 0.38;
		}
		iVar10 = childControl.GetShape();
		MobileControlSkinManager.ApplySkin(image, pUVar13, iVar10);
		pMVar16 = MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputButton;
		pUVar14 = (MobileControlsOverlay)pUVar11.AddComponent<MobileInputButton>() ;
		actionIds = childControl.GetActionIds();
		cVar15 = false;
		inputs = MobileInputBridge.GetActionInputs(actionIds);
		pMVar16 = null;
		if (role == 1) {
			cVar15 = childControl.AimAssistOnPress;
			pMVar16 = (MethodInfo)(ulong)(childControl.AimAssistOnRelease != false);
			if (Il2CppMethodInitialized_0754791c != false) goto label_05c6ca5a;
	label_05c6cb3f: ;
			Il2CppMethodInitialized_0754791c = true;
			method_00 = (MethodInfo)childControl.Skin;
			if (method_00 != null) goto label_05c6ca6d;
	label_05c6cb65: ;
			method_00.klass = (Il2CppClass)**(ulong*)(g_data_07556758 + 0xb8);
			*(bool)&method_00.return_type = true;
			method_00 = new MobileInputSkin();
			*(float)&method_00.invoker_method = 0.0;
			*(float)((long)&method_00.invoker_method + 4) = 0.0;
			method_00.name = (sbyte)0x3ec28f5c00000000;
			if (g_data_0754791d != false) goto label_05c6ca7d;
	label_05c6cbc7: ;
			g_data_0754791d = true;
			pUVar13 = childControl.OnSkin;
		}
		else {
			if (Il2CppMethodInitialized_0754791c == false) goto label_05c6cb3f;
	label_05c6ca5a: ;
			method_00 = (MethodInfo)childControl.Skin;
			if (method_00 == null) goto label_05c6cb65;
	label_05c6ca6d: ;
			if (g_data_0754791d == false) goto label_05c6cbc7;
	label_05c6ca7d: ;
			pUVar13 = childControl.OnSkin;
		}
		if (pUVar13 == null) {
			pUVar13.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pUVar13.PreserveAspect = true;
			pUVar13 = new MobileInputSkin();
			pUVar13.R = 1.0;
			pUVar13.G = 1.0;
			pUVar13.B = 1.0;
			pUVar13.A = 0.38;
		}
		iVar10 = childControl.GetShape();
		if (pUVar14 != null) {
			pUVar14.Setup(inputs, cVar15 != false, SUB81(pMVar16, 0), (MobileInputSkin)method_00, pUVar13, iVar10);
			pMVar16 = (MethodInfo)pUVar14.GetPopupChildDisplayName(popupControl, childControl);
			pUVar14.RegisterControlDisplayNames(role, childControl, (String)pMVar16);
			pUVar14 = pUVar11;
			pUVar12 = pUVar11.GetComponent<RectTransform>();
			pUVar14.AddButtonLabel(pUVar12, childControl, local_58);
			pUVar11.SetActive(false);
			return (GameObject)pUVar11;
		}
	label_05c6cc3f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004617")]
	[Address(RVA = "0x5B6B700", Offset = "0x5B6A700", VA = "0x5B6B700")]
	private GameObject CreateLayoutToggle(RectTransform parent, MobileInputControlLayout control, MobileInputLayoutRole role)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$CreateLayoutToggle): 11 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		Vector2 UVar5;
		Vector2 size;
		int shape;
		uint shape_00;
		String name;
		MobileControlsOverlay pUVar6;
		RectTransform pUVar7;
		Image image;
		MobileInputSkin pUVar8;
		MobileControlsOverlay pUVar9;
		String[] actionIds;
		MobileInput[] inputs;
		MobileInputSkin onSkin;
		uint in_register_0000000c;
		MethodInfo pMVar10;
		MethodInfo pMVar11;
		String* __this_00;
		byte[] auVar12 = new byte[16];
		float fVar13;
		float fVar14;
		Vector2 anchoredPosition;

		pMVar10 = (MethodInfo)CONCAT44(in_register_0000000c, role);
		__this_00 = (String*)this;
		if (Il2CppMethodInitialized_075478c5 == false) {
			__this_00 = &"Toggle";
			Il2CppMethodInitialized_075478c5 = true;
		}
		UVar5 = __this_00.GetLayoutReferenceSize(parent);
		if (control == null) goto label_05c6badb;
		fVar13 = UVar5.x;
		if (UVar5.y <= UVar5.x) {
			fVar13 = UVar5.y;
		}
		fVar14 = 1.0;
		if (1.0 <= fVar13) {
			fVar14 = fVar13;
		}
		uVar1 = control.Width;
		uVar3 = control.Height;
		auVar12._4_4_ = uVar3;
		auVar12._0_4_ = uVar1;
		auVar12._8_8_ = 0;
		auVar12 = maxps(_DAT_0100a840, auVar12);
		fVar13 = fVar14 * auVar12._0_4_;
		fVar14 = fVar14 * auVar12._4_4_;
		pUVar6 = (MobileControlsOverlay)control.Id;
		name = String.Concat((String)pUVar6, "Toggle");
		UVar5 = pUVar6.GetLayoutReferenceSize(parent);
		uVar2 = control.X;
		uVar4 = control.Y;
		anchoredPosition.x = ((float)uVar2 + -0.5) * UVar5.x;
		anchoredPosition.y = ((float)uVar4 + -0.5) * UVar5.y;
		UVar5.y = fVar14;
		UVar5.x = fVar13;
		pUVar6 = (MobileControlsOverlay)pUVar6.CreateRect(name, parent, (Vector2)0x3f0000003f000000, (Vector2)0x3f0000003f000000, UVar5, anchoredPosition);
		if (pUVar6 == null) goto label_05c6badb;
		pUVar9 = pUVar6;
		pUVar7 = pUVar6.GetComponent<RectTransform>();
		pUVar9.RegisterButtonRect(pUVar7, control);
		pMVar11 = MethodInfo_UnityEngine_GameObject_AddComponent_Image;
		image = pUVar6.AddComponent<Image>();
		pUVar8 = control.Skin;
		if (pUVar8 == null) {
			pUVar8.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pUVar8.PreserveAspect = true;
			pMVar11 = null;
			pUVar8 = new MobileInputSkin();
			pUVar8.R = 0.0;
			pUVar8.G = 0.0;
			pUVar8.B = 0.0;
			pUVar8.A = 0.38;
		}
		shape = control.GetShape();
		MobileControlSkinManager.ApplySkin(image, pUVar8, shape);
		pUVar9 = (MobileControlsOverlay)pUVar6.AddComponent<MobileInputToggleButton>();
		actionIds = control.GetActionIds();
		inputs = MobileInputBridge.GetActionInputs(actionIds);
		if (Il2CppMethodInitialized_0754791c == false) {
			Il2CppMethodInitialized_0754791c = true;
			pUVar8 = control.Skin;
			if (pUVar8 == null) goto label_05c6b99f;
	label_05c6b953: ;
			if (g_data_0754791d != false) goto label_05c6b960;
	label_05c6b9fe: ;
			g_data_0754791d = true;
			onSkin = control.OnSkin;
			if (onSkin == null) goto label_05c6ba1e;
	label_05c6b96d: ;
			shape_00 = control.GetShape();
		}
		else {
			pUVar8 = control.Skin;
			if (pUVar8 != null) goto label_05c6b953;
	label_05c6b99f: ;
			pUVar8.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pUVar8.PreserveAspect = true;
			pUVar8 = new MobileInputSkin();
			pUVar8.R = 0.0;
			pUVar8.G = 0.0;
			pUVar8.B = 0.0;
			pUVar8.A = 0.38;
			if (g_data_0754791d == false) goto label_05c6b9fe;
	label_05c6b960: ;
			onSkin = control.OnSkin;
			if (onSkin != null) goto label_05c6b96d;
	label_05c6ba1e: ;
			onSkin.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			onSkin.PreserveAspect = true;
			onSkin = new MobileInputSkin();
			onSkin.R = 1.0;
			onSkin.G = 1.0;
			onSkin.B = 1.0;
			onSkin.A = 0.38;
			shape_00 = control.GetShape();
		}
		if (pUVar9 != null) {
			pUVar9.Setup(inputs, pUVar8, onSkin, shape_00);
			if (this != null) {
				pMVar11 = (MethodInfo)control.Label;
				pUVar9.RegisterControlDisplayNames(role, control, (String)pMVar11);
				pUVar9 = pUVar6;
				pUVar7 = pUVar6.GetComponent<RectTransform>();
				size.y = fVar14;
				size.x = fVar13;
				pUVar9.AddButtonLabel(pUVar7, control, size);
				return (GameObject)pUVar6;
			}
		}
	label_05c6badb: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004618")]
	[Address(RVA = "0x5B6A090", Offset = "0x5B69090", VA = "0x5B6A090")]
	private void RegisterControlDisplayNames(MobileInputLayoutRole role, MobileInputControlLayout control)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$RegisterControlDisplayNames): clean
		String displayName;

		if (control == null) {
			displayName = null;
		}
		else {
			displayName = control.Label;
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this.RegisterControlDisplayNames(role, control, displayName);
		return;
	}

	[Token(Token = "0x6004619")]
	[Address(RVA = "0x5B6CF80", Offset = "0x5B6BF80", VA = "0x5B6CF80")]
	private void RegisterControlDisplayNames(MobileInputLayoutRole role, MobileInputControlLayout control, string displayName)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$RegisterControlDisplayNames): 2 lines keep C-only constructs
		String value;
		bool bVar1;
		String[] actionIds;
		uint in_register_00000034;
		MethodInfo method_00;
		int local_2c;

		method_00 = (MethodInfo)CONCAT44(in_register_00000034, role);
		if (control != null) {
			actionIds = control.GetActionIds();
			MobileInputBridge.RegisterActionDisplayNames(actionIds, role, displayName);
			local_2c = 0;
			value = control.Kind;
			bVar1 = Enum.TryParse<MobileInputControlKind>(value, ref local_2c);
			if ((bVar1) && (local_2c == 3)) {
				MobileInputBridge.RegisterActionDisplayName("Human.HookLeft", role, displayName);
				MobileInputBridge.RegisterActionDisplayName("Human.HookRight", role, displayName);
			}
		}
		return;
	}

	[Token(Token = "0x600461A")]
	[Address(RVA = "0x5B6CED0", Offset = "0x5B6BED0", VA = "0x5B6CED0")]
	private string GetPopupChildDisplayName(MobileInputControlLayout popupControl, MobileInputControlLayout childControl)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$GetPopupChildDisplayName): clean
		bool bVar1;
		String pSVar2;

		if (popupControl != null) {
			bVar1 = String.IsNullOrWhiteSpace(popupControl.Label);
			if (!bVar1) {
				if (childControl != null) {
					bVar1 = String.IsNullOrWhiteSpace(childControl.Label);
					if (!bVar1) {
						pSVar2 = String.Concat(popupControl.Label, "[", childControl.Label, "]");
						return pSVar2;
					}
				}
				return popupControl.Label;
			}
		}
		if (childControl == null) {
			return null;
		}
		return childControl.Label;
	}

	[Token(Token = "0x600461B")]
	[Address(RVA = "0x5B68D90", Offset = "0x5B67D90", VA = "0x5B68D90")]
	private void RegisterMoveJoystickDisplayNames(MobileInputLayoutRole role)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$RegisterMoveJoystickDisplayNames): 1 lines keep C-only constructs
		uint uVar1;
		String pSVar2;
		String pSVar3;
		String pSVar4;
		MethodInfo pMVar5;
		MobileControlsOverlay pUVar6;
		Enum SStack_38;

		SStack_38.klass = (Enum)typeof(MobileInputControlKind);
		SStack_38.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_38.ToString();
		if (Il2CppMethodInitialized_07547966 == false) {
			Il2CppMethodInitialized_07547966 = true;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pMVar5 = (MethodInfo *)"";
		pSVar2 = UIManager.GetLocale("SettingsPopup", "MobileLayout.Kind", pSVar2, "", pSVar2);
		pUVar6 = (MobileControlsOverlay)(ulong)(uint)role;
		pSVar3 = MobileInputBindingRegistry.GetMovementId(role, "Forward");
		pSVar4 = pUVar6.GetMoveJoystickDisplayName(pSVar2, "Forward");
		MobileInputBridge.RegisterActionDisplayName(pSVar3, role, pSVar4);
		pUVar6 = (MobileControlsOverlay)(ulong)(uint)role;
		pSVar3 = MobileInputBindingRegistry.GetMovementId(role, "Back");
		pSVar4 = pUVar6.GetMoveJoystickDisplayName(pSVar2, "Back");
		MobileInputBridge.RegisterActionDisplayName(pSVar3, role, pSVar4);
		pUVar6 = (MobileControlsOverlay)(ulong)(uint)role;
		pSVar3 = MobileInputBindingRegistry.GetMovementId(role, "Left");
		pSVar4 = pUVar6.GetMoveJoystickDisplayName(pSVar2, "Left");
		MobileInputBridge.RegisterActionDisplayName(pSVar3, role, pSVar4);
		pUVar6 = (MobileControlsOverlay)(ulong)(uint)role;
		pSVar3 = MobileInputBindingRegistry.GetMovementId(role, "Right");
		pSVar2 = pUVar6.GetMoveJoystickDisplayName(pSVar2, "Right");
		MobileInputBridge.RegisterActionDisplayName(pSVar3, role, pSVar2);
		return;
	}

	[Token(Token = "0x600461C")]
	[Address(RVA = "0x5B6D240", Offset = "0x5B6C240", VA = "0x5B6D240")]
	private string GetMoveJoystickDisplayName(string joystickName, string direction)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$GetMoveJoystickDisplayName): clean
		String pSVar1;

		pSVar1 = UIManager.GetLocale("MapEditorSettings", "Keybinds", direction, "", "");
		pSVar1 = String.Concat(joystickName, "[", pSVar1, "]");
		return pSVar1;
	}

	[Token(Token = "0x600461D")]
	[Address(RVA = "0x5B67DB0", Offset = "0x5B66DB0", VA = "0x5B67DB0")]
	private Vector2 GetLayoutPosition(RectTransform parent, MobileInputControlLayout control)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$GetLayoutPosition): clean
		uint uVar1;
		uint uVar2;
		Vector2 UVar3;
		Vector2 UVar4;

		UVar3 = this.GetLayoutReferenceSize(parent);
		if (control == null) {
			throw new NullReferenceException();
		}
		uVar1 = control.X;
		uVar2 = control.Y;
		UVar4.x = UVar3.x * ((float)uVar1 + -0.5);
		UVar4.y = UVar3.y * ((float)uVar2 + -0.5);
		return (Vector2)UVar4;
	}

	[Token(Token = "0x600461E")]
	[Address(RVA = "0x5B6CE50", Offset = "0x5B6BE50", VA = "0x5B6CE50")]
	private Vector2 GetPopupChildLayoutPosition(RectTransform parent, MobileInputControlLayout popupControl, MobileInputControlLayout childControl)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$GetPopupChildLayoutPosition): clean
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		Vector2 UVar5;
		Vector2 UVar6;
		float fVar7;
		float fStack_28;
		float fStack_24;

		UVar5 = this.GetLayoutReferenceSize(parent);
		UVar6 = this.GetLayoutReferenceSize(parent);
		if ((popupControl == null) ||(childControl == null)) {
			throw new NullReferenceException();
		}
		fStack_28 = UVar5.x;
		fStack_24 = UVar5.y;
		if (fStack_24 <= fStack_28) {
			fStack_28 = fStack_24;
		}
		fVar7 = 1.0;
		if (1.0 <= fStack_28) {
			fVar7 = fStack_28;
		}
		uVar1 = popupControl.X;
		uVar3 = popupControl.Y;
		uVar2 = childControl.X;
		uVar4 = childControl.Y;
		UVar5.y = fVar7 * (float)uVar4 + UVar6.y * ((float)uVar3 + -0.5);
		UVar5.x = fVar7 * (float)uVar2 + UVar6.x * ((float)uVar1 + -0.5);
		return (Vector2)UVar5;
	}

	[Token(Token = "0x600461F")]
	[Address(RVA = "0x5B67D60", Offset = "0x5B66D60", VA = "0x5B67D60")]
	private Vector2 GetLayoutSize(RectTransform parent, MobileInputControlLayout control)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$GetLayoutSize): 7 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		Vector2 UVar3;
		float fVar4;
		float fVar5;
		byte[] auVar6 = new byte[16];

		UVar3 = this.GetLayoutReferenceSize(parent);
		if (control == null) {
			throw new NullReferenceException();
		}
		fVar4 = UVar3.x;
		if (UVar3.y <= UVar3.x) {
			fVar4 = UVar3.y;
		}
		fVar5 = 1.0;
		if (1.0 <= fVar4) {
			fVar5 = fVar4;
		}
		uVar1 = control.Width;
		uVar2 = control.Height;
		auVar6._4_4_ = uVar2;
		auVar6._0_4_ = uVar1;
		auVar6._8_8_ = 0;
		auVar6 = maxps(_DAT_0100a840, auVar6);
		UVar3.y = fVar5 * auVar6._4_4_;
		UVar3.x = fVar5 * auVar6._0_4_;
		return (Vector2)UVar3;
	}

	[Token(Token = "0x6004620")]
	[Address(RVA = "0x5B6D310", Offset = "0x5B6C310", VA = "0x5B6D310")]
	private Vector2 GetLayoutReferenceSize(RectTransform rect)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$GetLayoutReferenceSize): 12 lines keep C-only constructs
		Vector2 UVar1;
		bool bVar2;
		Canvas __this_00;
		float fVar3;
		float fVar4;
		byte[] auVar5 = new byte[16];
		Rect UVar6;
		byte[] local_28 = new byte[16];

		if (rect == null) {
	label_05c6d42a: ;
			throw new NullReferenceException();
		}
		__this_00 = rect.GetComponentInParent<Canvas>();
		bVar2 = ((Object)__this_00 == null);
		if (!bVar2) {
			if (__this_00 == null) goto label_05c6d42a;
			fVar3 = __this_00.scaleFactor;
			local_28._8_4_ = 0;
			local_28._12_4_ = 0;
			if (0.0 < fVar3) {
				UVar6 = __this_00.pixelRect;
				local_28._0_8_ = UVar6._8_8_;
				fVar3 = __this_00.scaleFactor;
				auVar5._4_4_ = fVar3;
				auVar5._0_4_ = fVar3;
				auVar5._8_4_ = fVar3;
				auVar5._12_4_ = fVar3;
				auVar5 = divps(local_28, auVar5);
				fVar3 = auVar5._0_4_;
				fVar4 = auVar5._4_4_;
				goto label_05c6d3ed;
			}
		}
		UVar6 = rect.rect;
		fVar3 = UVar6.m_Width;
		fVar4 = UVar6.m_Height;
		if ((typeof(Rect)._2).cctor_finished_or_no_cctor == 0) {
			return (Vector2)UVar6._8_8_;
		}
	label_05c6d3ed: ;
		UVar1.y = fVar4;
		UVar1.x = fVar3;
		return (Vector2)UVar1;
	}

	[Token(Token = "0x6004621")]
	[Address(RVA = "0x5B68430", Offset = "0x5B67430", VA = "0x5B68430")]
	private void RegisterButtonRect(RectTransform rect, MobileInputControlLayout control)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$RegisterButtonRect): clean
		bool bVar1;
		MobileInputLookAreaForwarder x;
		GameObject __this_00;

		bVar1 = ((Object)rect == null);
		if (((control == null) || (bVar1)) ||(control.AllowLookAreaThrough == false)) {
			return;
		}
		if (rect != null) {
			x = rect.GetComponent<MobileInputLookAreaForwarder>();
			bVar1 = ((Object)x == null);
			if (!bVar1) {
				return;
			}
			__this_00 = rect.gameObject;
			if (__this_00 != null) {
				__this_00.AddComponent<MobileInputLookAreaForwarder>();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004622")]
	[Address(RVA = "0x5B6A7C0", Offset = "0x5B697C0", VA = "0x5B6A7C0")]
	private RectTransform AddButtonLabel(RectTransform parent, MobileInputControlLayout control, Vector2 size)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$AddButtonLabel): 14 lines keep C-only constructs
		Vector2 anchorMin;
		Vector2 UVar1;
		uint uVar2;
		GeneralSettings pSVar3;
		BoolSetting pSVar4;
		String pSVar5;
		Vector2 anchorMax;
		Color UVar6;
		Color UVar7;
		bool bVar8;
		UnityEngine_Vector2_StaticFields pUVar9;
		GameObject __this_00;
		Transform parent_00;
		TMP_Text __this_01;
		MobileInputSkin __this_02;
		Image __this_03;
		Sprite value;
		RectTransform pUVar10;
		MethodInfo pMVar11;
		String* ppSVar12;
		Vector2* __this_04;
		MethodInfo method_00;
		double x;
		double dVar13;
		Vector2 value_00;
		byte[] auVar14 = new byte[12];
		float fVar15;
		float fVar16;
		float local_68;
		float fStack_64;
		Il2CppMethodPointer local_40;
		Vector2 local_38;

		__this_04 = (Vector2*)this;
		if (Il2CppMethodInitialized_075478cc == false) {
			ppSVar12 = &"Label";
			Il2CppMethodInitialized_075478cc = true;
			__this_04 = (Vector2*)ppSVar12;
		}
		if (Il2CppMethodInitialized_0753ecc8 == false) {
			__this_04 = &typeof(Vector2);
			Il2CppMethodInitialized_0753ecc8 = true;
		}
		pUVar9 = typeof(Vector2).static_fields;
		anchorMin = (pUVar9.zeroVector);
		if (Il2CppMethodInitialized_07542885 == false) {
			__this_04 = &typeof(Vector2);
			Il2CppMethodInitialized_07542885 = true;
			pUVar9 = typeof(Vector2).static_fields;
			UVar1 = (pUVar9.oneVector);
			fVar15 = UVar1.x;
			fVar16 = UVar1.y;
			if (Il2CppMethodInitialized_0753ecc8 == false) {
				__this_04 = &typeof(Vector2);
				local_38 = UVar1;
				Il2CppMethodInitialized_0753ecc8 = true;
				pUVar9 = typeof(Vector2).static_fields;
				fVar15 = local_38.x;
				fVar16 = local_38.y;
			}
		}
		else {
			UVar1 = (pUVar9.oneVector);
			fVar15 = UVar1.x;
			fVar16 = UVar1.y;
		}
		UVar1 = (pUVar9.zeroVector);
		anchorMax.y = fVar16;
		anchorMax.x = fVar15;
		__this_00 = __this_04.CreateRect("Label", parent, (Vector2)anchorMin, anchorMax, (Vector2)UVar1, (Vector2)UVar1);
		if (control == null) goto label_05c6ad39;
		if (Il2CppMethodInitialized_07547923 == false) {
			Il2CppMethodInitialized_07547923 = true;
			__this_02 = control.Icon;
		}
		else {
			__this_02 = control.Icon;
		}
		if (__this_02 == null) {
			__this_02.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			__this_02.PreserveAspect = true;
			__this_02 = new MobileInputSkin();
			__this_02.R = 1.0;
			__this_02.G = 1.0;
			__this_02.B = 1.0;
			__this_02.A = 0.9;
		}
		pSVar3 = SettingsManager.GeneralSettings;
		local_68 = size.x;
		fStack_64 = size.y;
		if (pSVar3 == null) {
	label_05c6a94f: ;
			bVar8 = String.IsNullOrWhiteSpace(__this_02.Image);
			if (!bVar8) {
				if (__this_00 != null) {
					pMVar11 = MethodInfo_UnityEngine_GameObject_AddComponent_Image;
					__this_03 = __this_00.AddComponent<Image>();
					pSVar5 = __this_02.Image;
					value = MobileControlSkinManager.GetSprite(pSVar5);
					if (__this_03 != null) {
						__this_03.sprite = value;
						__this_03.preserveAspect = __this_02.PreserveAspect;
						UVar7.r = __this_02.R;
						UVar7.g = __this_02.G;
						UVar7.b = __this_02.B;
						UVar7.a = __this_02.A;
						__this_03.set_color(UVar7);
						__this_03.set_raycastTarget(false);
						pUVar10 = __this_00.GetComponent<RectTransform>();
						if (pUVar10 != null) {
							if (fStack_64 <= local_68) {
								local_68 = fStack_64;
							}
							fVar15 = control.IconSize;
							fVar16 = 2.0;
							if (fVar15 <= 2.0) {
								fVar16 = fVar15;
							}
							value_00.x =(float)(~-(uint)(0.0 <= fVar15) & 0x3f800000 | (uint)(1.0 - fVar16) & -(uint)(0.0 <= fVar15)) * local_68 * 0.5;
							value_00.y = value_00.x;
							pUVar10.offsetMin = value_00;
							pUVar10.offsetMax = (Vector2)((ulong)value_00 ^ 0x8000000080000000);
							return pUVar10;
						}
					}
				}
				goto label_05c6ad39;
			}
		}
		else {
			pSVar4 = pSVar3.MobileButtonIcons;
			if (pSVar4 == null) goto label_05c6ad39;
			if (pSVar4._value != false) goto label_05c6a94f;
		}
		if (__this_00 != null) {
			parent_00 = __this_00.transform;
			pSVar5 = control.Label;
			__this_01 = AottgMobileUi.AddText(parent_00, pSVar5);
			if (__this_01 != null) {
				__this_01.set_text(control.Label);
				__this_01.alignment = 0x202;
				UVar6.r = __this_02.R;
				UVar6.g = __this_02.G;
				UVar6.b = __this_02.B;
				UVar6.a = __this_02.A;
				pMVar11 = (__this_01.klass.vtable)._23_set_color.method;
				__this_01.set_color(UVar6);
				if (fStack_64 <= local_68) {
					local_68 = fStack_64;
				}
				local_68 = local_68 * 0.28;
				auVar14 = ZEXT812(0x41f00000);
				if (local_68 <= auVar14._0_4_) {
					auVar14._4_8_ = auVar14._4_8_;
					auVar14._0_4_ = local_68;
				}
				local_68 = (float)(~-(uint)(18.0 <= local_68) & 0x41900000 | auVar14._0_4_ & -(uint)(18.0 <= local_68));
				if (Il2CppMethodInitialized_07541320 == false) {
					Il2CppMethodInitialized_07541320 = true;
					uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				x = (double)local_68;
				method_00 = (MethodInfo)&local_40;
				dVar13 = modf(x, (double)method_00, pMVar11);
				if (0.0 <= local_68) {
					if ((dVar13 != 0.5) || (NAN(dVar13))) {
						local_40 = (Il2CppMethodPointer)floor(x + 0.5, method_00);
					}
					else if (((long)(double)local_40 & 1U) != 0) {
						local_40 = (Il2CppMethodPointer)((double)local_40 + 1.0);
					}
				}
				else if ((dVar13 != -0.5) || (NAN(dVar13))) {
					local_40 = (Il2CppMethodPointer)ceil(x + -0.5, method_00);
				}
				else if (((long)(double)local_40 & 1U) != 0) {
					local_40 = (Il2CppMethodPointer)((double)local_40 + -1.0);
				}
				__this_01.fontSize = (float)(int)(double)local_40;
				__this_01.set_raycastTarget(false);
				pUVar10 = __this_00.GetComponent<RectTransform>() ;
				return pUVar10;
			}
		}
	label_05c6ad39: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004623")]
	[Address(RVA = "0x5B638E0", Offset = "0x5B628E0", VA = "0x5B638E0")]
	private GameObject CreateRect(string name, RectTransform parent, Vector2 anchorMin, Vector2 anchorMax, Vector2 size, Vector2 anchoredPosition)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$CreateRect): clean
		Vector2 UVar1;
		GameObject __this_00;
		RectTransform __this_01;
		UnityEngine_Vector2_StaticFields pUVar2;
		float local_58;
		float fStack_54;
		float local_48;
		float fStack_44;

		__this_00 = AottgMobileUi.CreateRect((Transform)parent, name);
		if (__this_00 != null) {
			__this_01 = __this_00.GetComponent<RectTransform>() ;
			if (__this_01 != null) {
				__this_01.SetParent((Transform)parent, false);
				__this_01.anchorMin = anchorMin;
				__this_01.anchorMax = anchorMax;
				__this_01.sizeDelta = size;
				__this_01.anchoredPosition = anchoredPosition;
				pUVar2 = typeof(Vector2).static_fields;
				UVar1 = (pUVar2.zeroVector);
				local_48 = anchorMin.x;
				fStack_44 = anchorMin.y;
				local_48 = local_48 - UVar1.x;
				fStack_44 = fStack_44 - UVar1.y;
				if (fStack_44 * fStack_44 + local_48 * local_48 < 9.9999994e-11) {
					if (Il2CppMethodInitialized_07542885 == false) {
						Il2CppMethodInitialized_07542885 = true;
						pUVar2 = typeof(Vector2).static_fields;
					}
					UVar1 = (pUVar2.oneVector);
					local_58 = anchorMax.x;
					fStack_54 = anchorMax.y;
					local_58 = local_58 - UVar1.x;
					fStack_54 = fStack_54 - UVar1.y;
					if (fStack_54 * fStack_54 + local_58 * local_58 < 9.9999994e-11) {
						if (Il2CppMethodInitialized_0753ecc8 == false) {
							Il2CppMethodInitialized_0753ecc8 = true;
							pUVar2 = typeof(Vector2).static_fields;
						}
						__this_01.offsetMin = (Vector2)(pUVar2.zeroVector);
						__this_01.offsetMax = (Vector2)(Vector2.zeroVector);
					}
				}
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004624")]
	[Address(RVA = "0x5B67E20", Offset = "0x5B66E20", VA = "0x5B67E20")]
	private Vector2 ScalePosition(Vector2 position)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$ScalePosition): clean
		float fVar1;
		Vector2 UVar2;
		float local_18;
		float fStack_14;

		fVar1 = this.GetReferenceScale();
		fVar1 = (float)((uint)fVar1 & -(uint)(0.0 < fVar1) | ~-(uint)(0.0 < fVar1) & 0x3f800000);
		local_18 = position.x;
		fStack_14 = position.y;
		UVar2.x = fVar1 * local_18;
		UVar2.y = fVar1 * fStack_14;
		return (Vector2)UVar2;
	}

	[Token(Token = "0x6004625")]
	[Address(RVA = "0x5B67DE0", Offset = "0x5B66DE0", VA = "0x5B67DE0")]
	private Vector2 ScaleSize(Vector2 size)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$ScaleSize): clean
		float fVar1;
		Vector2 UVar2;
		float fStack_18;
		float fStack_14;

		fVar1 = this.GetReferenceScale();
		fVar1 = (float)((uint)fVar1 & -(uint)(0.0 < fVar1) | ~-(uint)(0.0 < fVar1) & 0x3f800000);
		fStack_18 = size.x;
		fStack_14 = size.y;
		UVar2.x = fVar1 * fStack_18;
		UVar2.y = fVar1 * fStack_14;
		return (Vector2)UVar2;
	}

	[Token(Token = "0x6004626")]
	[Address(RVA = "0x5B6D670", Offset = "0x5B6C670", VA = "0x5B6D670")]
	private Vector2 ScaleReferenceVector(Vector2 value)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$ScaleReferenceVector): clean
		float fVar1;
		Vector2 UVar2;
		float local_18;
		float fStack_14;

		fVar1 = this.GetReferenceScale();
		fVar1 = (float)((uint)fVar1 & -(uint)(0.0 < fVar1) | ~-(uint)(0.0 < fVar1) & 0x3f800000);
		local_18 = value.x;
		fStack_14 = value.y;
		UVar2.x = fVar1 * local_18;
		UVar2.y = fVar1 * fStack_14;
		return (Vector2)UVar2;
	}

	[Token(Token = "0x6004627")]
	[Address(RVA = "0x5B685A0", Offset = "0x5B675A0", VA = "0x5B685A0")]
	private float ScaleReferenceLength(float value)
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$ScaleReferenceLength): clean
		float fVar1;

		fVar1 = this.GetReferenceScale();
		return fVar1 * value;
	}

	[Token(Token = "0x6004628")]
	[Address(RVA = "0x5B6D6B0", Offset = "0x5B6C6B0", VA = "0x5B6D6B0")]
	private float GetReferenceScale()
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$GetReferenceScale): 9 lines keep C-only constructs
		bool bVar1;
		RectTransform rect;
		InGameMenu pUVar2;
		ulong extraout_XMM0_Qb;
		byte[] auVar3 = new byte[16];
		byte[] auVar4 = new byte[16];

		pUVar2 = this._menu;
		bVar1 = ((Object)pUVar2 != null);
		if (bVar1) {
			pUVar2 = this._menu;
		}
		else {
			pUVar2 = (InGameMenu)this._mapEditorMenu;
		}
		if (pUVar2 == null) {
			throw new NullReferenceException();
		}
		rect = pUVar2.GetComponent<RectTransform>();
		auVar3._0_8_ = pUVar2.GetLayoutReferenceSize(rect);
		auVar3._8_8_ = extraout_XMM0_Qb;
		auVar4 = divps(auVar3, _DAT_0100a420);
		if (auVar4._4_4_ <= auVar4._0_4_) {
			auVar4._0_4_ = auVar4._4_4_;
		}
		return auVar4._0_4_;
	}

	[Token(Token = "0x6004629")]
	[Address(RVA = "0x5B6D750", Offset = "0x5B6C750", VA = "0x5B6D750")]
	public MobileControlsOverlay()
	{
		// Lifted from source/cpp/UI/MobileControlsOverlay.c (UI.MobileControlsOverlay$$.ctor): clean
		List<GameObject> pSVar1;
		List<MobileInputJoystick> __this_00;

		pSVar1 = new List<GameObject>();
		this._generalButtons = pSVar1;
		pSVar1 = new List<GameObject>();
		this._humanButtons = pSVar1;
		pSVar1 = new List<GameObject>();
		this._titanButtons = pSVar1;
		pSVar1 = new List<GameObject>();
		this._annieShifterButtons = pSVar1;
		pSVar1 = new List<GameObject>();
		this._erenShifterButtons = pSVar1;
		pSVar1 = new List<GameObject>();
		this._mapEditorButtons = pSVar1;
		pSVar1 = new List<GameObject>();
		this._coreInputControls = pSVar1;
		__this_00 = new List<MobileInputJoystick>();
		this._moveJoysticks = __this_00;
		this._coreLayoutRole = 1;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MobileControlsOverlay.c.

	// UI.MobileControlsOverlay.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new MobileControlsOverlay.c();
		MobileControlsOverlay.c.__9 = (MobileControlsOverlay.c)__this;
		return;
	}

	// UI.MobileControlsOverlay.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// UI.MobileControlsOverlay.<>c$$<RebuildCoreControls>b__35_0: clean
	private bool c__RebuildCoreControls_b__35_0(MobileInputControlLayout x)
	{
		String value;
		bool bVar1;
		int local_c;

		if (x == null) {
			throw new NullReferenceException();
		}
		local_c = 0;
		value = x.Kind;
		bVar1 = Enum.TryParse<MobileInputControlKind>(value, ref local_c);
		return bVar1 && local_c == 6;
	}

	// UI.MobileControlsOverlay.<>c$$<RebuildCoreControls>b__35_1: clean
	private bool c__RebuildCoreControls_b__35_1(MobileInputControlLayout x)
	{
		String value;
		bool bVar1;
		int local_c;

		if (x == null) {
			throw new NullReferenceException();
		}
		local_c = 0;
		value = x.Kind;
		bVar1 = Enum.TryParse<MobileInputControlKind>(value, ref local_c);
		return bVar1 && local_c == 7;
	}
}
