using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using PatreonEffects;
using Photon.Realtime;
using Settings;
using UnityEngine;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x200059B")]
internal class ElementFactory : MonoBehaviour
{
	[Token(Token = "0x60039DD")]
	public static T CreateDefaultMenu<T>() where T : BaseMenu
	{
		return null;
	}

	[Token(Token = "0x60039DE")]
	public static T CreateMenu<T>(string asset) where T : BaseMenu
	{
		return null;
	}

	[Token(Token = "0x60039DF")]
	public static T CreateEmptyPanel<T>(Transform parent, bool enabled = false) where T : BasePanel
	{
		return null;
	}

	[Token(Token = "0x60039E0")]
	[Address(RVA = "0x3F7C5C0", Offset = "0x3F7C5C0", VA = "0x3F7C5C0")]
	public static GameObject CreateEmptyPanel(Transform parent, Type t, bool enabled = false)
	{
		return null;
	}

	[Token(Token = "0x60039E1")]
	public static T CreateSimplePanel<T>(Transform parent, bool enabled = false) where T : SimplePanel
	{
		return null;
	}

	[Token(Token = "0x60039E2")]
	public static T CreateDefaultPopup<T>(Transform parent, bool enabled = false) where T : BasePopup
	{
		return null;
	}

	[Token(Token = "0x60039E3")]
	public static T CreateHeadedPanel<T>(Transform parent, bool enabled = false) where T : HeadedPanel
	{
		return null;
	}

	[Token(Token = "0x60039E4")]
	public static GameObject CreateTooltipPopup<T>(Transform parent, bool enabled = false) where T : TooltipPopup
	{
		return null;
	}

	[Token(Token = "0x60039E5")]
	[Address(RVA = "0x3F7C710", Offset = "0x3F7C710", VA = "0x3F7C710")]
	public static TipPanel CreateTipPanel(Transform parent, bool enabled = false)
	{
		return null;
	}

	[Token(Token = "0x60039E6")]
	[Address(RVA = "0x3F747E0", Offset = "0x3F747E0", VA = "0x3F747E0")]
	public static GameObject CreateDefaultButton(Transform parent, ElementStyle style, string title, [Optional][DefaultParameterValue(0f)] float elementWidth, [Optional][DefaultParameterValue(0f)] float elementHeight, [Optional] UnityAction onClick)
	{
		return null;
	}

	[Token(Token = "0x60039E7")]
	[Address(RVA = "0x3F7C7B0", Offset = "0x3F7C7B0", VA = "0x3F7C7B0")]
	public static GameObject CreatePerkButton(Transform parent, ElementStyle style, string title, string tooltip, [Optional][DefaultParameterValue(0f)] float elementWidth, [Optional][DefaultParameterValue(0f)] float elementHeight, [Optional][DefaultParameterValue(0f)] float offset, [Optional] UnityAction onClick)
	{
		return null;
	}

	[Token(Token = "0x60039E8")]
	[Address(RVA = "0x3F7CA50", Offset = "0x3F7CA50", VA = "0x3F7CA50")]
	public static GameObject CreateIconButton(Transform parent, ElementStyle style, string icon, [Optional][DefaultParameterValue(32f)] float elementWidth, [Optional][DefaultParameterValue(32f)] float elementHeight, [Optional] UnityAction onClick)
	{
		return null;
	}

	[Token(Token = "0x60039E9")]
	[Address(RVA = "0x3F7CD90", Offset = "0x3F7CD90", VA = "0x3F7CD90")]
	public static GameObject CreateRawImage(Transform parent, ElementStyle style, string image, float elementWidth = 32f, float elementHeight = 32f)
	{
		return null;
	}

	[Token(Token = "0x60039EA")]
	[Address(RVA = "0x3F7CF40", Offset = "0x3F7CF40", VA = "0x3F7CF40")]
	public static GameObject CreateTooltipIcon(Transform parent, ElementStyle style, string tooltip, float elementWidth = 30f, float elementHeight = 30f)
	{
		return null;
	}

	[Token(Token = "0x60039EB")]
	[Address(RVA = "0x3F6CF50", Offset = "0x3F6CF50", VA = "0x3F6CF50")]
	public static GameObject CreateTextButton(Transform parent, ElementStyle style, string title, [Optional][DefaultParameterValue(0f)] float width, [Optional] UnityAction onClick)
	{
		return null;
	}

	[Token(Token = "0x60039EC")]
	[Address(RVA = "0x3F7CFF0", Offset = "0x3F7CFF0", VA = "0x3F7CFF0")]
	public static GameObject CreateLinkButton(Transform parent, ElementStyle style, string title, [Optional] UnityAction onClick)
	{
		return null;
	}

	[Token(Token = "0x60039ED")]
	[Address(RVA = "0x3F6C8F0", Offset = "0x3F6C8F0", VA = "0x3F6C8F0")]
	public static GameObject CreateCategoryButton(Transform parent, ElementStyle style, string title, [Optional] UnityAction onClick)
	{
		return null;
	}

	[Token(Token = "0x60039EE")]
	[Address(RVA = "0x3F6ACA0", Offset = "0x3F6ACA0", VA = "0x3F6ACA0")]
	public static GameObject CreateDropdownSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, string[] options, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(140f)] float elementWidth, [Optional][DefaultParameterValue(40f)] float elementHeight, [Optional][DefaultParameterValue(300f)] float maxScrollHeight, [Optional] float? optionsWidth, [Optional] UnityAction onDropdownOptionSelect)
	{
		return null;
	}

	[Token(Token = "0x60039EF")]
	[Address(RVA = "0x3F7D240", Offset = "0x3F7D240", VA = "0x3F7D240")]
	public static GameObject CreateDropdownSelect(Transform parent, ElementStyle style, BaseSetting setting, string title, string[] options, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(140f)] float elementWidth, [Optional][DefaultParameterValue(40f)] float elementHeight, [Optional][DefaultParameterValue(300f)] float maxScrollHeight, [Optional] float? optionsWidth, [Optional] UnityAction onDropdownOptionSelect)
	{
		return null;
	}

	[Token(Token = "0x60039F0")]
	[Address(RVA = "0x3F7D390", Offset = "0x3F7D390", VA = "0x3F7D390")]
	public static GameObject CreateMultiSelectDropdown(Transform parent, ElementStyle style, HashSetSetting<int> setting, string title, string[] options, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(140f)] float elementWidth, [Optional][DefaultParameterValue(40f)] float elementHeight, [Optional][DefaultParameterValue(300f)] float maxScrollHeight, [Optional] float? optionsWidth, [Optional] UnityAction onSelectionChanged)
	{
		return null;
	}

	[Token(Token = "0x60039F1")]
	[Address(RVA = "0x3F7D4E0", Offset = "0x3F7D4E0", VA = "0x3F7D4E0")]
	public static GameObject CreateIncrementSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(33f)] float elementWidth, [Optional][DefaultParameterValue(30f)] float elementHeight, [Optional] string[] options, [Optional] UnityAction onValueChanged, [Optional] Func<bool> validation)
	{
		return null;
	}

	[Token(Token = "0x60039F2")]
	[Address(RVA = "0x3F6ADF0", Offset = "0x3F6ADF0", VA = "0x3F6ADF0")]
	public static GameObject CreateToggleSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(30f)] float elementWidth, [Optional][DefaultParameterValue(30f)] float elementHeight, [Optional] UnityAction onValueChanged)
	{
		return null;
	}

	[Token(Token = "0x60039F3")]
	[Address(RVA = "0x3F73660", Offset = "0x3F73660", VA = "0x3F73660")]
	public static GameObject CreateToggleGroupSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, string[] options, string tooltip = "", float elementWidth = 30f, float elementHeight = 30f)
	{
		return null;
	}

	[Token(Token = "0x60039F4")]
	[Address(RVA = "0x3F74C30", Offset = "0x3F74C30", VA = "0x3F74C30")]
	public static GameObject CreateSliderSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, string tooltip = "", float elementWidth = 150f, float elementHeight = 16f, int decimalPlaces = 2)
	{
		return null;
	}

	[Token(Token = "0x60039F5")]
	[Address(RVA = "0x3F6AEC0", Offset = "0x3F6AEC0", VA = "0x3F6AEC0")]
	public static GameObject CreateInputSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(140f)] float elementWidth, [Optional][DefaultParameterValue(40f)] float elementHeight, [Optional][DefaultParameterValue(false)] bool multiLine, [Optional] UnityAction onValueChanged, [Optional] UnityAction onEndEdit, [Optional] Func<string, bool> onValidate, [Optional] Func<string, string> onCleanup)
	{
		return null;
	}

	[Token(Token = "0x60039F6")]
	[Address(RVA = "0x3F74DD0", Offset = "0x3F74DD0", VA = "0x3F74DD0")]
	public static GameObject CreateSliderInputSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, string tooltip = "", float sliderWidth = 150f, float sliderHeight = 16f, float inputWidth = 70f, float inputHeight = 40f, int decimalPlaces = 2)
	{
		return null;
	}

	[Token(Token = "0x60039F7")]
	[Address(RVA = "0x3F6AA20", Offset = "0x3F6AA20", VA = "0x3F6AA20")]
	public static GameObject CreateDefaultLabel(Transform parent, ElementStyle style, string title, FontStyle fontStyle = FontStyle.Normal, TextAnchor alignment = TextAnchor.MiddleCenter)
	{
		return null;
	}

	[Token(Token = "0x60039F8")]
	[Address(RVA = "0x3F7D5B0", Offset = "0x3F7D5B0", VA = "0x3F7D5B0")]
	public static GameObject CreateTMPLabel(Transform parent, ElementStyle style, string title, FontStyle fontStyle = FontStyle.Normal, TextAnchor alignment = TextAnchor.MiddleLeft)
	{
		return null;
	}

	[Token(Token = "0x60039F9")]
	[Address(RVA = "0x3F7DAF0", Offset = "0x3F7DAF0", VA = "0x3F7DAF0")]
	public static EffectText CreateEffectText(Transform parent, ElementStyle style, string text, FontStyle fontStyle = FontStyle.Normal, TextAnchor alignment = TextAnchor.MiddleLeft)
	{
		return null;
	}

	[Token(Token = "0x60039FA")]
	[Address(RVA = "0x3F7E000", Offset = "0x3F7E000", VA = "0x3F7E000")]
	public static NameEffectLabel CreateNameEffectLabel(Transform parent, ElementStyle style, string prefix, string name, string suffix, TextAnchor alignment = TextAnchor.MiddleLeft)
	{
		return null;
	}

	[Token(Token = "0x60039FB")]
	[Address(RVA = "0x3F776E0", Offset = "0x3F776E0", VA = "0x3F776E0")]
	public static GameObject CreateWhiteLabel(Transform parent, ElementStyle style, string title, FontStyle fontStyle = FontStyle.Normal, TextAnchor alignment = TextAnchor.MiddleCenter)
	{
		return null;
	}

	[Token(Token = "0x60039FC")]
	[Address(RVA = "0x3F7E390", Offset = "0x3F7E390", VA = "0x3F7E390")]
	public static GameObject CreateEmptySpace(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x60039FD")]
	[Address(RVA = "0x3F7E420", Offset = "0x3F7E420", VA = "0x3F7E420")]
	public static GameObject CreateHUDLabel(Transform parent, ElementStyle style, string title, FontStyle fontStyle = FontStyle.Normal, TextAnchor alignment = TextAnchor.MiddleCenter)
	{
		return null;
	}

	[Token(Token = "0x60039FE")]
	[Address(RVA = "0x3F7E620", Offset = "0x3F7E620", VA = "0x3F7E620")]
	public static GameObject CreateMultiTextLabel(Transform parent, ElementStyle style, FontStyle fontStyle, TextAnchor anchor, float fontSize, int numberOfLabels, bool richText = false)
	{
		return null;
	}

	[Token(Token = "0x60039FF")]
	[Address(RVA = "0x3F7E6E0", Offset = "0x3F7E6E0", VA = "0x3F7E6E0")]
	public static GameObject CreateKeybindSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, KeybindPopup keybindPopup, string tooltip = "", float elementWidth = 120f, float elementHeight = 35f, int bindCount = 2)
	{
		return null;
	}

	[Token(Token = "0x6003A00")]
	[Address(RVA = "0x3F74B60", Offset = "0x3F74B60", VA = "0x3F74B60")]
	public static GameObject CreateColorSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, ColorPickPopup colorPickPopup, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(90f)] float elementWidth, [Optional][DefaultParameterValue(30f)] float elementHeight, [Optional] UnityAction onChangeColor)
	{
		return null;
	}

	[Token(Token = "0x6003A01")]
	[Address(RVA = "0x3F7EB60", Offset = "0x3F7EB60", VA = "0x3F7EB60")]
	public static GameObject CreateToggleColorSetting(Transform parent, ElementStyle style, ToggleColorSetting setting, string title, ColorPickPopup colorPickPopup, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(30f)] float toggleWidth, [Optional][DefaultParameterValue(30f)] float toggleHeight, [Optional][DefaultParameterValue(90f)] float colorWidth, [Optional][DefaultParameterValue(30f)] float colorHeight, [Optional] UnityAction onToggleChanged, [Optional] UnityAction onChangeColor)
	{
		return null;
	}

	[Token(Token = "0x6003A02")]
	[Address(RVA = "0x3F7ED90", Offset = "0x3F7ED90", VA = "0x3F7ED90")]
	public static GameObject CreateIconPickSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, string[] options, string[] icons, IconPickPopup popup, [Optional][DefaultParameterValue("")] string tooltip, [Optional] string[] tooltips, [Optional][DefaultParameterValue(0f)] float elementWidth, [Optional][DefaultParameterValue(0f)] float elementHeight, [Optional] UnityAction onSelect, [Optional] TooltipPopup tooltipPopup)
	{
		return null;
	}

	[Token(Token = "0x6003A03")]
	[Address(RVA = "0x3F6A960", Offset = "0x3F6A960", VA = "0x3F6A960")]
	public static GameObject CreateButtonPopupSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, BasePopup popup, string tooltip = "", float elementWidth = 0f, float elementHeight = 0f)
	{
		return null;
	}

	[Token(Token = "0x6003A04")]
	[Address(RVA = "0x3F74D00", Offset = "0x3F74D00", VA = "0x3F74D00")]
	public static GameObject CreateVector3Setting(Transform parent, ElementStyle style, BaseSetting setting, string title, Vector3Popup vector3Popup, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(90f)] float elementWidth, [Optional][DefaultParameterValue(30f)] float elementHeight, [Optional] UnityAction onChangeVector)
	{
		return null;
	}

	[Token(Token = "0x6003A05")]
	[Address(RVA = "0x3F7F360", Offset = "0x3F7F360", VA = "0x3F7F360")]
	public static GameObject CreateHorizontalLine(Transform parent, ElementStyle style, float width, float height = 1f)
	{
		return null;
	}

	[Token(Token = "0x6003A06")]
	[Address(RVA = "0x3F709C0", Offset = "0x3F709C0", VA = "0x3F709C0")]
	public static GameObject CreateHorizontalGroup(Transform parent, float spacing, TextAnchor alignment = TextAnchor.UpperLeft)
	{
		return null;
	}

	[Token(Token = "0x6003A07")]
	[Address(RVA = "0x3F7F570", Offset = "0x3F7F570", VA = "0x3F7F570")]
	public static GameObject CreatePlayerKDRRow(Transform parent, ElementStyle style, Player player)
	{
		return null;
	}

	[Token(Token = "0x6003A08")]
	[Address(RVA = "0x3F7F620", Offset = "0x3F7F620", VA = "0x3F7F620")]
	public static GameObject CreateTeamKDRRow(Transform parent, ElementStyle style, string team)
	{
		return null;
	}

	[Token(Token = "0x6003A09")]
	[Address(RVA = "0x3F7F6A0", Offset = "0x3F7F6A0", VA = "0x3F7F6A0")]
	public static GameObject CreateVerticalGroup(Transform parent, float spacing, TextAnchor alignment = TextAnchor.UpperLeft)
	{
		return null;
	}

	[Token(Token = "0x6003A0A")]
	[Address(RVA = "0x3F6BA40", Offset = "0x3F6BA40", VA = "0x3F6BA40")]
	public static CollapsibleSection CreateCollapsibleSection(Transform parent, ElementStyle style, string title, [Optional][DefaultParameterValue(true)] bool startExpanded, [Optional] Action<bool> onExpandedChanged)
	{
		return null;
	}

	[Token(Token = "0x6003A0B")]
	[Address(RVA = "0x3F7F7F0", Offset = "0x3F7F7F0", VA = "0x3F7F7F0")]
	public static CollapsibleToggleSection CreateCollapsibleToggleSection(Transform parent, ElementStyle style, string title, bool startEnabled, [Optional][DefaultParameterValue(true)] bool startExpanded, [Optional] Action<bool> onToggleChanged)
	{
		return null;
	}

	[Token(Token = "0x6003A0C")]
	[Address(RVA = "0x3F7FE60", Offset = "0x3F7FE60", VA = "0x3F7FE60")]
	public static float GetTextWidth(Transform parent, ElementStyle style, string title, FontStyle fontStyle = FontStyle.Normal)
	{
		return default(float);
	}

	[Token(Token = "0x6003A0D")]
	public static GameObject InstantiateAndSetupPanel<T>(Transform parent, string asset, bool enabled = false) where T : BasePanel
	{
		return null;
	}

	[Token(Token = "0x6003A0E")]
	[Address(RVA = "0x3F7FF20", Offset = "0x3F7FF20", VA = "0x3F7FF20")]
	public static GameObject InstantiateAndSetupCustomPopup(Transform parent, string title, float width, float height, bool enabled = false)
	{
		return null;
	}

	[Token(Token = "0x6003A0F")]
	[Address(RVA = "0x3F70B20", Offset = "0x3F70B20", VA = "0x3F70B20")]
	public static GameObject InstantiateAndBind(Transform parent, string asset)
	{
		return null;
	}

	[Token(Token = "0x6003A10")]
	[Address(RVA = "0x3F76DF0", Offset = "0x3F76DF0", VA = "0x3F76DF0")]
	public static void SetAnchor(GameObject obj, TextAnchor anchor, TextAnchor pivot, Vector2 offset)
	{
	}

	[Token(Token = "0x6003A11")]
	[Address(RVA = "0x3F80010", Offset = "0x3F80010", VA = "0x3F80010")]
	public static Vector2 GetAnchorVector(TextAnchor anchor)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6003A12")]
	[Address(RVA = "0x3F80070", Offset = "0x3F80070", VA = "0x3F80070")]
	public ElementFactory()
	{
	}
}
