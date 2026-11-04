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
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000734")]
internal class ElementFactory : MonoBehaviour
{
	[Token(Token = "0x600469C")]
	public static T CreateDefaultMenu<T>() where T : BaseMenu
	{
		return null;
	}

	[Token(Token = "0x600469D")]
	public static T CreateMenu<T>(string asset) where T : BaseMenu
	{
		return null;
	}

	[Token(Token = "0x600469E")]
	public static T CreateEmptyPanel<T>(Transform parent, bool enabled = false) where T : BasePanel
	{
		return null;
	}

	[Token(Token = "0x600469F")]
	[Address(RVA = "0x220D7D0", Offset = "0x220BDD0", VA = "0x18220D7D0")]
	public static GameObject CreateEmptyPanel(Transform parent, Type t, bool enabled = false)
	{
		return null;
	}

	[Token(Token = "0x60046A0")]
	public static T CreateSimplePanel<T>(Transform parent, bool enabled = false) where T : SimplePanel
	{
		return null;
	}

	[Token(Token = "0x60046A1")]
	public static T CreateDefaultPopup<T>(Transform parent, bool enabled = false) where T : BasePopup
	{
		return null;
	}

	[Token(Token = "0x60046A2")]
	public static T CreateHeadedPanel<T>(Transform parent, bool enabled = false) where T : HeadedPanel
	{
		return null;
	}

	[Token(Token = "0x60046A3")]
	public static GameObject CreateTooltipPopup<T>(Transform parent, bool enabled = false) where T : TooltipPopup
	{
		return null;
	}

	[Token(Token = "0x60046A4")]
	[Address(RVA = "0x22102E0", Offset = "0x220E8E0", VA = "0x1822102E0")]
	public static TipPanel CreateTipPanel(Transform parent, bool enabled = false)
	{
		return null;
	}

	[Token(Token = "0x60046A5")]
	[Address(RVA = "0x220C9B0", Offset = "0x220AFB0", VA = "0x18220C9B0")]
	public static GameObject CreateDefaultButton(Transform parent, ElementStyle style, string title, [Optional][DefaultParameterValue(0f)] float elementWidth, [Optional][DefaultParameterValue(0f)] float elementHeight, [Optional] UnityAction onClick)
	{
		return null;
	}

	[Token(Token = "0x60046A6")]
	[Address(RVA = "0x220F360", Offset = "0x220D960", VA = "0x18220F360")]
	public static GameObject CreatePerkButton(Transform parent, ElementStyle style, string title, string tooltip, [Optional][DefaultParameterValue(0f)] float elementWidth, [Optional][DefaultParameterValue(0f)] float elementHeight, [Optional][DefaultParameterValue(0f)] float offset, [Optional] UnityAction onClick)
	{
		return null;
	}

	[Token(Token = "0x60046A7")]
	[Address(RVA = "0x220DEA0", Offset = "0x220C4A0", VA = "0x18220DEA0")]
	public static GameObject CreateIconButton(Transform parent, ElementStyle style, string icon, [Optional][DefaultParameterValue(32f)] float elementWidth, [Optional][DefaultParameterValue(32f)] float elementHeight, [Optional] UnityAction onClick)
	{
		return null;
	}

	[Token(Token = "0x60046A8")]
	[Address(RVA = "0x220F6F0", Offset = "0x220DCF0", VA = "0x18220F6F0")]
	public static GameObject CreateRawImage(Transform parent, ElementStyle style, string image, float elementWidth = 32f, float elementHeight = 32f)
	{
		return null;
	}

	[Token(Token = "0x60046A9")]
	[Address(RVA = "0x2210880", Offset = "0x220EE80", VA = "0x182210880")]
	public static GameObject CreateTooltipIcon(Transform parent, ElementStyle style, string tooltip, float elementWidth = 30f, float elementHeight = 30f)
	{
		return null;
	}

	[Token(Token = "0x60046AA")]
	[Address(RVA = "0x2210090", Offset = "0x220E690", VA = "0x182210090")]
	public static GameObject CreateTextButton(Transform parent, ElementStyle style, string title, [Optional][DefaultParameterValue(0f)] float width, [Optional] UnityAction onClick)
	{
		return null;
	}

	[Token(Token = "0x60046AB")]
	[Address(RVA = "0x220E770", Offset = "0x220CD70", VA = "0x18220E770")]
	public static GameObject CreateLinkButton(Transform parent, ElementStyle style, string title, [Optional] UnityAction onClick)
	{
		return null;
	}

	[Token(Token = "0x60046AC")]
	[Address(RVA = "0x220BD70", Offset = "0x220A370", VA = "0x18220BD70")]
	public static GameObject CreateCategoryButton(Transform parent, ElementStyle style, string title, [Optional] UnityAction onClick)
	{
		return null;
	}

	[Token(Token = "0x60046AD")]
	[Address(RVA = "0x220D110", Offset = "0x220B710", VA = "0x18220D110")]
	public static GameObject CreateDropdownSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, string[] options, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(140f)] float elementWidth, [Optional][DefaultParameterValue(40f)] float elementHeight, [Optional][DefaultParameterValue(300f)] float maxScrollHeight, [Optional] float? optionsWidth, [Optional] UnityAction onDropdownOptionSelect, [Optional] int[] intOptionValues)
	{
		return null;
	}

	[Token(Token = "0x60046AE")]
	[Address(RVA = "0x220CF90", Offset = "0x220B590", VA = "0x18220CF90")]
	public static GameObject CreateDropdownSelect(Transform parent, ElementStyle style, BaseSetting setting, string title, string[] options, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(140f)] float elementWidth, [Optional][DefaultParameterValue(40f)] float elementHeight, [Optional][DefaultParameterValue(300f)] float maxScrollHeight, [Optional] float? optionsWidth, [Optional] UnityAction onDropdownOptionSelect)
	{
		return null;
	}

	[Token(Token = "0x60046AF")]
	[Address(RVA = "0x220E960", Offset = "0x220CF60", VA = "0x18220E960")]
	public static GameObject CreateMultiSelectDropdown(Transform parent, ElementStyle style, HashSetSetting<int> setting, string title, string[] options, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(140f)] float elementWidth, [Optional][DefaultParameterValue(40f)] float elementHeight, [Optional][DefaultParameterValue(300f)] float maxScrollHeight, [Optional] float? optionsWidth, [Optional] UnityAction onSelectionChanged, [Optional] int[] intOptionValues)
	{
		return null;
	}

	[Token(Token = "0x60046B0")]
	[Address(RVA = "0x220E2D0", Offset = "0x220C8D0", VA = "0x18220E2D0")]
	public static GameObject CreateIncrementSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(33f)] float elementWidth, [Optional][DefaultParameterValue(30f)] float elementHeight, [Optional] string[] options, [Optional] UnityAction onValueChanged, [Optional] Func<bool> validation)
	{
		return null;
	}

	[Token(Token = "0x60046B1")]
	[Address(RVA = "0x22107B0", Offset = "0x220EDB0", VA = "0x1822107B0")]
	public static GameObject CreateToggleSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(30f)] float elementWidth, [Optional][DefaultParameterValue(30f)] float elementHeight, [Optional] UnityAction onValueChanged)
	{
		return null;
	}

	[Token(Token = "0x60046B2")]
	[Address(RVA = "0x22106E0", Offset = "0x220ECE0", VA = "0x1822106E0")]
	public static GameObject CreateToggleGroupSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, string[] options, string tooltip = "", float elementWidth = 30f, float elementHeight = 30f)
	{
		return null;
	}

	[Token(Token = "0x60046B3")]
	[Address(RVA = "0x220F9B0", Offset = "0x220DFB0", VA = "0x18220F9B0")]
	public static GameObject CreateSliderSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(150f)] float elementWidth, [Optional][DefaultParameterValue(16f)] float elementHeight, [Optional][DefaultParameterValue(2)] int decimalPlaces, [Optional][DefaultParameterValue(0f)] float interval, [Optional] UnityAction onValueChanged)
	{
		return null;
	}

	[Token(Token = "0x60046B4")]
	[Address(RVA = "0x220E3C0", Offset = "0x220C9C0", VA = "0x18220E3C0")]
	public static GameObject CreateInputSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(140f)] float elementWidth, [Optional][DefaultParameterValue(40f)] float elementHeight, [Optional][DefaultParameterValue(false)] bool multiLine, [Optional] UnityAction onValueChanged, [Optional] UnityAction onEndEdit, [Optional] Func<string, bool> onValidate, [Optional] Func<string, string> onCleanup)
	{
		return null;
	}

	[Token(Token = "0x60046B5")]
	[Address(RVA = "0x220F8B0", Offset = "0x220DEB0", VA = "0x18220F8B0")]
	public static GameObject CreateSliderInputSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, string tooltip = "", float sliderWidth = 150f, float sliderHeight = 16f, float inputWidth = 70f, float inputHeight = 40f, int decimalPlaces = 2)
	{
		return null;
	}

	[Token(Token = "0x60046B6")]
	[Address(RVA = "0x220CCE0", Offset = "0x220B2E0", VA = "0x18220CCE0")]
	public static GameObject CreateDefaultLabel(Transform parent, ElementStyle style, string title, FontStyle fontStyle = FontStyle.Normal, TextAnchor alignment = TextAnchor.MiddleCenter)
	{
		return null;
	}

	[Token(Token = "0x60046B7")]
	[Address(RVA = "0x220FAA0", Offset = "0x220E0A0", VA = "0x18220FAA0")]
	public static GameObject CreateTMPLabel(Transform parent, ElementStyle style, string title, FontStyle fontStyle = FontStyle.Normal, TextAnchor alignment = TextAnchor.MiddleLeft)
	{
		return null;
	}

	[Token(Token = "0x60046B8")]
	[Address(RVA = "0x220D2A0", Offset = "0x220B8A0", VA = "0x18220D2A0")]
	public static EffectText CreateEffectText(Transform parent, ElementStyle style, string text, FontStyle fontStyle = FontStyle.Normal, TextAnchor alignment = TextAnchor.MiddleLeft)
	{
		return null;
	}

	[Token(Token = "0x60046B9")]
	[Address(RVA = "0x220EBD0", Offset = "0x220D1D0", VA = "0x18220EBD0")]
	public static NameEffectLabel CreateNameEffectLabel(Transform parent, ElementStyle style, string prefix, string name, string suffix, TextAnchor alignment = TextAnchor.MiddleLeft)
	{
		return null;
	}

	[Token(Token = "0x60046BA")]
	[Address(RVA = "0x2210CF0", Offset = "0x220F2F0", VA = "0x182210CF0")]
	public static GameObject CreateWhiteLabel(Transform parent, ElementStyle style, string title, FontStyle fontStyle = FontStyle.Normal, TextAnchor alignment = TextAnchor.MiddleCenter)
	{
		return null;
	}

	[Token(Token = "0x60046BB")]
	[Address(RVA = "0x220D900", Offset = "0x220BF00", VA = "0x18220D900")]
	public static GameObject CreateEmptySpace(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x60046BC")]
	[Address(RVA = "0x220E670", Offset = "0x220CC70", VA = "0x18220E670")]
	public static GameObject CreateLegacyHUDLabel(Transform parent, ElementStyle style, string title, FontStyle fontStyle = FontStyle.Normal, TextAnchor alignment = TextAnchor.MiddleCenter)
	{
		return null;
	}

	[Token(Token = "0x60046BD")]
	[Address(RVA = "0x220D9A0", Offset = "0x220BFA0", VA = "0x18220D9A0")]
	public static GameObject CreateHUDLabel(Transform parent, ElementStyle style, string title, FontStyle fontStyle = FontStyle.Normal, TextAlignmentOptions alignment = TextAlignmentOptions.Center)
	{
		return null;
	}

	[Token(Token = "0x60046BE")]
	[Address(RVA = "0x220BB40", Offset = "0x220A140", VA = "0x18220BB40")]
	private static void ConfigureHUDLabelLayout(GameObject label, Transform parent)
	{
	}

	[Token(Token = "0x60046BF")]
	[Address(RVA = "0x220EAF0", Offset = "0x220D0F0", VA = "0x18220EAF0")]
	public static GameObject CreateMultiTextLabel(Transform parent, ElementStyle style, FontStyle fontStyle, TextAnchor anchor, float fontSize, int numberOfLabels, bool richText = false)
	{
		return null;
	}

	[Token(Token = "0x60046C0")]
	[Address(RVA = "0x220E520", Offset = "0x220CB20", VA = "0x18220E520")]
	public static GameObject CreateKeybindSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, KeybindPopup keybindPopup, string tooltip = "", float elementWidth = 120f, float elementHeight = 35f, int bindCount = 2)
	{
		return null;
	}

	[Token(Token = "0x60046C1")]
	[Address(RVA = "0x220C8D0", Offset = "0x220AED0", VA = "0x18220C8D0")]
	public static GameObject CreateColorSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, ColorPickPopup colorPickPopup, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(90f)] float elementWidth, [Optional][DefaultParameterValue(30f)] float elementHeight, [Optional] UnityAction onChangeColor)
	{
		return null;
	}

	[Token(Token = "0x60046C2")]
	[Address(RVA = "0x2210390", Offset = "0x220E990", VA = "0x182210390")]
	public static GameObject CreateToggleColorSetting(Transform parent, ElementStyle style, ToggleColorSetting setting, string title, ColorPickPopup colorPickPopup, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(30f)] float toggleWidth, [Optional][DefaultParameterValue(30f)] float toggleHeight, [Optional][DefaultParameterValue(90f)] float colorWidth, [Optional][DefaultParameterValue(30f)] float colorHeight, [Optional] UnityAction onToggleChanged, [Optional] UnityAction onChangeColor)
	{
		return null;
	}

	[Token(Token = "0x60046C3")]
	[Address(RVA = "0x220E1A0", Offset = "0x220C7A0", VA = "0x18220E1A0")]
	public static GameObject CreateIconPickSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, string[] options, string[] icons, IconPickPopup popup, [Optional][DefaultParameterValue("")] string tooltip, [Optional] string[] tooltips, [Optional][DefaultParameterValue(0f)] float elementWidth, [Optional][DefaultParameterValue(0f)] float elementHeight, [Optional] UnityAction onSelect, [Optional] TooltipPopup tooltipPopup, [Optional] int[] intOptionValues)
	{
		return null;
	}

	[Token(Token = "0x60046C4")]
	[Address(RVA = "0x220BCA0", Offset = "0x220A2A0", VA = "0x18220BCA0")]
	public static GameObject CreateButtonPopupSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, BasePopup popup, string tooltip = "", float elementWidth = 0f, float elementHeight = 0f)
	{
		return null;
	}

	[Token(Token = "0x60046C5")]
	[Address(RVA = "0x2210AB0", Offset = "0x220F0B0", VA = "0x182210AB0")]
	public static GameObject CreateVector3Setting(Transform parent, ElementStyle style, BaseSetting setting, string title, Vector3Popup vector3Popup, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(90f)] float elementWidth, [Optional][DefaultParameterValue(30f)] float elementHeight, [Optional] UnityAction onChangeVector)
	{
		return null;
	}

	[Token(Token = "0x60046C6")]
	[Address(RVA = "0x220DC50", Offset = "0x220C250", VA = "0x18220DC50")]
	public static GameObject CreateHorizontalLine(Transform parent, ElementStyle style, float width, float height = 1f)
	{
		return null;
	}

	[Token(Token = "0x60046C7")]
	[Address(RVA = "0x220DAF0", Offset = "0x220C0F0", VA = "0x18220DAF0")]
	public static GameObject CreateHorizontalGroup(Transform parent, float spacing, TextAnchor alignment = TextAnchor.UpperLeft)
	{
		return null;
	}

	[Token(Token = "0x60046C8")]
	[Address(RVA = "0x220F630", Offset = "0x220DC30", VA = "0x18220F630")]
	public static GameObject CreatePlayerKDRRow(Transform parent, ElementStyle style, Player player)
	{
		return null;
	}

	[Token(Token = "0x60046C9")]
	[Address(RVA = "0x220FFF0", Offset = "0x220E5F0", VA = "0x18220FFF0")]
	public static GameObject CreateTeamKDRRow(Transform parent, ElementStyle style, string team)
	{
		return null;
	}

	[Token(Token = "0x60046CA")]
	[Address(RVA = "0x2210B90", Offset = "0x220F190", VA = "0x182210B90")]
	public static GameObject CreateVerticalGroup(Transform parent, float spacing, TextAnchor alignment = TextAnchor.UpperLeft)
	{
		return null;
	}

	[Token(Token = "0x60046CB")]
	[Address(RVA = "0x220BF60", Offset = "0x220A560", VA = "0x18220BF60")]
	public static CollapsibleSection CreateCollapsibleSection(Transform parent, ElementStyle style, string title, [Optional][DefaultParameterValue(true)] bool startExpanded, [Optional] Action<bool> onExpandedChanged)
	{
		return null;
	}

	[Token(Token = "0x60046CC")]
	[Address(RVA = "0x220C2C0", Offset = "0x220A8C0", VA = "0x18220C2C0")]
	public static CollapsibleToggleSection CreateCollapsibleToggleSection(Transform parent, ElementStyle style, string title, bool startEnabled, [Optional][DefaultParameterValue(true)] bool startExpanded, [Optional] Action<bool> onToggleChanged)
	{
		return null;
	}

	[Token(Token = "0x60046CD")]
	[Address(RVA = "0x220EF40", Offset = "0x220D540", VA = "0x18220EF40")]
	public static Text CreateOverlayLabel(Transform parent, Transform fontSource, string text, Color color, TextAnchor alignment = TextAnchor.MiddleCenter, FontStyle fontStyle = FontStyle.Normal, int fontSize = 14)
	{
		return null;
	}

	[Token(Token = "0x60046CE")]
	[Address(RVA = "0x2211080", Offset = "0x220F680", VA = "0x182211080")]
	public static float GetTextWidth(Transform parent, ElementStyle style, string title, FontStyle fontStyle = FontStyle.Normal)
	{
		return default(float);
	}

	[Token(Token = "0x60046CF")]
	public static GameObject InstantiateAndSetupPanel<T>(Transform parent, string asset, bool enabled = false) where T : BasePanel
	{
		return null;
	}

	[Token(Token = "0x60046D0")]
	[Address(RVA = "0x22112C0", Offset = "0x220F8C0", VA = "0x1822112C0")]
	public static GameObject InstantiateAndSetupCustomPopup(Transform parent, string title, float width, float height, bool enabled = false)
	{
		return null;
	}

	[Token(Token = "0x60046D1")]
	[Address(RVA = "0x2211170", Offset = "0x220F770", VA = "0x182211170")]
	public static GameObject InstantiateAndBind(Transform parent, string asset)
	{
		return null;
	}

	[Token(Token = "0x60046D2")]
	[Address(RVA = "0x22113D0", Offset = "0x220F9D0", VA = "0x1822113D0")]
	public static void SetAnchor(GameObject obj, TextAnchor anchor, TextAnchor pivot, Vector2 offset)
	{
	}

	[Token(Token = "0x60046D3")]
	[Address(RVA = "0x2210FA0", Offset = "0x220F5A0", VA = "0x182210FA0")]
	public static Vector2 GetAnchorVector(TextAnchor anchor)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60046D4")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public ElementFactory()
	{
	}
}
