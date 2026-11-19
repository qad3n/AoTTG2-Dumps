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

[Token(Token = "0x200008A")]
public sealed class AottgUi
{
	[Token(Token = "0x40002DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly List<GisketchNodeDefinition> _children;

	[Token(Token = "0x40002E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly AottgActionRegistry _actions;

	[Token(Token = "0x40002E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _ownerId;

	[Token(Token = "0x17000088")]
	internal bool HasChildren
	{
		[Token(Token = "0x6000448")]
		[Address(RVA = "0x526A640", Offset = "0x5269640", VA = "0x526A640")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x5267D40", Offset = "0x5266D40", VA = "0x5267D40")]
	public GisketchNodeDefinition TextArea(string id, string placeholder, [Optional][DefaultParameterValue("textArea")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter, int maxCharacters = 0)
	{
		return null;
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x5267EA0", Offset = "0x5266EA0", VA = "0x5267EA0")]
	public GisketchNodeDefinition Skeleton(string id, GisketchLayoutDefinition layout, [Optional][DefaultParameterValue("skeleton")] string style, [Optional] string visibleKey, [Optional] GisketchMotionDefinition enter, [Optional] GisketchMotionDefinition exit)
	{
		return null;
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x52681A0", Offset = "0x52671A0", VA = "0x52681A0")]
	public GisketchNodeDefinition Slider(string id, float value, [Optional][DefaultParameterValue(false)] bool showValue, [Optional] string actionId, [Optional][DefaultParameterValue("slider")] string style, [Optional][DefaultParameterValue(0f)] float min, [Optional][DefaultParameterValue(1f)] float max, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x5268360", Offset = "0x5267360", VA = "0x5268360")]
	public GisketchNodeDefinition Slider(string id, float value, bool showValue, Action<GisketchActionContext> action, [Optional][DefaultParameterValue("slider")] string style, [Optional][DefaultParameterValue(0f)] float min, [Optional][DefaultParameterValue(1f)] float max, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x5268400", Offset = "0x5267400", VA = "0x5268400")]
	public GisketchNodeDefinition Callout(AottgCalloutVariant variant, string text, [Optional] string id)
	{
		return null;
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x5268650", Offset = "0x5267650", VA = "0x5268650")]
	public GisketchNodeDefinition Checkbox(string id, string text, [Optional][DefaultParameterValue(false)] bool value, [Optional] Action<GisketchActionContext> action, [Optional] string icon, [Optional] string tooltip)
	{
		return null;
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x5268880", Offset = "0x5267880", VA = "0x5268880")]
	public GisketchNodeDefinition Radio(string id, string text, [Optional][DefaultParameterValue(false)] bool value, [Optional] Action<GisketchActionContext> action, [Optional] string icon, [Optional] string tooltip)
	{
		return null;
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x5268910", Offset = "0x5267910", VA = "0x5268910")]
	public GisketchNodeDefinition Switch(string id, [Optional][DefaultParameterValue(false)] bool value, [Optional] Action<GisketchActionContext> action)
	{
		return null;
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x52686E0", Offset = "0x52676E0", VA = "0x52686E0")]
	private GisketchNodeDefinition Toggle(string type, string id, string text, bool value, Action<GisketchActionContext> action, string style, string icon, string tooltip)
	{
		return null;
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x52689B0", Offset = "0x52679B0", VA = "0x52689B0")]
	public GisketchNodeDefinition Icon(string icon, [Optional][DefaultParameterValue("icon")] string style, [Optional] string id)
	{
		return null;
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x5268A80", Offset = "0x5267A80", VA = "0x5268A80")]
	public GisketchNodeDefinition IconButton(AottgButtonVariant variant, string icon, Action<GisketchActionContext> action, [Optional] string id, [Optional] string tooltip, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x5268C90", Offset = "0x5267C90", VA = "0x5268C90")]
	public GisketchNodeDefinition Separator([Optional] string id, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x5268D70", Offset = "0x5267D70", VA = "0x5268D70")]
	public GisketchNodeDefinition Dropdown(string id, string value, string[] options, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		return null;
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x5268EE0", Offset = "0x5267EE0", VA = "0x5268EE0")]
	public GisketchNodeDefinition Dropdown(string id, string value, string[] options, Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		return null;
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x5268FB0", Offset = "0x5267FB0", VA = "0x5268FB0")]
	public GisketchNodeDefinition Dropdown(string id, string value, GisketchChoiceOptionDefinition[] options, Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		return null;
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x5269180", Offset = "0x5268180", VA = "0x5269180")]
	public GisketchNodeDefinition Select(string id, string value, string[] options, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		return null;
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x52691F0", Offset = "0x52681F0", VA = "0x52691F0")]
	public GisketchNodeDefinition Select(string id, string value, string[] options, Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		return null;
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x52692C0", Offset = "0x52682C0", VA = "0x52692C0")]
	public GisketchNodeDefinition Select(string id, string value, GisketchChoiceOptionDefinition[] options, Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		return null;
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x5268DE0", Offset = "0x5267DE0", VA = "0x5268DE0")]
	private static GisketchNodeDefinition Choice(string type, string id, string value, string[] options, GisketchMotionDefinition enter, int maxVisibleItems)
	{
		return null;
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x5269080", Offset = "0x5268080", VA = "0x5269080")]
	private static GisketchNodeDefinition Choice(string type, string id, string value, GisketchChoiceOptionDefinition[] options, GisketchMotionDefinition enter, int maxVisibleItems)
	{
		return null;
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x5269390", Offset = "0x5268390", VA = "0x5269390")]
	public GisketchNodeDefinition[] BuildDetached(Action<AottgUi> build, [Optional] string ownerId)
	{
		return null;
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x5269450", Offset = "0x5268450", VA = "0x5269450")]
	public GisketchNodeDefinition FormInput(string id, string label, string placeholder, [Optional][DefaultParameterValue(0)] AottgInputType type, [Optional][DefaultParameterValue("inputField")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter, [Optional] Action<GisketchActionContext> change, [Optional][DefaultParameterValue(0.2f)] float debounceSeconds, [Optional][DefaultParameterValue(0)] int maxCharacters, [Optional] Action<GisketchActionContext> commit, [Optional] string key)
	{
		return null;
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x5269790", Offset = "0x5268790", VA = "0x5269790")]
	public GisketchNodeDefinition FormTextArea(string id, string label, string placeholder, [Optional][DefaultParameterValue("textArea")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter, [Optional][DefaultParameterValue(0)] int maxCharacters, [Optional] string key)
	{
		return null;
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x5269810", Offset = "0x5268810", VA = "0x5269810")]
	public GisketchNodeDefinition FormSelect(string id, string label, string value, string[] options, [Optional] Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, [Optional][DefaultParameterValue(8)] int maxVisibleItems, [Optional] string key)
	{
		return null;
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x5269900", Offset = "0x5268900", VA = "0x5269900")]
	public GisketchNodeDefinition FormSelect(string id, string label, string value, GisketchChoiceOptionDefinition[] options, Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, [Optional][DefaultParameterValue(8)] int maxVisibleItems, [Optional] string key)
	{
		return null;
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x5269980", Offset = "0x5268980", VA = "0x5269980")]
	public GisketchNodeDefinition FormDropdown(string id, string label, string value, string[] options, [Optional] Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, [Optional][DefaultParameterValue(8)] int maxVisibleItems, [Optional] string key)
	{
		return null;
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x5269A70", Offset = "0x5268A70", VA = "0x5269A70")]
	public GisketchNodeDefinition FormDropdown(string id, string label, string value, GisketchChoiceOptionDefinition[] options, Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, [Optional][DefaultParameterValue(8)] int maxVisibleItems, [Optional] string key)
	{
		return null;
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x5269AF0", Offset = "0x5268AF0", VA = "0x5269AF0")]
	public GisketchNodeDefinition FormDraft(string key, string value, [Optional] string label, [Optional] string id)
	{
		return null;
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x5269740", Offset = "0x5268740", VA = "0x5269740")]
	private static GisketchNodeDefinition TrackForm(GisketchNodeDefinition node, string key, string label)
	{
		return null;
	}

	[Token(Token = "0x600043C")]
	[Address(RVA = "0x5269C40", Offset = "0x5268C40", VA = "0x5269C40")]
	public GisketchNodeDefinition Image(string sprite, [Optional][DefaultParameterValue("image")] string style, [Optional] string id, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x600043D")]
	[Address(RVA = "0x5269D40", Offset = "0x5268D40", VA = "0x5269D40")]
	public GisketchNodeDefinition SpriteButton(string sprite, string label, string actionId, [Optional] string id, [Optional][DefaultParameterValue("spriteButton")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x5269EA0", Offset = "0x5268EA0", VA = "0x5269EA0")]
	public GisketchNodeDefinition SpriteButton(string sprite, string label, Action<GisketchActionContext> action, [Optional] string id, [Optional][DefaultParameterValue("spriteButton")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x5269F30", Offset = "0x5268F30", VA = "0x5269F30")]
	public GisketchNodeDefinition TextKey(string key, [Optional][DefaultParameterValue("text")] string style, [Optional] string id, [Optional] string bindText, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x526A120", Offset = "0x5269120", VA = "0x526A120")]
	public GisketchNodeDefinition ButtonKey(AottgButtonVariant variant, string key, string actionId, [Optional] string id, [Optional] string tooltip, [Optional] GisketchMotionDefinition enter, [Optional] string icon)
	{
		return null;
	}

	[Token(Token = "0x6000441")]
	[Address(RVA = "0x526A1D0", Offset = "0x52691D0", VA = "0x526A1D0")]
	public GisketchNodeDefinition ButtonKey(AottgButtonVariant variant, string key, Action<GisketchActionContext> action, [Optional] string id, [Optional] string tooltip, [Optional] GisketchMotionDefinition enter, [Optional] string icon)
	{
		return null;
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x526A2C0", Offset = "0x52692C0", VA = "0x526A2C0")]
	public GisketchNodeDefinition InputFieldKey(string id, string placeholderKey, [Optional][DefaultParameterValue(0)] AottgInputType type, [Optional][DefaultParameterValue("inputField")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter, [Optional] Action<GisketchActionContext> change, [Optional][DefaultParameterValue(0.2f)] float debounceSeconds, [Optional][DefaultParameterValue(0)] int maxCharacters, [Optional] Action<GisketchActionContext> commit)
	{
		return null;
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x526A3A0", Offset = "0x52693A0", VA = "0x526A3A0")]
	public GisketchNodeDefinition CalloutKey(AottgCalloutVariant variant, string key, [Optional] string id)
	{
		return null;
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x526A4C0", Offset = "0x52694C0", VA = "0x526A4C0")]
	public static GisketchSearchDefinition SearchKey(string titleKey, [Optional] string keywords, [Optional][DefaultParameterValue(false)] bool hidden, [Optional] string icon, [Optional] string kind, [Optional] string sectionId, [Optional] string sectionTitle, bool autoAddKeywords = false)
	{
		return null;
	}

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x5267A30", Offset = "0x5266A30", VA = "0x5267A30")]
	public GisketchNodeDefinition SearchPalette([Optional][DefaultParameterValue("search-palette")] string id, [Optional][DefaultParameterValue("Search current screen")] string placeholder, [Optional] string scopeScreenId, [Optional][DefaultParameterValue(false)] bool showFullPath, [Optional] string[] extraScopeScreenIds)
	{
		return null;
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x526A550", Offset = "0x5269550", VA = "0x526A550")]
	public static GisketchSearchDefinition Search([Optional] string title, [Optional] string keywords, [Optional][DefaultParameterValue(false)] bool hidden, [Optional] string icon, [Optional] string kind, [Optional] string sectionId, [Optional] string sectionTitle, bool autoAddKeywords = false)
	{
		return null;
	}

	[Token(Token = "0x6000447")]
	[Address(RVA = "0x5267190", Offset = "0x5266190", VA = "0x5267190")]
	internal AottgUi(string ownerId, AottgActionRegistry actions)
	{
	}

	[Token(Token = "0x6000449")]
	[Address(RVA = "0x5267240", Offset = "0x5266240", VA = "0x5267240")]
	internal GisketchNodeDefinition[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x600044A")]
	[Address(RVA = "0x5266D10", Offset = "0x5265D10", VA = "0x5266D10")]
	public GisketchNodeDefinition Add(GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x526A680", Offset = "0x5269680", VA = "0x526A680")]
	public void Component(AottgComponent component)
	{
	}

	[Token(Token = "0x600044C")]
	[Address(RVA = "0x52665E0", Offset = "0x52655E0", VA = "0x52665E0")]
	public GisketchNodeDefinition Panel(string style, [Optional] Action<AottgUi> build, [Optional] string id, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x600044D")]
	[Address(RVA = "0x5269FC0", Offset = "0x5268FC0", VA = "0x5269FC0")]
	public GisketchNodeDefinition Text(string text, [Optional][DefaultParameterValue("text")] string style, [Optional] string id, [Optional] string bindText, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x600044E")]
	[Address(RVA = "0x5265610", Offset = "0x5264610", VA = "0x5265610")]
	public GisketchNodeDefinition Button(AottgButtonVariant variant, string text, string actionId, [Optional] string id, [Optional] string tooltip, [Optional] GisketchMotionDefinition enter, [Optional] string icon)
	{
		return null;
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x5265860", Offset = "0x5264860", VA = "0x5265860")]
	public GisketchNodeDefinition Button(AottgButtonVariant variant, string text, Action<GisketchActionContext> action, [Optional] string id, [Optional] string tooltip, [Optional] GisketchMotionDefinition enter, [Optional] string icon)
	{
		return null;
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x52694F0", Offset = "0x52684F0", VA = "0x52694F0")]
	public GisketchNodeDefinition InputField(string id, string placeholder, [Optional][DefaultParameterValue(0)] AottgInputType type, [Optional][DefaultParameterValue("inputField")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter, [Optional] Action<GisketchActionContext> change, [Optional][DefaultParameterValue(0.2f)] float debounceSeconds, [Optional][DefaultParameterValue(0)] int maxCharacters, [Optional] Action<GisketchActionContext> commit)
	{
		return null;
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x526A6B0", Offset = "0x52696B0", VA = "0x526A6B0")]
	public GisketchNodeDefinition ScrollView(string style, [Optional] Action<AottgUi> build, [Optional] string id, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchLayoutDefinition contentLayout, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x526A880", Offset = "0x5269880", VA = "0x526A880")]
	public GisketchNodeDefinition ScaleBox(string style, float referenceWidth, float referenceHeight, [Optional] Action<AottgUi> build, [Optional] string id, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchLayoutDefinition contentLayout, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x526AA70", Offset = "0x5269A70", VA = "0x526AA70")]
	public GisketchNodeDefinition Stepper(string style, params AottgStepperStep[] steps)
	{
		return null;
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x52663C0", Offset = "0x52653C0", VA = "0x52663C0")]
	public static GisketchLayoutDefinition Layout([Optional][DefaultParameterValue("Column")] string direction, [Optional] string justify, [Optional] string alignItems, [Optional] string alignSelf, [Optional] string wrap, [Optional][DefaultParameterValue(0f)] float gap, [Optional] GisketchLength width, [Optional] GisketchLength height, [Optional] GisketchLength minWidth, [Optional] GisketchLength minHeight, [Optional] GisketchLength maxWidth, [Optional] GisketchLength maxHeight, float padding = 0f, float paddingX = 0f, float paddingY = 0f, float paddingLeft = 0f, float paddingRight = 0f, float paddingTop = 0f, float paddingBottom = 0f, float offsetX = 0f, float offsetY = 0f, float grow = 0f, float shrink = 1f)
	{
		return null;
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x52680E0", Offset = "0x52670E0", VA = "0x52680E0")]
	public static GisketchMotionDefinition Motion(string preset, [Optional] string group, float duration = 0f, float delay = 0f, float stagger = 0f, int order = 0)
	{
		return null;
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x5266F00", Offset = "0x5265F00", VA = "0x5266F00")]
	public static GisketchLength Points(float value)
	{
		return null;
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x5266330", Offset = "0x5265330", VA = "0x5266330")]
	public static GisketchLength Percent(float value)
	{
		return null;
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x5268BF0", Offset = "0x5267BF0", VA = "0x5268BF0")]
	private static string VariantStyle(AottgButtonVariant variant)
	{
		return null;
	}
}
