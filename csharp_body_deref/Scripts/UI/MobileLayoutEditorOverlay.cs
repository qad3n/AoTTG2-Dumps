// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileLayoutEditorOverlay
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileLayoutEditorOverlay.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000764")]
internal class MobileLayoutEditorOverlay : MonoBehaviour
{
	[Token(Token = "0x4002518")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static MobileLayoutEditorOverlay _instance;

	[Token(Token = "0x4002519")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private RectTransform _root;

	[Token(Token = "0x400251A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private RectTransform _controlsRoot;

	[Token(Token = "0x400251B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private RectTransform _toolbar;

	[Token(Token = "0x400251C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private MobileLayoutEditorToolbar _toolbarPanel;

	[Token(Token = "0x400251D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private RectTransform _selectedRect;

	[Token(Token = "0x400251E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private MobileInputLayoutRole _role;

	[Token(Token = "0x400251F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private MobileInputLayout _layout;

	[Token(Token = "0x4002520")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private MobileInputControlLayout _selectedControl;

	[Token(Token = "0x4002521")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private readonly Dictionary<MobileInputControlLayout, RectTransform> _controlRects;

	[Token(Token = "0x4002522")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private readonly Dictionary<MobileInputControlLayout, MobileInputControlLayout> _controlParents;

	[Token(Token = "0x4002523")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Vector2 _toolbarDragOffset;

	[Token(Token = "0x4002524")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private bool _draggingToolbar;

	[Token(Token = "0x4002525")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private MobileInputControlLayout _draggingControl;

	[Token(Token = "0x4002526")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private int _dragPointerId;

	[Token(Token = "0x4002527")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private Vector2 _controlDragOffset;

	[Token(Token = "0x4002528")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private Font _font;

	[Token(Token = "0x4002529")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private GameObject _returnButton;

	[Token(Token = "0x400252A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private GameObject _restoreObject;

	[Token(Token = "0x400252B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private CanvasGroup _restoreGroup;

	[Token(Token = "0x400252C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private bool _restoreGroupAdded;

	[Token(Token = "0x400252D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xBC")]
	private float _restoreGroupAlpha;

	[Token(Token = "0x400252E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private bool _restoreGroupInteractable;

	[Token(Token = "0x400252F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC1")]
	private bool _restoreGroupBlocksRaycasts;

	[Token(Token = "0x4002530")]
	private const string ThemePanel = "DefaultPanel";

	[Token(Token = "0x4002531")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private readonly List<Behaviour> _suspendedUi;

	[Token(Token = "0x4002532")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private ColorPickPopup _colorPopup;

	[Token(Token = "0x4002533")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private ImportPopup _importPopup;

	[Token(Token = "0x4002534")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private ExportPopup _exportPopup;

	[Token(Token = "0x17000C0D")]
	public static bool IsOpen
	{
		[Token(Token = "0x6004751")]
		[Address(RVA = "0x5B9C710", Offset = "0x5B9B710", VA = "0x5B9C710")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004752")]
	[Address(RVA = "0x5B9C7C0", Offset = "0x5B9B7C0", VA = "0x5B9C7C0")]
	public static void Open(MobileInputLayoutRole role, GameObject restoreObject)
	{
	}

	[Token(Token = "0x6004753")]
	[Address(RVA = "0x5B9CA90", Offset = "0x5B9BA90", VA = "0x5B9CA90")]
	private void Setup()
	{
	}

	[Token(Token = "0x6004754")]
	[Address(RVA = "0x5B9CF90", Offset = "0x5B9BF90", VA = "0x5B9CF90")]
	private void Show(MobileInputLayoutRole role, GameObject restoreObject)
	{
	}

	[Token(Token = "0x6004755")]
	[Address(RVA = "0x5B9DEB0", Offset = "0x5B9CEB0", VA = "0x5B9DEB0")]
	private void HideRestoreObject()
	{
	}

	[Token(Token = "0x6004756")]
	[Address(RVA = "0x5B9E130", Offset = "0x5B9D130", VA = "0x5B9E130")]
	private void SuspendUi(Behaviour behaviour)
	{
	}

	[Token(Token = "0x6004757")]
	[Address(RVA = "0x5B9E220", Offset = "0x5B9D220", VA = "0x5B9E220")]
	private void RestoreObject()
	{
	}

	[Token(Token = "0x6004758")]
	[Address(RVA = "0x5B9E4F0", Offset = "0x5B9D4F0", VA = "0x5B9E4F0")]
	private void RefreshRestorePanel()
	{
	}

	[Token(Token = "0x6004759")]
	[Address(RVA = "0x5B9E670", Offset = "0x5B9D670", VA = "0x5B9E670")]
	private void Update()
	{
	}

	[Token(Token = "0x600475A")]
	[Address(RVA = "0x5B9D480", Offset = "0x5B9C480", VA = "0x5B9D480")]
	private void CreateToolbar()
	{
	}

	[Token(Token = "0x600475B")]
	[Address(RVA = "0x5B9DA00", Offset = "0x5B9CA00", VA = "0x5B9DA00")]
	private void RebuildControls()
	{
	}

	[Token(Token = "0x600475C")]
	[Address(RVA = "0x5B9F0E0", Offset = "0x5B9E0E0", VA = "0x5B9F0E0")]
	private void CreateEditableControl(MobileInputControlLayout control, MobileInputControlLayout parentControl)
	{
	}

	[Token(Token = "0x600475D")]
	[Address(RVA = "0x5B9FAA0", Offset = "0x5B9EAA0", VA = "0x5B9FAA0")]
	private void SelectControl(MobileInputControlLayout control)
	{
	}

	[Token(Token = "0x600475E")]
	[Address(RVA = "0x5B9FCF0", Offset = "0x5B9ECF0", VA = "0x5B9FCF0")]
	private void BeginControlDrag(MobileInputControlLayout control, PointerEventData eventData)
	{
	}

	[Token(Token = "0x600475F")]
	[Address(RVA = "0x5B9FE00", Offset = "0x5B9EE00", VA = "0x5B9FE00")]
	private void DragControl(MobileInputControlLayout control, Vector2 screenPosition)
	{
	}

	[Token(Token = "0x6004760")]
	[Address(RVA = "0x5BA0400", Offset = "0x5B9F400", VA = "0x5BA0400")]
	private void EndControlDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004761")]
	[Address(RVA = "0x5BA0440", Offset = "0x5B9F440", VA = "0x5BA0440")]
	private void EndControlDragIfReleased(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004762")]
	[Address(RVA = "0x5B9E6E0", Offset = "0x5B9D6E0", VA = "0x5B9E6E0")]
	private void UpdateControlDrag()
	{
	}

	[Token(Token = "0x6004763")]
	[Address(RVA = "0x5BA0490", Offset = "0x5B9F490", VA = "0x5BA0490")]
	private void AddControl()
	{
	}

	[Token(Token = "0x6004764")]
	[Address(RVA = "0x5BA2E90", Offset = "0x5BA1E90", VA = "0x5BA2E90")]
	private void EditSelected()
	{
	}

	[Token(Token = "0x6004765")]
	[Address(RVA = "0x5BA2EB0", Offset = "0x5BA1EB0", VA = "0x5BA2EB0")]
	private void DeleteSelected()
	{
	}

	[Token(Token = "0x6004766")]
	[Address(RVA = "0x5BA3050", Offset = "0x5BA2050", VA = "0x5BA3050")]
	private void CopySelected()
	{
	}

	[Token(Token = "0x6004767")]
	[Address(RVA = "0x5BA3230", Offset = "0x5BA2230", VA = "0x5BA3230")]
	private void SavePreset()
	{
	}

	[Token(Token = "0x6004768")]
	[Address(RVA = "0x5BA3B10", Offset = "0x5BA2B10", VA = "0x5BA3B10")]
	private void ShowSavedPopup(string name)
	{
	}

	[Token(Token = "0x6004769")]
	[Address(RVA = "0x5BA3E60", Offset = "0x5BA2E60", VA = "0x5BA3E60")]
	private void ShowLoadPopup()
	{
	}

	[Token(Token = "0x600476A")]
	[Address(RVA = "0x5BA5590", Offset = "0x5BA4590", VA = "0x5BA5590")]
	private void ShowMenuPopupAboveEditor(BasePopup popup)
	{
	}

	[Token(Token = "0x600476B")]
	[Address(RVA = "0x5BA56D0", Offset = "0x5BA46D0", VA = "0x5BA56D0")]
	private void ImportLayoutFromPopup(GameObject loadPanel)
	{
	}

	[Token(Token = "0x600476C")]
	[Address(RVA = "0x5BA5A70", Offset = "0x5BA4A70", VA = "0x5BA5A70")]
	private string NormalizeImportedLayoutJson(string value)
	{
		return null;
	}

	[Token(Token = "0x600476D")]
	[Address(RVA = "0x5BA5BF0", Offset = "0x5BA4BF0", VA = "0x5BA5BF0")]
	private string GetPreview(string value, bool start)
	{
		return null;
	}

	[Token(Token = "0x600476E")]
	[Address(RVA = "0x5BA49B0", Offset = "0x5BA39B0", VA = "0x5BA49B0")]
	private void PopulatePresetList(RectTransform listRoot, GameObject panel, MobileInputLayoutRole role)
	{
	}

	[Token(Token = "0x600476F")]
	[Address(RVA = "0x5BA0550", Offset = "0x5B9F550", VA = "0x5BA0550")]
	private void ShowEditPopup(MobileInputControlLayout control, [Optional][DefaultParameterValue(false)] bool addOnConfirm, [Optional] MobileInputControlLayout explicitParentControl)
	{
	}

	[Token(Token = "0x6004770")]
	[Address(RVA = "0x5BA6140", Offset = "0x5BA5140", VA = "0x5BA6140")]
	private GameObject CreateSkinSetting(Transform parent, ElementStyle style, MobileInputSkinEditState state, string title)
	{
		return null;
	}

	[Token(Token = "0x6004771")]
	[Address(RVA = "0x5BA7360", Offset = "0x5BA6360", VA = "0x5BA7360")]
	private GameObject CreateSkinSettingRow(Transform parent, string name)
	{
		return null;
	}

	[Token(Token = "0x6004772")]
	[Address(RVA = "0x5BA6020", Offset = "0x5BA5020", VA = "0x5BA6020")]
	private void AddSectionHeader(Transform parent, ElementStyle style, string title)
	{
	}

	[Token(Token = "0x6004773")]
	[Address(RVA = "0x5BA74B0", Offset = "0x5BA64B0", VA = "0x5BA74B0")]
	private string GetSkinButtonLabel(string image)
	{
		return null;
	}

	[Token(Token = "0x6004774")]
	[Address(RVA = "0x5BA75B0", Offset = "0x5BA65B0", VA = "0x5BA75B0")]
	private bool IsRectangleOnlyKind(string kindValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6004775")]
	[Address(RVA = "0x5BA7620", Offset = "0x5BA6620", VA = "0x5BA7620")]
	private bool IsActionListKind(string kindValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6004776")]
	[Address(RVA = "0x5BA7700", Offset = "0x5BA6700", VA = "0x5BA7700")]
	private bool IsSlidingContentKind(string kindValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6004777")]
	[Address(RVA = "0x5BA77A0", Offset = "0x5BA67A0", VA = "0x5BA77A0")]
	private bool CanAllowLookAreaThrough(string kindValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6004778")]
	[Address(RVA = "0x5BA7810", Offset = "0x5BA6810", VA = "0x5BA7810")]
	private bool UsesOnSkin(string kindValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6004779")]
	[Address(RVA = "0x5BA6790", Offset = "0x5BA5790", VA = "0x5BA6790")]
	private string[] GetKindOptions()
	{
		return null;
	}

	[Token(Token = "0x600477A")]
	[Address(RVA = "0x5B9EA00", Offset = "0x5B9DA00", VA = "0x5B9EA00")]
	private void EnsureCoreControls(MobileInputLayout layout)
	{
	}

	[Token(Token = "0x600477B")]
	[Address(RVA = "0x5BA3700", Offset = "0x5BA2700", VA = "0x5BA3700")]
	private MobileLayoutEditorModal CreateModal(string title, float width = 580f, float height = 640f, bool scrollBar = true)
	{
		return null;
	}

	[Token(Token = "0x600477C")]
	[Address(RVA = "0x5BA6A10", Offset = "0x5BA5A10", VA = "0x5BA6A10")]
	private void EnsureColorPopupOnTop()
	{
	}

	[Token(Token = "0x600477D")]
	[Address(RVA = "0x5BA6BC0", Offset = "0x5BA5BC0", VA = "0x5BA6BC0")]
	private MobileLayoutActionListEditor CreateActionListEditor(Transform parent, ElementStyle style, string[] initialActionIds)
	{
		return null;
	}

	[Token(Token = "0x600477E")]
	[Address(RVA = "0x5BA6D70", Offset = "0x5BA5D70", VA = "0x5BA6D70")]
	private GameObject CreatePopupChildrenEditor(Transform parent, ElementStyle style, MobileInputControlLayout popupControl, GameObject editPanel, Action applyParentChanges)
	{
		return null;
	}

	[Token(Token = "0x600477F")]
	[Address(RVA = "0x5BA7E60", Offset = "0x5BA6E60", VA = "0x5BA7E60")]
	private void CreatePopupChildRow(RectTransform parent, MobileInputControlLayout popupControl, MobileInputControlLayout child, int index, GameObject editPanel, Action applyParentChanges)
	{
	}

	[Token(Token = "0x6004780")]
	[Address(RVA = "0x5BA82E0", Offset = "0x5BA72E0", VA = "0x5BA82E0")]
	private MobileInputControlLayout CreateDefaultPopupChild(int index)
	{
		return null;
	}

	[Token(Token = "0x6004781")]
	[Address(RVA = "0x5BA48F0", Offset = "0x5BA38F0", VA = "0x5BA48F0")]
	private void RegisterDropdown(GameObject dropdownObject)
	{
	}

	[Token(Token = "0x6004782")]
	[Address(RVA = "0x5BA85F0", Offset = "0x5BA75F0", VA = "0x5BA85F0")]
	private void Close()
	{
	}

	[Token(Token = "0x6004783")]
	private void DestroyModals<T>() where T : Component
	{
	}

	[Token(Token = "0x6004784")]
	[Address(RVA = "0x5BA8680", Offset = "0x5BA7680", VA = "0x5BA8680")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6004785")]
	[Address(RVA = "0x5BA8700", Offset = "0x5BA7700", VA = "0x5BA8700")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6004786")]
	[Address(RVA = "0x5BA5E10", Offset = "0x5BA4E10", VA = "0x5BA5E10")]
	private void SetReturnVisible(bool visible)
	{
	}

	[Token(Token = "0x6004787")]
	[Address(RVA = "0x5B9F0C0", Offset = "0x5B9E0C0", VA = "0x5B9F0C0")]
	private void AssignLayoutIds()
	{
	}

	[Token(Token = "0x6004788")]
	[Address(RVA = "0x5B9FFA0", Offset = "0x5B9EFA0", VA = "0x5B9FFA0")]
	private MobileInputControlLayout GetParentControl(MobileInputControlLayout control)
	{
		return null;
	}

	[Token(Token = "0x6004789")]
	[Address(RVA = "0x5B9F6B0", Offset = "0x5B9E6B0", VA = "0x5B9F6B0")]
	private Vector2 GetControlPosition(MobileInputControlLayout control, MobileInputControlLayout parentControl)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600478A")]
	[Address(RVA = "0x5B9F620", Offset = "0x5B9E620", VA = "0x5B9F620")]
	private Vector2 GetControlSize(MobileInputControlLayout control)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600478B")]
	[Address(RVA = "0x5BA0010", Offset = "0x5B9F010", VA = "0x5BA0010")]
	private void SavePosition(MobileInputControlLayout control, Vector2 position, MobileInputControlLayout parentControl)
	{
	}

	[Token(Token = "0x600478C")]
	[Address(RVA = "0x5BA0240", Offset = "0x5B9F240", VA = "0x5BA0240")]
	private void UpdatePopupChildRects(MobileInputControlLayout popupControl)
	{
	}

	[Token(Token = "0x600478D")]
	[Address(RVA = "0x5BA38F0", Offset = "0x5BA28F0", VA = "0x5BA38F0")]
	private string Locale(string item)
	{
		return null;
	}

	[Token(Token = "0x600478E")]
	[Address(RVA = "0x5BA4750", Offset = "0x5BA3750", VA = "0x5BA4750")]
	private GameObject CreateLocalizedDropdownSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, string[] options, Func<string, string> optionLabel, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(140f)] float elementWidth, [Optional][DefaultParameterValue(40f)] float elementHeight, [Optional][DefaultParameterValue(300f)] float maxScrollHeight, [Optional] float? optionsWidth, [Optional] UnityAction onDropdownOptionSelect)
	{
		return null;
	}

	[Token(Token = "0x600478F")]
	[Address(RVA = "0x5BA8880", Offset = "0x5BA7880", VA = "0x5BA8880")]
	private string ShapeOptionLabel(string value)
	{
		return null;
	}

	[Token(Token = "0x6004790")]
	[Address(RVA = "0x5BA8910", Offset = "0x5BA7910", VA = "0x5BA8910")]
	private string PopupModeOptionLabel(string value)
	{
		return null;
	}

	[Token(Token = "0x6004791")]
	[Address(RVA = "0x5BA89A0", Offset = "0x5BA79A0", VA = "0x5BA89A0")]
	private string RoleOptionLabel(string value)
	{
		return null;
	}

	[Token(Token = "0x6004792")]
	[Address(RVA = "0x5BA3980", Offset = "0x5BA2980", VA = "0x5BA3980")]
	private GameObject CreateTextButton(string label, Transform parent, Vector2 size, Action onClick)
	{
		return null;
	}

	[Token(Token = "0x6004793")]
	[Address(RVA = "0x5BA3D60", Offset = "0x5BA2D60", VA = "0x5BA3D60")]
	private void AddModalLabel(RectTransform parent, string label)
	{
	}

	[Token(Token = "0x6004794")]
	[Address(RVA = "0x5BA5D00", Offset = "0x5BA4D00", VA = "0x5BA5D00")]
	private void AddPresetNameLabel(RectTransform parent, string label)
	{
	}

	[Token(Token = "0x6004795")]
	[Address(RVA = "0x5BA8A30", Offset = "0x5BA7A30", VA = "0x5BA8A30")]
	private Text AddLabel(RectTransform parent, string label, Vector2 size)
	{
		return null;
	}

	[Token(Token = "0x6004796")]
	[Address(RVA = "0x5B9F7C0", Offset = "0x5B9E7C0", VA = "0x5B9F7C0")]
	private void AddControlIconOrLabel(RectTransform parent, MobileInputControlLayout control, Vector2 size)
	{
	}

	[Token(Token = "0x6004797")]
	[Address(RVA = "0x5B9D1C0", Offset = "0x5B9C1C0", VA = "0x5B9D1C0")]
	private GameObject CreateRect(string name, RectTransform parent, Vector2 anchorMin, Vector2 anchorMax, Vector2 size, Vector2 anchoredPosition)
	{
		return null;
	}

	[Token(Token = "0x6004798")]
	[Address(RVA = "0x5B9E860", Offset = "0x5B9D860", VA = "0x5B9E860")]
	private void AddTrigger(EventTrigger trigger, EventTriggerType type, Action<BaseEventData> action)
	{
	}

	[Token(Token = "0x6004799")]
	[Address(RVA = "0x5BA8D10", Offset = "0x5BA7D10", VA = "0x5BA8D10")]
	public MobileLayoutEditorOverlay()
	{
	}
}
