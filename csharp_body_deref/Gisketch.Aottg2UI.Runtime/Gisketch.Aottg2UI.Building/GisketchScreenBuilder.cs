// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchScreenBuilder
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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

[Token(Token = "0x20000A9")]
public static class GisketchScreenBuilder
{
	[Token(Token = "0x4000385")]
	private const string BrushSidePanelDarkTexture = "GisketchUI/Texture/SeamlessGrungeDark";

	[Token(Token = "0x4000386")]
	private const float DefaultScrollbarWidth = 12f;

	[Token(Token = "0x4000387")]
	private const float SliderValueWidth = 54f;

	[Token(Token = "0x4000388")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker BuildViewMarker;

	[Token(Token = "0x4000389")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker SettleLayoutMarker;

	[Token(Token = "0x400038A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static int _settleCalls;

	[Token(Token = "0x400038B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private static int _fullSettleCalls;

	[Token(Token = "0x400038C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static int _targetedSettleCalls;

	[Token(Token = "0x400038D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private static int _measurementSettleCalls;

	[Token(Token = "0x400038E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static int _canvasFlushes;

	[Token(Token = "0x400038F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private static int _flexRefreshes;

	[Token(Token = "0x4000390")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static int _scrollbarPasses;

	[Token(Token = "0x1700009A")]
	public static GisketchLayoutSettleCounters LayoutSettleCounters
	{
		[Token(Token = "0x6000558")]
		[Address(RVA = "0x18EEA00", Offset = "0x18ED000", VA = "0x1818EEA00")]
		get
		{
			return default(GisketchLayoutSettleCounters);
		}
	}

	[Token(Token = "0x60004FB")]
	[Address(RVA = "0x18DE3F0", Offset = "0x18DC9F0", VA = "0x1818DE3F0")]
	private static void BuildBuiltin(string type, GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x18E0050", Offset = "0x18DE650", VA = "0x1818E0050")]
	private static void BuildButton(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x18E9AC0", Offset = "0x18E80C0", VA = "0x1818E9AC0")]
	private static bool IsBrushButtonStyle(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x18DF750", Offset = "0x18DDD50", VA = "0x1818DF750")]
	private static Image BuildButtonFace(GameObject go, GisketchStyleDefinition style, GisketchBuildContext context, float relief, out RectTransform face)
	{
		return null;
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x18DF510", Offset = "0x18DDB10", VA = "0x1818DF510")]
	private static RectTransform BuildButtonFaceContent(RectTransform face, GisketchStyleDefinition style)
	{
		return null;
	}

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x18E5F10", Offset = "0x18E4510", VA = "0x1818E5F10")]
	private static void BuildStepper(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x18EC750", Offset = "0x18EAD50", VA = "0x1818EC750")]
	private static GisketchNodeDefinition StepNode(GisketchStepperStepDefinition step, string style)
	{
		return null;
	}

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x18DCCA0", Offset = "0x18DB2A0", VA = "0x1818DCCA0")]
	private static void ApplyPanel(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x6000503")]
	[Address(RVA = "0x18DC710", Offset = "0x18DAD10", VA = "0x1818DC710")]
	private static Image ApplyImage(GameObject go, GisketchStyleDefinition style, GisketchTheme theme, string color, bool reliefGradient = false)
	{
		return null;
	}

	[Token(Token = "0x6000504")]
	[Address(RVA = "0x18DD840", Offset = "0x18DBE40", VA = "0x1818DD840")]
	private static void ApplyText(TextMeshProUGUI text, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x6000505")]
	[Address(RVA = "0x18DB570", Offset = "0x18D9B70", VA = "0x1818DB570")]
	private static void ApplyButtonMeasure(GameObject go, GisketchNodeDefinition node, TextMeshProUGUI text, GisketchStyleDefinition style, bool hasIcon)
	{
	}

	[Token(Token = "0x6000506")]
	[Address(RVA = "0x18DB280", Offset = "0x18D9880", VA = "0x1818DB280")]
	private static void AllowButtonTextClipping(GameObject go, TextMeshProUGUI text, float minWidth)
	{
	}

	[Token(Token = "0x6000507")]
	[Address(RVA = "0x18E7300", Offset = "0x18E5900", VA = "0x1818E7300")]
	private static TextAlignmentOptions ButtonTextAlignment(GisketchStyleDefinition style, bool hasIcon)
	{
		return default(TextAlignmentOptions);
	}

	[Token(Token = "0x6000508")]
	[Address(RVA = "0x18ED1C0", Offset = "0x18EB7C0", VA = "0x1818ED1C0")]
	private static TextAlignmentOptions TextAlignment(GisketchStyleDefinition style)
	{
		return default(TextAlignmentOptions);
	}

	[Token(Token = "0x6000509")]
	[Address(RVA = "0x18EA560", Offset = "0x18E8B60", VA = "0x1818EA560")]
	private static float PointLength(GisketchLength length, float fallback)
	{
		return default(float);
	}

	[Token(Token = "0x600050A")]
	[Address(RVA = "0x18DB150", Offset = "0x18D9750", VA = "0x1818DB150")]
	private static void AddFocusRing(GameObject go, GisketchTheme theme, bool visible = true)
	{
	}

	[Token(Token = "0x600050B")]
	[Address(RVA = "0x18DF100", Offset = "0x18DD700", VA = "0x1818DF100")]
	private static RectTransform BuildButtonContent(RectTransform parent, GisketchStyleDefinition style)
	{
		return null;
	}

	[Token(Token = "0x600050C")]
	[Address(RVA = "0x18DF180", Offset = "0x18DD780", VA = "0x1818DF180")]
	private static RectTransform BuildButtonContent(RectTransform parent, GisketchStyleDefinition style, bool reveal, Sprite maskSprite, out RectTransform mask)
	{
		return null;
	}

	[Token(Token = "0x600050D")]
	[Address(RVA = "0x18DE1B0", Offset = "0x18DC7B0", VA = "0x1818DE1B0")]
	private static RectTransform BuildBrushRevealMask(RectTransform parent, Sprite maskSprite, out RectTransform mask)
	{
		return null;
	}

	[Token(Token = "0x600050E")]
	[Address(RVA = "0x18E11A0", Offset = "0x18DF7A0", VA = "0x1818E11A0")]
	private static void BuildDropdown(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x600050F")]
	[Address(RVA = "0x18E4060", Offset = "0x18E2660", VA = "0x1818E4060")]
	private static void BuildSelect(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x6000510")]
	[Address(RVA = "0x18E74A0", Offset = "0x18E5AA0", VA = "0x1818E74A0")]
	private static AottgChoiceButton ChoiceButton(GameObject go, GisketchTheme theme, AottgChoiceControl control, bool selectMode)
	{
		return null;
	}

	[Token(Token = "0x6000511")]
	[Address(RVA = "0x18E7A10", Offset = "0x18E6010", VA = "0x1818E7A10")]
	private static GameObject ChoicePart(Transform parent, GisketchNodeDefinition owner, string styleName, string icon, GisketchBuildContext context)
	{
		return null;
	}

	[Token(Token = "0x6000512")]
	[Address(RVA = "0x18E7890", Offset = "0x18E5E90", VA = "0x1818E7890")]
	private static Button ChoicePartButton(GameObject go, string action)
	{
		return null;
	}

	[Token(Token = "0x6000513")]
	[Address(RVA = "0x18E7110", Offset = "0x18E5710", VA = "0x1818E7110")]
	private static GisketchNodeDefinition ButtonNode(GisketchNodeDefinition owner, string style, string icon)
	{
		return null;
	}

	[Token(Token = "0x6000514")]
	[Address(RVA = "0x18EA9E0", Offset = "0x18E8FE0", VA = "0x1818EA9E0")]
	private static GisketchLayoutDefinition RowLayout()
	{
		return null;
	}

	[Token(Token = "0x6000515")]
	[Address(RVA = "0x18E7650", Offset = "0x18E5C50", VA = "0x1818E7650")]
	private static GisketchLayoutDefinition ChoiceLayout(GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x6000516")]
	[Address(RVA = "0x18E0EB0", Offset = "0x18DF4B0", VA = "0x1818E0EB0")]
	private static void BuildColorSwatch(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x6000517")]
	[Address(RVA = "0x18EA340", Offset = "0x18E8940", VA = "0x1818EA340")]
	private static Color ParseColor(string value, Color fallback)
	{
		return default(Color);
	}

	[Token(Token = "0x6000518")]
	[Address(RVA = "0x18E1580", Offset = "0x18DFB80", VA = "0x1818E1580")]
	private static void BuildIcon(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x6000519")]
	[Address(RVA = "0x18DFB30", Offset = "0x18DE130", VA = "0x1818DFB30")]
	private static Image BuildButtonIcon(GisketchNodeDefinition node, RectTransform parent, GisketchStyleDefinition style, GisketchBuildContext context, bool hasText)
	{
		return null;
	}

	[Token(Token = "0x600051A")]
	[Address(RVA = "0x18E70A0", Offset = "0x18E56A0", VA = "0x1818E70A0")]
	private static float ButtonIconSize(GisketchStyleDefinition style)
	{
		return default(float);
	}

	[Token(Token = "0x600051B")]
	[Address(RVA = "0x18E51B0", Offset = "0x18E37B0", VA = "0x1818E51B0")]
	private static Image BuildSpriteImage(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, bool preserveAspect, bool raycastTarget)
	{
		return null;
	}

	[Token(Token = "0x600051C")]
	[Address(RVA = "0x18EC6A0", Offset = "0x18EACA0", VA = "0x1818EC6A0")]
	private static string SpritePath(GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
		return null;
	}

	[Token(Token = "0x600051D")]
	[Address(RVA = "0x18E9B70", Offset = "0x18E8170", VA = "0x1818E9B70")]
	private static bool IsBrushSidePanelTexture(GisketchStyleDefinition style)
	{
		return default(bool);
	}

	[Token(Token = "0x600051E")]
	[Address(RVA = "0x18E5AC0", Offset = "0x18E40C0", VA = "0x1818E5AC0")]
	private static void BuildStandaloneSpriteImage(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x600051F")]
	[Address(RVA = "0x18E3270", Offset = "0x18E1870", VA = "0x1818E3270")]
	private static void BuildRectTransformCoverSpriteImage(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x6000520")]
	[Address(RVA = "0x18E9F50", Offset = "0x18E8550", VA = "0x1818E9F50")]
	private static bool IsUntintedSpriteStyle(GisketchStyleDefinition style)
	{
		return default(bool);
	}

	[Token(Token = "0x6000521")]
	[Address(RVA = "0x18E9C40", Offset = "0x18E8240", VA = "0x1818E9C40")]
	private static bool IsCoverSpriteStyle(GisketchStyleDefinition style)
	{
		return default(bool);
	}

	[Token(Token = "0x6000522")]
	[Address(RVA = "0x18E9ED0", Offset = "0x18E84D0", VA = "0x1818E9ED0")]
	private static bool IsRectTransformCoverSpriteStyle(GisketchStyleDefinition style)
	{
		return default(bool);
	}

	[Token(Token = "0x6000523")]
	[Address(RVA = "0x18E18B0", Offset = "0x18DFEB0", VA = "0x1818E18B0")]
	private static void BuildInputField(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, bool multiline)
	{
	}

	[Token(Token = "0x6000524")]
	[Address(RVA = "0x18ED2B0", Offset = "0x18EB8B0", VA = "0x1818ED2B0")]
	private static RectTransform TextArea(Transform parent, GisketchStyleDefinition style)
	{
		return null;
	}

	[Token(Token = "0x6000525")]
	[Address(RVA = "0x18E9940", Offset = "0x18E7F40", VA = "0x1818E9940")]
	private static TextMeshProUGUI InputText(RectTransform parent, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, bool multiline)
	{
		return null;
	}

	[Token(Token = "0x6000526")]
	[Address(RVA = "0x18EA3A0", Offset = "0x18E89A0", VA = "0x1818EA3A0")]
	private static TextMeshProUGUI Placeholder(RectTransform parent, GisketchNodeDefinition node, GisketchBuildContext context, bool multiline)
	{
		return null;
	}

	[Token(Token = "0x6000527")]
	[Address(RVA = "0x18ED4F0", Offset = "0x18EBAF0", VA = "0x1818ED4F0")]
	private static GameObject TextObject(string name, RectTransform parent)
	{
		return null;
	}

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x18E8380", Offset = "0x18E6980", VA = "0x1818E8380")]
	private static TMP_InputField.ContentType ContentType(string type)
	{
		return default(TMP_InputField.ContentType);
	}

	[Token(Token = "0x6000529")]
	[Address(RVA = "0x18EE4D0", Offset = "0x18ECAD0", VA = "0x1818EE4D0")]
	private static char ValidateInput(string type, bool multiline, string text, int charIndex, char addedChar)
	{
		return default(char);
	}

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x18EA750", Offset = "0x18E8D50", VA = "0x1818EA750")]
	private static bool RejectControlCharacter(bool multiline, char addedChar)
	{
		return default(bool);
	}

	[Token(Token = "0x600052B")]
	[Address(RVA = "0x18EE750", Offset = "0x18ECD50", VA = "0x1818EE750")]
	private static char ValidateInteger(string text, int charIndex, char addedChar)
	{
		return default(char);
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x18EE850", Offset = "0x18ECE50", VA = "0x1818EE850")]
	private static char ValidateNumber(string text, int charIndex, char addedChar)
	{
		return default(char);
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x18E9DD0", Offset = "0x18E83D0", VA = "0x1818E9DD0")]
	private static bool IsLeadingMinus(string text, int charIndex, char addedChar)
	{
		return default(bool);
	}

	[Token(Token = "0x600052E")]
	[Address(RVA = "0x18DC9F0", Offset = "0x18DAFF0", VA = "0x1818DC9F0")]
	private static void ApplyInputMeasure(GameObject go, GisketchStyleDefinition style)
	{
	}

	[Token(Token = "0x600052F")]
	[Address(RVA = "0x18DBB40", Offset = "0x18DA140", VA = "0x1818DBB40")]
	private static void ApplyFlex(FlexLayout flex, GisketchLayoutDefinition layout, GisketchStyleDefinition style)
	{
	}

	[Token(Token = "0x6000530")]
	[Address(RVA = "0x18E9CC0", Offset = "0x18E82C0", VA = "0x1818E9CC0")]
	private static bool IsFullscreenAbsolute(GisketchLayoutDefinition layout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000531")]
	[Address(RVA = "0x18E9E30", Offset = "0x18E8430", VA = "0x1818E9E30")]
	private static bool IsPercent100(GisketchLength length)
	{
		return default(bool);
	}

	[Token(Token = "0x6000532")]
	[Address(RVA = "0x18EA0B0", Offset = "0x18E86B0", VA = "0x1818EA0B0")]
	private static YGValue Length(GisketchLength length, YGValue fallback)
	{
		return default(YGValue);
	}

	[Token(Token = "0x6000533")]
	[Address(RVA = "0x18EA600", Offset = "0x18E8C00", VA = "0x1818EA600")]
	private static GisketchLength PreferLayout(GisketchLength layout, GisketchLength style)
	{
		return null;
	}

	[Token(Token = "0x6000534")]
	private static T ParseEnum<T>(string value, T fallback) where T : struct
	{
		return (T)null;
	}

	[Token(Token = "0x6000535")]
	[Address(RVA = "0x18EA860", Offset = "0x18E8E60", VA = "0x1818EA860")]
	private static string ResolveTooltip(string tooltip, string tooltipKey, GisketchBuildContext context)
	{
		return null;
	}

	[Token(Token = "0x6000536")]
	[Address(RVA = "0x18EC9D0", Offset = "0x18EAFD0", VA = "0x1818EC9D0")]
	private static GisketchMotionDefinition StyleMotion(GisketchStyleDefinition style, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x189B1D0", Offset = "0x18997D0", VA = "0x18189B1D0")]
	private static void Stretch(RectTransform rect)
	{
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x18DB400", Offset = "0x18D9A00", VA = "0x1818DB400")]
	private static void ApplyAspectRatio(GameObject go, GisketchStyleDefinition style)
	{
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x18DCBF0", Offset = "0x18DB1F0", VA = "0x1818DCBF0")]
	private static void ApplyLayoutOffset(GameObject go, GisketchLayoutDefinition layout)
	{
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x18E3740", Offset = "0x18E1D40", VA = "0x1818E3740")]
	private static void BuildScaleBox(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x600053B")]
	[Address(RVA = "0x18E3A50", Offset = "0x18E2050", VA = "0x1818E3A50")]
	private static void BuildScrollView(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x18E8F30", Offset = "0x18E7530", VA = "0x1818E8F30")]
	private static GameObject CreateViewport(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x18E8570", Offset = "0x18E6B70", VA = "0x1818E8570")]
	private static GameObject CreateContent(Transform parent, GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x18E8AD0", Offset = "0x18E70D0", VA = "0x1818E8AD0")]
	private static Scrollbar CreateScrollbar(Transform parent, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x18E87E0", Offset = "0x18E6DE0", VA = "0x1818E87E0")]
	private static RectTransform CreateScrollbarThumb(Transform parent, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x18E94E0", Offset = "0x18E7AE0", VA = "0x1818E94E0")]
	private static GisketchLayoutDefinition FillLayout(float grow = 0f)
	{
		return null;
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x18EAB60", Offset = "0x18E9160", VA = "0x1818EAB60")]
	private static GisketchLayoutDefinition ScrollContentLayout(GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x18E3C60", Offset = "0x18E2260", VA = "0x1818E3C60")]
	private static void BuildSearchPalette(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x18E9720", Offset = "0x18E7D20", VA = "0x1818E9720")]
	private static GisketchNodeDefinition InputNode(string id, string placeholder)
	{
		return null;
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x18EADE0", Offset = "0x18E93E0", VA = "0x1818EADE0")]
	private static GisketchNodeDefinition SearchButtonNode(string id)
	{
		return null;
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x18DCE90", Offset = "0x18DB490", VA = "0x1818DCE90")]
	private static void ApplyShadow(GameObject go, GisketchStyleDefinition style, GisketchTheme theme)
	{
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x18E4540", Offset = "0x18E2B40", VA = "0x1818E4540")]
	private static void BuildSkeleton(GameObject go, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x18E4790", Offset = "0x18E2D90", VA = "0x1818E4790")]
	private static void BuildSlider(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x18EBA60", Offset = "0x18EA060", VA = "0x1818EBA60")]
	private static RectTransform SliderPart(Transform parent, string name, GisketchStyleDefinition style, GisketchTheme theme, float left, float right, float height)
	{
		return null;
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x18EBD10", Offset = "0x18EA310", VA = "0x1818EBD10")]
	private static RectTransform SliderThumb(Transform parent, GisketchTheme theme, out Image image, out RectTransform faceRect)
	{
		return null;
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x18EC260", Offset = "0x18EA860", VA = "0x1818EC260")]
	private static TextMeshProUGUI SliderValueLabel(Transform parent, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x18DD180", Offset = "0x18DB780", VA = "0x1818DD180")]
	private static void ApplySliderMeasure(GameObject go, GisketchStyleDefinition style)
	{
	}

	[Token(Token = "0x600054C")]
	[Address(RVA = "0x18E4C90", Offset = "0x18E3290", VA = "0x1818E4C90")]
	private static void BuildSpriteButton(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x18DD380", Offset = "0x18DB980", VA = "0x1818DD380")]
	private static void ApplySpriteButtonMeasure(GameObject go, Image image, GisketchStyleDefinition style)
	{
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x18E6450", Offset = "0x18E4A50", VA = "0x1818E6450")]
	private static void BuildToggle(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, bool radio)
	{
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x18E6090", Offset = "0x18E4690", VA = "0x1818E6090")]
	private static void BuildSwitch(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x18ED670", Offset = "0x18EBC70", VA = "0x1818ED670")]
	private static RectTransform ToggleBox(Transform parent, GisketchTheme theme, bool radio)
	{
		return null;
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x18EE0A0", Offset = "0x18EC6A0", VA = "0x1818EE0A0")]
	private static RectTransform ToggleMark(RectTransform parent, GisketchTheme theme, bool radio)
	{
		return null;
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x18ED9A0", Offset = "0x18EBFA0", VA = "0x1818ED9A0")]
	private static RectTransform ToggleIcon(Transform parent, GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x18EDD40", Offset = "0x18EC340", VA = "0x1818EDD40")]
	private static TextMeshProUGUI ToggleLabel(Transform parent, GisketchNodeDefinition node, GisketchBuildContext context, bool hasIcon)
	{
		return null;
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x18ECE50", Offset = "0x18EB450", VA = "0x1818ECE50")]
	private static RectTransform SwitchTrack(Transform parent, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x18ECAB0", Offset = "0x18EB0B0", VA = "0x1818ECAB0")]
	private static RectTransform SwitchThumb(RectTransform parent, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x18DDEB0", Offset = "0x18DC4B0", VA = "0x1818DDEB0")]
	private static void ApplyToggleMeasure(GameObject go, GisketchStyleDefinition style, TextMeshProUGUI label, bool hasIcon)
	{
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x18DD640", Offset = "0x18DBC40", VA = "0x1818DD640")]
	private static void ApplySwitchMeasure(GameObject go, GisketchStyleDefinition style)
	{
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x18EA7A0", Offset = "0x18E8DA0", VA = "0x1818EA7A0")]
	public static void ResetLayoutSettleCounters()
	{
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x18E6EE0", Offset = "0x18E54E0", VA = "0x1818E6EE0")]
	public static GameObject Build(GisketchScreenDefinition screen, GisketchTheme theme, Transform parent, IGisketchLocalizer localizer, IGisketchActionHandler actions)
	{
		return null;
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x18E69C0", Offset = "0x18E4FC0", VA = "0x1818E69C0")]
	public static GisketchView BuildView(GisketchScreenDefinition screen, Transform parent, GisketchBuildContext context)
	{
		return null;
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x18E3030", Offset = "0x18E1630", VA = "0x1818E3030")]
	public static GisketchView BuildOverlay(GisketchOverlayDefinition overlay, Transform parent, GisketchBuildContext context)
	{
		return null;
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x18E22B0", Offset = "0x18E08B0", VA = "0x1818E22B0")]
	public static GameObject BuildNodeInto(GisketchNodeDefinition node, Transform parent, GisketchBuildContext context, [Optional] GisketchView view)
	{
		return null;
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x18EB5E0", Offset = "0x18E9BE0", VA = "0x1818EB5E0")]
	public static void SettleLayout(GameObject root)
	{
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x18EAFD0", Offset = "0x18E95D0", VA = "0x1818EAFD0")]
	public static void SettleLayout(GameObject root, GisketchLayoutSettleMode mode)
	{
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x18EE3B0", Offset = "0x18EC9B0", VA = "0x1818EE3B0")]
	private static bool UpdateScrollbars(GameObject root)
	{
		return default(bool);
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x18EB630", Offset = "0x18E9C30", VA = "0x1818EB630")]
	private static void SettleTargeted(GameObject root, bool forceCanvasForMeasurement)
	{
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x18EB980", Offset = "0x18E9F80", VA = "0x1818EB980")]
	private static FlexLayout SettlementFlex(GameObject root)
	{
		return null;
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x18E9660", Offset = "0x18E7C60", VA = "0x1818E9660")]
	private static void ForceCanvases(string reason)
	{
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x18EA640", Offset = "0x18E8C40", VA = "0x1818EA640")]
	private static void RefreshFlex(FlexLayout flex, string reason)
	{
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x18E8480", Offset = "0x18E6A80", VA = "0x1818E8480")]
	private static void CountSettle(GisketchLayoutSettleMode mode)
	{
	}

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x18E9380", Offset = "0x18E7980", VA = "0x1818E9380")]
	private static void EnsureScreenCanvas(GameObject root)
	{
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x18E2420", Offset = "0x18E0A20", VA = "0x1818E2420")]
	private static GameObject BuildNode(GisketchNodeDefinition node, Transform parent, GisketchBuildContext context, GisketchView view)
	{
		return null;
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x18E92D0", Offset = "0x18E78D0", VA = "0x1818E92D0")]
	private static RectMask2D EnsureRectMask(GameObject go)
	{
		return null;
	}

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x18EAF30", Offset = "0x18E9530", VA = "0x1818EAF30")]
	private static void SetInteractable(GameObject go, bool interactable)
	{
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x18E73C0", Offset = "0x18E59C0", VA = "0x1818E73C0")]
	private static Transform ChildParent(GameObject go)
	{
		return null;
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x18E0DD0", Offset = "0x18DF3D0", VA = "0x1818E0DD0")]
	private static void BuildChildren(GisketchNodeDefinition node, Transform parent, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x18E94D0", Offset = "0x18E7AD0", VA = "0x1818E94D0")]
	private static bool EqualsType(string a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x18EAB00", Offset = "0x18E9100", VA = "0x1818EAB00")]
	private static string ScreenLabel(GisketchScreenDefinition screen)
	{
		return null;
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x18EA2E0", Offset = "0x18E88E0", VA = "0x1818EA2E0")]
	private static string OverlayLabel(GisketchOverlayDefinition overlay)
	{
		return null;
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x18EA960", Offset = "0x18E8F60", VA = "0x1818EA960")]
	private static string RootLabel(GameObject root)
	{
		return null;
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x18EA240", Offset = "0x18E8840", VA = "0x1818EA240")]
	private static string NodeLabel(GisketchNodeDefinition node, string type)
	{
		return null;
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x18E73A0", Offset = "0x18E59A0", VA = "0x1818E73A0")]
	private static int ChildCount(GisketchNodeDefinition node)
	{
		return default(int);
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private static void MarkEditorPreview(GameObject go)
	{
	}
}
