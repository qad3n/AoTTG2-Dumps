// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Data.GisketchNodeDefinition
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Data/GisketchNodeDefinition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x200005D")]
public sealed class GisketchNodeDefinition
{
	[Token(Token = "0x40001CC")]
	[FieldOffset(Offset = "0x10")]
	public string type;

	[Token(Token = "0x40001CD")]
	[FieldOffset(Offset = "0x18")]
	public string id;

	[Token(Token = "0x40001CE")]
	[FieldOffset(Offset = "0x20")]
	public string text;

	[Token(Token = "0x40001CF")]
	[FieldOffset(Offset = "0x28")]
	public string textKey;

	[Token(Token = "0x40001D0")]
	[FieldOffset(Offset = "0x30")]
	public string placeholder;

	[Token(Token = "0x40001D1")]
	[FieldOffset(Offset = "0x38")]
	public string inputType;

	[Token(Token = "0x40001D2")]
	[FieldOffset(Offset = "0x40")]
	public bool? richText;

	[Token(Token = "0x40001D3")]
	[FieldOffset(Offset = "0x48")]
	public string style;

	[Token(Token = "0x40001D4")]
	[FieldOffset(Offset = "0x50")]
	public string action;

	[Token(Token = "0x40001D5")]
	[FieldOffset(Offset = "0x58")]
	public string commitAction;

	[Token(Token = "0x40001D6")]
	[FieldOffset(Offset = "0x60")]
	public string value;

	[Token(Token = "0x40001D7")]
	[FieldOffset(Offset = "0x68")]
	public string icon;

	[Token(Token = "0x40001D8")]
	[FieldOffset(Offset = "0x70")]
	public string sprite;

	[Token(Token = "0x40001D9")]
	[FieldOffset(Offset = "0x78")]
	public bool hasIcon;

	[Token(Token = "0x40001DA")]
	[FieldOffset(Offset = "0x79")]
	public bool clip;

	[Token(Token = "0x40001DB")]
	[FieldOffset(Offset = "0x7A")]
	public bool active;

	[Token(Token = "0x40001DC")]
	[FieldOffset(Offset = "0x7B")]
	public bool? enabled;

	[Token(Token = "0x40001DD")]
	[FieldOffset(Offset = "0x80")]
	public float referenceWidth;

	[Token(Token = "0x40001DE")]
	[FieldOffset(Offset = "0x84")]
	public float referenceHeight;

	[Token(Token = "0x40001DF")]
	[FieldOffset(Offset = "0x88")]
	public float? min;

	[Token(Token = "0x40001E0")]
	[FieldOffset(Offset = "0x90")]
	public float? max;

	[Token(Token = "0x40001E1")]
	[FieldOffset(Offset = "0x98")]
	public float? debounceSeconds;

	[Token(Token = "0x40001E2")]
	[FieldOffset(Offset = "0xA0")]
	public int maxCharacters;

	[Token(Token = "0x40001E3")]
	[FieldOffset(Offset = "0xA4")]
	public int maxVisibleItems;

	[Token(Token = "0x40001E4")]
	[FieldOffset(Offset = "0xA8")]
	public bool showValue;

	[Token(Token = "0x40001E5")]
	[FieldOffset(Offset = "0xB0")]
	public string[] options;

	[Token(Token = "0x40001E6")]
	[FieldOffset(Offset = "0xB8")]
	public GisketchChoiceOptionDefinition[] choiceOptions;

	[Token(Token = "0x40001E7")]
	[FieldOffset(Offset = "0xC0")]
	public string choiceOptionRenderer;

	[Token(Token = "0x40001E8")]
	[FieldOffset(Offset = "0xC8")]
	public string choiceArrowStyle;

	[Token(Token = "0x40001E9")]
	[FieldOffset(Offset = "0xD0")]
	public string tooltip;

	[Token(Token = "0x40001EA")]
	[FieldOffset(Offset = "0xD8")]
	public string tooltipKey;

	[Token(Token = "0x40001EB")]
	[FieldOffset(Offset = "0xE0")]
	public string tooltipMode;

	[Token(Token = "0x40001EC")]
	[FieldOffset(Offset = "0xE8")]
	public string formKey;

	[Token(Token = "0x40001ED")]
	[FieldOffset(Offset = "0xF0")]
	public string formLabel;

	[Token(Token = "0x40001EE")]
	[FieldOffset(Offset = "0xF8")]
	public string popover;

	[Token(Token = "0x40001EF")]
	[FieldOffset(Offset = "0x100")]
	public string searchScopeScreenId;

	[Token(Token = "0x40001F0")]
	[FieldOffset(Offset = "0x108")]
	public string[] searchScopeScreenIds;

	[Token(Token = "0x40001F1")]
	[FieldOffset(Offset = "0x110")]
	public bool searchShowFullPath;

	[Token(Token = "0x40001F2")]
	[FieldOffset(Offset = "0x118")]
	public GisketchSearchDefinition search;

	[Token(Token = "0x40001F3")]
	[FieldOffset(Offset = "0x120")]
	public GisketchLayoutDefinition layout;

	[Token(Token = "0x40001F4")]
	[FieldOffset(Offset = "0x128")]
	public GisketchLayoutDefinition contentLayout;

	[Token(Token = "0x40001F5")]
	[FieldOffset(Offset = "0x130")]
	public GisketchUIBindingDefinition bind;

	[Token(Token = "0x40001F6")]
	[FieldOffset(Offset = "0x138")]
	public GisketchMotionDefinition motion;

	[Token(Token = "0x40001F7")]
	[FieldOffset(Offset = "0x140")]
	public GisketchMotionDefinition enter;

	[Token(Token = "0x40001F8")]
	[FieldOffset(Offset = "0x148")]
	public GisketchMotionDefinition exit;

	[Token(Token = "0x40001F9")]
	[FieldOffset(Offset = "0x150")]
	public GisketchStepperStepDefinition[] steps;

	[Token(Token = "0x40001FA")]
	[FieldOffset(Offset = "0x158")]
	public GisketchNodeDefinition[] deferredChildren;

	[Token(Token = "0x40001FB")]
	[FieldOffset(Offset = "0x160")]
	public GisketchNodeDefinition[] children;

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x18D09D0", Offset = "0x18CEFD0", VA = "0x1818D09D0")]
	public GisketchNodeDefinition()
	{
	}
}
