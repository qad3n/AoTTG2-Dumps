// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputHookButton
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputHookButton.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Characters;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000740")]
public class MobileInputHookButton : MobileInputHoldControl
{
	[Token(Token = "0x4002471")]
	private const string HookLeftActionId = "Human.HookLeft";

	[Token(Token = "0x4002472")]
	private const string HookRightActionId = "Human.HookRight";

	[Token(Token = "0x4002473")]
	[FieldOffset(Offset = "0x78")]
	private MobileInput _activeHookInput;

	[Token(Token = "0x4002474")]
	[FieldOffset(Offset = "0x80")]
	private MobileInput _leftHookInput;

	[Token(Token = "0x4002475")]
	[FieldOffset(Offset = "0x88")]
	private MobileInput _rightHookInput;

	[Token(Token = "0x600465C")]
	[Address(RVA = "0x5B6A010", Offset = "0x5B69010", VA = "0x5B6A010")]
	public void SetupHookButton(RectTransform rect, MobileInputSkin normalSkin, MobileInputSkin pressedSkin, MobileInputControlShape shape)
	{
		// Lifted from source/cpp/UI/MobileInputHookButton.c (UI.MobileInputHookButton$$SetupHookButton): clean
		this.CacheInputs();
		this.Setup(rect, normalSkin, pressedSkin, shape);
		return;
	}

	[Token(Token = "0x600465D")]
	[Address(RVA = "0x5B6F080", Offset = "0x5B6E080", VA = "0x5B6F080", Slot = "8")]
	protected override void OnControlPressed()
	{
		// Lifted from source/cpp/UI/MobileInputHookButton.c (UI.MobileInputHookButton$$OnControlPressed): clean
		MobileInput pSVar1;

		pSVar1 = this._activeHookInput;
		if (pSVar1 != null) {
			pSVar1.SetPressed(false);
		}
		pSVar1 = this.ChooseHookInput();
		this._activeHookInput = pSVar1;
		pSVar1 = this._activeHookInput;
		if (pSVar1 == null) {
			return;
		}
		pSVar1.SetPressed(true);
		return;
	}

	[Token(Token = "0x600465E")]
	[Address(RVA = "0x5B6F2B0", Offset = "0x5B6E2B0", VA = "0x5B6F2B0", Slot = "9")]
	protected override void OnControlReleased()
	{
		// Lifted from source/cpp/UI/MobileInputHookButton.c (UI.MobileInputHookButton$$OnControlReleased): 2 lines keep C-only constructs
		MobileInput __this_00;
		MobileInput* targetAddress;

		__this_00 = this._activeHookInput;
		targetAddress = &this._activeHookInput;
		if (__this_00 != null) {
			__this_00.SetPressed(false);
		}
		*targetAddress = null;
		return;
	}

	[Token(Token = "0x600465F")]
	[Address(RVA = "0x5B6F2E0", Offset = "0x5B6E2E0", VA = "0x5B6F2E0", Slot = "10")]
	protected override bool IsInputHeldByControl(MobileInput input)
	{
		// Lifted from source/cpp/UI/MobileInputHookButton.c (UI.MobileInputHookButton$$IsInputHeldByControl): clean
		return this._activeHookInput == input;
	}

	[Token(Token = "0x6004660")]
	[Address(RVA = "0x5B6F0E0", Offset = "0x5B6E0E0", VA = "0x5B6F0E0")]
	private MobileInput ChooseHookInput()
	{
		// Lifted from source/cpp/UI/MobileInputHookButton.c (UI.MobileInputHookButton$$ChooseHookInput): 6 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		BaseGameManager pGVar3;
		bool bVar4;
		bool bVar5;
		bool bVar6;
		Human human;
		Human pCVar7;
		HookUseable pCVar8;
		MobileInput* ppSVar9;

		pGVar3 = SceneLoader.CurrentGameManager;
		if (pGVar3 == null) {
	label_05c6f183: ;
			human = null;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if ((((pGVar3.klass._2).typeHierarchyDepth < bVar1) ||((pGVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) ||(pCVar7 = (*(ulong)((sbyte)pGVar3 + 0x80)), pCVar7 == null)) goto label_05c6f183;
			bVar1 = (typeof(Human)._2).typeHierarchyDepth;
			if ((pCVar7.klass._2).typeHierarchyDepth < bVar1) goto label_05c6f183;
			human = null;
			if ((pCVar7.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Human)) {
				human = pCVar7;
			}
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		pCVar7 = human;
		bVar4 = ((Object)human == null);
		if (bVar4) {
			return null;
		}
		bVar4 = pCVar7.IsCameraLookHumanRight(human);
		if (human == null) {
			throw new NullReferenceException();
		}
		pCVar8 = human.HookLeft;
		if (pCVar8 == null) {
			bVar5 = true;
			pCVar8 = human.HookRight;
			if (pCVar8 != null) goto label_05c6f1ec;
	label_05c6f210: ;
			if (bVar5) {
				return null;
			}
		}
		else {
			bVar5 = pCVar8.IsReady();
			bVar5 = !bVar5;
			pCVar8 = human.HookRight;
			if (pCVar8 == null) goto label_05c6f210;
	label_05c6f1ec: ;
			bVar6 = pCVar8.IsReady();
			if (bVar4) {
				if (!bVar6) goto label_05c6f210;
	label_05c6f220: ;
				ppSVar9 = &this._rightHookInput;
				goto label_05c6f22d;
			}
			if (bVar5) {
				if (!bVar6) {
					return null;
				}
				goto label_05c6f220;
			}
		}
		ppSVar9 = &this._leftHookInput;
	label_05c6f22d: ;
		return *ppSVar9;
	}

	[Token(Token = "0x6004661")]
	[Address(RVA = "0x5B6EFD0", Offset = "0x5B6DFD0", VA = "0x5B6EFD0")]
	private void CacheInputs()
	{
		// Lifted from source/cpp/UI/MobileInputHookButton.c (UI.MobileInputHookButton$$CacheInputs): clean
		MobileInput pSVar1;

		pSVar1 = MobileInputBridge.GetActionInput("Human.HookLeft");
		this._leftHookInput = pSVar1;
		pSVar1 = MobileInputBridge.GetActionInput("Human.HookRight");
		this._rightHookInput = pSVar1;
		return;
	}

	[Token(Token = "0x6004662")]
	[Address(RVA = "0x5B6F2F0", Offset = "0x5B6E2F0", VA = "0x5B6F2F0")]
	private Human GetCurrentHuman()
	{
		// Lifted from source/cpp/UI/MobileInputHookButton.c (UI.MobileInputHookButton$$GetCurrentHuman): 3 lines keep C-only constructs
		byte bVar1;
		BaseGameManager pGVar2;
		Human pCVar3;
		Human pCVar4;

		pGVar2 = SceneLoader.CurrentGameManager;
		if (pGVar2 != null) {
			bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((bVar1 <= (pGVar2.klass._2).typeHierarchyDepth) &&((pGVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(InGameManager))) &&(pCVar3 = (*(ulong)((sbyte)pGVar2 + 0x80)), pCVar3 != null)) {
				bVar1 = (typeof(Human)._2).typeHierarchyDepth;
				if (bVar1 <= (pCVar3.klass._2).typeHierarchyDepth) {
					if ((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Human)) {
					}
					return pCVar4;
				}
			}
		}
		return null;
	}

	[Token(Token = "0x6004663")]
	[Address(RVA = "0x5B6F3B0", Offset = "0x5B6E3B0", VA = "0x5B6F3B0")]
	private bool IsCameraLookHumanRight(Human human)
	{
		// Lifted from source/cpp/UI/MobileInputHookButton.c (UI.MobileInputHookButton$$IsCameraLookHumanRight): clean
		BaseComponentCache pUVar1;
		bool bVar2;
		Camera x;
		Transform pUVar3;
		Vector3 UVar4;
		Vector3 UVar5;
		Vector3 UVar6;
		float local_38;
		float fStack_34;

		x = Camera.main;
		bVar2 = ((Object)x == null);
		if (!bVar2) {
			if (human == null) {
	label_05c6f515: ;
				throw new NullReferenceException();
			}
			pUVar1 = human.Cache;
			if (pUVar1 != null) {
				pUVar3 = pUVar1.Transform;
				bVar2 = ((Object)pUVar3 == null);
				if (!bVar2) {
					if ((x != null) &&(pUVar3 = x.transform, pUVar3 != null)) {
						UVar4 = pUVar3.position;
						pUVar1 = human.Cache;
						if ((pUVar1 != null) &&(pUVar3 = pUVar1.Transform, pUVar3 != null)) {
							UVar5 = pUVar3.position;
							pUVar1 = human.Cache;
							if ((pUVar1 != null) &&(pUVar3 = pUVar1.Transform, pUVar3 != null)) {
								local_38 = UVar4.x;
								fStack_34 = UVar4.y;
								UVar6 = pUVar3.right;
								return UVar6.z * (UVar4.z - UVar5.z) + UVar6.y * (fStack_34 - UVar5.y) + UVar6.x * (local_38 - UVar5.x) < 0.0;
							}
						}
					}
					goto label_05c6f515;
				}
			}
		}
		return true;
	}

	[Token(Token = "0x6004664")]
	[Address(RVA = "0x5B6F520", Offset = "0x5B6E520", VA = "0x5B6F520")]
	public MobileInputHookButton()
	{
		// Lifted from source/cpp/UI/MobileInputHookButton.c (UI.MobileInputHookButton$$.ctor): 1 lines keep C-only constructs
		List<MobileInputHoldControl.SlideButton> __this_00;

		this._pointerId = -0x80000000;
		this._moveContentWithTouch = true;
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<MobileInputHoldControl.SlideButton>));
		__this_00 = new List<MobileInputHoldControl.SlideButton>();
		this._slideButtons = __this_00;
		base();
		return;
	}
}
