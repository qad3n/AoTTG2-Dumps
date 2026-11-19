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

[Token(Token = "0x2000178")]
internal readonly struct AottgSettingOption
{
	[Token(Token = "0x400087F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public readonly string Value;

	[Token(Token = "0x4000880")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public readonly string Text;

	[Token(Token = "0x4000881")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly string TextKey;

	[Token(Token = "0x4000882")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly bool Enabled;

	[Token(Token = "0x4000883")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public readonly string Tooltip;

	[Token(Token = "0x4000884")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public readonly string TooltipKey;

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x5CC6760", Offset = "0x5CC5760", VA = "0x5CC6760")]
	public AottgSettingOption(string value, [Optional] string text, [Optional][DefaultParameterValue(true)] bool enabled, [Optional] string tooltip, [Optional] string textKey, [Optional] string tooltipKey)
	{
	}

	[Token(Token = "0x6000806")]
	[Address(RVA = "0x5CC6830", Offset = "0x5CC5830", VA = "0x5CC6830")]
	public GisketchChoiceOptionDefinition ToChoice()
	{
		return null;
	}

	[Token(Token = "0x6000807")]
	[Address(RVA = "0x5CC68F0", Offset = "0x5CC58F0", VA = "0x5CC68F0")]
	public static AottgSettingOption[] StringOptions(params string[] values)
	{
		return null;
	}

	[Token(Token = "0x6000808")]
	[Address(RVA = "0x5CC6900", Offset = "0x5CC5900", VA = "0x5CC6900")]
	public static AottgSettingOption[] LocalizedStringOptions(string[] values, string[] localizedText)
	{
		return null;
	}

	[Token(Token = "0x6000809")]
	[Address(RVA = "0x5CC6BD0", Offset = "0x5CC5BD0", VA = "0x5CC6BD0")]
	public static AottgSettingOption[] IndexedOptions(params string[] labels)
	{
		return null;
	}

	[Token(Token = "0x600080A")]
	[Address(RVA = "0x5CC6B80", Offset = "0x5CC5B80", VA = "0x5CC6B80")]
	private static string TextAt(string[] values, int index, string fallback)
	{
		return null;
	}
}
