// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindSettingRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200011B")]
internal sealed class AottgKeybindSettingRow : AottgComponent
{
	[Token(Token = "0x40006AE")]
	private const int SlotCount = 2;

	[Token(Token = "0x40006AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40006B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _label;

	[Token(Token = "0x40006B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly KeybindSetting _setting;

	[Token(Token = "0x40006B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly string _tooltip;

	[Token(Token = "0x60005C8")]
	[Address(RVA = "0x435E800", Offset = "0x435E800", VA = "0x435E800")]
	public AottgKeybindSettingRow(string id, string label, KeybindSetting setting, [Optional] string tooltip)
	{
	}

	[Token(Token = "0x60005C9")]
	[Address(RVA = "0x435E870", Offset = "0x435E870", VA = "0x435E870", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60005CA")]
	[Address(RVA = "0x435E960", Offset = "0x435E960", VA = "0x435E960")]
	private void BuildSlots(AottgUi control)
	{
	}

	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x435EB00", Offset = "0x435EB00", VA = "0x435EB00")]
	private void BuildSlot(AottgUi row, int slot)
	{
	}

	[Token(Token = "0x60005CC")]
	[Address(RVA = "0x435EDD0", Offset = "0x435EDD0", VA = "0x435EDD0")]
	private static string Text(InputKey key)
	{
		return null;
	}

	[Token(Token = "0x60005CD")]
	[Address(RVA = "0x435DD40", Offset = "0x435DD40", VA = "0x435DD40")]
	internal static void EnsureSlots(KeybindSetting setting)
	{
	}
}
