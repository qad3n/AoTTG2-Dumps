// ==================== AoTTG2 cross-reference ====================
// Type: UI.ElementFactory
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/ElementFactory.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/ElementFactory.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using PatreonEffects;
using Photon.Realtime;
using Settings;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005E0")]
internal class ElementFactory : MonoBehaviour
{
	[Token(Token = "0x6003BEC")]
	public static T CreateDefaultMenu<T>() where T : BaseMenu
	{
		return null;
	}

	[Token(Token = "0x6003BED")]
	public static T CreateMenu<T>(string asset) where T : BaseMenu
	{
		return null;
	}

	[Token(Token = "0x6003BEE")]
	public static T CreateEmptyPanel<T>(Transform parent, bool enabled = false) where T : BasePanel
	{
		return null;
	}

	[Token(Token = "0x6003BEF")]
	[Address(RVA = "0x4289FD0", Offset = "0x4289FD0", VA = "0x4289FD0")]
	public static GameObject CreateEmptyPanel(Transform parent, Type t, bool enabled = false)
	{
		return null;
	}

	[Token(Token = "0x6003BF0")]
	public static T CreateSimplePanel<T>(Transform parent, bool enabled = false) where T : SimplePanel
	{
		return null;
	}

	[Token(Token = "0x6003BF1")]
	public static T CreateDefaultPopup<T>(Transform parent, bool enabled = false) where T : BasePopup
	{
		return null;
	}

	[Token(Token = "0x6003BF2")]
	public static T CreateHeadedPanel<T>(Transform parent, bool enabled = false) where T : HeadedPanel
	{
		return null;
	}

	[Token(Token = "0x6003BF3")]
	public static GameObject CreateTooltipPopup<T>(Transform parent, bool enabled = false) where T : TooltipPopup
	{
		return null;
	}

	[Token(Token = "0x6003BF4")]
	[Address(RVA = "0x428A120", Offset = "0x428A120", VA = "0x428A120")]
	public static TipPanel CreateTipPanel(Transform parent, bool enabled = false)
	{
		return null;
	}

	[Token(Token = "0x6003BF5")]
	[Address(RVA = "0x42821F0", Offset = "0x42821F0", VA = "0x42821F0")]
	public static GameObject CreateDefaultButton(Transform parent, ElementStyle style, string title, [Optional][DefaultParameterValue(0f)] float elementWidth, [Optional][DefaultParameterValue(0f)] float elementHeight, [Optional] UnityAction onClick)
	{
		return null;
	}

	[Token(Token = "0x6003BF6")]
	[Address(RVA = "0x428A1C0", Offset = "0x428A1C0", VA = "0x428A1C0")]
	public static GameObject CreatePerkButton(Transform parent, ElementStyle style, string title, string tooltip, [Optional][DefaultParameterValue(0f)] float elementWidth, [Optional][DefaultParameterValue(0f)] float elementHeight, [Optional][DefaultParameterValue(0f)] float offset, [Optional] UnityAction onClick)
	{
		return null;
	}

	[Token(Token = "0x6003BF7")]
	[Address(RVA = "0x428A460", Offset = "0x428A460", VA = "0x428A460")]
	public static GameObject CreateIconButton(Transform parent, ElementStyle style, string icon, [Optional][DefaultParameterValue(32f)] float elementWidth, [Optional][DefaultParameterValue(32f)] float elementHeight, [Optional] UnityAction onClick)
	{
		return null;
	}

	[Token(Token = "0x6003BF8")]
	[Address(RVA = "0x428A7A0", Offset = "0x428A7A0", VA = "0x428A7A0")]
	public static GameObject CreateRawImage(Transform parent, ElementStyle style, string image, float elementWidth = 32f, float elementHeight = 32f)
	{
		return null;
	}

	[Token(Token = "0x6003BF9")]
	[Address(RVA = "0x428A950", Offset = "0x428A950", VA = "0x428A950")]
	public static GameObject CreateTooltipIcon(Transform parent, ElementStyle style, string tooltip, float elementWidth = 30f, float elementHeight = 30f)
	{
		return null;
	}

	[Token(Token = "0x6003BFA")]
	[Address(RVA = "0x427A960", Offset = "0x427A960", VA = "0x427A960")]
	public static GameObject CreateTextButton(Transform parent, ElementStyle style, string title, [Optional][DefaultParameterValue(0f)] float width, [Optional] UnityAction onClick)
	{
		return null;
	}

	[Token(Token = "0x6003BFB")]
	[Address(RVA = "0x428AA00", Offset = "0x428AA00", VA = "0x428AA00")]
	public static GameObject CreateLinkButton(Transform parent, ElementStyle style, string title, [Optional] UnityAction onClick)
	{
		return null;
	}

	[Token(Token = "0x6003BFC")]
	[Address(RVA = "0x427A300", Offset = "0x427A300", VA = "0x427A300")]
	public static GameObject CreateCategoryButton(Transform parent, ElementStyle style, string title, [Optional] UnityAction onClick)
	{
		return null;
	}

	[Token(Token = "0x6003BFD")]
	[Address(RVA = "0x4278420", Offset = "0x4278420", VA = "0x4278420")]
	public static GameObject CreateDropdownSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, string[] options, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(140f)] float elementWidth, [Optional][DefaultParameterValue(40f)] float elementHeight, [Optional][DefaultParameterValue(300f)] float maxScrollHeight, [Optional] float? optionsWidth, [Optional] UnityAction onDropdownOptionSelect)
	{
		return null;
	}

	[Token(Token = "0x6003BFE")]
	[Address(RVA = "0x428AC50", Offset = "0x428AC50", VA = "0x428AC50")]
	public static GameObject CreateDropdownSelect(Transform parent, ElementStyle style, BaseSetting setting, string title, string[] options, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(140f)] float elementWidth, [Optional][DefaultParameterValue(40f)] float elementHeight, [Optional][DefaultParameterValue(300f)] float maxScrollHeight, [Optional] float? optionsWidth, [Optional] UnityAction onDropdownOptionSelect)
	{
		return null;
	}

	[Token(Token = "0x6003BFF")]
	[Address(RVA = "0x428ADA0", Offset = "0x428ADA0", VA = "0x428ADA0")]
	public static GameObject CreateMultiSelectDropdown(Transform parent, ElementStyle style, HashSetSetting<int> setting, string title, string[] options, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(140f)] float elementWidth, [Optional][DefaultParameterValue(40f)] float elementHeight, [Optional][DefaultParameterValue(300f)] float maxScrollHeight, [Optional] float? optionsWidth, [Optional] UnityAction onSelectionChanged)
	{
		return null;
	}

	[Token(Token = "0x6003C00")]
	[Address(RVA = "0x428AEF0", Offset = "0x428AEF0", VA = "0x428AEF0")]
	public static GameObject CreateIncrementSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(33f)] float elementWidth, [Optional][DefaultParameterValue(30f)] float elementHeight, [Optional] string[] options, [Optional] UnityAction onValueChanged, [Optional] Func<bool> validation)
	{
		return null;
	}

	[Token(Token = "0x6003C01")]
	[Address(RVA = "0x4278570", Offset = "0x4278570", VA = "0x4278570")]
	public static GameObject CreateToggleSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(30f)] float elementWidth, [Optional][DefaultParameterValue(30f)] float elementHeight, [Optional] UnityAction onValueChanged)
	{
		return null;
	}

	[Token(Token = "0x6003C02")]
	[Address(RVA = "0x4281070", Offset = "0x4281070", VA = "0x4281070")]
	public static GameObject CreateToggleGroupSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, string[] options, string tooltip = "", float elementWidth = 30f, float elementHeight = 30f)
	{
		return null;
	}

	[Token(Token = "0x6003C03")]
	[Address(RVA = "0x4282640", Offset = "0x4282640", VA = "0x4282640")]
	public static GameObject CreateSliderSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, string tooltip = "", float elementWidth = 150f, float elementHeight = 16f, int decimalPlaces = 2)
	{
		return null;
	}

	[Token(Token = "0x6003C04")]
	[Address(RVA = "0x4278640", Offset = "0x4278640", VA = "0x4278640")]
	public static GameObject CreateInputSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(140f)] float elementWidth, [Optional][DefaultParameterValue(40f)] float elementHeight, [Optional][DefaultParameterValue(false)] bool multiLine, [Optional] UnityAction onValueChanged, [Optional] UnityAction onEndEdit, [Optional] Func<string, bool> onValidate, [Optional] Func<string, string> onCleanup)
	{
		return null;
	}

	[Token(Token = "0x6003C05")]
	[Address(RVA = "0x42827E0", Offset = "0x42827E0", VA = "0x42827E0")]
	public static GameObject CreateSliderInputSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, string tooltip = "", float sliderWidth = 150f, float sliderHeight = 16f, float inputWidth = 70f, float inputHeight = 40f, int decimalPlaces = 2)
	{
		return null;
	}

	[Token(Token = "0x6003C06")]
	[Address(RVA = "0x42781A0", Offset = "0x42781A0", VA = "0x42781A0")]
	public static GameObject CreateDefaultLabel(Transform parent, ElementStyle style, string title, FontStyle fontStyle = FontStyle.Normal, TextAnchor alignment = TextAnchor.MiddleCenter)
	{
		return null;
	}

	[Token(Token = "0x6003C07")]
	[Address(RVA = "0x428AFC0", Offset = "0x428AFC0", VA = "0x428AFC0")]
	public static GameObject CreateTMPLabel(Transform parent, ElementStyle style, string title, FontStyle fontStyle = FontStyle.Normal, TextAnchor alignment = TextAnchor.MiddleLeft)
	{
		return null;
	}

	[Token(Token = "0x6003C08")]
	[Address(RVA = "0x428B500", Offset = "0x428B500", VA = "0x428B500")]
	public static EffectText CreateEffectText(Transform parent, ElementStyle style, string text, FontStyle fontStyle = FontStyle.Normal, TextAnchor alignment = TextAnchor.MiddleLeft)
	{
		return null;
	}

	[Token(Token = "0x6003C09")]
	[Address(RVA = "0x428BA10", Offset = "0x428BA10", VA = "0x428BA10")]
	public static NameEffectLabel CreateNameEffectLabel(Transform parent, ElementStyle style, string prefix, string name, string suffix, TextAnchor alignment = TextAnchor.MiddleLeft)
	{
		return null;
	}

	[Token(Token = "0x6003C0A")]
	[Address(RVA = "0x42850F0", Offset = "0x42850F0", VA = "0x42850F0")]
	public static GameObject CreateWhiteLabel(Transform parent, ElementStyle style, string title, FontStyle fontStyle = FontStyle.Normal, TextAnchor alignment = TextAnchor.MiddleCenter)
	{
		return null;
	}

	[Token(Token = "0x6003C0B")]
	[Address(RVA = "0x428BDA0", Offset = "0x428BDA0", VA = "0x428BDA0")]
	public static GameObject CreateEmptySpace(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6003C0C")]
	[Address(RVA = "0x428BE30", Offset = "0x428BE30", VA = "0x428BE30")]
	public static GameObject CreateHUDLabel(Transform parent, ElementStyle style, string title, FontStyle fontStyle = FontStyle.Normal, TextAnchor alignment = TextAnchor.MiddleCenter)
	{
		return null;
	}

	[Token(Token = "0x6003C0D")]
	[Address(RVA = "0x428C030", Offset = "0x428C030", VA = "0x428C030")]
	public static GameObject CreateMultiTextLabel(Transform parent, ElementStyle style, FontStyle fontStyle, TextAnchor anchor, float fontSize, int numberOfLabels, bool richText = false)
	{
		return null;
	}

	[Token(Token = "0x6003C0E")]
	[Address(RVA = "0x428C0F0", Offset = "0x428C0F0", VA = "0x428C0F0")]
	public static GameObject CreateKeybindSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, KeybindPopup keybindPopup, string tooltip = "", float elementWidth = 120f, float elementHeight = 35f, int bindCount = 2)
	{
		return null;
	}

	[Token(Token = "0x6003C0F")]
	[Address(RVA = "0x4282570", Offset = "0x4282570", VA = "0x4282570")]
	public static GameObject CreateColorSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, ColorPickPopup colorPickPopup, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(90f)] float elementWidth, [Optional][DefaultParameterValue(30f)] float elementHeight, [Optional] UnityAction onChangeColor)
	{
		return null;
	}

	[Token(Token = "0x6003C10")]
	[Address(RVA = "0x428C570", Offset = "0x428C570", VA = "0x428C570")]
	public static GameObject CreateToggleColorSetting(Transform parent, ElementStyle style, ToggleColorSetting setting, string title, ColorPickPopup colorPickPopup, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(30f)] float toggleWidth, [Optional][DefaultParameterValue(30f)] float toggleHeight, [Optional][DefaultParameterValue(90f)] float colorWidth, [Optional][DefaultParameterValue(30f)] float colorHeight, [Optional] UnityAction onToggleChanged, [Optional] UnityAction onChangeColor)
	{
		return null;
	}

	[Token(Token = "0x6003C11")]
	[Address(RVA = "0x428C7A0", Offset = "0x428C7A0", VA = "0x428C7A0")]
	public static GameObject CreateIconPickSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, string[] options, string[] icons, IconPickPopup popup, [Optional][DefaultParameterValue("")] string tooltip, [Optional] string[] tooltips, [Optional][DefaultParameterValue(0f)] float elementWidth, [Optional][DefaultParameterValue(0f)] float elementHeight, [Optional] UnityAction onSelect, [Optional] TooltipPopup tooltipPopup)
	{
		return null;
	}

	[Token(Token = "0x6003C12")]
	[Address(RVA = "0x42780E0", Offset = "0x42780E0", VA = "0x42780E0")]
	public static GameObject CreateButtonPopupSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, BasePopup popup, string tooltip = "", float elementWidth = 0f, float elementHeight = 0f)
	{
		return null;
	}

	[Token(Token = "0x6003C13")]
	[Address(RVA = "0x4282710", Offset = "0x4282710", VA = "0x4282710")]
	public static GameObject CreateVector3Setting(Transform parent, ElementStyle style, BaseSetting setting, string title, Vector3Popup vector3Popup, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(90f)] float elementWidth, [Optional][DefaultParameterValue(30f)] float elementHeight, [Optional] UnityAction onChangeVector)
	{
		return null;
	}

	[Token(Token = "0x6003C14")]
	[Address(RVA = "0x428CD70", Offset = "0x428CD70", VA = "0x428CD70")]
	public static GameObject CreateHorizontalLine(Transform parent, ElementStyle style, float width, float height = 1f)
	{
		return null;
	}

	[Token(Token = "0x6003C15")]
	[Address(RVA = "0x427E3D0", Offset = "0x427E3D0", VA = "0x427E3D0")]
	public static GameObject CreateHorizontalGroup(Transform parent, float spacing, TextAnchor alignment = TextAnchor.UpperLeft)
	{
		return null;
	}

	[Token(Token = "0x6003C16")]
	[Address(RVA = "0x428CF80", Offset = "0x428CF80", VA = "0x428CF80")]
	public static GameObject CreatePlayerKDRRow(Transform parent, ElementStyle style, Player player)
	{
		return null;
	}

	[Token(Token = "0x6003C17")]
	[Address(RVA = "0x428D030", Offset = "0x428D030", VA = "0x428D030")]
	public static GameObject CreateTeamKDRRow(Transform parent, ElementStyle style, string team)
	{
		return null;
	}

	[Token(Token = "0x6003C18")]
	[Address(RVA = "0x428D0B0", Offset = "0x428D0B0", VA = "0x428D0B0")]
	public static GameObject CreateVerticalGroup(Transform parent, float spacing, TextAnchor alignment = TextAnchor.UpperLeft)
	{
		return null;
	}

	[Token(Token = "0x6003C19")]
	[Address(RVA = "0x4279450", Offset = "0x4279450", VA = "0x4279450")]
	public static CollapsibleSection CreateCollapsibleSection(Transform parent, ElementStyle style, string title, [Optional][DefaultParameterValue(true)] bool startExpanded, [Optional] Action<bool> onExpandedChanged)
	{
		return null;
	}

	[Token(Token = "0x6003C1A")]
	[Address(RVA = "0x428D200", Offset = "0x428D200", VA = "0x428D200")]
	public static CollapsibleToggleSection CreateCollapsibleToggleSection(Transform parent, ElementStyle style, string title, bool startEnabled, [Optional][DefaultParameterValue(true)] bool startExpanded, [Optional] Action<bool> onToggleChanged)
	{
		return null;
	}

	[Token(Token = "0x6003C1B")]
	[Address(RVA = "0x428D870", Offset = "0x428D870", VA = "0x428D870")]
	public static Text CreateOverlayLabel(Transform parent, Transform fontSource, string text, Color color, TextAnchor alignment = TextAnchor.MiddleCenter, FontStyle fontStyle = FontStyle.Normal, int fontSize = 14)
	{
		return null;
	}

	[Token(Token = "0x6003C1C")]
	[Address(RVA = "0x428DC90", Offset = "0x428DC90", VA = "0x428DC90")]
	public static float GetTextWidth(Transform parent, ElementStyle style, string title, FontStyle fontStyle = FontStyle.Normal)
	{
		return default(float);
	}

	[Token(Token = "0x6003C1D")]
	public static GameObject InstantiateAndSetupPanel<T>(Transform parent, string asset, bool enabled = false) where T : BasePanel
	{
		return null;
	}

	[Token(Token = "0x6003C1E")]
	[Address(RVA = "0x428DD50", Offset = "0x428DD50", VA = "0x428DD50")]
	public static GameObject InstantiateAndSetupCustomPopup(Transform parent, string title, float width, float height, bool enabled = false)
	{
		return null;
	}

	[Token(Token = "0x6003C1F")]
	[Address(RVA = "0x427E530", Offset = "0x427E530", VA = "0x427E530")]
	public static GameObject InstantiateAndBind(Transform parent, string asset)
	{
		return null;
	}

	[Token(Token = "0x6003C20")]
	[Address(RVA = "0x4284800", Offset = "0x4284800", VA = "0x4284800")]
	public static void SetAnchor(GameObject obj, TextAnchor anchor, TextAnchor pivot, Vector2 offset)
	{
	}

	[Token(Token = "0x6003C21")]
	[Address(RVA = "0x428DE40", Offset = "0x428DE40", VA = "0x428DE40")]
	public static Vector2 GetAnchorVector(TextAnchor anchor)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6003C22")]
	[Address(RVA = "0x428DEA0", Offset = "0x428DEA0", VA = "0x428DEA0")]
	public ElementFactory()
	{
	}
}
