// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgUi
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000084")]
public sealed class AottgUi
{
	[Token(Token = "0x40002BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly List<GisketchNodeDefinition> _children;

	[Token(Token = "0x40002BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly AottgActionRegistry _actions;

	[Token(Token = "0x40002BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _ownerId;

	[Token(Token = "0x17000088")]
	internal bool HasChildren
	{
		[Token(Token = "0x60003FC")]
		[Address(RVA = "0x18CB2C0", Offset = "0x18C98C0", VA = "0x1818CB2C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x18CAB00", Offset = "0x18C9100", VA = "0x1818CAB00")]
	public GisketchNodeDefinition TextArea(string id, string placeholder, [Optional][DefaultParameterValue("textArea")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter, int maxCharacters = 0)
	{
		return null;
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x18C9ED0", Offset = "0x18C84D0", VA = "0x1818C9ED0")]
	public GisketchNodeDefinition Skeleton(string id, GisketchLayoutDefinition layout, [Optional][DefaultParameterValue("skeleton")] string style, [Optional] string visibleKey, [Optional] GisketchMotionDefinition enter, [Optional] GisketchMotionDefinition exit)
	{
		return null;
	}

	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x18CA320", Offset = "0x18C8920", VA = "0x1818CA320")]
	public GisketchNodeDefinition Slider(string id, float value, [Optional][DefaultParameterValue(false)] bool showValue, [Optional] string actionId, [Optional][DefaultParameterValue("slider")] string style, [Optional][DefaultParameterValue(0f)] float min, [Optional][DefaultParameterValue(1f)] float max, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x18CA110", Offset = "0x18C8710", VA = "0x1818CA110")]
	public GisketchNodeDefinition Slider(string id, float value, bool showValue, Action<GisketchActionContext> action, [Optional][DefaultParameterValue("slider")] string style, [Optional][DefaultParameterValue(0f)] float min, [Optional][DefaultParameterValue(1f)] float max, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x18C7500", Offset = "0x18C5B00", VA = "0x1818C7500")]
	public GisketchNodeDefinition Callout(AottgCalloutVariant variant, string text, [Optional] string id)
	{
		return null;
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x18C7720", Offset = "0x18C5D20", VA = "0x1818C7720")]
	public GisketchNodeDefinition Checkbox(string id, string text, [Optional][DefaultParameterValue(false)] bool value, [Optional] Action<GisketchActionContext> action, [Optional] string icon, [Optional] string tooltip)
	{
		return null;
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x18C9380", Offset = "0x18C7980", VA = "0x1818C9380")]
	public GisketchNodeDefinition Radio(string id, string text, [Optional][DefaultParameterValue(false)] bool value, [Optional] Action<GisketchActionContext> action, [Optional] string icon, [Optional] string tooltip)
	{
		return null;
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x18CAA60", Offset = "0x18C9060", VA = "0x1818CAA60")]
	public GisketchNodeDefinition Switch(string id, [Optional][DefaultParameterValue(false)] bool value, [Optional] Action<GisketchActionContext> action)
	{
		return null;
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x18CAF10", Offset = "0x18C9510", VA = "0x1818CAF10")]
	private GisketchNodeDefinition Toggle(string type, string id, string text, bool value, Action<GisketchActionContext> action, string style, string icon, string tooltip)
	{
		return null;
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x18C8880", Offset = "0x18C6E80", VA = "0x1818C8880")]
	public GisketchNodeDefinition Icon(string icon, [Optional][DefaultParameterValue("icon")] string style, [Optional] string id)
	{
		return null;
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x18C8700", Offset = "0x18C6D00", VA = "0x1818C8700")]
	public GisketchNodeDefinition IconButton(AottgButtonVariant variant, string icon, Action<GisketchActionContext> action, [Optional] string id, [Optional] string tooltip, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x18C9DC0", Offset = "0x18C83C0", VA = "0x1818C9DC0")]
	public GisketchNodeDefinition Separator([Optional] string id, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x18C7AC0", Offset = "0x18C60C0", VA = "0x1818C7AC0")]
	public GisketchNodeDefinition Dropdown(string id, string value, string[] options, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		return null;
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x18C7B80", Offset = "0x18C6180", VA = "0x1818C7B80")]
	public GisketchNodeDefinition Dropdown(string id, string value, string[] options, Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		return null;
	}

	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x18C79C0", Offset = "0x18C5FC0", VA = "0x1818C79C0")]
	public GisketchNodeDefinition Dropdown(string id, string value, GisketchChoiceOptionDefinition[] options, Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		return null;
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x18C9C00", Offset = "0x18C8200", VA = "0x1818C9C00")]
	public GisketchNodeDefinition Select(string id, string value, string[] options, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		return null;
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x18C9B00", Offset = "0x18C8100", VA = "0x1818C9B00")]
	public GisketchNodeDefinition Select(string id, string value, string[] options, Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		return null;
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x18C9CC0", Offset = "0x18C82C0", VA = "0x1818C9CC0")]
	public GisketchNodeDefinition Select(string id, string value, GisketchChoiceOptionDefinition[] options, Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		return null;
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x18C78B0", Offset = "0x18C5EB0", VA = "0x1818C78B0")]
	private static GisketchNodeDefinition Choice(string type, string id, string value, string[] options, GisketchMotionDefinition enter, int maxVisibleItems)
	{
		return null;
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x18C77C0", Offset = "0x18C5DC0", VA = "0x1818C77C0")]
	private static GisketchNodeDefinition Choice(string type, string id, string value, GisketchChoiceOptionDefinition[] options, GisketchMotionDefinition enter, int maxVisibleItems)
	{
		return null;
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x18C6D50", Offset = "0x18C5350", VA = "0x1818C6D50")]
	public GisketchNodeDefinition[] BuildDetached(Action<AottgUi> build, [Optional] string ownerId)
	{
		return null;
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x18C8130", Offset = "0x18C6730", VA = "0x1818C8130")]
	public GisketchNodeDefinition FormInput(string id, string label, string placeholder, [Optional][DefaultParameterValue(0)] AottgInputType type, [Optional][DefaultParameterValue("inputField")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter, [Optional] Action<GisketchActionContext> change, [Optional][DefaultParameterValue(0.2f)] float debounceSeconds, [Optional][DefaultParameterValue(0)] int maxCharacters, [Optional] Action<GisketchActionContext> commit, [Optional] string key)
	{
		return null;
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x18C8540", Offset = "0x18C6B40", VA = "0x1818C8540")]
	public GisketchNodeDefinition FormTextArea(string id, string label, string placeholder, [Optional][DefaultParameterValue("textArea")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter, [Optional][DefaultParameterValue(0)] int maxCharacters, [Optional] string key)
	{
		return null;
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x18C8220", Offset = "0x18C6820", VA = "0x1818C8220")]
	public GisketchNodeDefinition FormSelect(string id, string label, string value, string[] options, [Optional] Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, [Optional][DefaultParameterValue(8)] int maxVisibleItems, [Optional] string key)
	{
		return null;
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x18C8400", Offset = "0x18C6A00", VA = "0x1818C8400")]
	public GisketchNodeDefinition FormSelect(string id, string label, string value, GisketchChoiceOptionDefinition[] options, Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, [Optional][DefaultParameterValue(8)] int maxVisibleItems, [Optional] string key)
	{
		return null;
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x18C7F50", Offset = "0x18C6550", VA = "0x1818C7F50")]
	public GisketchNodeDefinition FormDropdown(string id, string label, string value, string[] options, [Optional] Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, [Optional][DefaultParameterValue(8)] int maxVisibleItems, [Optional] string key)
	{
		return null;
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x18C7E10", Offset = "0x18C6410", VA = "0x1818C7E10")]
	public GisketchNodeDefinition FormDropdown(string id, string label, string value, GisketchChoiceOptionDefinition[] options, Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, [Optional][DefaultParameterValue(8)] int maxVisibleItems, [Optional] string key)
	{
		return null;
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x18C7C80", Offset = "0x18C6280", VA = "0x1818C7C80")]
	public GisketchNodeDefinition FormDraft(string key, string value, [Optional] string label, [Optional] string id)
	{
		return null;
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x18CB0A0", Offset = "0x18C96A0", VA = "0x1818CB0A0")]
	private static GisketchNodeDefinition TrackForm(GisketchNodeDefinition node, string key, string label)
	{
		return null;
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x18C8970", Offset = "0x18C6F70", VA = "0x1818C8970")]
	public GisketchNodeDefinition Image(string sprite, [Optional][DefaultParameterValue("image")] string style, [Optional] string id, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x18CA680", Offset = "0x18C8C80", VA = "0x1818CA680")]
	public GisketchNodeDefinition SpriteButton(string sprite, string label, string actionId, [Optional] string id, [Optional][DefaultParameterValue("spriteButton")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x18CA4F0", Offset = "0x18C8AF0", VA = "0x1818CA4F0")]
	public GisketchNodeDefinition SpriteButton(string sprite, string label, Action<GisketchActionContext> action, [Optional] string id, [Optional][DefaultParameterValue("spriteButton")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x18CAC80", Offset = "0x18C9280", VA = "0x1818CAC80")]
	public GisketchNodeDefinition TextKey(string key, string fallback, [Optional][DefaultParameterValue("text")] string style, [Optional] string id, [Optional] string bindText, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x18C6F10", Offset = "0x18C5510", VA = "0x1818C6F10")]
	public GisketchNodeDefinition ButtonKey(AottgButtonVariant variant, string key, string fallback, string actionId, [Optional] string id, [Optional] string tooltip, [Optional] GisketchMotionDefinition enter, [Optional] string icon)
	{
		return null;
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x18C6E10", Offset = "0x18C5410", VA = "0x1818C6E10")]
	public GisketchNodeDefinition ButtonKey(AottgButtonVariant variant, string key, string fallback, Action<GisketchActionContext> action, [Optional] string id, [Optional] string tooltip, [Optional] GisketchMotionDefinition enter, [Optional] string icon)
	{
		return null;
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x18C8A90", Offset = "0x18C7090", VA = "0x1818C8A90")]
	public GisketchNodeDefinition InputFieldKey(string id, string placeholderKey, string placeholder, [Optional][DefaultParameterValue(0)] AottgInputType type, [Optional][DefaultParameterValue("inputField")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter, [Optional] Action<GisketchActionContext> change, [Optional][DefaultParameterValue(0.2f)] float debounceSeconds, [Optional][DefaultParameterValue(0)] int maxCharacters, [Optional] Action<GisketchActionContext> commit)
	{
		return null;
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x18C71D0", Offset = "0x18C57D0", VA = "0x1818C71D0")]
	public GisketchNodeDefinition CalloutKey(AottgCalloutVariant variant, string key, string fallback, [Optional] string id)
	{
		return null;
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x18C9810", Offset = "0x18C7E10", VA = "0x1818C9810")]
	public static GisketchSearchDefinition SearchKey(string titleKey, string fallbackTitle, [Optional] string keywords, [Optional][DefaultParameterValue(false)] bool hidden, [Optional] string icon, [Optional] string kind, [Optional] string sectionId, [Optional] string sectionTitle, bool autoAddKeywords = false)
	{
		return null;
	}

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x18C98D0", Offset = "0x18C7ED0", VA = "0x1818C98D0")]
	public GisketchNodeDefinition SearchPalette([Optional][DefaultParameterValue("search-palette")] string id, [Optional][DefaultParameterValue("Search current screen")] string placeholder, [Optional] string scopeScreenId, [Optional][DefaultParameterValue(false)] bool showFullPath, [Optional] string[] extraScopeScreenIds)
	{
		return null;
	}

	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x18C9A10", Offset = "0x18C8010", VA = "0x1818C9A10")]
	public static GisketchSearchDefinition Search([Optional] string title, [Optional] string keywords, [Optional][DefaultParameterValue(false)] bool hidden, [Optional] string icon, [Optional] string kind, [Optional] string sectionId, [Optional] string sectionTitle, bool autoAddKeywords = false)
	{
		return null;
	}

	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x18CB220", Offset = "0x18C9820", VA = "0x1818CB220")]
	internal AottgUi(string ownerId, AottgActionRegistry actions)
	{
	}

	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x18CAEC0", Offset = "0x18C94C0", VA = "0x1818CAEC0")]
	internal GisketchNodeDefinition[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x18C6CF0", Offset = "0x18C52F0", VA = "0x1818C6CF0")]
	public GisketchNodeDefinition Add(GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x18C79A0", Offset = "0x18C5FA0", VA = "0x1818C79A0")]
	public void Component(AottgComponent component)
	{
	}

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x18C90A0", Offset = "0x18C76A0", VA = "0x1818C90A0")]
	public GisketchNodeDefinition Panel(string style, [Optional] Action<AottgUi> build, [Optional] string id, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x6000401")]
	[Address(RVA = "0x18CAD40", Offset = "0x18C9340", VA = "0x1818CAD40")]
	public GisketchNodeDefinition Text(string text, [Optional][DefaultParameterValue("text")] string style, [Optional] string id, [Optional] string bindText, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x18C7060", Offset = "0x18C5660", VA = "0x1818C7060")]
	public GisketchNodeDefinition Button(AottgButtonVariant variant, string text, string actionId, [Optional] string id, [Optional] string tooltip, [Optional] GisketchMotionDefinition enter, [Optional] string icon)
	{
		return null;
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x18C6FE0", Offset = "0x18C55E0", VA = "0x1818C6FE0")]
	public GisketchNodeDefinition Button(AottgButtonVariant variant, string text, Action<GisketchActionContext> action, [Optional] string id, [Optional] string tooltip, [Optional] GisketchMotionDefinition enter, [Optional] string icon)
	{
		return null;
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x18C8B90", Offset = "0x18C7190", VA = "0x1818C8B90")]
	public GisketchNodeDefinition InputField(string id, string placeholder, [Optional][DefaultParameterValue(0)] AottgInputType type, [Optional][DefaultParameterValue("inputField")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter, [Optional] Action<GisketchActionContext> change, [Optional][DefaultParameterValue(0.2f)] float debounceSeconds, [Optional][DefaultParameterValue(0)] int maxCharacters, [Optional] Action<GisketchActionContext> commit)
	{
		return null;
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x18C9630", Offset = "0x18C7C30", VA = "0x1818C9630")]
	public GisketchNodeDefinition ScrollView(string style, [Optional] Action<AottgUi> build, [Optional] string id, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchLayoutDefinition contentLayout, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x18C9420", Offset = "0x18C7A20", VA = "0x1818C9420")]
	public GisketchNodeDefinition ScaleBox(string style, float referenceWidth, float referenceHeight, [Optional] Action<AottgUi> build, [Optional] string id, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchLayoutDefinition contentLayout, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x18CA7E0", Offset = "0x18C8DE0", VA = "0x1818CA7E0")]
	public GisketchNodeDefinition Stepper(string style, params AottgStepperStep[] steps)
	{
		return null;
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x18C8DF0", Offset = "0x18C73F0", VA = "0x1818C8DF0")]
	public static GisketchLayoutDefinition Layout([Optional][DefaultParameterValue("Column")] string direction, [Optional] string justify, [Optional] string alignItems, [Optional] string alignSelf, [Optional] string wrap, [Optional][DefaultParameterValue(0f)] float gap, [Optional] GisketchLength width, [Optional] GisketchLength height, [Optional] GisketchLength minWidth, [Optional] GisketchLength minHeight, [Optional] GisketchLength maxWidth, [Optional] GisketchLength maxHeight, float padding = 0f, float paddingX = 0f, float paddingY = 0f, float paddingLeft = 0f, float paddingRight = 0f, float paddingTop = 0f, float paddingBottom = 0f, float offsetX = 0f, float offsetY = 0f, float grow = 0f, float shrink = 1f)
	{
		return null;
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x18C8FE0", Offset = "0x18C75E0", VA = "0x1818C8FE0")]
	public static GisketchMotionDefinition Motion(string preset, [Optional] string group, float duration = 0f, float delay = 0f, float stagger = 0f, int order = 0)
	{
		return null;
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x18C92F0", Offset = "0x18C78F0", VA = "0x1818C92F0")]
	public static GisketchLength Points(float value)
	{
		return null;
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x18C9260", Offset = "0x18C7860", VA = "0x1818C9260")]
	public static GisketchLength Percent(float value)
	{
		return null;
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x18CB100", Offset = "0x18C9700", VA = "0x1818CB100")]
	private static string VariantStyle(AottgButtonVariant variant)
	{
		return null;
	}
}
