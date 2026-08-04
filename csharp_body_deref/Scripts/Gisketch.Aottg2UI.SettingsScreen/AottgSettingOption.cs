// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingOption.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000129")]
internal readonly struct AottgSettingOption
{
	[Token(Token = "0x40006D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public readonly string Value;

	[Token(Token = "0x40006D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public readonly string Text;

	[Token(Token = "0x40006D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly bool Enabled;

	[Token(Token = "0x40006D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly string Tooltip;

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x4360A10", Offset = "0x4360A10", VA = "0x4360A10")]
	public AottgSettingOption(string value, [Optional] string text, [Optional][DefaultParameterValue(true)] bool enabled, [Optional] string tooltip)
	{
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x4360A70", Offset = "0x4360A70", VA = "0x4360A70")]
	public GisketchChoiceOptionDefinition ToChoice()
	{
		return null;
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x4360B00", Offset = "0x4360B00", VA = "0x4360B00")]
	public static AottgSettingOption[] StringOptions(params string[] values)
	{
		return null;
	}

	[Token(Token = "0x600061C")]
	[Address(RVA = "0x4360CB0", Offset = "0x4360CB0", VA = "0x4360CB0")]
	public static AottgSettingOption[] IndexedOptions(params string[] labels)
	{
		return null;
	}
}
