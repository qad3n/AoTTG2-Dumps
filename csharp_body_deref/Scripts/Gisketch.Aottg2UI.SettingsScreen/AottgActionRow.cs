// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgActionRow
// Update status: NEW in this game update
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

[Token(Token = "0x2000112")]
internal sealed class AottgActionRow : AottgComponent
{
	[Token(Token = "0x2000113")]
	internal sealed class ActionButton
	{
		[Token(Token = "0x400068B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly string Text;

		[Token(Token = "0x400068C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly Action<GisketchActionContext> Action;

		[Token(Token = "0x400068D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public readonly AottgButtonVariant Variant;

		[Token(Token = "0x400068E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public readonly bool Disabled;

		[Token(Token = "0x600059A")]
		[Address(RVA = "0x435C070", Offset = "0x435C070", VA = "0x435C070")]
		public ActionButton(string text, Action<GisketchActionContext> action, AottgButtonVariant variant = AottgButtonVariant.Secondary, bool disabled = false)
		{
		}
	}

	[Token(Token = "0x4000687")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000688")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _label;

	[Token(Token = "0x4000689")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly ActionButton[] _buttons;

	[Token(Token = "0x400068A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly string _tooltip;

	[Token(Token = "0x6000596")]
	[Address(RVA = "0x435B980", Offset = "0x435B980", VA = "0x435B980")]
	public AottgActionRow(string id, string label, [Optional] string tooltip, params ActionButton[] buttons)
	{
	}

	[Token(Token = "0x6000597")]
	[Address(RVA = "0x435BA30", Offset = "0x435BA30", VA = "0x435BA30", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000598")]
	[Address(RVA = "0x435BCA0", Offset = "0x435BCA0", VA = "0x435BCA0")]
	private void BuildButtons(AottgUi control)
	{
	}
}
