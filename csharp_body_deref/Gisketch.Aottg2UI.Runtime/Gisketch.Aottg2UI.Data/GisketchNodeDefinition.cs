using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x2000048")]
public sealed class GisketchNodeDefinition
{
	[Token(Token = "0x4000166")]
	[FieldOffset(Offset = "0x10")]
	public string type;

	[Token(Token = "0x4000167")]
	[FieldOffset(Offset = "0x18")]
	public string id;

	[Token(Token = "0x4000168")]
	[FieldOffset(Offset = "0x20")]
	public string text;

	[Token(Token = "0x4000169")]
	[FieldOffset(Offset = "0x28")]
	public string textKey;

	[Token(Token = "0x400016A")]
	[FieldOffset(Offset = "0x30")]
	public string placeholder;

	[Token(Token = "0x400016B")]
	[FieldOffset(Offset = "0x38")]
	public string inputType;

	[Token(Token = "0x400016C")]
	[FieldOffset(Offset = "0x40")]
	public string style;

	[Token(Token = "0x400016D")]
	[FieldOffset(Offset = "0x48")]
	public string action;

	[Token(Token = "0x400016E")]
	[FieldOffset(Offset = "0x50")]
	public string value;

	[Token(Token = "0x400016F")]
	[FieldOffset(Offset = "0x58")]
	public string icon;

	[Token(Token = "0x4000170")]
	[FieldOffset(Offset = "0x60")]
	public string sprite;

	[Token(Token = "0x4000171")]
	[FieldOffset(Offset = "0x68")]
	public bool hasIcon;

	[Token(Token = "0x4000172")]
	[FieldOffset(Offset = "0x69")]
	public bool clip;

	[Token(Token = "0x4000173")]
	[FieldOffset(Offset = "0x6A")]
	public bool active;

	[Token(Token = "0x4000174")]
	[FieldOffset(Offset = "0x6B")]
	public bool? enabled;

	[Token(Token = "0x4000175")]
	[FieldOffset(Offset = "0x70")]
	public float referenceWidth;

	[Token(Token = "0x4000176")]
	[FieldOffset(Offset = "0x74")]
	public float referenceHeight;

	[Token(Token = "0x4000177")]
	[FieldOffset(Offset = "0x78")]
	public float? min;

	[Token(Token = "0x4000178")]
	[FieldOffset(Offset = "0x80")]
	public float? max;

	[Token(Token = "0x4000179")]
	[FieldOffset(Offset = "0x88")]
	public float? debounceSeconds;

	[Token(Token = "0x400017A")]
	[FieldOffset(Offset = "0x90")]
	public int maxCharacters;

	[Token(Token = "0x400017B")]
	[FieldOffset(Offset = "0x94")]
	public int maxVisibleItems;

	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0x98")]
	public bool showValue;

	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0xA0")]
	public string[] options;

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0xA8")]
	public GisketchChoiceOptionDefinition[] choiceOptions;

	[Token(Token = "0x400017F")]
	[FieldOffset(Offset = "0xB0")]
	public string choiceOptionRenderer;

	[Token(Token = "0x4000180")]
	[FieldOffset(Offset = "0xB8")]
	public string tooltip;

	[Token(Token = "0x4000181")]
	[FieldOffset(Offset = "0xC0")]
	public string tooltipKey;

	[Token(Token = "0x4000182")]
	[FieldOffset(Offset = "0xC8")]
	public string popover;

	[Token(Token = "0x4000183")]
	[FieldOffset(Offset = "0xD0")]
	public GisketchSearchDefinition search;

	[Token(Token = "0x4000184")]
	[FieldOffset(Offset = "0xD8")]
	public GisketchLayoutDefinition layout;

	[Token(Token = "0x4000185")]
	[FieldOffset(Offset = "0xE0")]
	public GisketchLayoutDefinition contentLayout;

	[Token(Token = "0x4000186")]
	[FieldOffset(Offset = "0xE8")]
	public GisketchUIBindingDefinition bind;

	[Token(Token = "0x4000187")]
	[FieldOffset(Offset = "0xF0")]
	public GisketchMotionDefinition motion;

	[Token(Token = "0x4000188")]
	[FieldOffset(Offset = "0xF8")]
	public GisketchMotionDefinition enter;

	[Token(Token = "0x4000189")]
	[FieldOffset(Offset = "0x100")]
	public GisketchMotionDefinition exit;

	[Token(Token = "0x400018A")]
	[FieldOffset(Offset = "0x108")]
	public GisketchStepperStepDefinition[] steps;

	[Token(Token = "0x400018B")]
	[FieldOffset(Offset = "0x110")]
	public GisketchNodeDefinition[] deferredChildren;

	[Token(Token = "0x400018C")]
	[FieldOffset(Offset = "0x118")]
	public GisketchNodeDefinition[] children;

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x39E9FB0", Offset = "0x39E9FB0", VA = "0x39E9FB0")]
	public GisketchNodeDefinition()
	{
	}
}
