// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgActionRow
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgActionRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200014E")]
internal sealed class AottgActionRow : AottgComponent, IAottgSettingsSearchable, IAottgSettingRowLayoutAware
{
	[Token(Token = "0x200014F")]
	internal sealed class ActionButton
	{
		[Token(Token = "0x4000799")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly string Text;

		[Token(Token = "0x400079A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly string TextKey;

		[Token(Token = "0x400079B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public readonly Action<GisketchActionContext> Action;

		[Token(Token = "0x400079C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public readonly AottgButtonVariant Variant;

		[Token(Token = "0x400079D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		public readonly bool Disabled;

		[Token(Token = "0x60006A7")]
		[Address(RVA = "0x21E9130", Offset = "0x21E7730", VA = "0x1821E9130")]
		public ActionButton(string text, Action<GisketchActionContext> action, [Optional][DefaultParameterValue(1)] AottgButtonVariant variant, [Optional][DefaultParameterValue(false)] bool disabled, [Optional] string textKey)
		{
		}
	}

	[Token(Token = "0x4000790")]
	private const float DefaultButtonWidth = 140f;

	[Token(Token = "0x4000791")]
	private const float ButtonGap = 8f;

	[Token(Token = "0x4000792")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000793")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _label;

	[Token(Token = "0x4000794")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _labelKey;

	[Token(Token = "0x4000795")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly ActionButton[] _buttons;

	[Token(Token = "0x4000796")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly string _tooltip;

	[Token(Token = "0x4000797")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x4000798")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private AottgSettingRowLayoutMode _layoutMode;

	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x21EA2D0", Offset = "0x21E88D0", VA = "0x1821EA2D0")]
	public AottgActionRow(string id, string label, [Optional] string tooltip, params ActionButton[] buttons)
	{
	}

	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x21EA380", Offset = "0x21E8980", VA = "0x1821EA380")]
	public AottgActionRow(string id, string label, string tooltip, string labelKey, params ActionButton[] buttons)
	{
	}

	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x21EA090", Offset = "0x21E8690", VA = "0x1821EA090", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x21E9DB0", Offset = "0x21E83B0", VA = "0x1821E9DB0", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
	}

	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x1B6A390", Offset = "0x1B68990", VA = "0x181B6A390", Slot = "6")]
	public void ApplyLayoutMode(AottgSettingRowLayoutMode mode)
	{
	}

	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x21E9DE0", Offset = "0x21E83E0", VA = "0x1821E9DE0")]
	private void BuildButtons(AottgUi control)
	{
	}
}
