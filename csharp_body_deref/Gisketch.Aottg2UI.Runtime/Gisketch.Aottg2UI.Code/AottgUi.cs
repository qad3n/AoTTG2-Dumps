// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgUi
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000070")]
public sealed class AottgUi
{
	[Token(Token = "0x4000241")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly List<GisketchNodeDefinition> _children;

	[Token(Token = "0x4000242")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly AottgActionRegistry _actions;

	[Token(Token = "0x4000243")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _ownerId;

	[Token(Token = "0x17000064")]
	internal bool HasChildren
	{
		[Token(Token = "0x6000302")]
		[Address(RVA = "0x3A5F490", Offset = "0x3A5F490", VA = "0x3A5F490")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x3A61780", Offset = "0x3A61780", VA = "0x3A61780")]
	public GisketchNodeDefinition TextArea(string id, string placeholder, [Optional][DefaultParameterValue("textArea")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter, int maxCharacters = 0)
	{
		return null;
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x3A618E0", Offset = "0x3A618E0", VA = "0x3A618E0")]
	public GisketchNodeDefinition Skeleton(string id, GisketchLayoutDefinition layout, [Optional][DefaultParameterValue("skeleton")] string style, [Optional] string visibleKey, [Optional] GisketchMotionDefinition enter, [Optional] GisketchMotionDefinition exit)
	{
		return null;
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x3A61BD0", Offset = "0x3A61BD0", VA = "0x3A61BD0")]
	public GisketchNodeDefinition Slider(string id, float value, [Optional][DefaultParameterValue(false)] bool showValue, [Optional] string actionId, [Optional][DefaultParameterValue("slider")] string style, [Optional][DefaultParameterValue(0f)] float min, [Optional][DefaultParameterValue(1f)] float max, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x3A61D90", Offset = "0x3A61D90", VA = "0x3A61D90")]
	public GisketchNodeDefinition Slider(string id, float value, bool showValue, Action<GisketchActionContext> action, [Optional][DefaultParameterValue("slider")] string style, [Optional][DefaultParameterValue(0f)] float min, [Optional][DefaultParameterValue(1f)] float max, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x3A61E30", Offset = "0x3A61E30", VA = "0x3A61E30")]
	public GisketchNodeDefinition Callout(AottgCalloutVariant variant, string text, [Optional] string id)
	{
		return null;
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x3A62090", Offset = "0x3A62090", VA = "0x3A62090")]
	public GisketchNodeDefinition Checkbox(string id, string text, [Optional][DefaultParameterValue(false)] bool value, [Optional] Action<GisketchActionContext> action, [Optional] string icon, [Optional] string tooltip)
	{
		return null;
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x3A622C0", Offset = "0x3A622C0", VA = "0x3A622C0")]
	public GisketchNodeDefinition Radio(string id, string text, [Optional][DefaultParameterValue(false)] bool value, [Optional] Action<GisketchActionContext> action, [Optional] string icon, [Optional] string tooltip)
	{
		return null;
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x3A62350", Offset = "0x3A62350", VA = "0x3A62350")]
	public GisketchNodeDefinition Switch(string id, [Optional][DefaultParameterValue(false)] bool value, [Optional] Action<GisketchActionContext> action)
	{
		return null;
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x3A62120", Offset = "0x3A62120", VA = "0x3A62120")]
	private GisketchNodeDefinition Toggle(string type, string id, string text, bool value, Action<GisketchActionContext> action, string style, string icon, string tooltip)
	{
		return null;
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x3A623F0", Offset = "0x3A623F0", VA = "0x3A623F0")]
	public GisketchNodeDefinition Icon(string icon, [Optional][DefaultParameterValue("icon")] string style, [Optional] string id)
	{
		return null;
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x3A624C0", Offset = "0x3A624C0", VA = "0x3A624C0")]
	public GisketchNodeDefinition IconButton(AottgButtonVariant variant, string icon, Action<GisketchActionContext> action, [Optional] string id, [Optional] string tooltip, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x3A626C0", Offset = "0x3A626C0", VA = "0x3A626C0")]
	public GisketchNodeDefinition Separator([Optional] string id, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x3A627A0", Offset = "0x3A627A0", VA = "0x3A627A0")]
	public GisketchNodeDefinition Dropdown(string id, string value, string[] options, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		return null;
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x3A62910", Offset = "0x3A62910", VA = "0x3A62910")]
	public GisketchNodeDefinition Dropdown(string id, string value, string[] options, Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		return null;
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x3A629E0", Offset = "0x3A629E0", VA = "0x3A629E0")]
	public GisketchNodeDefinition Dropdown(string id, string value, GisketchChoiceOptionDefinition[] options, Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		return null;
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x3A62BB0", Offset = "0x3A62BB0", VA = "0x3A62BB0")]
	public GisketchNodeDefinition Select(string id, string value, string[] options, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		return null;
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x3A62C20", Offset = "0x3A62C20", VA = "0x3A62C20")]
	public GisketchNodeDefinition Select(string id, string value, string[] options, Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		return null;
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x3A62CF0", Offset = "0x3A62CF0", VA = "0x3A62CF0")]
	public GisketchNodeDefinition Select(string id, string value, GisketchChoiceOptionDefinition[] options, Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		return null;
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x3A62810", Offset = "0x3A62810", VA = "0x3A62810")]
	private static GisketchNodeDefinition Choice(string type, string id, string value, string[] options, GisketchMotionDefinition enter, int maxVisibleItems)
	{
		return null;
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x3A62AB0", Offset = "0x3A62AB0", VA = "0x3A62AB0")]
	private static GisketchNodeDefinition Choice(string type, string id, string value, GisketchChoiceOptionDefinition[] options, GisketchMotionDefinition enter, int maxVisibleItems)
	{
		return null;
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x3A5F3E0", Offset = "0x3A5F3E0", VA = "0x3A5F3E0")]
	internal AottgUi(string ownerId, AottgActionRegistry actions)
	{
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x3A5F4D0", Offset = "0x3A5F4D0", VA = "0x3A5F4D0")]
	internal GisketchNodeDefinition[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x3A60A60", Offset = "0x3A60A60", VA = "0x3A60A60")]
	public GisketchNodeDefinition Add(GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x3A5E930", Offset = "0x3A5E930", VA = "0x3A5E930")]
	public void Component(AottgComponent component)
	{
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x3A602C0", Offset = "0x3A602C0", VA = "0x3A602C0")]
	public GisketchNodeDefinition Panel(string style, [Optional] Action<AottgUi> build, [Optional] string id, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x3A62DC0", Offset = "0x3A62DC0", VA = "0x3A62DC0")]
	public GisketchNodeDefinition Text(string text, [Optional][DefaultParameterValue("text")] string style, [Optional] string id, [Optional] string bindText, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x3A5FB60", Offset = "0x3A5FB60", VA = "0x3A5FB60")]
	public GisketchNodeDefinition Button(AottgButtonVariant variant, string text, string actionId, [Optional] string id, [Optional] string tooltip, [Optional] GisketchMotionDefinition enter, [Optional] string icon)
	{
		return null;
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x3A5FD20", Offset = "0x3A5FD20", VA = "0x3A5FD20")]
	public GisketchNodeDefinition Button(AottgButtonVariant variant, string text, Action<GisketchActionContext> action, [Optional] string id, [Optional] string tooltip, [Optional] GisketchMotionDefinition enter, [Optional] string icon)
	{
		return null;
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x3A62F20", Offset = "0x3A62F20", VA = "0x3A62F20")]
	public GisketchNodeDefinition InputField(string id, string placeholder, [Optional][DefaultParameterValue(0)] AottgInputType type, [Optional][DefaultParameterValue("inputField")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter, [Optional] Action<GisketchActionContext> change, float debounceSeconds = 0.2f, int maxCharacters = 0)
	{
		return null;
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x3A63120", Offset = "0x3A63120", VA = "0x3A63120")]
	public GisketchNodeDefinition ScrollView(string style, [Optional] Action<AottgUi> build, [Optional] string id, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchLayoutDefinition contentLayout, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x3A632F0", Offset = "0x3A632F0", VA = "0x3A632F0")]
	public GisketchNodeDefinition ScaleBox(string style, float referenceWidth, float referenceHeight, [Optional] Action<AottgUi> build, [Optional] string id, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchLayoutDefinition contentLayout, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x3A634E0", Offset = "0x3A634E0", VA = "0x3A634E0")]
	public GisketchNodeDefinition Stepper(string style, params AottgStepperStep[] steps)
	{
		return null;
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x3A5E280", Offset = "0x3A5E280", VA = "0x3A5E280")]
	public static GisketchLayoutDefinition Layout([Optional][DefaultParameterValue("Column")] string direction, [Optional] string justify, [Optional] string alignItems, [Optional] string alignSelf, [Optional] string wrap, [Optional][DefaultParameterValue(0f)] float gap, [Optional] GisketchLength width, [Optional] GisketchLength height, [Optional] GisketchLength minWidth, [Optional] GisketchLength minHeight, [Optional] GisketchLength maxWidth, [Optional] GisketchLength maxHeight, float padding = 0f, float paddingX = 0f, float paddingY = 0f, float paddingLeft = 0f, float paddingRight = 0f, float paddingTop = 0f, float paddingBottom = 0f, float offsetX = 0f, float offsetY = 0f, float grow = 0f, float shrink = 1f)
	{
		return null;
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x3A61B10", Offset = "0x3A61B10", VA = "0x3A61B10")]
	public static GisketchMotionDefinition Motion(string preset, [Optional] string group, float duration = 0f, float delay = 0f, float stagger = 0f, int order = 0)
	{
		return null;
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x3A5E1F0", Offset = "0x3A5E1F0", VA = "0x3A5E1F0")]
	public static GisketchLength Points(float value)
	{
		return null;
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x3A5FA80", Offset = "0x3A5FA80", VA = "0x3A5FA80")]
	public static GisketchLength Percent(float value)
	{
		return null;
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x3A62630", Offset = "0x3A62630", VA = "0x3A62630")]
	private static string VariantStyle(AottgButtonVariant variant)
	{
		return null;
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x3A63740", Offset = "0x3A63740", VA = "0x3A63740")]
	public GisketchNodeDefinition[] BuildDetached(Action<AottgUi> build, [Optional] string ownerId)
	{
		return null;
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x3A63800", Offset = "0x3A63800", VA = "0x3A63800")]
	public GisketchNodeDefinition Image(string sprite, [Optional][DefaultParameterValue("image")] string style, [Optional] string id, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x3A63900", Offset = "0x3A63900", VA = "0x3A63900")]
	public GisketchNodeDefinition SpriteButton(string sprite, string label, string actionId, [Optional] string id, [Optional][DefaultParameterValue("spriteButton")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x3A63A60", Offset = "0x3A63A60", VA = "0x3A63A60")]
	public GisketchNodeDefinition SpriteButton(string sprite, string label, Action<GisketchActionContext> action, [Optional] string id, [Optional][DefaultParameterValue("spriteButton")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x3A614B0", Offset = "0x3A614B0", VA = "0x3A614B0")]
	public GisketchNodeDefinition SearchPalette(string id = "search-palette", string placeholder = "Search current screen")
	{
		return null;
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x3A63AE0", Offset = "0x3A63AE0", VA = "0x3A63AE0")]
	public static GisketchSearchDefinition Search([Optional] string title, [Optional] string keywords, [Optional][DefaultParameterValue(false)] bool hidden, [Optional] string icon, [Optional] string kind, [Optional] string sectionId, [Optional] string sectionTitle, bool autoAddKeywords = false)
	{
		return null;
	}
}
