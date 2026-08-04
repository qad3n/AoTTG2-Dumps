// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgDynamicTextRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000118")]
internal sealed class AottgDynamicTextRow : AottgComponent
{
	[Token(Token = "0x40006A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40006A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _label;

	[Token(Token = "0x40006A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly Func<string> _text;

	[Token(Token = "0x40006A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly string _tooltip;

	[Token(Token = "0x40006A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly string _fallback;

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x435D580", Offset = "0x435D580", VA = "0x435D580")]
	public AottgDynamicTextRow(string id, string label, Func<string> text, [Optional] string tooltip, string fallback = "Unavailable")
	{
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x435D610", Offset = "0x435D610", VA = "0x435D610", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x435D700", Offset = "0x435D700", VA = "0x435D700")]
	private void BuildText(AottgUi control)
	{
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x435D870", Offset = "0x435D870", VA = "0x435D870")]
	private string TextValue()
	{
		return null;
	}
}
