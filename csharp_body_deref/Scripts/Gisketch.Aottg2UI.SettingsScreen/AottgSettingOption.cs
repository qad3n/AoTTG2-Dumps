// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingOption.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000170")]
internal readonly struct AottgSettingOption
{
	[Token(Token = "0x4000835")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public readonly string Value;

	[Token(Token = "0x4000836")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public readonly string Text;

	[Token(Token = "0x4000837")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly string TextKey;

	[Token(Token = "0x4000838")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly bool Enabled;

	[Token(Token = "0x4000839")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public readonly string Tooltip;

	[Token(Token = "0x400083A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public readonly string TooltipKey;

	[Token(Token = "0x600078F")]
	[Address(RVA = "0x230C580", Offset = "0x230AB80", VA = "0x18230C580")]
	public AottgSettingOption(string value, [Optional] string text, [Optional][DefaultParameterValue(true)] bool enabled, [Optional] string tooltip, [Optional] string textKey, [Optional] string tooltipKey)
	{
	}

	[Token(Token = "0x6000790")]
	[Address(RVA = "0x230C4C0", Offset = "0x230AAC0", VA = "0x18230C4C0")]
	public GisketchChoiceOptionDefinition ToChoice()
	{
		return null;
	}

	[Token(Token = "0x6000791")]
	[Address(RVA = "0x230C440", Offset = "0x230AA40", VA = "0x18230C440")]
	public static AottgSettingOption[] StringOptions(params string[] values)
	{
		return null;
	}

	[Token(Token = "0x6000792")]
	[Address(RVA = "0x230C250", Offset = "0x230A850", VA = "0x18230C250")]
	public static AottgSettingOption[] LocalizedStringOptions(string[] values, string[] localizedText)
	{
		return null;
	}

	[Token(Token = "0x6000793")]
	[Address(RVA = "0x230C020", Offset = "0x230A620", VA = "0x18230C020")]
	public static AottgSettingOption[] IndexedOptions(params string[] labels)
	{
		return null;
	}

	[Token(Token = "0x6000794")]
	[Address(RVA = "0x230C030", Offset = "0x230A630", VA = "0x18230C030")]
	public static AottgSettingOption[] LocalizedIndexedOptions(string[] labels, string[] localizedText)
	{
		return null;
	}

	[Token(Token = "0x6000795")]
	[Address(RVA = "0x230C450", Offset = "0x230AA50", VA = "0x18230C450")]
	private static string TextAt(string[] values, int index, string fallback)
	{
		return null;
	}
}
