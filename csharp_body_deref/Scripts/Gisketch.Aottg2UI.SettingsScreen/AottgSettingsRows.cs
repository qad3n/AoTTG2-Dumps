// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200019D")]
internal static class AottgSettingsRows
{
	[Token(Token = "0x4000903")]
	private const string LocaleCategory = "SettingsPopup";

	[Token(Token = "0x60008FA")]
	[Address(RVA = "0x5D3AB70", Offset = "0x5D39B70", VA = "0x5D3AB70")]
	public static AottgComponent Switch(string id, string sub, string item, BoolSetting setting, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x60008FB")]
	[Address(RVA = "0x5D3ED70", Offset = "0x5D3DD70", VA = "0x5D3ED70")]
	public static AottgComponent Input(string id, string sub, string item, IntSetting setting, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x60008FC")]
	[Address(RVA = "0x5D3ECA0", Offset = "0x5D3DCA0", VA = "0x5D3ECA0")]
	public static AottgComponent Input(string id, string sub, string item, FloatSetting setting, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x60008FD")]
	[Address(RVA = "0x5D4A5E0", Offset = "0x5D495E0", VA = "0x5D4A5E0")]
	public static AottgComponent Input(string id, string sub, string item, StringSetting setting, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x60008FE")]
	[Address(RVA = "0x5D3EBC0", Offset = "0x5D3DBC0", VA = "0x5D3EBC0")]
	public static AottgComponent Slider(string id, string sub, string item, FloatSetting setting, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x60008FF")]
	[Address(RVA = "0x5D40B40", Offset = "0x5D3FB40", VA = "0x5D40B40")]
	public static AottgComponent Slider(string id, string sub, string item, IntSetting setting, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x6000900")]
	[Address(RVA = "0x5D408C0", Offset = "0x5D3F8C0", VA = "0x5D408C0")]
	public static AottgComponent Dropdown(string id, string sub, string item, IntSetting setting, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x6000901")]
	[Address(RVA = "0x5D40A70", Offset = "0x5D3FA70", VA = "0x5D40A70")]
	public static AottgComponent Dropdown(string id, string sub, string item, IntSetting setting, string[] labels, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x6000902")]
	[Address(RVA = "0x5D4A940", Offset = "0x5D49940", VA = "0x5D4A940")]
	public static AottgComponent Dropdown(string id, string sub, string item, StringSetting setting, string[] values, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x6000903")]
	[Address(RVA = "0x5D4AB20", Offset = "0x5D49B20", VA = "0x5D4AB20")]
	public static AottgComponent Dropdown(string id, string sub, string item, StringSetting setting, string[] values, string[] labels, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x6000904")]
	[Address(RVA = "0x5D3EAF0", Offset = "0x5D3DAF0", VA = "0x5D3EAF0")]
	public static AottgComponent Select(string id, string sub, string item, IntSetting setting, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x6000905")]
	[Address(RVA = "0x5D4AB50", Offset = "0x5D49B50", VA = "0x5D4AB50")]
	public static AottgComponent Select(string id, string sub, string item, StringSetting setting, string[] values, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x6000906")]
	[Address(RVA = "0x5D3AAB0", Offset = "0x5D39AB0", VA = "0x5D3AAB0")]
	public static AottgComponent Color(string id, string sub, string item, ColorSetting setting, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x6000907")]
	[Address(RVA = "0x5D4AC30", Offset = "0x5D49C30", VA = "0x5D4AC30")]
	public static AottgComponent ToggleColor(string id, string sub, string item, ToggleColorSetting setting, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x6000908")]
	[Address(RVA = "0x5D3A900", Offset = "0x5D39900", VA = "0x5D3A900")]
	public static AottgComponent Dynamic(string id, string sub, string item, Func<string> text, [Optional] string fallback, [Optional] string bindingKey, [Optional] Func<string> dirtyValue)
	{
		return null;
	}

	[Token(Token = "0x6000909")]
	[Address(RVA = "0x5D3F020", Offset = "0x5D3E020", VA = "0x5D3F020")]
	public static AottgComponent Row(AottgSettingDescriptor descriptor)
	{
		return null;
	}

	[Token(Token = "0x600090A")]
	[Address(RVA = "0x5D3EE40", Offset = "0x5D3DE40", VA = "0x5D3EE40")]
	public static AottgSettingDescriptor Descriptor(string id, string sub, string item, AottgSettingControlKind kind, IAottgSettingAdapter adapter, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x600090B")]
	[Address(RVA = "0x5D4ADB0", Offset = "0x5D49DB0", VA = "0x5D4ADB0")]
	public static AottgSettingDescriptor LabeledDescriptor(string id, string sub, string label, AottgSettingControlKind kind, IAottgSettingAdapter adapter, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x600090C")]
	[Address(RVA = "0x5D4A6B0", Offset = "0x5D496B0", VA = "0x5D4A6B0")]
	private static AottgComponent SliderRow(AottgSettingDescriptor descriptor)
	{
		return null;
	}

	[Token(Token = "0x600090D")]
	[Address(RVA = "0x5D4A7A0", Offset = "0x5D497A0", VA = "0x5D4A7A0")]
	private static AottgComponent IndexedChoice(string id, string sub, string item, AottgSettingControlKind kind, IntSetting setting, string[] labels, string tooltipItem, Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x600090E")]
	[Address(RVA = "0x5D4AA20", Offset = "0x5D49A20", VA = "0x5D4AA20")]
	private static AottgComponent StringChoice(string id, string sub, string item, AottgSettingControlKind kind, StringSetting setting, string[] values, string[] labels, string tooltipItem, Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x600090F")]
	[Address(RVA = "0x5D4A710", Offset = "0x5D49710", VA = "0x5D4A710")]
	private static string[] LocalizedOptions(string sub, string item)
	{
		return null;
	}

	[Token(Token = "0x6000910")]
	[Address(RVA = "0x5D4A8A0", Offset = "0x5D498A0", VA = "0x5D4A8A0")]
	private static string[] DataOptions(string sub, string item, string[] values)
	{
		return null;
	}

	[Token(Token = "0x6000911")]
	[Address(RVA = "0x5D3EF40", Offset = "0x5D3DF40", VA = "0x5D3EF40")]
	public static string[] SafeLanguages()
	{
		return null;
	}

	[Token(Token = "0x6000912")]
	[Address(RVA = "0x5D4AFD0", Offset = "0x5D49FD0", VA = "0x5D4AFD0")]
	public static string[] SafeThemes()
	{
		return null;
	}

	[Token(Token = "0x6000913")]
	[Address(RVA = "0x5D40990", Offset = "0x5D3F990", VA = "0x5D40990")]
	public static string[] SafeResolutions()
	{
		return null;
	}

	[Token(Token = "0x6000914")]
	[Address(RVA = "0x5D45450", Offset = "0x5D44450", VA = "0x5D45450")]
	public static string Key(string sub, string item)
	{
		return null;
	}

	[Token(Token = "0x6000915")]
	[Address(RVA = "0x5D459E0", Offset = "0x5D449E0", VA = "0x5D459E0")]
	public static string CommonKey(string item)
	{
		return null;
	}
}
