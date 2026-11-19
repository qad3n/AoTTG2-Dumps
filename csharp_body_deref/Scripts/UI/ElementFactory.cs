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

[Token(Token = "0x20007DA")]
internal class ElementFactory : MonoBehaviour
{
	[Token(Token = "0x6004BB8")]
	public static T CreateDefaultMenu<T>() where T : BaseMenu
	{
		return null;
	}

	[Token(Token = "0x6004BB9")]
	public static T CreateMenu<T>(string asset) where T : BaseMenu
	{
		return null;
	}

	[Token(Token = "0x6004BBA")]
	public static T CreateEmptyPanel<T>(Transform parent, bool enabled = false) where T : BasePanel
	{
		return null;
	}

	[Token(Token = "0x6004BBB")]
	[Address(RVA = "0x5BE8660", Offset = "0x5BE7660", VA = "0x5BE8660")]
	public static GameObject CreateEmptyPanel(Transform parent, Type t, bool enabled = false)
	{
		return null;
	}

	[Token(Token = "0x6004BBC")]
	public static T CreateSimplePanel<T>(Transform parent, bool enabled = false) where T : SimplePanel
	{
		return null;
	}

	[Token(Token = "0x6004BBD")]
	public static T CreateDefaultPopup<T>(Transform parent, bool enabled = false) where T : BasePopup
	{
		return null;
	}

	[Token(Token = "0x6004BBE")]
	public static T CreateHeadedPanel<T>(Transform parent, bool enabled = false) where T : HeadedPanel
	{
		return null;
	}

	[Token(Token = "0x6004BBF")]
	public static GameObject CreateTooltipPopup<T>(Transform parent, bool enabled = false) where T : TooltipPopup
	{
		return null;
	}

	[Token(Token = "0x6004BC0")]
	[Address(RVA = "0x5BE8780", Offset = "0x5BE7780", VA = "0x5BE8780")]
	public static TipPanel CreateTipPanel(Transform parent, bool enabled = false)
	{
		return null;
	}

	[Token(Token = "0x6004BC1")]
	[Address(RVA = "0x5BE8820", Offset = "0x5BE7820", VA = "0x5BE8820")]
	public static GameObject CreateDefaultButton(Transform parent, ElementStyle style, string title, [Optional][DefaultParameterValue(0f)] float elementWidth, [Optional][DefaultParameterValue(0f)] float elementHeight, [Optional] UnityAction onClick)
	{
		return null;
	}

	[Token(Token = "0x6004BC2")]
	[Address(RVA = "0x5BD29F0", Offset = "0x5BD19F0", VA = "0x5BD29F0")]
	public static GameObject CreatePerkButton(Transform parent, ElementStyle style, string title, string tooltip, [Optional][DefaultParameterValue(0f)] float elementWidth, [Optional][DefaultParameterValue(0f)] float elementHeight, [Optional][DefaultParameterValue(0f)] float offset, [Optional] UnityAction onClick)
	{
		return null;
	}

	[Token(Token = "0x6004BC3")]
	[Address(RVA = "0x5BE8B20", Offset = "0x5BE7B20", VA = "0x5BE8B20")]
	public static GameObject CreateIconButton(Transform parent, ElementStyle style, string icon, [Optional][DefaultParameterValue(32f)] float elementWidth, [Optional][DefaultParameterValue(32f)] float elementHeight, [Optional] UnityAction onClick, [Optional] string iconRoot)
	{
		return null;
	}

	[Token(Token = "0x6004BC4")]
	[Address(RVA = "0x5BDB210", Offset = "0x5BDA210", VA = "0x5BDB210")]
	public static GameObject CreateSetActionButtons(Transform parent, ElementStyle style, string[] operations, Action<string> onClick, float size = 36f)
	{
		return null;
	}

	[Token(Token = "0x6004BC5")]
	[Address(RVA = "0x5BD2C90", Offset = "0x5BD1C90", VA = "0x5BD2C90")]
	public static GameObject CreateRawImage(Transform parent, ElementStyle style, string image, float elementWidth = 32f, float elementHeight = 32f)
	{
		return null;
	}

	[Token(Token = "0x6004BC6")]
	[Address(RVA = "0x5BE8E30", Offset = "0x5BE7E30", VA = "0x5BE8E30")]
	public static GameObject CreateTooltipIcon(Transform parent, ElementStyle style, string tooltip, float elementWidth = 30f, float elementHeight = 30f)
	{
		return null;
	}

	[Token(Token = "0x6004BC7")]
	[Address(RVA = "0x5BD1980", Offset = "0x5BD0980", VA = "0x5BD1980")]
	public static GameObject CreateTextButton(Transform parent, ElementStyle style, string title, [Optional][DefaultParameterValue(0f)] float width, [Optional] UnityAction onClick)
	{
		return null;
	}

	[Token(Token = "0x6004BC8")]
	[Address(RVA = "0x5BE8EE0", Offset = "0x5BE7EE0", VA = "0x5BE8EE0")]
	public static GameObject CreateLinkButton(Transform parent, ElementStyle style, string title, [Optional] UnityAction onClick)
	{
		return null;
	}

	[Token(Token = "0x6004BC9")]
	[Address(RVA = "0x5BE90D0", Offset = "0x5BE80D0", VA = "0x5BE90D0")]
	public static GameObject CreateCategoryButton(Transform parent, ElementStyle style, string title, [Optional] UnityAction onClick)
	{
		return null;
	}

	[Token(Token = "0x6004BCA")]
	[Address(RVA = "0x5BD4A10", Offset = "0x5BD3A10", VA = "0x5BD4A10")]
	public static GameObject CreateDropdownSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, string[] options, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(140f)] float elementWidth, [Optional][DefaultParameterValue(40f)] float elementHeight, [Optional][DefaultParameterValue(300f)] float maxScrollHeight, [Optional] float? optionsWidth, [Optional] UnityAction onDropdownOptionSelect, [Optional] int[] intOptionValues, [Optional] Func<string, string> optionLabel)
	{
		return null;
	}

	[Token(Token = "0x6004BCB")]
	[Address(RVA = "0x5BE92C0", Offset = "0x5BE82C0", VA = "0x5BE92C0")]
	public static GameObject CreateDropdownSelect(Transform parent, ElementStyle style, BaseSetting setting, string title, string[] options, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(140f)] float elementWidth, [Optional][DefaultParameterValue(40f)] float elementHeight, [Optional][DefaultParameterValue(300f)] float maxScrollHeight, [Optional] float? optionsWidth, [Optional] UnityAction onDropdownOptionSelect)
	{
		return null;
	}

	[Token(Token = "0x6004BCC")]
	[Address(RVA = "0x5BE9420", Offset = "0x5BE8420", VA = "0x5BE9420")]
	public static GameObject CreateMultiSelectDropdown(Transform parent, ElementStyle style, HashSetSetting<int> setting, string title, string[] options, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(140f)] float elementWidth, [Optional][DefaultParameterValue(40f)] float elementHeight, [Optional][DefaultParameterValue(300f)] float maxScrollHeight, [Optional] float? optionsWidth, [Optional] UnityAction onSelectionChanged, [Optional] int[] intOptionValues)
	{
		return null;
	}

	[Token(Token = "0x6004BCD")]
	[Address(RVA = "0x5BD39B0", Offset = "0x5BD29B0", VA = "0x5BD39B0")]
	public static GameObject CreateIncrementSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(33f)] float elementWidth, [Optional][DefaultParameterValue(30f)] float elementHeight, [Optional] string[] options, [Optional] UnityAction onValueChanged, [Optional] Func<bool> validation)
	{
		return null;
	}

	[Token(Token = "0x6004BCE")]
	[Address(RVA = "0x5BD6B90", Offset = "0x5BD5B90", VA = "0x5BD6B90")]
	public static GameObject CreateToggleSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(30f)] float elementWidth, [Optional][DefaultParameterValue(30f)] float elementHeight, [Optional] UnityAction onValueChanged)
	{
		return null;
	}

	[Token(Token = "0x6004BCF")]
	[Address(RVA = "0x5BE9580", Offset = "0x5BE8580", VA = "0x5BE9580")]
	public static GameObject CreateToggleGroupSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, string[] options, string tooltip = "", float elementWidth = 30f, float elementHeight = 30f)
	{
		return null;
	}

	[Token(Token = "0x6004BD0")]
	[Address(RVA = "0x5BE9650", Offset = "0x5BE8650", VA = "0x5BE9650")]
	public static GameObject CreateSliderSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(150f)] float elementWidth, [Optional][DefaultParameterValue(16f)] float elementHeight, [Optional][DefaultParameterValue(2)] int decimalPlaces, [Optional][DefaultParameterValue(0f)] float interval, [Optional] UnityAction onValueChanged)
	{
		return null;
	}

	[Token(Token = "0x6004BD1")]
	[Address(RVA = "0x5BE0270", Offset = "0x5BDF270", VA = "0x5BE0270")]
	public static GameObject CreateInputSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(140f)] float elementWidth, [Optional][DefaultParameterValue(40f)] float elementHeight, [Optional][DefaultParameterValue(false)] bool multiLine, [Optional] UnityAction onValueChanged, [Optional] UnityAction onEndEdit, [Optional] Func<string, bool> onValidate, [Optional] Func<string, string> onCleanup)
	{
		return null;
	}

	[Token(Token = "0x6004BD2")]
	[Address(RVA = "0x5BE9730", Offset = "0x5BE8730", VA = "0x5BE9730")]
	public static GameObject CreateSliderInputSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, string tooltip = "", float sliderWidth = 150f, float sliderHeight = 16f, float inputWidth = 70f, float inputHeight = 40f, int decimalPlaces = 2)
	{
		return null;
	}

	[Token(Token = "0x6004BD3")]
	[Address(RVA = "0x5BD1BE0", Offset = "0x5BD0BE0", VA = "0x5BD1BE0")]
	public static GameObject CreateDefaultLabel(Transform parent, ElementStyle style, string title, FontStyle fontStyle = FontStyle.Normal, TextAnchor alignment = TextAnchor.MiddleCenter)
	{
		return null;
	}

	[Token(Token = "0x6004BD4")]
	[Address(RVA = "0x5BE9810", Offset = "0x5BE8810", VA = "0x5BE9810")]
	public static GameObject CreateTMPLabel(Transform parent, ElementStyle style, string title, FontStyle fontStyle = FontStyle.Normal, TextAnchor alignment = TextAnchor.MiddleLeft)
	{
		return null;
	}

	[Token(Token = "0x6004BD5")]
	[Address(RVA = "0x5BE9D50", Offset = "0x5BE8D50", VA = "0x5BE9D50")]
	public static EffectText CreateEffectText(Transform parent, ElementStyle style, string text, FontStyle fontStyle = FontStyle.Normal, TextAnchor alignment = TextAnchor.MiddleLeft)
	{
		return null;
	}

	[Token(Token = "0x6004BD6")]
	[Address(RVA = "0x5BEA260", Offset = "0x5BE9260", VA = "0x5BEA260")]
	public static NameEffectLabel CreateNameEffectLabel(Transform parent, ElementStyle style, string prefix, string name, string suffix, TextAnchor alignment = TextAnchor.MiddleLeft)
	{
		return null;
	}

	[Token(Token = "0x6004BD7")]
	[Address(RVA = "0x5BEA5F0", Offset = "0x5BE95F0", VA = "0x5BEA5F0")]
	public static GameObject CreateWhiteLabel(Transform parent, ElementStyle style, string title, FontStyle fontStyle = FontStyle.Normal, TextAnchor alignment = TextAnchor.MiddleCenter)
	{
		return null;
	}

	[Token(Token = "0x6004BD8")]
	[Address(RVA = "0x5BEA890", Offset = "0x5BE9890", VA = "0x5BEA890")]
	public static GameObject CreateEmptySpace(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6004BD9")]
	[Address(RVA = "0x5BEA920", Offset = "0x5BE9920", VA = "0x5BEA920")]
	public static GameObject CreateLegacyHUDLabel(Transform parent, ElementStyle style, string title, FontStyle fontStyle = FontStyle.Normal, TextAnchor alignment = TextAnchor.MiddleCenter)
	{
		return null;
	}

	[Token(Token = "0x6004BDA")]
	[Address(RVA = "0x5BEAB90", Offset = "0x5BE9B90", VA = "0x5BEAB90")]
	public static GameObject CreateHUDLabel(Transform parent, ElementStyle style, string title, FontStyle fontStyle = FontStyle.Normal, TextAlignmentOptions alignment = TextAlignmentOptions.Center)
	{
		return null;
	}

	[Token(Token = "0x6004BDB")]
	[Address(RVA = "0x5BEAA00", Offset = "0x5BE9A00", VA = "0x5BEAA00")]
	private static void ConfigureHUDLabelLayout(GameObject label, Transform parent)
	{
	}

	[Token(Token = "0x6004BDC")]
	[Address(RVA = "0x5BEACF0", Offset = "0x5BE9CF0", VA = "0x5BEACF0")]
	public static GameObject CreateMultiTextLabel(Transform parent, ElementStyle style, FontStyle fontStyle, TextAnchor anchor, float fontSize, int numberOfLabels, bool richText = false)
	{
		return null;
	}

	[Token(Token = "0x6004BDD")]
	[Address(RVA = "0x5BEADB0", Offset = "0x5BE9DB0", VA = "0x5BEADB0")]
	public static GameObject CreateKeybindSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, KeybindPopup keybindPopup, string tooltip = "", float elementWidth = 120f, float elementHeight = 35f, int bindCount = 2)
	{
		return null;
	}

	[Token(Token = "0x6004BDE")]
	[Address(RVA = "0x5BDBE00", Offset = "0x5BDAE00", VA = "0x5BDBE00")]
	public static GameObject CreateColorSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, ColorPickPopup colorPickPopup, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(90f)] float elementWidth, [Optional][DefaultParameterValue(30f)] float elementHeight, [Optional] UnityAction onChangeColor)
	{
		return null;
	}

	[Token(Token = "0x6004BDF")]
	[Address(RVA = "0x5BEAE80", Offset = "0x5BE9E80", VA = "0x5BEAE80")]
	public static GameObject CreateToggleColorSetting(Transform parent, ElementStyle style, ToggleColorSetting setting, string title, ColorPickPopup colorPickPopup, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(30f)] float toggleWidth, [Optional][DefaultParameterValue(30f)] float toggleHeight, [Optional][DefaultParameterValue(90f)] float colorWidth, [Optional][DefaultParameterValue(30f)] float colorHeight, [Optional] UnityAction onToggleChanged, [Optional] UnityAction onChangeColor)
	{
		return null;
	}

	[Token(Token = "0x6004BE0")]
	[Address(RVA = "0x5BDBBC0", Offset = "0x5BDABC0", VA = "0x5BDBBC0")]
	public static GameObject CreateIconPickSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, string[] options, string[] icons, IconPickPopup popup, [Optional][DefaultParameterValue("")] string tooltip, [Optional] string[] tooltips, [Optional][DefaultParameterValue(0f)] float elementWidth, [Optional][DefaultParameterValue(0f)] float elementHeight, [Optional] UnityAction onSelect, [Optional] TooltipPopup tooltipPopup, [Optional] int[] intOptionValues)
	{
		return null;
	}

	[Token(Token = "0x6004BE1")]
	[Address(RVA = "0x5BEB0A0", Offset = "0x5BEA0A0", VA = "0x5BEB0A0")]
	public static GameObject CreateButtonPopupSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, BasePopup popup, string tooltip = "", float elementWidth = 0f, float elementHeight = 0f)
	{
		return null;
	}

	[Token(Token = "0x6004BE2")]
	[Address(RVA = "0x5BEB170", Offset = "0x5BEA170", VA = "0x5BEB170")]
	public static GameObject CreateVector3Setting(Transform parent, ElementStyle style, BaseSetting setting, string title, Vector3Popup vector3Popup, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(90f)] float elementWidth, [Optional][DefaultParameterValue(30f)] float elementHeight, [Optional] UnityAction onChangeVector)
	{
		return null;
	}

	[Token(Token = "0x6004BE3")]
	[Address(RVA = "0x5BEB240", Offset = "0x5BEA240", VA = "0x5BEB240")]
	public static GameObject CreateHorizontalLine(Transform parent, ElementStyle style, float width, float height = 1f)
	{
		return null;
	}

	[Token(Token = "0x6004BE4")]
	[Address(RVA = "0x5BD1E80", Offset = "0x5BD0E80", VA = "0x5BD1E80")]
	public static GameObject CreateHorizontalGroup(Transform parent, float spacing, TextAnchor alignment = TextAnchor.UpperLeft)
	{
		return null;
	}

	[Token(Token = "0x6004BE5")]
	[Address(RVA = "0x5BEB450", Offset = "0x5BEA450", VA = "0x5BEB450")]
	public static GameObject CreatePlayerKDRRow(Transform parent, ElementStyle style, Player player)
	{
		return null;
	}

	[Token(Token = "0x6004BE6")]
	[Address(RVA = "0x5BEB500", Offset = "0x5BEA500", VA = "0x5BEB500")]
	public static GameObject CreateTeamKDRRow(Transform parent, ElementStyle style, string team)
	{
		return null;
	}

	[Token(Token = "0x6004BE7")]
	[Address(RVA = "0x5BEB580", Offset = "0x5BEA580", VA = "0x5BEB580")]
	public static GameObject CreateVerticalGroup(Transform parent, float spacing, TextAnchor alignment = TextAnchor.UpperLeft)
	{
		return null;
	}

	[Token(Token = "0x6004BE8")]
	[Address(RVA = "0x5BEB6D0", Offset = "0x5BEA6D0", VA = "0x5BEB6D0")]
	public static CollapsibleSection CreateCollapsibleSection(Transform parent, ElementStyle style, string title, [Optional][DefaultParameterValue(true)] bool startExpanded, [Optional] Action<bool> onExpandedChanged)
	{
		return null;
	}

	[Token(Token = "0x6004BE9")]
	[Address(RVA = "0x5BEB8D0", Offset = "0x5BEA8D0", VA = "0x5BEB8D0")]
	public static CollapsibleToggleSection CreateCollapsibleToggleSection(Transform parent, ElementStyle style, string title, bool startEnabled, [Optional][DefaultParameterValue(true)] bool startExpanded, [Optional] Action<bool> onToggleChanged)
	{
		return null;
	}

	[Token(Token = "0x6004BEA")]
	[Address(RVA = "0x5BEBEE0", Offset = "0x5BEAEE0", VA = "0x5BEBEE0")]
	public static Text CreateOverlayLabel(Transform parent, Transform fontSource, string text, Color color, TextAnchor alignment = TextAnchor.MiddleCenter, FontStyle fontStyle = FontStyle.Normal, int fontSize = 14)
	{
		return null;
	}

	[Token(Token = "0x6004BEB")]
	[Address(RVA = "0x5BEC300", Offset = "0x5BEB300", VA = "0x5BEC300")]
	public static float GetTextWidth(Transform parent, ElementStyle style, string title, FontStyle fontStyle = FontStyle.Normal)
	{
		return default(float);
	}

	[Token(Token = "0x6004BEC")]
	public static GameObject InstantiateAndSetupPanel<T>(Transform parent, string asset, bool enabled = false) where T : BasePanel
	{
		return null;
	}

	[Token(Token = "0x6004BED")]
	[Address(RVA = "0x5BEC3C0", Offset = "0x5BEB3C0", VA = "0x5BEC3C0")]
	public static GameObject InstantiateAndSetupCustomPopup(Transform parent, string title, float width, float height, bool enabled = false)
	{
		return null;
	}

	[Token(Token = "0x6004BEE")]
	[Address(RVA = "0x5BD9730", Offset = "0x5BD8730", VA = "0x5BD9730")]
	public static GameObject InstantiateAndBind(Transform parent, string asset)
	{
		return null;
	}

	[Token(Token = "0x6004BEF")]
	[Address(RVA = "0x5BD56C0", Offset = "0x5BD46C0", VA = "0x5BD56C0")]
	public static void SetAnchor(GameObject obj, TextAnchor anchor, TextAnchor pivot, Vector2 offset)
	{
	}

	[Token(Token = "0x6004BF0")]
	[Address(RVA = "0x5BEC4B0", Offset = "0x5BEB4B0", VA = "0x5BEC4B0")]
	public static Vector2 GetAnchorVector(TextAnchor anchor)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6004BF1")]
	[Address(RVA = "0x5BEC510", Offset = "0x5BEB510", VA = "0x5BEC510")]
	public ElementFactory()
	{
	}
}
