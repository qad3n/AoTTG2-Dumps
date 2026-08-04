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

[Token(Token = "0x200008E")]
public static class GisketchScreenBuilder
{
	[Token(Token = "0x40002E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker BuildViewMarker;

	[Token(Token = "0x40002EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker SettleLayoutMarker;

	[Token(Token = "0x40002EB")]
	private const string BrushSidePanelDarkTexture = "GisketchUI/Texture/SeamlessGrungeDark";

	[Token(Token = "0x40002EC")]
	private const float DefaultScrollbarWidth = 12f;

	[Token(Token = "0x40002ED")]
	private const float SliderValueWidth = 54f;

	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x3A73D40", Offset = "0x3A73D40", VA = "0x3A73D40")]
	private static void BuildBuiltin(string type, GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x3A750B0", Offset = "0x3A750B0", VA = "0x3A750B0")]
	private static void BuildButton(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x3A7A4B0", Offset = "0x3A7A4B0", VA = "0x3A7A4B0")]
	private static bool IsBrushButtonStyle(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x3A798B0", Offset = "0x3A798B0", VA = "0x3A798B0")]
	private static Image BuildButtonFace(GameObject go, GisketchStyleDefinition style, GisketchBuildContext context, float relief, out RectTransform face)
	{
		return null;
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x3A7AAE0", Offset = "0x3A7AAE0", VA = "0x3A7AAE0")]
	private static RectTransform BuildButtonFaceContent(RectTransform face, GisketchStyleDefinition style)
	{
		return null;
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x3A787B0", Offset = "0x3A787B0", VA = "0x3A787B0")]
	private static void BuildStepper(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x3A7C7E0", Offset = "0x3A7C7E0", VA = "0x3A7C7E0")]
	private static GisketchNodeDefinition StepNode(GisketchStepperStepDefinition step, string style)
	{
		return null;
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x3A796C0", Offset = "0x3A796C0", VA = "0x3A796C0")]
	private static void ApplyPanel(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x3A782D0", Offset = "0x3A782D0", VA = "0x3A782D0")]
	private static Image ApplyImage(GameObject go, GisketchStyleDefinition style, GisketchTheme theme, string color, bool reliefGradient = false)
	{
		return null;
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x3A747D0", Offset = "0x3A747D0", VA = "0x3A747D0")]
	private static void ApplyText(TextMeshProUGUI text, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x3A7B3B0", Offset = "0x3A7B3B0", VA = "0x3A7B3B0")]
	private static void ApplyButtonMeasure(GameObject go, GisketchNodeDefinition node, TextMeshProUGUI text, GisketchStyleDefinition style, bool hasIcon)
	{
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x3A7BA20", Offset = "0x3A7BA20", VA = "0x3A7BA20")]
	private static void AllowButtonTextClipping(GameObject go, TextMeshProUGUI text, float minWidth)
	{
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x3A7B320", Offset = "0x3A7B320", VA = "0x3A7B320")]
	private static TextAlignmentOptions ButtonTextAlignment(GisketchStyleDefinition style, bool hasIcon)
	{
		return default(TextAlignmentOptions);
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x3A7D760", Offset = "0x3A7D760", VA = "0x3A7D760")]
	private static TextAlignmentOptions TextAlignment(GisketchStyleDefinition style)
	{
		return default(TextAlignmentOptions);
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x3A7D860", Offset = "0x3A7D860", VA = "0x3A7D860")]
	private static float PointLength(GisketchLength length, float fallback)
	{
		return default(float);
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x3A7A560", Offset = "0x3A7A560", VA = "0x3A7A560")]
	private static void AddFocusRing(GameObject go, GisketchTheme theme, bool visible = true)
	{
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x3A7D950", Offset = "0x3A7D950", VA = "0x3A7D950")]
	private static RectTransform BuildButtonContent(RectTransform parent, GisketchStyleDefinition style)
	{
		return null;
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x3A7A630", Offset = "0x3A7A630", VA = "0x3A7A630")]
	private static RectTransform BuildButtonContent(RectTransform parent, GisketchStyleDefinition style, bool reveal, Sprite maskSprite, out RectTransform mask)
	{
		return null;
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x3A7D9B0", Offset = "0x3A7D9B0", VA = "0x3A7D9B0")]
	private static RectTransform BuildBrushRevealMask(RectTransform parent, Sprite maskSprite, out RectTransform mask)
	{
		return null;
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x3A78EA0", Offset = "0x3A78EA0", VA = "0x3A78EA0")]
	private static void BuildDropdown(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x3A79210", Offset = "0x3A79210", VA = "0x3A79210")]
	private static void BuildSelect(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x3A7E760", Offset = "0x3A7E760", VA = "0x3A7E760")]
	private static AottgChoiceButton ChoiceButton(GameObject go, GisketchTheme theme, AottgChoiceControl control, bool selectMode)
	{
		return null;
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x3A7DD50", Offset = "0x3A7DD50", VA = "0x3A7DD50")]
	private static GameObject ChoicePart(Transform parent, GisketchNodeDefinition owner, string styleName, string icon, GisketchBuildContext context)
	{
		return null;
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x3A7E8F0", Offset = "0x3A7E8F0", VA = "0x3A7E8F0")]
	private static Button ChoicePartButton(GameObject go, string action)
	{
		return null;
	}

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x3A7EA90", Offset = "0x3A7EA90", VA = "0x3A7EA90")]
	private static GisketchNodeDefinition ButtonNode(GisketchNodeDefinition owner, string style, string icon)
	{
		return null;
	}

	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x3A7EF70", Offset = "0x3A7EF70", VA = "0x3A7EF70")]
	private static GisketchLayoutDefinition RowLayout()
	{
		return null;
	}

	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x3A7DC10", Offset = "0x3A7DC10", VA = "0x3A7DC10")]
	private static GisketchLayoutDefinition ChoiceLayout(GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x3A77020", Offset = "0x3A77020", VA = "0x3A77020")]
	private static void BuildColorSwatch(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x3A7F080", Offset = "0x3A7F080", VA = "0x3A7F080")]
	private static Color ParseColor(string value, Color fallback)
	{
		return default(Color);
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x3A7F0D0", Offset = "0x3A7F0D0", VA = "0x3A7F0D0")]
	public static GameObject Build(GisketchScreenDefinition screen, GisketchTheme theme, Transform parent, IGisketchLocalizer localizer, IGisketchActionHandler actions)
	{
		return null;
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x3A7F1C0", Offset = "0x3A7F1C0", VA = "0x3A7F1C0")]
	public static GisketchView BuildView(GisketchScreenDefinition screen, Transform parent, GisketchBuildContext context)
	{
		return null;
	}

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x3A7FDA0", Offset = "0x3A7FDA0", VA = "0x3A7FDA0")]
	public static GisketchView BuildOverlay(GisketchOverlayDefinition overlay, Transform parent, GisketchBuildContext context)
	{
		return null;
	}

	[Token(Token = "0x6000401")]
	[Address(RVA = "0x3A80080", Offset = "0x3A80080", VA = "0x3A80080")]
	public static GameObject BuildNodeInto(GisketchNodeDefinition node, Transform parent, GisketchBuildContext context, [Optional] GisketchView view)
	{
		return null;
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x3A7F760", Offset = "0x3A7F760", VA = "0x3A7F760")]
	public static void SettleLayout(GameObject root)
	{
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x3A80250", Offset = "0x3A80250", VA = "0x3A80250")]
	private static bool UpdateScrollbars(GameObject root)
	{
		return default(bool);
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x3A7CA40", Offset = "0x3A7CA40", VA = "0x3A7CA40")]
	private static GameObject BuildNode(GisketchNodeDefinition node, Transform parent, GisketchBuildContext context, GisketchView view)
	{
		return null;
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x3A803B0", Offset = "0x3A803B0", VA = "0x3A803B0")]
	private static void SetInteractable(GameObject go, bool interactable)
	{
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x3A806B0", Offset = "0x3A806B0", VA = "0x3A806B0")]
	private static Transform ChildParent(GameObject go)
	{
		return null;
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x3A80780", Offset = "0x3A80780", VA = "0x3A80780")]
	private static void BuildChildren(GisketchNodeDefinition node, Transform parent, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x3A747C0", Offset = "0x3A747C0", VA = "0x3A747C0")]
	private static bool EqualsType(string a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x3A7F6F0", Offset = "0x3A7F6F0", VA = "0x3A7F6F0")]
	private static string ScreenLabel(GisketchScreenDefinition screen)
	{
		return null;
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x3A80030", Offset = "0x3A80030", VA = "0x3A80030")]
	private static string OverlayLabel(GisketchOverlayDefinition overlay)
	{
		return null;
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x3A801D0", Offset = "0x3A801D0", VA = "0x3A801D0")]
	private static string RootLabel(GameObject root)
	{
		return null;
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x3A80320", Offset = "0x3A80320", VA = "0x3A80320")]
	private static string NodeLabel(GisketchNodeDefinition node, string type)
	{
		return null;
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x3A7F740", Offset = "0x3A7F740", VA = "0x3A7F740")]
	private static int ChildCount(GisketchNodeDefinition node)
	{
		return default(int);
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x3A7B210", Offset = "0x3A7B210", VA = "0x3A7B210")]
	private static void MarkEditorPreview(GameObject go)
	{
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x3A74D80", Offset = "0x3A74D80", VA = "0x3A74D80")]
	private static void BuildIcon(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x3A7AD20", Offset = "0x3A7AD20", VA = "0x3A7AD20")]
	private static Image BuildButtonIcon(GisketchNodeDefinition node, RectTransform parent, GisketchStyleDefinition style, GisketchBuildContext context, bool hasText)
	{
		return null;
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x3A7D8F0", Offset = "0x3A7D8F0", VA = "0x3A7D8F0")]
	private static float ButtonIconSize(GisketchStyleDefinition style)
	{
		return default(float);
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x3A79C50", Offset = "0x3A79C50", VA = "0x3A79C50")]
	private static Image BuildSpriteImage(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, bool preserveAspect, bool raycastTarget)
	{
		return null;
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x3A80850", Offset = "0x3A80850", VA = "0x3A80850")]
	private static string SpritePath(GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
		return null;
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x3A80900", Offset = "0x3A80900", VA = "0x3A80900")]
	private static bool IsBrushSidePanelTexture(GisketchStyleDefinition style)
	{
		return default(bool);
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x3A77D50", Offset = "0x3A77D50", VA = "0x3A77D50")]
	private static void BuildStandaloneSpriteImage(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x3A80B80", Offset = "0x3A80B80", VA = "0x3A80B80")]
	private static void BuildRectTransformCoverSpriteImage(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x3A809C0", Offset = "0x3A809C0", VA = "0x3A809C0")]
	private static bool IsUntintedSpriteStyle(GisketchStyleDefinition style)
	{
		return default(bool);
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x3A81060", Offset = "0x3A81060", VA = "0x3A81060")]
	private static bool IsCoverSpriteStyle(GisketchStyleDefinition style)
	{
		return default(bool);
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x3A80B10", Offset = "0x3A80B10", VA = "0x3A80B10")]
	private static bool IsRectTransformCoverSpriteStyle(GisketchStyleDefinition style)
	{
		return default(bool);
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x3A76390", Offset = "0x3A76390", VA = "0x3A76390")]
	private static void BuildInputField(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, bool multiline)
	{
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x3A81190", Offset = "0x3A81190", VA = "0x3A81190")]
	private static RectTransform TextArea(Transform parent, GisketchStyleDefinition style)
	{
		return null;
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x3A81580", Offset = "0x3A81580", VA = "0x3A81580")]
	private static TextMeshProUGUI InputText(RectTransform parent, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, bool multiline)
	{
		return null;
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x3A813E0", Offset = "0x3A813E0", VA = "0x3A813E0")]
	private static TextMeshProUGUI Placeholder(RectTransform parent, GisketchNodeDefinition node, GisketchBuildContext context, bool multiline)
	{
		return null;
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x3A81960", Offset = "0x3A81960", VA = "0x3A81960")]
	private static GameObject TextObject(string name, RectTransform parent)
	{
		return null;
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x3A810D0", Offset = "0x3A810D0", VA = "0x3A810D0")]
	private static TMP_InputField.ContentType ContentType(string type)
	{
		return default(TMP_InputField.ContentType);
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x3A81AF0", Offset = "0x3A81AF0", VA = "0x3A81AF0")]
	private static char RejectTabCharacter(string text, int charIndex, char addedChar)
	{
		return default(char);
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x3A81700", Offset = "0x3A81700", VA = "0x3A81700")]
	private static void ApplyInputMeasure(GameObject go, GisketchStyleDefinition style)
	{
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x3A7BB30", Offset = "0x3A7BB30", VA = "0x3A7BB30")]
	private static void ApplyFlex(FlexLayout flex, GisketchLayoutDefinition layout, GisketchStyleDefinition style)
	{
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x3A81B00", Offset = "0x3A81B00", VA = "0x3A81B00")]
	private static bool IsFullscreenAbsolute(GisketchLayoutDefinition layout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x3A81E30", Offset = "0x3A81E30", VA = "0x3A81E30")]
	private static bool IsPercent100(GisketchLength length)
	{
		return default(bool);
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x3A81CB0", Offset = "0x3A81CB0", VA = "0x3A81CB0")]
	private static YGValue Length(GisketchLength length, YGValue fallback)
	{
		return default(YGValue);
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x3A7D830", Offset = "0x3A7D830", VA = "0x3A7D830")]
	private static GisketchLength PreferLayout(GisketchLength layout, GisketchLength style)
	{
		return null;
	}

	[Token(Token = "0x6000427")]
	private static T ParseEnum<T>(string value, T fallback) where T : struct
	{
		return (T)null;
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x3A80450", Offset = "0x3A80450", VA = "0x3A80450")]
	private static string ResolveTooltip(string tooltip, string tooltipKey, GisketchBuildContext context)
	{
		return null;
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x3A805F0", Offset = "0x3A805F0", VA = "0x3A805F0")]
	private static GisketchMotionDefinition StyleMotion(GisketchStyleDefinition style, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x3A7B220", Offset = "0x3A7B220", VA = "0x3A7B220")]
	private static void Stretch(RectTransform rect)
	{
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x3A7ECA0", Offset = "0x3A7ECA0", VA = "0x3A7ECA0")]
	private static void ApplyAspectRatio(GameObject go, GisketchStyleDefinition style)
	{
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x3A7EE00", Offset = "0x3A7EE00", VA = "0x3A7EE00")]
	private static void ApplyLayoutOffset(GameObject go, GisketchLayoutDefinition layout)
	{
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x3A78B50", Offset = "0x3A78B50", VA = "0x3A78B50")]
	private static void BuildScaleBox(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x3A78950", Offset = "0x3A78950", VA = "0x3A78950")]
	private static void BuildScrollView(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x3A81F40", Offset = "0x3A81F40", VA = "0x3A81F40")]
	private static GameObject CreateViewport(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x3A821A0", Offset = "0x3A821A0", VA = "0x3A821A0")]
	private static GameObject CreateContent(Transform parent, GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x3A82400", Offset = "0x3A82400", VA = "0x3A82400")]
	private static Scrollbar CreateScrollbar(Transform parent, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x3A82BE0", Offset = "0x3A82BE0", VA = "0x3A82BE0")]
	private static RectTransform CreateScrollbarThumb(Transform parent, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x3A82820", Offset = "0x3A82820", VA = "0x3A82820")]
	private static GisketchLayoutDefinition FillLayout(float grow = 0f)
	{
		return null;
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x3A829A0", Offset = "0x3A829A0", VA = "0x3A829A0")]
	private static GisketchLayoutDefinition ScrollContentLayout(GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x3A768A0", Offset = "0x3A768A0", VA = "0x3A768A0")]
	private static void BuildSearchPalette(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x3A82EC0", Offset = "0x3A82EC0", VA = "0x3A82EC0")]
	private static GisketchNodeDefinition InputNode(string id, string placeholder)
	{
		return null;
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x3A830F0", Offset = "0x3A830F0", VA = "0x3A830F0")]
	private static GisketchNodeDefinition SearchButtonNode(string id)
	{
		return null;
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x3A7D4C0", Offset = "0x3A7D4C0", VA = "0x3A7D4C0")]
	private static void ApplyShadow(GameObject go, GisketchStyleDefinition style, GisketchTheme theme)
	{
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x3A785C0", Offset = "0x3A785C0", VA = "0x3A785C0")]
	private static void BuildSkeleton(GameObject go, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x3A76B30", Offset = "0x3A76B30", VA = "0x3A76B30")]
	private static void BuildSlider(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x3A83230", Offset = "0x3A83230", VA = "0x3A83230")]
	private static RectTransform SliderPart(Transform parent, string name, GisketchStyleDefinition style, GisketchTheme theme, float left, float right, float height)
	{
		return null;
	}

	[Token(Token = "0x600043C")]
	[Address(RVA = "0x3A834C0", Offset = "0x3A834C0", VA = "0x3A834C0")]
	private static RectTransform SliderThumb(Transform parent, GisketchTheme theme, out Image image, out RectTransform faceRect)
	{
		return null;
	}

	[Token(Token = "0x600043D")]
	[Address(RVA = "0x3A83C30", Offset = "0x3A83C30", VA = "0x3A83C30")]
	private static TextMeshProUGUI SliderValueLabel(Transform parent, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x3A839D0", Offset = "0x3A839D0", VA = "0x3A839D0")]
	private static void ApplySliderMeasure(GameObject go, GisketchStyleDefinition style)
	{
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x3A75E50", Offset = "0x3A75E50", VA = "0x3A75E50")]
	private static void BuildSpriteButton(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x3A83F90", Offset = "0x3A83F90", VA = "0x3A83F90")]
	private static void ApplySpriteButtonMeasure(GameObject go, Image image, GisketchStyleDefinition style)
	{
	}

	[Token(Token = "0x6000441")]
	[Address(RVA = "0x3A77790", Offset = "0x3A77790", VA = "0x3A77790")]
	private static void BuildToggle(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, bool radio)
	{
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x3A77380", Offset = "0x3A77380", VA = "0x3A77380")]
	private static void BuildSwitch(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x3A84260", Offset = "0x3A84260", VA = "0x3A84260")]
	private static RectTransform ToggleBox(Transform parent, GisketchTheme theme, bool radio)
	{
		return null;
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x3A84550", Offset = "0x3A84550", VA = "0x3A84550")]
	private static RectTransform ToggleMark(RectTransform parent, GisketchTheme theme, bool radio)
	{
		return null;
	}

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x3A84830", Offset = "0x3A84830", VA = "0x3A84830")]
	private static RectTransform ToggleIcon(Transform parent, GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x3A84B90", Offset = "0x3A84B90", VA = "0x3A84B90")]
	private static TextMeshProUGUI ToggleLabel(Transform parent, GisketchNodeDefinition node, GisketchBuildContext context, bool hasIcon)
	{
		return null;
	}

	[Token(Token = "0x6000447")]
	[Address(RVA = "0x3A85290", Offset = "0x3A85290", VA = "0x3A85290")]
	private static RectTransform SwitchTrack(Transform parent, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x6000448")]
	[Address(RVA = "0x3A855D0", Offset = "0x3A855D0", VA = "0x3A855D0")]
	private static RectTransform SwitchThumb(RectTransform parent, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x6000449")]
	[Address(RVA = "0x3A84EE0", Offset = "0x3A84EE0", VA = "0x3A84EE0")]
	private static void ApplyToggleMeasure(GameObject go, GisketchStyleDefinition style, TextMeshProUGUI label, bool hasIcon)
	{
	}

	[Token(Token = "0x600044A")]
	[Address(RVA = "0x3A85920", Offset = "0x3A85920", VA = "0x3A85920")]
	private static void ApplySwitchMeasure(GameObject go, GisketchStyleDefinition style)
	{
	}
}
