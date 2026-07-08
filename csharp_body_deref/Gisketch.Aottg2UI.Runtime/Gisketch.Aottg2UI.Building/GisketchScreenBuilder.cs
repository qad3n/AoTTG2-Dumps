using System.Runtime.InteropServices;
using Gilzoide.FlexUi;
using Gilzoide.FlexUi.Yoga;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Localization;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using TMPro;
using Unity.Profiling;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x200008B")]
public static class GisketchScreenBuilder
{
	[Token(Token = "0x40002CD")]
	private const string BrushSidePanelDarkTexture = "GisketchUI/Texture/SeamlessGrungeDark";

	[Token(Token = "0x40002CE")]
	private const float DefaultScrollbarWidth = 12f;

	[Token(Token = "0x40002CF")]
	private const float SliderValueWidth = 54f;

	[Token(Token = "0x40002D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker BuildViewMarker;

	[Token(Token = "0x40002D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker SettleLayoutMarker;

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x3A07D80", Offset = "0x3A07D80", VA = "0x3A07D80")]
	private static void BuildBuiltin(string type, GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x3A08FE0", Offset = "0x3A08FE0", VA = "0x3A08FE0")]
	private static void BuildButton(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x3A0E360", Offset = "0x3A0E360", VA = "0x3A0E360")]
	private static bool IsBrushButtonStyle(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x3A0D770", Offset = "0x3A0D770", VA = "0x3A0D770")]
	private static Image BuildButtonFace(GameObject go, GisketchStyleDefinition style, GisketchBuildContext context, float relief, out RectTransform face)
	{
		return null;
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x3A0E990", Offset = "0x3A0E990", VA = "0x3A0E990")]
	private static RectTransform BuildButtonFaceContent(RectTransform face, GisketchStyleDefinition style)
	{
		return null;
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x3A0C670", Offset = "0x3A0C670", VA = "0x3A0C670")]
	private static void BuildStepper(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x3A10580", Offset = "0x3A10580", VA = "0x3A10580")]
	private static GisketchNodeDefinition StepNode(GisketchStepperStepDefinition step, string style)
	{
		return null;
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x3A0D580", Offset = "0x3A0D580", VA = "0x3A0D580")]
	private static void ApplyPanel(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x3A0C190", Offset = "0x3A0C190", VA = "0x3A0C190")]
	private static Image ApplyImage(GameObject go, GisketchStyleDefinition style, GisketchTheme theme, string color, bool reliefGradient = false)
	{
		return null;
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x3A08810", Offset = "0x3A08810", VA = "0x3A08810")]
	private static void ApplyText(TextMeshProUGUI text, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x3A0F260", Offset = "0x3A0F260", VA = "0x3A0F260")]
	private static void ApplyButtonMeasure(GameObject go, GisketchNodeDefinition node, TextMeshProUGUI text, GisketchStyleDefinition style, bool hasIcon)
	{
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x3A0F1D0", Offset = "0x3A0F1D0", VA = "0x3A0F1D0")]
	private static TextAlignmentOptions ButtonTextAlignment(GisketchStyleDefinition style, bool hasIcon)
	{
		return default(TextAlignmentOptions);
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x3A11500", Offset = "0x3A11500", VA = "0x3A11500")]
	private static TextAlignmentOptions TextAlignment(GisketchStyleDefinition style)
	{
		return default(TextAlignmentOptions);
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x3A11600", Offset = "0x3A11600", VA = "0x3A11600")]
	private static float PointLength(GisketchLength length, float fallback)
	{
		return default(float);
	}

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x3A0E410", Offset = "0x3A0E410", VA = "0x3A0E410")]
	private static void AddFocusRing(GameObject go, GisketchTheme theme, bool visible = true)
	{
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x3A116F0", Offset = "0x3A116F0", VA = "0x3A116F0")]
	private static RectTransform BuildButtonContent(RectTransform parent, GisketchStyleDefinition style)
	{
		return null;
	}

	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x3A0E4E0", Offset = "0x3A0E4E0", VA = "0x3A0E4E0")]
	private static RectTransform BuildButtonContent(RectTransform parent, GisketchStyleDefinition style, bool reveal, Sprite maskSprite, out RectTransform mask)
	{
		return null;
	}

	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x3A11750", Offset = "0x3A11750", VA = "0x3A11750")]
	private static RectTransform BuildBrushRevealMask(RectTransform parent, Sprite maskSprite, out RectTransform mask)
	{
		return null;
	}

	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x3A0CD60", Offset = "0x3A0CD60", VA = "0x3A0CD60")]
	private static void BuildDropdown(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x3A0D0D0", Offset = "0x3A0D0D0", VA = "0x3A0D0D0")]
	private static void BuildSelect(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x3A12390", Offset = "0x3A12390", VA = "0x3A12390")]
	private static AottgChoiceButton ChoiceButton(GameObject go, GisketchTheme theme, AottgChoiceControl control, bool selectMode)
	{
		return null;
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x3A11AF0", Offset = "0x3A11AF0", VA = "0x3A11AF0")]
	private static GameObject ChoicePart(Transform parent, GisketchNodeDefinition owner, string styleName, string icon, GisketchBuildContext context)
	{
		return null;
	}

	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x3A12520", Offset = "0x3A12520", VA = "0x3A12520")]
	private static Button ChoicePartButton(GameObject go, string action)
	{
		return null;
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x3A126C0", Offset = "0x3A126C0", VA = "0x3A126C0")]
	private static GisketchNodeDefinition ButtonNode(GisketchNodeDefinition owner, string style, string icon)
	{
		return null;
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x3A12BA0", Offset = "0x3A12BA0", VA = "0x3A12BA0")]
	private static GisketchLayoutDefinition RowLayout()
	{
		return null;
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x3A119B0", Offset = "0x3A119B0", VA = "0x3A119B0")]
	private static GisketchLayoutDefinition ChoiceLayout(GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x3A0AEE0", Offset = "0x3A0AEE0", VA = "0x3A0AEE0")]
	private static void BuildColorSwatch(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x3A12CB0", Offset = "0x3A12CB0", VA = "0x3A12CB0")]
	private static Color ParseColor(string value, Color fallback)
	{
		return default(Color);
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x3A08CB0", Offset = "0x3A08CB0", VA = "0x3A08CB0")]
	private static void BuildIcon(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x3A0EBD0", Offset = "0x3A0EBD0", VA = "0x3A0EBD0")]
	private static Image BuildButtonIcon(GisketchNodeDefinition node, RectTransform parent, GisketchStyleDefinition style, GisketchBuildContext context, bool hasText)
	{
		return null;
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x3A11690", Offset = "0x3A11690", VA = "0x3A11690")]
	private static float ButtonIconSize(GisketchStyleDefinition style)
	{
		return default(float);
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x3A0DB00", Offset = "0x3A0DB00", VA = "0x3A0DB00")]
	private static Image BuildSpriteImage(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, bool preserveAspect, bool raycastTarget)
	{
		return null;
	}

	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x3A12D00", Offset = "0x3A12D00", VA = "0x3A12D00")]
	private static string SpritePath(GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
		return null;
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x3A12DB0", Offset = "0x3A12DB0", VA = "0x3A12DB0")]
	private static bool IsBrushSidePanelTexture(GisketchStyleDefinition style)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x3A0BC10", Offset = "0x3A0BC10", VA = "0x3A0BC10")]
	private static void BuildStandaloneSpriteImage(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x3A13030", Offset = "0x3A13030", VA = "0x3A13030")]
	private static void BuildRectTransformCoverSpriteImage(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x3A12E70", Offset = "0x3A12E70", VA = "0x3A12E70")]
	private static bool IsUntintedSpriteStyle(GisketchStyleDefinition style)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x3A13510", Offset = "0x3A13510", VA = "0x3A13510")]
	private static bool IsCoverSpriteStyle(GisketchStyleDefinition style)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x3A12FC0", Offset = "0x3A12FC0", VA = "0x3A12FC0")]
	private static bool IsRectTransformCoverSpriteStyle(GisketchStyleDefinition style)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x3A0A250", Offset = "0x3A0A250", VA = "0x3A0A250")]
	private static void BuildInputField(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, bool multiline)
	{
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x3A13640", Offset = "0x3A13640", VA = "0x3A13640")]
	private static RectTransform TextArea(Transform parent, GisketchStyleDefinition style)
	{
		return null;
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x3A13A30", Offset = "0x3A13A30", VA = "0x3A13A30")]
	private static TextMeshProUGUI InputText(RectTransform parent, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, bool multiline)
	{
		return null;
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x3A13890", Offset = "0x3A13890", VA = "0x3A13890")]
	private static TextMeshProUGUI Placeholder(RectTransform parent, GisketchNodeDefinition node, GisketchBuildContext context, bool multiline)
	{
		return null;
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x3A13E10", Offset = "0x3A13E10", VA = "0x3A13E10")]
	private static GameObject TextObject(string name, RectTransform parent)
	{
		return null;
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x3A13580", Offset = "0x3A13580", VA = "0x3A13580")]
	private static TMP_InputField.ContentType ContentType(string type)
	{
		return default(TMP_InputField.ContentType);
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x3A13FA0", Offset = "0x3A13FA0", VA = "0x3A13FA0")]
	private static char RejectTabCharacter(string text, int charIndex, char addedChar)
	{
		return default(char);
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x3A13BB0", Offset = "0x3A13BB0", VA = "0x3A13BB0")]
	private static void ApplyInputMeasure(GameObject go, GisketchStyleDefinition style)
	{
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x3A0F8D0", Offset = "0x3A0F8D0", VA = "0x3A0F8D0")]
	private static void ApplyFlex(FlexLayout flex, GisketchLayoutDefinition layout, GisketchStyleDefinition style)
	{
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x3A13FB0", Offset = "0x3A13FB0", VA = "0x3A13FB0")]
	private static bool IsFullscreenAbsolute(GisketchLayoutDefinition layout)
	{
		return default(bool);
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x3A142E0", Offset = "0x3A142E0", VA = "0x3A142E0")]
	private static bool IsPercent100(GisketchLength length)
	{
		return default(bool);
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x3A14160", Offset = "0x3A14160", VA = "0x3A14160")]
	private static YGValue Length(GisketchLength length, YGValue fallback)
	{
		return default(YGValue);
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x3A115D0", Offset = "0x3A115D0", VA = "0x3A115D0")]
	private static GisketchLength PreferLayout(GisketchLength layout, GisketchLength style)
	{
		return null;
	}

	[Token(Token = "0x60003F5")]
	private static T ParseEnum<T>(string value, T fallback) where T : struct
	{
		return (T)null;
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x3A143F0", Offset = "0x3A143F0", VA = "0x3A143F0")]
	private static string ResolveTooltip(string tooltip, string tooltipKey, GisketchBuildContext context)
	{
		return null;
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x3A14590", Offset = "0x3A14590", VA = "0x3A14590")]
	private static GisketchMotionDefinition StyleMotion(GisketchStyleDefinition style, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x3A0F0D0", Offset = "0x3A0F0D0", VA = "0x3A0F0D0")]
	private static void Stretch(RectTransform rect)
	{
	}

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x3A128D0", Offset = "0x3A128D0", VA = "0x3A128D0")]
	private static void ApplyAspectRatio(GameObject go, GisketchStyleDefinition style)
	{
	}

	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x3A12A30", Offset = "0x3A12A30", VA = "0x3A12A30")]
	private static void ApplyLayoutOffset(GameObject go, GisketchLayoutDefinition layout)
	{
	}

	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x3A0CA10", Offset = "0x3A0CA10", VA = "0x3A0CA10")]
	private static void BuildScaleBox(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x3A0C810", Offset = "0x3A0C810", VA = "0x3A0C810")]
	private static void BuildScrollView(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x3A14650", Offset = "0x3A14650", VA = "0x3A14650")]
	private static GameObject CreateViewport(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x3A148B0", Offset = "0x3A148B0", VA = "0x3A148B0")]
	private static GameObject CreateContent(Transform parent, GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x3A14B10", Offset = "0x3A14B10", VA = "0x3A14B10")]
	private static Scrollbar CreateScrollbar(Transform parent, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x3A152F0", Offset = "0x3A152F0", VA = "0x3A152F0")]
	private static RectTransform CreateScrollbarThumb(Transform parent, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x6000401")]
	[Address(RVA = "0x3A14F30", Offset = "0x3A14F30", VA = "0x3A14F30")]
	private static GisketchLayoutDefinition FillLayout(float grow = 0f)
	{
		return null;
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x3A150B0", Offset = "0x3A150B0", VA = "0x3A150B0")]
	private static GisketchLayoutDefinition ScrollContentLayout(GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x3A0A760", Offset = "0x3A0A760", VA = "0x3A0A760")]
	private static void BuildSearchPalette(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x3A155D0", Offset = "0x3A155D0", VA = "0x3A155D0")]
	private static GisketchNodeDefinition InputNode(string id, string placeholder)
	{
		return null;
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x3A15800", Offset = "0x3A15800", VA = "0x3A15800")]
	private static GisketchNodeDefinition SearchButtonNode(string id)
	{
		return null;
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x3A11260", Offset = "0x3A11260", VA = "0x3A11260")]
	private static void ApplyShadow(GameObject go, GisketchStyleDefinition style, GisketchTheme theme)
	{
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x3A0C480", Offset = "0x3A0C480", VA = "0x3A0C480")]
	private static void BuildSkeleton(GameObject go, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x3A0A9F0", Offset = "0x3A0A9F0", VA = "0x3A0A9F0")]
	private static void BuildSlider(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x3A15940", Offset = "0x3A15940", VA = "0x3A15940")]
	private static RectTransform SliderPart(Transform parent, string name, GisketchStyleDefinition style, GisketchTheme theme, float left, float right, float height)
	{
		return null;
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x3A15BD0", Offset = "0x3A15BD0", VA = "0x3A15BD0")]
	private static RectTransform SliderThumb(Transform parent, GisketchTheme theme, out Image image, out RectTransform faceRect)
	{
		return null;
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x3A16340", Offset = "0x3A16340", VA = "0x3A16340")]
	private static TextMeshProUGUI SliderValueLabel(Transform parent, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x3A160E0", Offset = "0x3A160E0", VA = "0x3A160E0")]
	private static void ApplySliderMeasure(GameObject go, GisketchStyleDefinition style)
	{
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x3A09D10", Offset = "0x3A09D10", VA = "0x3A09D10")]
	private static void BuildSpriteButton(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x3A166A0", Offset = "0x3A166A0", VA = "0x3A166A0")]
	private static void ApplySpriteButtonMeasure(GameObject go, Image image, GisketchStyleDefinition style)
	{
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x3A0B650", Offset = "0x3A0B650", VA = "0x3A0B650")]
	private static void BuildToggle(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, bool radio)
	{
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x3A0B240", Offset = "0x3A0B240", VA = "0x3A0B240")]
	private static void BuildSwitch(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x3A16970", Offset = "0x3A16970", VA = "0x3A16970")]
	private static RectTransform ToggleBox(Transform parent, GisketchTheme theme, bool radio)
	{
		return null;
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x3A16C60", Offset = "0x3A16C60", VA = "0x3A16C60")]
	private static RectTransform ToggleMark(RectTransform parent, GisketchTheme theme, bool radio)
	{
		return null;
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x3A16F40", Offset = "0x3A16F40", VA = "0x3A16F40")]
	private static RectTransform ToggleIcon(Transform parent, GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x3A172A0", Offset = "0x3A172A0", VA = "0x3A172A0")]
	private static TextMeshProUGUI ToggleLabel(Transform parent, GisketchNodeDefinition node, GisketchBuildContext context, bool hasIcon)
	{
		return null;
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x3A179A0", Offset = "0x3A179A0", VA = "0x3A179A0")]
	private static RectTransform SwitchTrack(Transform parent, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x3A17CE0", Offset = "0x3A17CE0", VA = "0x3A17CE0")]
	private static RectTransform SwitchThumb(RectTransform parent, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x3A175F0", Offset = "0x3A175F0", VA = "0x3A175F0")]
	private static void ApplyToggleMeasure(GameObject go, GisketchStyleDefinition style, TextMeshProUGUI label, bool hasIcon)
	{
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x3A18030", Offset = "0x3A18030", VA = "0x3A18030")]
	private static void ApplySwitchMeasure(GameObject go, GisketchStyleDefinition style)
	{
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x3A18290", Offset = "0x3A18290", VA = "0x3A18290")]
	public static GameObject Build(GisketchScreenDefinition screen, GisketchTheme theme, Transform parent, IGisketchLocalizer localizer, IGisketchActionHandler actions)
	{
		return null;
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x3A18380", Offset = "0x3A18380", VA = "0x3A18380")]
	public static GisketchView BuildView(GisketchScreenDefinition screen, Transform parent, GisketchBuildContext context)
	{
		return null;
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x3A18F60", Offset = "0x3A18F60", VA = "0x3A18F60")]
	public static GisketchView BuildOverlay(GisketchOverlayDefinition overlay, Transform parent, GisketchBuildContext context)
	{
		return null;
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x3A19240", Offset = "0x3A19240", VA = "0x3A19240")]
	public static GameObject BuildNodeInto(GisketchNodeDefinition node, Transform parent, GisketchBuildContext context, [Optional] GisketchView view)
	{
		return null;
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x3A18920", Offset = "0x3A18920", VA = "0x3A18920")]
	public static void SettleLayout(GameObject root)
	{
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x3A19410", Offset = "0x3A19410", VA = "0x3A19410")]
	private static bool UpdateScrollbars(GameObject root)
	{
		return default(bool);
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x3A107E0", Offset = "0x3A107E0", VA = "0x3A107E0")]
	private static GameObject BuildNode(GisketchNodeDefinition node, Transform parent, GisketchBuildContext context, GisketchView view)
	{
		return null;
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x3A19570", Offset = "0x3A19570", VA = "0x3A19570")]
	private static void SetInteractable(GameObject go, bool interactable)
	{
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x3A19610", Offset = "0x3A19610", VA = "0x3A19610")]
	private static Transform ChildParent(GameObject go)
	{
		return null;
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x3A196E0", Offset = "0x3A196E0", VA = "0x3A196E0")]
	private static void BuildChildren(GisketchNodeDefinition node, Transform parent, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x3A08800", Offset = "0x3A08800", VA = "0x3A08800")]
	private static bool EqualsType(string a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x3A188B0", Offset = "0x3A188B0", VA = "0x3A188B0")]
	private static string ScreenLabel(GisketchScreenDefinition screen)
	{
		return null;
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x3A191F0", Offset = "0x3A191F0", VA = "0x3A191F0")]
	private static string OverlayLabel(GisketchOverlayDefinition overlay)
	{
		return null;
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x3A19390", Offset = "0x3A19390", VA = "0x3A19390")]
	private static string RootLabel(GameObject root)
	{
		return null;
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x3A194E0", Offset = "0x3A194E0", VA = "0x3A194E0")]
	private static string NodeLabel(GisketchNodeDefinition node, string type)
	{
		return null;
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x3A18900", Offset = "0x3A18900", VA = "0x3A18900")]
	private static int ChildCount(GisketchNodeDefinition node)
	{
		return default(int);
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x3A0F0C0", Offset = "0x3A0F0C0", VA = "0x3A0F0C0")]
	private static void MarkEditorPreview(GameObject go)
	{
	}
}
