using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x200006E")]
public sealed class AottgUi
{
	[Token(Token = "0x4000239")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly List<GisketchNodeDefinition> _children;

	[Token(Token = "0x400023A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly AottgActionRegistry _actions;

	[Token(Token = "0x400023B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _ownerId;

	[Token(Token = "0x17000062")]
	internal bool HasChildren
	{
		[Token(Token = "0x60002F8")]
		[Address(RVA = "0x39F8090", Offset = "0x39F8090", VA = "0x39F8090")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x39F65C0", Offset = "0x39F65C0", VA = "0x39F65C0")]
	public GisketchNodeDefinition TextArea(string id, string placeholder, [Optional][DefaultParameterValue("textArea")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter, int maxCharacters = 0)
	{
		return null;
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x39F6720", Offset = "0x39F6720", VA = "0x39F6720")]
	public GisketchNodeDefinition Skeleton(string id, GisketchLayoutDefinition layout, [Optional][DefaultParameterValue("skeleton")] string style, [Optional] string visibleKey, [Optional] GisketchMotionDefinition enter, [Optional] GisketchMotionDefinition exit)
	{
		return null;
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x39F6A10", Offset = "0x39F6A10", VA = "0x39F6A10")]
	public GisketchNodeDefinition Slider(string id, float value, [Optional][DefaultParameterValue(false)] bool showValue, [Optional] string actionId, [Optional][DefaultParameterValue("slider")] string style, [Optional][DefaultParameterValue(0f)] float min, [Optional][DefaultParameterValue(1f)] float max, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x39F6BD0", Offset = "0x39F6BD0", VA = "0x39F6BD0")]
	public GisketchNodeDefinition Slider(string id, float value, bool showValue, Action<GisketchActionContext> action, [Optional][DefaultParameterValue("slider")] string style, [Optional][DefaultParameterValue(0f)] float min, [Optional][DefaultParameterValue(1f)] float max, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x39F6C70", Offset = "0x39F6C70", VA = "0x39F6C70")]
	public GisketchNodeDefinition Callout(AottgCalloutVariant variant, string text, [Optional] string id)
	{
		return null;
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x39F6ED0", Offset = "0x39F6ED0", VA = "0x39F6ED0")]
	public GisketchNodeDefinition Checkbox(string id, string text, [Optional][DefaultParameterValue(false)] bool value, [Optional] Action<GisketchActionContext> action, [Optional] string icon, [Optional] string tooltip)
	{
		return null;
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x39F7100", Offset = "0x39F7100", VA = "0x39F7100")]
	public GisketchNodeDefinition Radio(string id, string text, [Optional][DefaultParameterValue(false)] bool value, [Optional] Action<GisketchActionContext> action, [Optional] string icon, [Optional] string tooltip)
	{
		return null;
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x39F7190", Offset = "0x39F7190", VA = "0x39F7190")]
	public GisketchNodeDefinition Switch(string id, [Optional][DefaultParameterValue(false)] bool value, [Optional] Action<GisketchActionContext> action)
	{
		return null;
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x39F6F60", Offset = "0x39F6F60", VA = "0x39F6F60")]
	private GisketchNodeDefinition Toggle(string type, string id, string text, bool value, Action<GisketchActionContext> action, string style, string icon, string tooltip)
	{
		return null;
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x39F7230", Offset = "0x39F7230", VA = "0x39F7230")]
	public GisketchNodeDefinition Icon(string icon, [Optional][DefaultParameterValue("icon")] string style, [Optional] string id)
	{
		return null;
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x39F7300", Offset = "0x39F7300", VA = "0x39F7300")]
	public GisketchNodeDefinition IconButton(AottgButtonVariant variant, string icon, Action<GisketchActionContext> action, [Optional] string id, [Optional] string tooltip, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x39F7500", Offset = "0x39F7500", VA = "0x39F7500")]
	public GisketchNodeDefinition Separator([Optional] string id, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x39F75E0", Offset = "0x39F75E0", VA = "0x39F75E0")]
	public GisketchNodeDefinition Dropdown(string id, string value, string[] options, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		return null;
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x39F7750", Offset = "0x39F7750", VA = "0x39F7750")]
	public GisketchNodeDefinition Dropdown(string id, string value, string[] options, Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		return null;
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x39F7820", Offset = "0x39F7820", VA = "0x39F7820")]
	public GisketchNodeDefinition Dropdown(string id, string value, GisketchChoiceOptionDefinition[] options, Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		return null;
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x39F79F0", Offset = "0x39F79F0", VA = "0x39F79F0")]
	public GisketchNodeDefinition Select(string id, string value, string[] options, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		return null;
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x39F7A60", Offset = "0x39F7A60", VA = "0x39F7A60")]
	public GisketchNodeDefinition Select(string id, string value, string[] options, Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		return null;
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x39F7B30", Offset = "0x39F7B30", VA = "0x39F7B30")]
	public GisketchNodeDefinition Select(string id, string value, GisketchChoiceOptionDefinition[] options, Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		return null;
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x39F7650", Offset = "0x39F7650", VA = "0x39F7650")]
	private static GisketchNodeDefinition Choice(string type, string id, string value, string[] options, GisketchMotionDefinition enter, int maxVisibleItems)
	{
		return null;
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x39F78F0", Offset = "0x39F78F0", VA = "0x39F78F0")]
	private static GisketchNodeDefinition Choice(string type, string id, string value, GisketchChoiceOptionDefinition[] options, GisketchMotionDefinition enter, int maxVisibleItems)
	{
		return null;
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x39F7C00", Offset = "0x39F7C00", VA = "0x39F7C00")]
	public GisketchNodeDefinition[] BuildDetached(Action<AottgUi> build, [Optional] string ownerId)
	{
		return null;
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x39F7CC0", Offset = "0x39F7CC0", VA = "0x39F7CC0")]
	public GisketchNodeDefinition Image(string sprite, [Optional][DefaultParameterValue("image")] string style, [Optional] string id, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x39F7DC0", Offset = "0x39F7DC0", VA = "0x39F7DC0")]
	public GisketchNodeDefinition SpriteButton(string sprite, string label, string actionId, [Optional] string id, [Optional][DefaultParameterValue("spriteButton")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x39F7F20", Offset = "0x39F7F20", VA = "0x39F7F20")]
	public GisketchNodeDefinition SpriteButton(string sprite, string label, Action<GisketchActionContext> action, [Optional] string id, [Optional][DefaultParameterValue("spriteButton")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x39F62F0", Offset = "0x39F62F0", VA = "0x39F62F0")]
	public GisketchNodeDefinition SearchPalette(string id = "search-palette", string placeholder = "Search current screen")
	{
		return null;
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x39F7FA0", Offset = "0x39F7FA0", VA = "0x39F7FA0")]
	public static GisketchSearchDefinition Search([Optional] string title, [Optional] string keywords, [Optional][DefaultParameterValue(false)] bool hidden, [Optional] string icon, [Optional] string kind, [Optional] string sectionId, [Optional] string sectionTitle, bool autoAddKeywords = false)
	{
		return null;
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x39F5BA0", Offset = "0x39F5BA0", VA = "0x39F5BA0")]
	internal AottgUi(string ownerId, AottgActionRegistry actions)
	{
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x39F5C50", Offset = "0x39F5C50", VA = "0x39F5C50")]
	internal GisketchNodeDefinition[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x39F5720", Offset = "0x39F5720", VA = "0x39F5720")]
	public GisketchNodeDefinition Add(GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x39F80D0", Offset = "0x39F80D0", VA = "0x39F80D0")]
	public void Component(AottgComponent component)
	{
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x39F4FE0", Offset = "0x39F4FE0", VA = "0x39F4FE0")]
	public GisketchNodeDefinition Panel(string style, [Optional] Action<AottgUi> build, [Optional] string id, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x39F8100", Offset = "0x39F8100", VA = "0x39F8100")]
	public GisketchNodeDefinition Text(string text, [Optional][DefaultParameterValue("text")] string style, [Optional] string id, [Optional] string bindText, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x39F44F0", Offset = "0x39F44F0", VA = "0x39F44F0")]
	public GisketchNodeDefinition Button(AottgButtonVariant variant, string text, string actionId, [Optional] string id, [Optional] string tooltip, [Optional] GisketchMotionDefinition enter, [Optional] string icon)
	{
		return null;
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x39F46B0", Offset = "0x39F46B0", VA = "0x39F46B0")]
	public GisketchNodeDefinition Button(AottgButtonVariant variant, string text, Action<GisketchActionContext> action, [Optional] string id, [Optional] string tooltip, [Optional] GisketchMotionDefinition enter, [Optional] string icon)
	{
		return null;
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x39F8260", Offset = "0x39F8260", VA = "0x39F8260")]
	public GisketchNodeDefinition InputField(string id, string placeholder, [Optional][DefaultParameterValue(0)] AottgInputType type, [Optional][DefaultParameterValue("inputField")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter, [Optional] Action<GisketchActionContext> change, float debounceSeconds = 0.2f, int maxCharacters = 0)
	{
		return null;
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x39F8460", Offset = "0x39F8460", VA = "0x39F8460")]
	public GisketchNodeDefinition ScrollView(string style, [Optional] Action<AottgUi> build, [Optional] string id, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchLayoutDefinition contentLayout, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x39F8630", Offset = "0x39F8630", VA = "0x39F8630")]
	public GisketchNodeDefinition ScaleBox(string style, float referenceWidth, float referenceHeight, [Optional] Action<AottgUi> build, [Optional] string id, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchLayoutDefinition contentLayout, [Optional] GisketchMotionDefinition enter)
	{
		return null;
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x39F8820", Offset = "0x39F8820", VA = "0x39F8820")]
	public GisketchNodeDefinition Stepper(string style, params AottgStepperStep[] steps)
	{
		return null;
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x39F4DC0", Offset = "0x39F4DC0", VA = "0x39F4DC0")]
	public static GisketchLayoutDefinition Layout([Optional][DefaultParameterValue("Column")] string direction, [Optional] string justify, [Optional] string alignItems, [Optional] string alignSelf, [Optional] string wrap, [Optional][DefaultParameterValue(0f)] float gap, [Optional] GisketchLength width, [Optional] GisketchLength height, [Optional] GisketchLength minWidth, [Optional] GisketchLength minHeight, [Optional] GisketchLength maxWidth, [Optional] GisketchLength maxHeight, float padding = 0f, float paddingX = 0f, float paddingY = 0f, float paddingLeft = 0f, float paddingRight = 0f, float paddingTop = 0f, float paddingBottom = 0f, float offsetX = 0f, float offsetY = 0f, float grow = 0f, float shrink = 1f)
	{
		return null;
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x39F6950", Offset = "0x39F6950", VA = "0x39F6950")]
	public static GisketchMotionDefinition Motion(string preset, [Optional] string group, float duration = 0f, float delay = 0f, float stagger = 0f, int order = 0)
	{
		return null;
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x39F5920", Offset = "0x39F5920", VA = "0x39F5920")]
	public static GisketchLength Points(float value)
	{
		return null;
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x39F4D30", Offset = "0x39F4D30", VA = "0x39F4D30")]
	public static GisketchLength Percent(float value)
	{
		return null;
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x39F7470", Offset = "0x39F7470", VA = "0x39F7470")]
	private static string VariantStyle(AottgButtonVariant variant)
	{
		return null;
	}
}
