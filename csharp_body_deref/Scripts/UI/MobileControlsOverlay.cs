// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileControlsOverlay
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileControlsOverlay.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
	}

	[Token(Token = "0x60045EE")]
	[Address(RVA = "0x5B638C0", Offset = "0x5B628C0", VA = "0x5B638C0")]
	public void Setup(MapEditorMenu menu)
	{
	}

	[Token(Token = "0x60045EF")]
	[Address(RVA = "0x5B63580", Offset = "0x5B62580", VA = "0x5B63580")]
	private void SetupCommon()
	{
	}

	[Token(Token = "0x60045F0")]
	[Address(RVA = "0x5B64100", Offset = "0x5B63100", VA = "0x5B64100")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60045F1")]
	[Address(RVA = "0x5B64380", Offset = "0x5B63380", VA = "0x5B64380")]
	private void Update()
	{
	}

	[Token(Token = "0x60045F2")]
	[Address(RVA = "0x5B64D00", Offset = "0x5B63D00", VA = "0x5B64D00")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60045F3")]
	[Address(RVA = "0x5B64DB0", Offset = "0x5B63DB0", VA = "0x5B64DB0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60045F4")]
	[Address(RVA = "0x5B64E10", Offset = "0x5B63E10", VA = "0x5B64E10")]
	private void OnApplicationFocus(bool focused)
	{
	}

	[Token(Token = "0x60045F5")]
	[Address(RVA = "0x5B64E70", Offset = "0x5B63E70", VA = "0x5B64E70")]
	private void OnApplicationPause(bool paused)
	{
	}

	[Token(Token = "0x60045F6")]
	[Address(RVA = "0x5B64520", Offset = "0x5B63520", VA = "0x5B64520")]
	private void UpdateRestoreGesture()
	{
	}

	[Token(Token = "0x60045F7")]
	[Address(RVA = "0x5B63CA0", Offset = "0x5B62CA0", VA = "0x5B63CA0")]
	private void RefreshVisibility()
	{
	}

	[Token(Token = "0x60045F8")]
	[Address(RVA = "0x5B64EF0", Offset = "0x5B63EF0", VA = "0x5B64EF0")]
	private void UpdateButtonVisibility()
	{
	}

	[Token(Token = "0x60045F9")]
	[Address(RVA = "0x5B65350", Offset = "0x5B64350", VA = "0x5B65350")]
	private BaseCharacter GetCurrentCharacter()
	{
		return null;
	}

	[Token(Token = "0x60045FA")]
	[Address(RVA = "0x5B653D0", Offset = "0x5B643D0", VA = "0x5B653D0")]
	private MobileInputLayoutRole GetCurrentLayoutRole()
	{
		return default(MobileInputLayoutRole);
	}

	[Token(Token = "0x60045FB")]
	[Address(RVA = "0x5B64ED0", Offset = "0x5B63ED0", VA = "0x5B64ED0")]
	private void UpdateCoreControlLayout()
	{
	}

	[Token(Token = "0x60045FC")]
	[Address(RVA = "0x5B65CA0", Offset = "0x5B64CA0", VA = "0x5B65CA0")]
	private void RebuildAllControls()
	{
	}

	[Token(Token = "0x60045FD")]
	[Address(RVA = "0x5B66E00", Offset = "0x5B65E00", VA = "0x5B66E00")]
	public void RebuildForScale()
	{
	}

	[Token(Token = "0x60045FE")]
	[Address(RVA = "0x5B65650", Offset = "0x5B64650", VA = "0x5B65650")]
	private void RebuildCoreControls(MobileInputLayoutRole role)
	{
	}

	[Token(Token = "0x60045FF")]
	[Address(RVA = "0x5B651A0", Offset = "0x5B641A0", VA = "0x5B651A0")]
	private void SetGroupActive(List<GameObject> group, bool active)
	{
	}

	[Token(Token = "0x6004600")]
	[Address(RVA = "0x5B66F90", Offset = "0x5B65F90", VA = "0x5B66F90")]
	private void CreateLookArea(RectTransform parent, MobileInputLayoutRole role, [Optional] MobileInputControlLayout control)
	{
	}

	[Token(Token = "0x6004601")]
	[Address(RVA = "0x5B671C0", Offset = "0x5B661C0", VA = "0x5B671C0")]
	private void CreateJoystick(RectTransform parent, MobileInputLayoutRole role, [Optional] MobileInputControlLayout control)
	{
	}

	[Token(Token = "0x6004602")]
	[Address(RVA = "0x5B645B0", Offset = "0x5B635B0", VA = "0x5B645B0")]
	private void UpdateAutoGas()
	{
	}

	[Token(Token = "0x6004603")]
	[Address(RVA = "0x5B64800", Offset = "0x5B63800", VA = "0x5B64800")]
	private void UpdateAutoReel()
	{
	}

	[Token(Token = "0x6004604")]
	[Address(RVA = "0x5B69020", Offset = "0x5B68020", VA = "0x5B69020")]
	private bool TryGetHorizontalMoveDirection(Vector2 move, out Vector3 direction)
	{
		return default(bool);
	}

	[Token(Token = "0x6004605")]
	[Address(RVA = "0x5B69540", Offset = "0x5B68540", VA = "0x5B69540")]
	private bool TryGetHorizontalHookDirection(Human human, out Vector3 direction)
	{
		return default(bool);
	}

	[Token(Token = "0x6004606")]
	[Address(RVA = "0x5B66DC0", Offset = "0x5B65DC0", VA = "0x5B66DC0")]
	private void CreateActionButtons(RectTransform parent)
	{
	}

	[Token(Token = "0x6004607")]
	[Address(RVA = "0x5B66DB0", Offset = "0x5B65DB0", VA = "0x5B66DB0")]
	private void CreateGeneralButtons(RectTransform parent)
	{
	}

	[Token(Token = "0x6004608")]
	[Address(RVA = "0x5B69950", Offset = "0x5B68950", VA = "0x5B69950")]
	private void AddHookButton(RectTransform parent, MobileInputControlLayout control, MobileInputLayoutRole role, List<GameObject> group)
	{
	}

	[Token(Token = "0x6004609")]
	[Address(RVA = "0x5B6A390", Offset = "0x5B69390", VA = "0x5B6A390")]
	private GameObject CreateHoldButton(RectTransform parent, MobileInputControlLayout control, MobileInputLayoutRole role, List<GameObject> group)
	{
		return null;
	}

	[Token(Token = "0x600460A")]
	[Address(RVA = "0x5B69C50", Offset = "0x5B68C50", VA = "0x5B69C50")]
	private GameObject CreateHoldControlObject(RectTransform parent, MobileInputControlLayout control, string suffix, List<GameObject> group, out RectTransform holdRect, out RectTransform contentRect)
	{
		return null;
	}

	[Token(Token = "0x600460B")]
	[Address(RVA = "0x5B6A0C0", Offset = "0x5B690C0", VA = "0x5B6A0C0")]
	private void RegisterSlideButtons(MobileInputHoldControl hold, List<GameObject> buttons)
	{
	}

	[Token(Token = "0x600460C")]
	[Address(RVA = "0x5B6AEA0", Offset = "0x5B69EA0", VA = "0x5B6AEA0")]
	private void AddGasModeButton(RectTransform parent, MobileInputControlLayout control, List<GameObject> group)
	{
	}

	[Token(Token = "0x600460D")]
	[Address(RVA = "0x5B66DD0", Offset = "0x5B65DD0", VA = "0x5B66DD0")]
	private void CreateTitanButtons(RectTransform parent)
	{
	}

	[Token(Token = "0x600460E")]
	[Address(RVA = "0x5B66DE0", Offset = "0x5B65DE0", VA = "0x5B66DE0")]
	private void CreateAnnieShifterButtons(RectTransform parent)
	{
	}

	[Token(Token = "0x600460F")]
	[Address(RVA = "0x5B66DF0", Offset = "0x5B65DF0", VA = "0x5B66DF0")]
	private void CreateErenShifterButtons(RectTransform parent)
	{
	}

	[Token(Token = "0x6004610")]
	[Address(RVA = "0x5B644D0", Offset = "0x5B634D0", VA = "0x5B644D0")]
	private bool IsMapEditorOverlay()
	{
		return default(bool);
	}

	[Token(Token = "0x6004611")]
	[Address(RVA = "0x5B66270", Offset = "0x5B65270", VA = "0x5B66270")]
	private void AddLayoutControls(RectTransform parent, MobileInputLayoutRole role, List<GameObject> group)
	{
	}

	[Token(Token = "0x6004612")]
	[Address(RVA = "0x5B6B680", Offset = "0x5B6A680", VA = "0x5B6B680")]
	private bool HasButtonAction(string[] actionIds)
	{
		return default(bool);
	}

	[Token(Token = "0x6004613")]
	[Address(RVA = "0x5B6A6B0", Offset = "0x5B696B0", VA = "0x5B6A6B0")]
	private MobileInput[] GetControlInputs(MobileInputControlLayout control)
	{
		return null;
	}

	[Token(Token = "0x6004614")]
	[Address(RVA = "0x5B6C0F0", Offset = "0x5B6B0F0", VA = "0x5B6C0F0")]
	private GameObject CreateLayoutButton(RectTransform parent, MobileInputControlLayout control, MobileInputLayoutRole role)
	{
		return null;
	}

	[Token(Token = "0x6004615")]
	[Address(RVA = "0x5B6BAE0", Offset = "0x5B6AAE0", VA = "0x5B6BAE0")]
	private GameObject CreateLayoutPopup(RectTransform parent, MobileInputControlLayout control, MobileInputLayoutRole role)
	{
		return null;
	}

	[Token(Token = "0x6004616")]
	[Address(RVA = "0x5B6C7B0", Offset = "0x5B6B7B0", VA = "0x5B6C7B0")]
	private GameObject CreatePopupChildButton(RectTransform parent, MobileInputControlLayout popupControl, MobileInputControlLayout childControl, MobileInputLayoutRole role)
	{
		return null;
	}

	[Token(Token = "0x6004617")]
	[Address(RVA = "0x5B6B700", Offset = "0x5B6A700", VA = "0x5B6B700")]
	private GameObject CreateLayoutToggle(RectTransform parent, MobileInputControlLayout control, MobileInputLayoutRole role)
	{
		return null;
	}

	[Token(Token = "0x6004618")]
	[Address(RVA = "0x5B6A090", Offset = "0x5B69090", VA = "0x5B6A090")]
	private void RegisterControlDisplayNames(MobileInputLayoutRole role, MobileInputControlLayout control)
	{
	}

	[Token(Token = "0x6004619")]
	[Address(RVA = "0x5B6CF80", Offset = "0x5B6BF80", VA = "0x5B6CF80")]
	private void RegisterControlDisplayNames(MobileInputLayoutRole role, MobileInputControlLayout control, string displayName)
	{
	}

	[Token(Token = "0x600461A")]
	[Address(RVA = "0x5B6CED0", Offset = "0x5B6BED0", VA = "0x5B6CED0")]
	private string GetPopupChildDisplayName(MobileInputControlLayout popupControl, MobileInputControlLayout childControl)
	{
		return null;
	}

	[Token(Token = "0x600461B")]
	[Address(RVA = "0x5B68D90", Offset = "0x5B67D90", VA = "0x5B68D90")]
	private void RegisterMoveJoystickDisplayNames(MobileInputLayoutRole role)
	{
	}

	[Token(Token = "0x600461C")]
	[Address(RVA = "0x5B6D240", Offset = "0x5B6C240", VA = "0x5B6D240")]
	private string GetMoveJoystickDisplayName(string joystickName, string direction)
	{
		return null;
	}

	[Token(Token = "0x600461D")]
	[Address(RVA = "0x5B67DB0", Offset = "0x5B66DB0", VA = "0x5B67DB0")]
	private Vector2 GetLayoutPosition(RectTransform parent, MobileInputControlLayout control)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600461E")]
	[Address(RVA = "0x5B6CE50", Offset = "0x5B6BE50", VA = "0x5B6CE50")]
	private Vector2 GetPopupChildLayoutPosition(RectTransform parent, MobileInputControlLayout popupControl, MobileInputControlLayout childControl)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600461F")]
	[Address(RVA = "0x5B67D60", Offset = "0x5B66D60", VA = "0x5B67D60")]
	private Vector2 GetLayoutSize(RectTransform parent, MobileInputControlLayout control)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6004620")]
	[Address(RVA = "0x5B6D310", Offset = "0x5B6C310", VA = "0x5B6D310")]
	private Vector2 GetLayoutReferenceSize(RectTransform rect)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6004621")]
	[Address(RVA = "0x5B68430", Offset = "0x5B67430", VA = "0x5B68430")]
	private void RegisterButtonRect(RectTransform rect, MobileInputControlLayout control)
	{
	}

	[Token(Token = "0x6004622")]
	[Address(RVA = "0x5B6A7C0", Offset = "0x5B697C0", VA = "0x5B6A7C0")]
	private RectTransform AddButtonLabel(RectTransform parent, MobileInputControlLayout control, Vector2 size)
	{
		return null;
	}

	[Token(Token = "0x6004623")]
	[Address(RVA = "0x5B638E0", Offset = "0x5B628E0", VA = "0x5B638E0")]
	private GameObject CreateRect(string name, RectTransform parent, Vector2 anchorMin, Vector2 anchorMax, Vector2 size, Vector2 anchoredPosition)
	{
		return null;
	}

	[Token(Token = "0x6004624")]
	[Address(RVA = "0x5B67E20", Offset = "0x5B66E20", VA = "0x5B67E20")]
	private Vector2 ScalePosition(Vector2 position)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6004625")]
	[Address(RVA = "0x5B67DE0", Offset = "0x5B66DE0", VA = "0x5B67DE0")]
	private Vector2 ScaleSize(Vector2 size)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6004626")]
	[Address(RVA = "0x5B6D670", Offset = "0x5B6C670", VA = "0x5B6D670")]
	private Vector2 ScaleReferenceVector(Vector2 value)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6004627")]
	[Address(RVA = "0x5B685A0", Offset = "0x5B675A0", VA = "0x5B685A0")]
	private float ScaleReferenceLength(float value)
	{
		return default(float);
	}

	[Token(Token = "0x6004628")]
	[Address(RVA = "0x5B6D6B0", Offset = "0x5B6C6B0", VA = "0x5B6D6B0")]
	private float GetReferenceScale()
	{
		return default(float);
	}

	[Token(Token = "0x6004629")]
	[Address(RVA = "0x5B6D750", Offset = "0x5B6C750", VA = "0x5B6D750")]
	public MobileControlsOverlay()
	{
	}
}
