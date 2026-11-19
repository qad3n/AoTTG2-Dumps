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

[Token(Token = "0x20000AF")]
public static class GisketchScreenBuilder
{
	[Token(Token = "0x40003AC")]
	private const string BrushSidePanelDarkTexture = "GisketchUI/Texture/SeamlessGrungeDark";

	[Token(Token = "0x40003AD")]
	private const float DefaultScrollbarWidth = 12f;

	[Token(Token = "0x40003AE")]
	private const float SliderValueWidth = 54f;

	[Token(Token = "0x40003AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker BuildViewMarker;

	[Token(Token = "0x40003B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker SettleLayoutMarker;

	[Token(Token = "0x40003B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static int _settleCalls;

	[Token(Token = "0x40003B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private static int _fullSettleCalls;

	[Token(Token = "0x40003B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static int _targetedSettleCalls;

	[Token(Token = "0x40003B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private static int _measurementSettleCalls;

	[Token(Token = "0x40003B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static int _canvasFlushes;

	[Token(Token = "0x40003B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private static int _flexRefreshes;

	[Token(Token = "0x40003B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static int _scrollbarPasses;

	[Token(Token = "0x1700009A")]
	public static GisketchLayoutSettleCounters LayoutSettleCounters
	{
		[Token(Token = "0x60005A5")]
		[Address(RVA = "0x528D6E0", Offset = "0x528C6E0", VA = "0x528D6E0")]
		get
		{
			return default(GisketchLayoutSettleCounters);
		}
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x527C060", Offset = "0x527B060", VA = "0x527C060")]
	private static void BuildBuiltin(string type, GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x527D4A0", Offset = "0x527C4A0", VA = "0x527D4A0")]
	private static void BuildButton(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x5282EA0", Offset = "0x5281EA0", VA = "0x5282EA0")]
	private static bool IsBrushButtonStyle(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x5282320", Offset = "0x5281320", VA = "0x5282320")]
	private static Image BuildButtonFace(GameObject go, GisketchStyleDefinition style, GisketchBuildContext context, float relief, out RectTransform face)
	{
		return null;
	}

	[Token(Token = "0x600054C")]
	[Address(RVA = "0x52834E0", Offset = "0x52824E0", VA = "0x52834E0")]
	private static RectTransform BuildButtonFaceContent(RectTransform face, GisketchStyleDefinition style)
	{
		return null;
	}

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x5281200", Offset = "0x5280200", VA = "0x5281200")]
	private static void BuildStepper(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x52854B0", Offset = "0x52844B0", VA = "0x52854B0")]
	private static GisketchNodeDefinition StepNode(GisketchStepperStepDefinition step, string style)
	{
		return null;
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x5282130", Offset = "0x5281130", VA = "0x5282130")]
	private static void ApplyPanel(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x5280D70", Offset = "0x527FD70", VA = "0x5280D70")]
	private static Image ApplyImage(GameObject go, GisketchStyleDefinition style, GisketchTheme theme, string color, bool reliefGradient = false)
	{
		return null;
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x527CB40", Offset = "0x527BB40", VA = "0x527CB40")]
	private static void ApplyText(TextMeshProUGUI text, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x5283DA0", Offset = "0x5282DA0", VA = "0x5283DA0")]
	private static void ApplyButtonMeasure(GameObject go, GisketchNodeDefinition node, TextMeshProUGUI text, GisketchStyleDefinition style, bool hasIcon)
	{
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x52845F0", Offset = "0x52835F0", VA = "0x52845F0")]
	private static void AllowButtonTextClipping(GameObject go, TextMeshProUGUI text, float minWidth)
	{
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x5283D10", Offset = "0x5282D10", VA = "0x5283D10")]
	private static TextAlignmentOptions ButtonTextAlignment(GisketchStyleDefinition style, bool hasIcon)
	{
		return default(TextAlignmentOptions);
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x5286270", Offset = "0x5285270", VA = "0x5286270")]
	private static TextAlignmentOptions TextAlignment(GisketchStyleDefinition style)
	{
		return default(TextAlignmentOptions);
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x5284770", Offset = "0x5283770", VA = "0x5284770")]
	private static float PointLength(GisketchLength length, float fallback)
	{
		return default(float);
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x5282F50", Offset = "0x5281F50", VA = "0x5282F50")]
	private static void AddFocusRing(GameObject go, GisketchTheme theme, bool visible = true)
	{
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x52863D0", Offset = "0x52853D0", VA = "0x52863D0")]
	private static RectTransform BuildButtonContent(RectTransform parent, GisketchStyleDefinition style)
	{
		return null;
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x5283020", Offset = "0x5282020", VA = "0x5283020")]
	private static RectTransform BuildButtonContent(RectTransform parent, GisketchStyleDefinition style, bool reveal, Sprite maskSprite, out RectTransform mask)
	{
		return null;
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x5286430", Offset = "0x5285430", VA = "0x5286430")]
	private static RectTransform BuildBrushRevealMask(RectTransform parent, Sprite maskSprite, out RectTransform mask)
	{
		return null;
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x52818D0", Offset = "0x52808D0", VA = "0x52818D0")]
	private static void BuildDropdown(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x5281C80", Offset = "0x5280C80", VA = "0x5281C80")]
	private static void BuildSelect(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x5287230", Offset = "0x5286230", VA = "0x5287230")]
	private static AottgChoiceButton ChoiceButton(GameObject go, GisketchTheme theme, AottgChoiceControl control, bool selectMode)
	{
		return null;
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x52867D0", Offset = "0x52857D0", VA = "0x52867D0")]
	private static GameObject ChoicePart(Transform parent, GisketchNodeDefinition owner, string styleName, string icon, GisketchBuildContext context)
	{
		return null;
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x5287480", Offset = "0x5286480", VA = "0x5287480")]
	private static Button ChoicePartButton(GameObject go, string action)
	{
		return null;
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x5287620", Offset = "0x5286620", VA = "0x5287620")]
	private static GisketchNodeDefinition ButtonNode(GisketchNodeDefinition owner, string style, string icon)
	{
		return null;
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x5287B00", Offset = "0x5286B00", VA = "0x5287B00")]
	private static GisketchLayoutDefinition RowLayout()
	{
		return null;
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x5286690", Offset = "0x5285690", VA = "0x5286690")]
	private static GisketchLayoutDefinition ChoiceLayout(GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x527F970", Offset = "0x527E970", VA = "0x527F970")]
	private static void BuildColorSwatch(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x5287C10", Offset = "0x5286C10", VA = "0x5287C10")]
	private static Color ParseColor(string value, Color fallback)
	{
		return default(Color);
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x527D180", Offset = "0x527C180", VA = "0x527D180")]
	private static void BuildIcon(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x5283720", Offset = "0x5282720", VA = "0x5283720")]
	private static Image BuildButtonIcon(GisketchNodeDefinition node, RectTransform parent, GisketchStyleDefinition style, GisketchBuildContext context, bool hasText)
	{
		return null;
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x5286340", Offset = "0x5285340", VA = "0x5286340")]
	private static float ButtonIconSize(GisketchStyleDefinition style)
	{
		return default(float);
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x52826C0", Offset = "0x52816C0", VA = "0x52826C0")]
	private static Image BuildSpriteImage(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, bool preserveAspect, bool raycastTarget)
	{
		return null;
	}

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x5287C60", Offset = "0x5286C60", VA = "0x5287C60")]
	private static string SpritePath(GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
		return null;
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x5287D10", Offset = "0x5286D10", VA = "0x5287D10")]
	private static bool IsBrushSidePanelTexture(GisketchStyleDefinition style)
	{
		return default(bool);
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x5280800", Offset = "0x527F800", VA = "0x5280800")]
	private static void BuildStandaloneSpriteImage(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x5287F90", Offset = "0x5286F90", VA = "0x5287F90")]
	private static void BuildRectTransformCoverSpriteImage(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x5287DD0", Offset = "0x5286DD0", VA = "0x5287DD0")]
	private static bool IsUntintedSpriteStyle(GisketchStyleDefinition style)
	{
		return default(bool);
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x5288480", Offset = "0x5287480", VA = "0x5288480")]
	private static bool IsCoverSpriteStyle(GisketchStyleDefinition style)
	{
		return default(bool);
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x5287F20", Offset = "0x5286F20", VA = "0x5287F20")]
	private static bool IsRectTransformCoverSpriteStyle(GisketchStyleDefinition style)
	{
		return default(bool);
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x527EA70", Offset = "0x527DA70", VA = "0x527EA70")]
	private static void BuildInputField(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, bool multiline)
	{
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x52885F0", Offset = "0x52875F0", VA = "0x52885F0")]
	private static RectTransform TextArea(Transform parent, GisketchStyleDefinition style)
	{
		return null;
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x52889F0", Offset = "0x52879F0", VA = "0x52889F0")]
	private static TextMeshProUGUI InputText(RectTransform parent, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, bool multiline)
	{
		return null;
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x5288840", Offset = "0x5287840", VA = "0x5288840")]
	private static TextMeshProUGUI Placeholder(RectTransform parent, GisketchNodeDefinition node, GisketchBuildContext context, bool multiline)
	{
		return null;
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x5288DC0", Offset = "0x5287DC0", VA = "0x5288DC0")]
	private static GameObject TextObject(string name, RectTransform parent)
	{
		return null;
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x52884F0", Offset = "0x52874F0", VA = "0x52884F0")]
	private static TMP_InputField.ContentType ContentType(string type)
	{
		return default(TMP_InputField.ContentType);
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x5288F50", Offset = "0x5287F50", VA = "0x5288F50")]
	private static char ValidateInput(string type, bool multiline, string text, int charIndex, char addedChar)
	{
		return default(char);
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x52890E0", Offset = "0x52880E0", VA = "0x52890E0")]
	private static bool RejectControlCharacter(bool multiline, char addedChar)
	{
		return default(bool);
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x5289130", Offset = "0x5288130", VA = "0x5289130")]
	private static char ValidateInteger(string text, int charIndex, char addedChar)
	{
		return default(char);
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x5289200", Offset = "0x5288200", VA = "0x5289200")]
	private static char ValidateNumber(string text, int charIndex, char addedChar)
	{
		return default(char);
	}

	[Token(Token = "0x600057A")]
	[Address(RVA = "0x52892E0", Offset = "0x52882E0", VA = "0x52892E0")]
	private static bool IsLeadingMinus(string text, int charIndex, char addedChar)
	{
		return default(bool);
	}

	[Token(Token = "0x600057B")]
	[Address(RVA = "0x5288B70", Offset = "0x5287B70", VA = "0x5288B70")]
	private static void ApplyInputMeasure(GameObject go, GisketchStyleDefinition style)
	{
	}

	[Token(Token = "0x600057C")]
	[Address(RVA = "0x5284800", Offset = "0x5283800", VA = "0x5284800")]
	private static void ApplyFlex(FlexLayout flex, GisketchLayoutDefinition layout, GisketchStyleDefinition style)
	{
	}

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x5289320", Offset = "0x5288320", VA = "0x5289320")]
	private static bool IsFullscreenAbsolute(GisketchLayoutDefinition layout)
	{
		return default(bool);
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x5289650", Offset = "0x5288650", VA = "0x5289650")]
	private static bool IsPercent100(GisketchLength length)
	{
		return default(bool);
	}

	[Token(Token = "0x600057F")]
	[Address(RVA = "0x52894D0", Offset = "0x52884D0", VA = "0x52894D0")]
	private static YGValue Length(GisketchLength length, YGValue fallback)
	{
		return default(YGValue);
	}

	[Token(Token = "0x6000580")]
	[Address(RVA = "0x52863A0", Offset = "0x52853A0", VA = "0x52863A0")]
	private static GisketchLength PreferLayout(GisketchLength layout, GisketchLength style)
	{
		return null;
	}

	[Token(Token = "0x6000581")]
	private static T ParseEnum<T>(string value, T fallback) where T : struct
	{
		return (T)null;
	}

	[Token(Token = "0x6000582")]
	[Address(RVA = "0x5289760", Offset = "0x5288760", VA = "0x5289760")]
	private static string ResolveTooltip(string tooltip, string tooltipKey, GisketchBuildContext context)
	{
		return null;
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x5289900", Offset = "0x5288900", VA = "0x5289900")]
	private static GisketchMotionDefinition StyleMotion(GisketchStyleDefinition style, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x5283C10", Offset = "0x5282C10", VA = "0x5283C10")]
	private static void Stretch(RectTransform rect)
	{
	}

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x5287830", Offset = "0x5286830", VA = "0x5287830")]
	private static void ApplyAspectRatio(GameObject go, GisketchStyleDefinition style)
	{
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x5287990", Offset = "0x5286990", VA = "0x5287990")]
	private static void ApplyLayoutOffset(GameObject go, GisketchLayoutDefinition layout)
	{
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x52815C0", Offset = "0x52805C0", VA = "0x52815C0")]
	private static void BuildScaleBox(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x5281390", Offset = "0x5280390", VA = "0x5281390")]
	private static void BuildScrollView(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x52899C0", Offset = "0x52889C0", VA = "0x52899C0")]
	private static GameObject CreateViewport(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x5289C20", Offset = "0x5288C20", VA = "0x5289C20")]
	private static GameObject CreateContent(Transform parent, GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x5289E80", Offset = "0x5288E80", VA = "0x5289E80")]
	private static Scrollbar CreateScrollbar(Transform parent, GisketchTheme theme, bool leftAligned)
	{
		return null;
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x528A770", Offset = "0x5289770", VA = "0x528A770")]
	private static RectTransform CreateScrollbarThumb(Transform parent, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x528A380", Offset = "0x5289380", VA = "0x528A380")]
	private static GisketchLayoutDefinition FillLayout(float grow = 0f)
	{
		return null;
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x528A500", Offset = "0x5289500", VA = "0x528A500")]
	private static GisketchLayoutDefinition ScrollContentLayout(GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x527F130", Offset = "0x527E130", VA = "0x527F130")]
	private static void BuildSearchPalette(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x528AA50", Offset = "0x5289A50", VA = "0x528AA50")]
	private static GisketchNodeDefinition InputNode(string id, string placeholder)
	{
		return null;
	}

	[Token(Token = "0x6000591")]
	[Address(RVA = "0x528AC80", Offset = "0x5289C80", VA = "0x528AC80")]
	private static GisketchNodeDefinition SearchButtonNode(string id)
	{
		return null;
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x5285FD0", Offset = "0x5284FD0", VA = "0x5285FD0")]
	private static void ApplyShadow(GameObject go, GisketchStyleDefinition style, GisketchTheme theme)
	{
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x5281010", Offset = "0x5280010", VA = "0x5281010")]
	private static void BuildSkeleton(GameObject go, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x6000594")]
	[Address(RVA = "0x527F3E0", Offset = "0x527E3E0", VA = "0x527F3E0")]
	private static void BuildSlider(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x6000595")]
	[Address(RVA = "0x528ADC0", Offset = "0x5289DC0", VA = "0x528ADC0")]
	private static RectTransform SliderPart(Transform parent, string name, GisketchStyleDefinition style, GisketchTheme theme, float left, float right, float height)
	{
		return null;
	}

	[Token(Token = "0x6000596")]
	[Address(RVA = "0x528B050", Offset = "0x528A050", VA = "0x528B050")]
	private static RectTransform SliderThumb(Transform parent, GisketchTheme theme, out Image image, out RectTransform faceRect)
	{
		return null;
	}

	[Token(Token = "0x6000597")]
	[Address(RVA = "0x528B790", Offset = "0x528A790", VA = "0x528B790")]
	private static TextMeshProUGUI SliderValueLabel(Transform parent, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x6000598")]
	[Address(RVA = "0x528B540", Offset = "0x528A540", VA = "0x528B540")]
	private static void ApplySliderMeasure(GameObject go, GisketchStyleDefinition style)
	{
	}

	[Token(Token = "0x6000599")]
	[Address(RVA = "0x527E470", Offset = "0x527D470", VA = "0x527E470")]
	private static void BuildSpriteButton(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x528BAF0", Offset = "0x528AAF0", VA = "0x528BAF0")]
	private static void ApplySpriteButtonMeasure(GameObject go, Image image, GisketchStyleDefinition style)
	{
	}

	[Token(Token = "0x600059B")]
	[Address(RVA = "0x5280170", Offset = "0x527F170", VA = "0x5280170")]
	private static void BuildToggle(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, bool radio)
	{
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x527FCC0", Offset = "0x527ECC0", VA = "0x527FCC0")]
	private static void BuildSwitch(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x528BDE0", Offset = "0x528ADE0", VA = "0x528BDE0")]
	private static RectTransform ToggleBox(Transform parent, GisketchTheme theme, bool radio)
	{
		return null;
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x528C0D0", Offset = "0x528B0D0", VA = "0x528C0D0")]
	private static RectTransform ToggleMark(RectTransform parent, GisketchTheme theme, bool radio)
	{
		return null;
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x528C3B0", Offset = "0x528B3B0", VA = "0x528C3B0")]
	private static RectTransform ToggleIcon(Transform parent, GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x528C710", Offset = "0x528B710", VA = "0x528C710")]
	private static TextMeshProUGUI ToggleLabel(Transform parent, GisketchNodeDefinition node, GisketchBuildContext context, bool hasIcon)
	{
		return null;
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x528CE00", Offset = "0x528BE00", VA = "0x528CE00")]
	private static RectTransform SwitchTrack(Transform parent, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x528D140", Offset = "0x528C140", VA = "0x528D140")]
	private static RectTransform SwitchThumb(RectTransform parent, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x528CA60", Offset = "0x528BA60", VA = "0x528CA60")]
	private static void ApplyToggleMeasure(GameObject go, GisketchStyleDefinition style, TextMeshProUGUI label, bool hasIcon)
	{
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x528D490", Offset = "0x528C490", VA = "0x528D490")]
	private static void ApplySwitchMeasure(GameObject go, GisketchStyleDefinition style)
	{
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x528D750", Offset = "0x528C750", VA = "0x528D750")]
	public static void ResetLayoutSettleCounters()
	{
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x528D7A0", Offset = "0x528C7A0", VA = "0x528D7A0")]
	public static GameObject Build(GisketchScreenDefinition screen, GisketchTheme theme, Transform parent, IGisketchLocalizer localizer, IGisketchActionHandler actions)
	{
		return null;
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x528D890", Offset = "0x528C890", VA = "0x528D890")]
	public static GisketchView BuildView(GisketchScreenDefinition screen, Transform parent, GisketchBuildContext context)
	{
		return null;
	}

	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x528E3F0", Offset = "0x528D3F0", VA = "0x528E3F0")]
	public static GisketchView BuildOverlay(GisketchOverlayDefinition overlay, Transform parent, GisketchBuildContext context)
	{
		return null;
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x528E6D0", Offset = "0x528D6D0", VA = "0x528E6D0")]
	public static GameObject BuildNodeInto(GisketchNodeDefinition node, Transform parent, GisketchBuildContext context, [Optional] GisketchView view)
	{
		return null;
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x528E820", Offset = "0x528D820", VA = "0x528E820")]
	public static void SettleLayout(GameObject root)
	{
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x528DEB0", Offset = "0x528CEB0", VA = "0x528DEB0")]
	public static void SettleLayout(GameObject root, GisketchLayoutSettleMode mode)
	{
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x528EE70", Offset = "0x528DE70", VA = "0x528EE70")]
	private static bool UpdateScrollbars(GameObject root)
	{
		return default(bool);
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x528E9F0", Offset = "0x528D9F0", VA = "0x528E9F0")]
	private static void SettleTargeted(GameObject root, bool forceCanvasForMeasurement)
	{
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x528EF70", Offset = "0x528DF70", VA = "0x528EF70")]
	private static FlexLayout SettlementFlex(GameObject root)
	{
		return null;
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x528ECA0", Offset = "0x528DCA0", VA = "0x528ECA0")]
	private static void ForceCanvases(string reason)
	{
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x528ED60", Offset = "0x528DD60", VA = "0x528ED60")]
	private static void RefreshFlex(FlexLayout flex, string reason)
	{
	}

	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x528E910", Offset = "0x528D910", VA = "0x528E910")]
	private static void CountSettle(GisketchLayoutSettleMode mode)
	{
	}

	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x528DD70", Offset = "0x528CD70", VA = "0x528DD70")]
	private static void EnsureScreenCanvas(GameObject root)
	{
	}

	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x5285710", Offset = "0x5284710", VA = "0x5285710")]
	private static GameObject BuildNode(GisketchNodeDefinition node, Transform parent, GisketchBuildContext context, GisketchView view)
	{
		return null;
	}

	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x528F0D0", Offset = "0x528E0D0", VA = "0x528F0D0")]
	private static RectMask2D EnsureRectMask(GameObject go)
	{
		return null;
	}

	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x528F180", Offset = "0x528E180", VA = "0x528F180")]
	private static void SetInteractable(GameObject go, bool interactable)
	{
	}

	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x528F220", Offset = "0x528E220", VA = "0x528F220")]
	private static Transform ChildParent(GameObject go)
	{
		return null;
	}

	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x528F2F0", Offset = "0x528E2F0", VA = "0x528F2F0")]
	private static void BuildChildren(GisketchNodeDefinition node, Transform parent, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x527CB30", Offset = "0x527BB30", VA = "0x527CB30")]
	private static bool EqualsType(string a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x528DCF0", Offset = "0x528CCF0", VA = "0x528DCF0")]
	private static string ScreenLabel(GisketchScreenDefinition screen)
	{
		return null;
	}

	[Token(Token = "0x60005BB")]
	[Address(RVA = "0x528E670", Offset = "0x528D670", VA = "0x528E670")]
	private static string OverlayLabel(GisketchOverlayDefinition overlay)
	{
		return null;
	}

	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x528E890", Offset = "0x528D890", VA = "0x528E890")]
	private static string RootLabel(GameObject root)
	{
		return null;
	}

	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x528F040", Offset = "0x528E040", VA = "0x528F040")]
	private static string NodeLabel(GisketchNodeDefinition node, string type)
	{
		return null;
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x528DD50", Offset = "0x528CD50", VA = "0x528DD50")]
	private static int ChildCount(GisketchNodeDefinition node)
	{
		return default(int);
	}

	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x5283C00", Offset = "0x5282C00", VA = "0x5283C00")]
	private static void MarkEditorPreview(GameObject go)
	{
	}
}
