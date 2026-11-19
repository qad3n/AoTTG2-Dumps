// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.BasePlayerController
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/BasePlayerController.c
// Prior real C# source (older reference): Assets/Scripts/Controllers/BasePlayerController.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Characters;
using GameManagers;
using Il2CppDummyDll;
using Settings;
using UI;
using UnityEngine;

namespace Controllers;

[Token(Token = "0x2000679")]
internal class BasePlayerController : MonoBehaviour
{
	[Token(Token = "0x4001CC4")]
	[FieldOffset(Offset = "0x20")]
	protected GeneralInputSettings _generalInput;

	[Token(Token = "0x4001CC5")]
	[FieldOffset(Offset = "0x28")]
	protected InteractionInputSettings _interactionInput;

	[Token(Token = "0x4001CC6")]
	[FieldOffset(Offset = "0x30")]
	protected InGameMenu _inGameMenu;

	[Token(Token = "0x4001CC7")]
	[FieldOffset(Offset = "0x38")]
	protected BaseCharacter _character;

	[Token(Token = "0x4001CC8")]
	[FieldOffset(Offset = "0x40")]
	protected InGameManager _gameManager;

	[Token(Token = "0x4001CC9")]
	[FieldOffset(Offset = "0x48")]
	protected bool _autorun;

	[Token(Token = "0x4001CCA")]
	[FieldOffset(Offset = "0x49")]
	public bool HideCursor;

	[Token(Token = "0x4001CCB")]
	[FieldOffset(Offset = "0x50")]
	private string[] _quickSelectOptions;

	[Token(Token = "0x6003E4A")]
	[Address(RVA = "0x5A9A060", Offset = "0x5A99060", VA = "0x5A9A060", Slot = "4")]
	protected virtual void Awake()
	{
		// Lifted from source/cpp/Controllers/BasePlayerController.c (Controllers.BasePlayerController$$Awake): 4 lines keep C-only constructs
		byte bVar1;
		InputSettings pSVar2;
		BaseCharacter pCVar3;
		InGameManager pGVar4;
		InGameMenu pUVar5;

		pSVar2 = SettingsManager.InputSettings;
		if (pSVar2 == null) {
	label_05b9a268: ;
			throw new NullReferenceException();
		}
		this._generalInput = pSVar2.General;
		pSVar2 = SettingsManager.InputSettings;
		if (pSVar2 == null) goto label_05b9a268;
		this._interactionInput = pSVar2.Interaction;
		pCVar3 = this.GetComponent<BaseCharacter>();
		this._character = pCVar3;
		if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			pUVar5 = (InGameMenu)UIManager.CurrentMenu;
			if (pUVar5 != null) goto label_05b9a15b;
	label_05b9a1d0: ;
			this._inGameMenu = null;
		}
		else {
			pUVar5 = (InGameMenu)UIManager.CurrentMenu;
			if (pUVar5 == null) goto label_05b9a1d0;
	label_05b9a15b: ;
			pGVar4 = (InGameManager)typeof(InGameMenu);
			bVar1 = (typeof(InGameMenu)._2).typeHierarchyDepth;
			if (((((BaseGameManager)pUVar5.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseGameManager)pUVar5.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameMenu))) goto label_05b9a242;
			this._inGameMenu = pUVar5;
			if (((((BaseGameManager)pUVar5.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseGameManager)pUVar5.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=(Il2CppClass)pGVar4)) goto label_05b9a242;
		}
		pGVar4 = typeof(InGameManager);
		pUVar5 = (InGameMenu)SceneLoader.CurrentGameManager;
		if (pUVar5 == null) {
			this._gameManager = null;
	label_05b9a255: ;
			return;
		}
		bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
		if ((bVar1 <= (((BaseGameManager)pUVar5.klass)._2).typeHierarchyDepth) &&((((BaseGameManager)pUVar5.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(InGameManager))) {
			this._gameManager = (InGameManager)pUVar5;
			if ((bVar1 <= (((BaseGameManager)pUVar5.klass)._2).typeHierarchyDepth) &&((((BaseGameManager)pUVar5.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==(Il2CppClass)pGVar4)) goto label_05b9a255;
		}
	label_05b9a242: ;
		throw new InvalidCastException();
	}

	[Token(Token = "0x6003E4B")]
	[Address(RVA = "0x5A9E1C0", Offset = "0x5A9D1C0", VA = "0x5A9E1C0", Slot = "5")]
	protected virtual void Start()
	{
		// Lifted from source/cpp/Controllers/BasePlayerController.c (Controllers.BasePlayerController$$Start): clean
		return;
	}

	[Token(Token = "0x6003E4C")]
	[Address(RVA = "0x5A9E1D0", Offset = "0x5A9D1D0", VA = "0x5A9E1D0", Slot = "6")]
	protected virtual void Update()
	{
		// Lifted from source/cpp/Controllers/BasePlayerController.c (Controllers.BasePlayerController$$Update): clean
		InGameManager pGVar1;
		bool bVar2;
		bool bVar3;

		pGVar1 = this._gameManager;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		if (pGVar1.GlobalPause != false) {
			return;
		}
		bVar2 = InGameMenu.InMenu();
		if (!bVar2) {
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
				bVar2 = ChatManager.IsChatActive();
			}
			else {
				bVar2 = ChatManager.IsChatActive();
			}
			if (!bVar2) {
				if (((typeof(CustomLogicManager))._2).cctor_finished_or_no_cctor == 0) {
				}
				bVar2 = CustomLogicManager.Cutscene;
				this.UpdateMovementInput(bVar2);
				this.UpdateMenuInput(false);
				bVar3 = true;
				if (bVar2 == false) {
					bVar3 = InGameMenu.InMenu();
				}
				goto label_05b9e268;
			}
		}
		this.UpdateMovementInput(true);
		this.UpdateMenuInput(false);
		bVar3 = true;
	label_05b9e268: ;
		this.UpdateActionInput(bVar3);
		this.UpdateUI(bVar3);
		return;
	}

	[Token(Token = "0x6003E4D")]
	[Address(RVA = "0x5A9A8D0", Offset = "0x5A998D0", VA = "0x5A9A8D0", Slot = "7")]
	protected virtual void UpdateActionInput(bool inMenu)
	{
		// Lifted from source/cpp/Controllers/BasePlayerController.c (Controllers.BasePlayerController$$UpdateActionInput): 3 lines keep C-only constructs
		bool pbVar1;
		byte bVar2;
		uint uVar3;
		BaseCharacter pCVar4;
		InputSettings pSVar5;
		InteractionInputSettings pSVar6;
		OrderedDictionary __this_00;
		List<BaseUseable> pSVar7;
		GeneralInputSettings pSVar8;
		bool bVar9;
		String[] pSVar10;
		KeybindSetting pSVar11;
		ulong uVar12;

		if (inMenu) {
			return;
		}
		pCVar4 = this._character;
		if (pCVar4 != null) {
			if (pCVar4.Dead != false) {
				return;
			}
			pSVar10 = this._quickSelectOptions;
			if (pSVar10 != null) {
				uVar12 = 0;
				while (true) {
					uVar3 = (uint)pSVar10.Length;
					if (!((long)uVar12 < (long)(int)uVar3)) break;
					if (uVar3 <= uVar12) {
						throw new IndexOutOfRangeException();
					}
					pSVar5 = SettingsManager.InputSettings;
					if ((((pSVar5 == null) ||(pSVar6 = pSVar5.Interaction, pSVar6 == null)) ||(__this_00 = pSVar6.Settings, __this_00 == null)) ||(pSVar11 = (KeybindSetting)__this_00.get_Item((object)pSVar10[uVar12]), pSVar11 == null)) goto label_05b9aa7d;
					bVar2 = (typeof(KeybindSetting)._2).typeHierarchyDepth;
					if (((pSVar11.klass._2).typeHierarchyDepth < bVar2) ||((pSVar11.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(KeybindSetting))) {
						throw new InvalidCastException();
					}
					bVar9 = pSVar11.GetKeyDown(false);
					if (bVar9) {
						pCVar4 = this._character;
						if ((pCVar4 == null) ||(pSVar7 = pCVar4.Items, pSVar7 == null )) goto label_05b9aa7d;
						if ((long)uVar12 < (long)pSVar7._size) {
							pCVar4.UseItem((int32_t)uVar12);
						}
					}
					uVar12 = uVar12 + 1;
					pSVar10 = this._quickSelectOptions;
					if (pSVar10 == null) goto label_05b9aa7d;
				}
				pSVar5 = SettingsManager.InputSettings;
				if (((pSVar5 != null) &&(pSVar8 = pSVar5.General, pSVar8 != null)) &&(pSVar11 = pSVar8.HideCursor, pSVar11 != null)) {
					bVar9 = pSVar11.GetKeyDown(false);
					if (bVar9) {
						pbVar1 = &this.HideCursor;
						*pbVar1 = (bool)(*pbVar1 ^ 1);
						return;
					}
					return;
				}
			}
		}
	label_05b9aa7d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E4E")]
	[Address(RVA = "0x5A9E570", Offset = "0x5A9D570", VA = "0x5A9E570", Slot = "8")]
	protected virtual void UpdateMovementInput(bool inMenu)
	{
		// Lifted from source/cpp/Controllers/BasePlayerController.c (Controllers.BasePlayerController$$UpdateMovementInput): 2 lines keep C-only constructs
		bool pbVar1;
		GeneralInputSettings pSVar2;
		KeybindSetting pSVar3;
		BaseCamera pCVar4;
		BaseComponentCache pUVar5;
		Transform __this_00;
		uint uVar6;
		bool bVar7;
		bool bVar8;
		uint uVar9;
		int iVar10;
		BaseCharacter pCVar11;
		int iVar12;
		uint uVar13;
		float fVar14;
		Vector3 UVar15;
		Vector3 euler;
		float fStack_44;
		Quaternion UStack_38;

		if (inMenu) {
			if (this._autorun != false) {
				return;
			}
			pCVar11 = this._character;
		}
		else {
			pSVar2 = this._generalInput;
			if ((pSVar2 == null) ||(pSVar3 = pSVar2.Autorun, pSVar3 == null)) goto label_05b9e7b9;
			bVar7 = pSVar3.GetKeyDown(false);
			if (bVar7) {
				pbVar1 = &this._autorun;
				*pbVar1 = (bool)(*pbVar1 ^ 1);
			}
			pSVar2 = this._generalInput;
			if ((pSVar2 == null) ||(pSVar3 = pSVar2.Forward, pSVar3 == null)) goto label_05b9e7b9;
			bVar7 = pSVar3.GetKey(false);
			if (bVar7) {
				iVar12 = 1;
				bVar7 = true;
			}
			else {
				pSVar2 = this._generalInput;
				if ((pSVar2 == null) ||(pSVar3 = pSVar2.Back, pSVar3 == null)) goto label_05b9e7b9;
				bVar7 = pSVar3.GetKey(false);
				iVar12 = -(uint)bVar7;
			}
			pSVar2 = this._generalInput;
			if ((pSVar2 == null) ||(pSVar3 = pSVar2.Left, pSVar3 == null)) goto label_05b9e7b9;
			bVar8 = pSVar3.GetKey(false);
			uVar6 = 0xffffffff;
			if (bVar8) {
	label_05b9e6aa: ;
				uVar9 = uVar6;
				this._autorun = false;
				bVar7 = true;
	label_05b9e6b2: ;
				uVar13 = uVar9;
			}
			else {
				pSVar2 = this._generalInput;
				if ((pSVar2 == null) ||(pSVar3 = pSVar2.Right, pSVar3 == null)) goto label_05b9e7b9;
				uVar13 = 0;
				bVar8 = pSVar3.GetKey(false);
				uVar9 = (uint)bVar8;
				uVar6 = (uint)bVar8;
				if ((bVar7 | bVar8) == 1) goto label_05b9e6aa;
				bVar7 = this._autorun == false;
				if (bVar7) goto label_05b9e6b2;
			}
			iVar10 = 1;
			if (bVar7) {
				iVar10 = iVar12;
			}
			pCVar11 = this._character;
			if (iVar10 != 0 || uVar13 != 0) {
				pCVar4 = SceneLoader.CurrentCamera;
				if (((pCVar4 == null) ||(pUVar5 = pCVar4.Cache, pUVar5 == null)) ||(__this_00 = pUVar5.Transform, __this_00 == null)) goto label_05b9e7b9;
				UStack_38 = __this_00.rotation;
				UVar15 = Quaternion.Internal_ToEulerRad(ref UStack_38);
				euler.x = UVar15.x * 57.29578;
				euler.y = UVar15.y * 57.29578;
				euler.z = UVar15.z * 57.29578;
				UVar15 = Quaternion.Internal_MakePositive(euler);
				fVar14 = atan2f((float)iVar10, (float)(int)uVar13);
				if (pCVar11 == null) goto label_05b9e7b9;
				fStack_44 = UVar15.y;
				pCVar11.TargetAngle = fVar14 * -57.29578 + fStack_44 + 90.0;
				pCVar11 = this._character;
				bVar7 = true;
				if (pCVar11 == null) goto label_05b9e7b9;
				goto label_05b9e792;
			}
		}
		if (pCVar11 == null) {
	label_05b9e7b9: ;
			throw new NullReferenceException();
		}
		bVar7 = false;
	label_05b9e792: ;
		pCVar11.HasDirection = bVar7;
		return;
	}

	[Token(Token = "0x6003E4F")]
	[Address(RVA = "0x5A9E310", Offset = "0x5A9D310", VA = "0x5A9E310")]
	protected void UpdateMenuInput(bool inMenu)
	{
		// Lifted from source/cpp/Controllers/BasePlayerController.c (Controllers.BasePlayerController$$UpdateMenuInput): clean
		sbyte cVar1;
		BaseCharacter pCVar2;
		InGameMenu pUVar3;
		EmoteHandler pUVar4;
		ItemHandler pUVar5;
		ActionHandler pUVar6;
		InteractionInputSettings pSVar7;
		KeybindSetting pSVar8;
		bool bVar9;

		if (Il2CppMethodInitialized_0754745f == false) {
			Il2CppMethodInitialized_0754745f = true;
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) goto label_05b9e375;
	label_05b9e333: ;
			bVar9 = ChatManager.IsChatActive();
		}
		else {
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor != 0) goto label_05b9e333;
	label_05b9e375: ;
			bVar9 = ChatManager.IsChatActive();
		}
		if (!bVar9) {
			if (((typeof(CustomLogicManager))._2).cctor_finished_or_no_cctor == 0) {
				cVar1 = CustomLogicManager.Cutscene;
			}
			else {
				cVar1 = *(sbyte)((long)(typeof(CustomLogicManager)).static_fields + 0x48);
			}
			if (cVar1 == false) {
				pCVar2 = this._character;
				if (pCVar2 == null) goto label_05b9e563;
				if (pCVar2.Dead == false) {
					pSVar7 = this._interactionInput;
					if ((pSVar7 != null) &&(pSVar8 = pSVar7.EmoteMenu, pSVar8 != null)) {
						bVar9 = pSVar8.GetKeyDown(false);
						if (bVar9) {
							pUVar3 = this._inGameMenu;
							if ((pUVar3 == null) ||(pUVar4 = pUVar3.EmoteHandler, pUVar4 == null)) goto label_05b9e563;
							pUVar4.ToggleEmoteWheel();
						}
						pSVar7 = this._interactionInput;
						if ((pSVar7 != null) &&(pSVar8 = pSVar7.ItemMenu, pSVar8 != null)) {
							bVar9 = pSVar8.GetKeyDown(false);
							if (bVar9) {
								pUVar3 = this._inGameMenu;
								if ((pUVar3 == null) ||(pUVar5 = pUVar3.ItemHandler, pUVar5 == null)) goto label_05b9e563;
								pUVar5.ToggleItemWheel();
							}
							pSVar7 = this._interactionInput;
							if ((pSVar7 != null) &&(pSVar8 = pSVar7.ActionMenu, pSVar8 != null)) {
								bVar9 = pSVar8.GetKeyDown(false);
								if (bVar9) {
									pUVar3 = this._inGameMenu;
									if ((pUVar3 == null) ||(pUVar6 = pUVar3.ActionHandler, pUVar6 == null)) goto label_05b9e563;
									pUVar6.ToggleActionWheel();
								}
								pSVar7 = this._interactionInput;
								if ((pSVar7 != null) &&(pSVar8 = pSVar7.MenuNext, pSVar8 != null)) {
									bVar9 = pSVar8.GetKeyDown(false);
									if (!bVar9) {
										return;
									}
									pUVar3 = this._inGameMenu;
									if ((pUVar3 != null) &&(pUVar4 = pUVar3.EmoteHandler, pUVar4 != null)) {
										pUVar4.NextEmoteWheel();
										return;
									}
								}
							}
						}
					}
					goto label_05b9e563;
				}
			}
		}
		pUVar3 = this._inGameMenu;
		if ((pUVar3 != null) &&(pUVar4 = pUVar3.EmoteHandler, pUVar4 != null)) {
			pUVar4.SetEmoteWheel(false);
			pUVar3 = this._inGameMenu;
			if ((pUVar3 != null) &&(pUVar5 = pUVar3.ItemHandler, pUVar5 != null)) {
				pUVar5.SetItemWheel(false);
				pUVar3 = this._inGameMenu;
				if ((pUVar3 != null) &&(pUVar6 = pUVar3.ActionHandler, pUVar6 != null)) {
					pUVar6.SetActionWheel(false);
					return;
				}
			}
		}
	label_05b9e563: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E50")]
	[Address(RVA = "0x5A9E7C0", Offset = "0x5A9D7C0", VA = "0x5A9E7C0", Slot = "9")]
	protected virtual void UpdateUI(bool inMenu)
	{
		// Lifted from source/cpp/Controllers/BasePlayerController.c (Controllers.BasePlayerController$$UpdateUI): clean
		return;
	}

	[Token(Token = "0x6003E51")]
	[Address(RVA = "0x5A9E7D0", Offset = "0x5A9D7D0", VA = "0x5A9E7D0")]
	protected float GetTargetAngle(int forward, int right)
	{
		// Lifted from source/cpp/Controllers/BasePlayerController.c (Controllers.BasePlayerController$$GetTargetAngle): clean
		BaseCamera pCVar1;
		BaseComponentCache pUVar2;
		Transform __this_00;
		float fVar3;
		Vector3 UVar4;
		Vector3 euler;
		Quaternion local_20;

		pCVar1 = SceneLoader.CurrentCamera;
		if (((pCVar1 == null) ||(pUVar2 = pCVar1.Cache, pUVar2 == null)) ||(__this_00 = pUVar2.Transform, __this_00 == null)) {
			throw new NullReferenceException();
		}
		local_20 = __this_00.rotation;
		UVar4 = Quaternion.Internal_ToEulerRad(ref local_20);
		euler.x = UVar4.x * 57.29578;
		euler.y = UVar4.y * 57.29578;
		euler.z = UVar4.z * 57.29578;
		UVar4 = Quaternion.Internal_MakePositive(euler);
		fVar3 = atan2f((float)forward, (float)right);
		return (UVar4.y + 90.0) - fVar3 * 57.29578;
	}

	[Token(Token = "0x6003E52")]
	[Address(RVA = "0x5A9AD80", Offset = "0x5A99D80", VA = "0x5A9AD80")]
	protected float[] GetAimAngles()
	{
		// Lifted from source/cpp/Controllers/BasePlayerController.c (Controllers.BasePlayerController$$GetAimAngles): 15 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		int iVar4;
		BaseCamera pCVar5;
		Camera __this_00;
		BaseCharacter pCVar6;
		BaseComponentCache pUVar7;
		Transform __this_01;
		byte[] auVar8 = new byte[16];
		Single[] pSVar9;
		UnityEngine_Vector3_StaticFields __return_storage_ptr__;
		float fVar10;
		float fVar11;
		uint uVar12;
		uint extraout_XMM0_Db;
		byte[] auVar13 = new byte[16];
		float fVar14;
		float fVar15;
		Vector3 UVar16;
		float local_58;
		float fStack_54;
		Vector3 local_30;
		ulong local_24;
		float local_1c;

		pCVar5 = SceneLoader.CurrentCamera;
		if (pCVar5 == null) goto label_05b9b143;
		__this_00 = pCVar5.Camera;
		UVar16 = CursorManager.GetInGameMousePosition();
		if (__this_00 == null) goto label_05b9b143;
		__return_storage_ptr__ = (UnityEngine_Vector3_StaticFields)&local_30;
		__return_storage_ptr__.ScreenPointToRay(__this_00, UVar16);
		local_58 = (float)local_24;
		fStack_54 = (float)(local_24 >> 0x20);
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			local_30.x = 0.0;
			local_30.y = 0.0;
			if (Il2CppMethodInitialized_0753e729 != false) goto label_05b9ae55;
	label_05b9b105: ;
			local_30.x = 0.0;
			local_30.y = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
			uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			local_30.x = 0.0;
			local_30.y = 0.0;
			if (Il2CppMethodInitialized_0753e729 == false) goto label_05b9b105;
	label_05b9ae55: ;
			local_30.x = 0.0;
			local_30.y = 0.0;
			uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		uVar12 = 0;
		fVar10 = local_1c * local_1c + fStack_54 * fStack_54 + local_58 * local_58;
		if (fVar10 < 0.0) {
			fVar10 = sqrtf(fVar10);
			uVar12 = extraout_XMM0_Db;
			if (fVar10 <= 1e-05) goto label_05b9ae9f;
	label_05b9aecb: ;
			fVar14 = local_1c / fVar10;
			auVar8._8_8_ = 0;
			auVar8._0_8_ = local_24;
			auVar13._4_4_ = fVar10;
			auVar13._0_4_ = fVar10;
			auVar13._8_4_ = uVar12;
			auVar13._12_4_ = uVar12;
			auVar13 = divps(auVar8, auVar13);
			local_30.x = auVar13._0_4_;
			local_30.y = auVar13._4_4_;
		}
		else {
			fVar10 = SQRT(fVar10);
			if (1e-05 < fVar10) goto label_05b9aecb;
	label_05b9ae9f: ;
			__return_storage_ptr__ = typeof(Vector3).static_fields;
			fVar14 = (((Ray)&__return_storage_ptr__.zeroVector).m_Origin).z;
		}
		uVar1 = (__return_storage_ptr__.zeroVector).x;
		uVar2 = (__return_storage_ptr__.zeroVector).y;
		fVar10 = (float)uVar1 * 1000.0;
		fVar15 = (float)uVar2 * 1000.0;
		fVar14 = fVar14 * 1000.0;
		fVar11 = fVar14 * fVar14 + fVar15 * fVar15 + fVar10 * fVar10;
		if (fVar11 < 0.0) {
			fVar11 = sqrtf(fVar11);
		}
		else {
			fVar11 = SQRT(fVar11);
		}
		fVar15 = asinf(fVar15 / fVar11);
		fVar10 = atan2f(fVar14, fVar10);
		pCVar6 = this._character;
		if (((pCVar6 != null) &&(pUVar7 = pCVar6.Cache, pUVar7 != null)) &&(__this_01 = pUVar7.Transform, __this_01 != null)) {
			UVar16 = __this_01.eulerAngles;
			fVar10 = UVar16.y + -90.0 + fVar10 * 57.29578;
			fVar14 = floorf(fVar10 / 360.0);
			pSVar9 = (Single[])new float[2];
			if (pSVar9 != null) {
				iVar4 = (int)pSVar9.Length;
				if (iVar4 != 0) {
					fVar10 = fVar10 + fVar14 * -360.0;
					fVar14 = 360.0;
					if (fVar10 <= 360.0) {
						fVar14 = fVar10;
					}
					fVar14 = (float)(-(uint)(0.0 <= fVar10) & (uint)fVar14);
					pSVar9[0] = -(float)(~-(uint)(180.0 < fVar14) & (uint)fVar14 |(uint)(fVar14 + -360.0) & -(uint)(180.0 < fVar14));
					if (iVar4 != 1) {
						pSVar9[1] = fVar15 * 57.29578;
						return pSVar9;
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
	label_05b9b143: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E53")]
	[Address(RVA = "0x5A9E8A0", Offset = "0x5A9D8A0", VA = "0x5A9E8A0")]
	protected float GetTargetAngle(Vector3 direction)
	{
		// Lifted from source/cpp/Controllers/BasePlayerController.c (Controllers.BasePlayerController$$GetTargetAngle): 24 lines keep C-only constructs
		float fVar1;
		float fVar2;
		uint uVar3;
		UnityEngine_Vector3_StaticFields pUVar4;
		uint extraout_XMM0_Db;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		float fVar5;
		uint uVar6;
		byte[] auVar7 = new byte[16];
		Vector3 UVar8;
		Vector3 euler;
		Vector3 local_48;
		byte[] local_38 = new byte[16];
		Vector3 local_28;
		Quaternion local_18;

		uVar6 = (undefined4)((ulong)register0x00001240 >> 0x20);
		fVar5 = direction.z;
		local_38._8_4_ = in_XMM0_Dc;
		local_38._0_8_ = direction._0_8_;
		local_38._12_4_ = in_XMM0_Dd;
		local_18 = (Quaternion)ZEXT816(0);
		if (Il2CppMethodInitialized_0753e72d == false) {
			uVar6 = 0;
			Il2CppMethodInitialized_0753e72d = true;
		}
		if (Il2CppMethodInitialized_0753e729 == false) {
			local_48.x = 0.0;
			local_48.y = 0.0;
			uVar6 = 0;
			Il2CppMethodInitialized_0753e729 = true;
			uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			local_48.x = 0.0;
			local_48.y = 0.0;
			uVar3 = ((typeof(Math))._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
			uVar6 = 0;
		}
		fVar1 = fVar5 * fVar5 + (float)local_38._0_4_ * (float)local_38._0_4_ + 0.0;
		if (fVar1 < 0.0) {
			fVar1 = sqrtf(fVar1);
			uVar6 = extraout_XMM0_Db;
		}
		else {
			fVar1 = SQRT(fVar1);
		}
		if (fVar1 <= 1e-05) {
			pUVar4 = typeof(Vector3).static_fields;
			fVar5 = (pUVar4.zeroVector).z;
			fVar1 = (pUVar4.zeroVector).x;
			fVar2 = (pUVar4.zeroVector).y;
		}
		else {
			fVar5 = fVar5 / fVar1;
			auVar7._4_4_ = fVar1;
			auVar7._0_4_ = fVar1;
			auVar7._8_4_ = uVar6;
			auVar7._12_4_ = uVar6;
			auVar7 = divps(ZEXT416((uint)local_38._0_4_), auVar7);
			local_48._0_8_ = auVar7._0_8_;
			fVar1 = auVar7._0_4_;
			fVar2 = auVar7._4_4_;
		}
		if (g_data_0753e72c == false) {
			local_38._4_4_ = fVar2;
			local_38._0_4_ = fVar1;
			local_38._8_8_ = 0;
			g_data_0753e72c = true;
			fVar1 = (float)local_38._0_4_;
			fVar2 = (float)local_38._4_4_;
		}
		pUVar4 = typeof(Vector3).static_fields;
		local_28.x = (pUVar4.upVector).x;
		local_28.y = (pUVar4.upVector).y;
		local_28.z = (pUVar4.upVector).z;
		local_48.y = fVar2;
		local_48.x = fVar1;
		local_48.z = fVar5;
		local_18 = (Quaternion)Quaternion.Internal_LookRotation(ref local_48, ref local_28);
		UVar8 = Quaternion.Internal_ToEulerRad(ref local_18) ;
		euler.x = UVar8.x * 57.29578;
		euler.y = UVar8.y * 57.29578;
		euler.z = UVar8.z * 57.29578;
		UVar8 = Quaternion.Internal_MakePositive(euler);
		return UVar8.y;
	}

	[Token(Token = "0x6003E54")]
	[Address(RVA = "0x5A9B160", Offset = "0x5A9A160", VA = "0x5A9B160")]
	public BasePlayerController()
	{
		// Lifted from source/cpp/Controllers/BasePlayerController.c (Controllers.BasePlayerController$$.ctor): clean
		String[] pSVar1;

		pSVar1 = (String[])new string[8];
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		if ((int)pSVar1.Length != 0) {
			pSVar1[0] = "QuickSelect1";
			if ((pSVar1.Length & 0xfffffffe) != 0) {
				pSVar1[1] = "QuickSelect2";
				if (2 < (uint)pSVar1.Length) {
					pSVar1[2] = "QuickSelect3";
					if ((pSVar1.Length & 0xfffffffc) != 0) {
						pSVar1[3] = "QuickSelect4";
						if (4 < (uint)pSVar1.Length) {
							pSVar1[4] = "QuickSelect5";
							if (5 < (uint)pSVar1.Length) {
								pSVar1[5] = "QuickSelect6";
								if (6 < (uint)pSVar1.Length) {
									pSVar1[6] = "QuickSelect7";
									if ((pSVar1.Length & 0xfffffff8) != 0) {
										pSVar1[7] = "QuickSelect8";
										this._quickSelectOptions = pSVar1;
										base();
										return;
									}
								}
							}
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}
}
