// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Data.GisketchNodeDefinition
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Data/GisketchNodeDefinition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x2000063")]
public sealed class GisketchNodeDefinition
{
	[Token(Token = "0x40001F0")]
	[FieldOffset(Offset = "0x10")]
	public string type;

	[Token(Token = "0x40001F1")]
	[FieldOffset(Offset = "0x18")]
	public string id;

	[Token(Token = "0x40001F2")]
	[FieldOffset(Offset = "0x20")]
	public string text;

	[Token(Token = "0x40001F3")]
	[FieldOffset(Offset = "0x28")]
	public string textKey;

	[Token(Token = "0x40001F4")]
	[FieldOffset(Offset = "0x30")]
	public string placeholder;

	[Token(Token = "0x40001F5")]
	[FieldOffset(Offset = "0x38")]
	public string inputType;

	[Token(Token = "0x40001F6")]
	[FieldOffset(Offset = "0x40")]
	public bool? richText;

	[Token(Token = "0x40001F7")]
	[FieldOffset(Offset = "0x48")]
	public string style;

	[Token(Token = "0x40001F8")]
	[FieldOffset(Offset = "0x50")]
	public string action;

	[Token(Token = "0x40001F9")]
	[FieldOffset(Offset = "0x58")]
	public string commitAction;

	[Token(Token = "0x40001FA")]
	[FieldOffset(Offset = "0x60")]
	public string value;

	[Token(Token = "0x40001FB")]
	[FieldOffset(Offset = "0x68")]
	public string icon;

	[Token(Token = "0x40001FC")]
	[FieldOffset(Offset = "0x70")]
	public string sprite;

	[Token(Token = "0x40001FD")]
	[FieldOffset(Offset = "0x78")]
	public bool hasIcon;

	[Token(Token = "0x40001FE")]
	[FieldOffset(Offset = "0x79")]
	public bool clip;

	[Token(Token = "0x40001FF")]
	[FieldOffset(Offset = "0x7A")]
	public bool active;

	[Token(Token = "0x4000200")]
	[FieldOffset(Offset = "0x7B")]
	public bool? enabled;

	[Token(Token = "0x4000201")]
	[FieldOffset(Offset = "0x80")]
	public float referenceWidth;

	[Token(Token = "0x4000202")]
	[FieldOffset(Offset = "0x84")]
	public float referenceHeight;

	[Token(Token = "0x4000203")]
	[FieldOffset(Offset = "0x88")]
	public float? min;

	[Token(Token = "0x4000204")]
	[FieldOffset(Offset = "0x90")]
	public float? max;

	[Token(Token = "0x4000205")]
	[FieldOffset(Offset = "0x98")]
	public float? debounceSeconds;

	[Token(Token = "0x4000206")]
	[FieldOffset(Offset = "0xA0")]
	public int maxCharacters;

	[Token(Token = "0x4000207")]
	[FieldOffset(Offset = "0xA4")]
	public int maxVisibleItems;

	[Token(Token = "0x4000208")]
	[FieldOffset(Offset = "0xA8")]
	public bool showValue;

	[Token(Token = "0x4000209")]
	[FieldOffset(Offset = "0xB0")]
	public string[] options;

	[Token(Token = "0x400020A")]
	[FieldOffset(Offset = "0xB8")]
	public GisketchChoiceOptionDefinition[] choiceOptions;

	[Token(Token = "0x400020B")]
	[FieldOffset(Offset = "0xC0")]
	public string choiceOptionRenderer;

	[Token(Token = "0x400020C")]
	[FieldOffset(Offset = "0xC8")]
	public string choiceArrowStyle;

	[Token(Token = "0x400020D")]
	[FieldOffset(Offset = "0xD0")]
	public string tooltip;

	[Token(Token = "0x400020E")]
	[FieldOffset(Offset = "0xD8")]
	public string tooltipKey;

	[Token(Token = "0x400020F")]
	[FieldOffset(Offset = "0xE0")]
	public string tooltipMode;

	[Token(Token = "0x4000210")]
	[FieldOffset(Offset = "0xE8")]
	public string formKey;

	[Token(Token = "0x4000211")]
	[FieldOffset(Offset = "0xF0")]
	public string formLabel;

	[Token(Token = "0x4000212")]
	[FieldOffset(Offset = "0xF8")]
	public string popover;

	[Token(Token = "0x4000213")]
	[FieldOffset(Offset = "0x100")]
	public string searchScopeScreenId;

	[Token(Token = "0x4000214")]
	[FieldOffset(Offset = "0x108")]
	public string[] searchScopeScreenIds;

	[Token(Token = "0x4000215")]
	[FieldOffset(Offset = "0x110")]
	public bool searchShowFullPath;

	[Token(Token = "0x4000216")]
	[FieldOffset(Offset = "0x118")]
	public GisketchSearchDefinition search;

	[Token(Token = "0x4000217")]
	[FieldOffset(Offset = "0x120")]
	public GisketchLayoutDefinition layout;

	[Token(Token = "0x4000218")]
	[FieldOffset(Offset = "0x128")]
	public GisketchLayoutDefinition contentLayout;

	[Token(Token = "0x4000219")]
	[FieldOffset(Offset = "0x130")]
	public GisketchUIBindingDefinition bind;

	[Token(Token = "0x400021A")]
	[FieldOffset(Offset = "0x138")]
	public GisketchMotionDefinition motion;

	[Token(Token = "0x400021B")]
	[FieldOffset(Offset = "0x140")]
	public GisketchMotionDefinition enter;

	[Token(Token = "0x400021C")]
	[FieldOffset(Offset = "0x148")]
	public GisketchMotionDefinition exit;

	[Token(Token = "0x400021D")]
	[FieldOffset(Offset = "0x150")]
	public GisketchStepperStepDefinition[] steps;

	[Token(Token = "0x400021E")]
	[FieldOffset(Offset = "0x158")]
	public GisketchNodeDefinition[] deferredChildren;

	[Token(Token = "0x400021F")]
	[FieldOffset(Offset = "0x160")]
	public GisketchNodeDefinition[] children;

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x5259CB0", Offset = "0x5258CB0", VA = "0x5259CB0")]
	public GisketchNodeDefinition()
	{
	}
}
