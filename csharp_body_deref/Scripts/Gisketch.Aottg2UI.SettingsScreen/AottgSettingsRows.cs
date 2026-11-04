// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows
// Update status: NEW in this game update
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

[Token(Token = "0x2000190")]
internal static class AottgSettingsRows
{
	[Token(Token = "0x40008AD")]
	private const string LocaleCategory = "SettingsPopup";

	[Token(Token = "0x6000870")]
	[Address(RVA = "0x2392880", Offset = "0x2390E80", VA = "0x182392880")]
	public static AottgComponent Switch(string id, string sub, string item, BoolSetting setting, string label, [Optional] string tooltipItem, [Optional] string tooltip, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x6000871")]
	[Address(RVA = "0x2391A80", Offset = "0x2390080", VA = "0x182391A80")]
	public static AottgComponent Input(string id, string sub, string item, IntSetting setting, string label, [Optional] string tooltipItem, [Optional] string tooltip, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x6000872")]
	[Address(RVA = "0x2391B80", Offset = "0x2390180", VA = "0x182391B80")]
	public static AottgComponent Input(string id, string sub, string item, FloatSetting setting, string label, [Optional] string tooltipItem, [Optional] string tooltip, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x6000873")]
	[Address(RVA = "0x2391C80", Offset = "0x2390280", VA = "0x182391C80")]
	public static AottgComponent Input(string id, string sub, string item, StringSetting setting, string label, [Optional] string tooltipItem, [Optional] string tooltip, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x6000874")]
	[Address(RVA = "0x2392660", Offset = "0x2390C60", VA = "0x182392660")]
	public static AottgComponent Slider(string id, string sub, string item, FloatSetting setting, string label, [Optional] string tooltipItem, [Optional] string tooltip, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x6000875")]
	[Address(RVA = "0x2392770", Offset = "0x2390D70", VA = "0x182392770")]
	public static AottgComponent Slider(string id, string sub, string item, IntSetting setting, string label, [Optional] string tooltipItem, [Optional] string tooltip, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x6000876")]
	[Address(RVA = "0x2391850", Offset = "0x238FE50", VA = "0x182391850")]
	public static AottgComponent Dropdown(string id, string sub, string item, IntSetting setting, string label, string[] options, [Optional] string tooltipItem, [Optional] string tooltip, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x6000877")]
	[Address(RVA = "0x2391710", Offset = "0x238FD10", VA = "0x182391710")]
	public static AottgComponent Dropdown(string id, string sub, string item, StringSetting setting, string label, string[] options, [Optional] string tooltipItem, [Optional] string tooltip, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x6000878")]
	[Address(RVA = "0x2392520", Offset = "0x2390B20", VA = "0x182392520")]
	public static AottgComponent Select(string id, string sub, string item, IntSetting setting, string label, string[] options, [Optional] string tooltipItem, [Optional] string tooltip, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x6000879")]
	[Address(RVA = "0x23923E0", Offset = "0x23909E0", VA = "0x1823923E0")]
	public static AottgComponent Select(string id, string sub, string item, StringSetting setting, string label, string[] options, [Optional] string tooltipItem, [Optional] string tooltip, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x600087A")]
	[Address(RVA = "0x2391330", Offset = "0x238F930", VA = "0x182391330")]
	public static AottgComponent Color(string id, string sub, string item, ColorSetting setting, string label, [Optional] string tooltipItem, [Optional] string tooltip, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x600087B")]
	[Address(RVA = "0x2392970", Offset = "0x2390F70", VA = "0x182392970")]
	public static AottgComponent ToggleColor(string id, string sub, string item, ToggleColorSetting setting, string label, [Optional] string tooltipItem, [Optional] string tooltip, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x600087C")]
	[Address(RVA = "0x2391990", Offset = "0x238FF90", VA = "0x182391990")]
	public static AottgComponent Dynamic(string id, string sub, string item, string label, Func<string> text, [Optional][DefaultParameterValue("Unavailable")] string fallback, [Optional] string bindingKey, [Optional] Func<string> dirtyValue)
	{
		return null;
	}

	[Token(Token = "0x600087D")]
	[Address(RVA = "0x2392120", Offset = "0x2390720", VA = "0x182392120")]
	public static AottgComponent Row(AottgSettingDescriptor descriptor)
	{
		return null;
	}

	[Token(Token = "0x600087E")]
	[Address(RVA = "0x2391460", Offset = "0x238FA60", VA = "0x182391460")]
	public static AottgSettingDescriptor Descriptor(string id, string sub, string item, string label, AottgSettingControlKind kind, IAottgSettingAdapter adapter, [Optional] string tooltipItem, [Optional] string tooltip, [Optional] Action<GisketchActionContext> changed, bool bindLabelToLocale = true)
	{
		return null;
	}

	[Token(Token = "0x600087F")]
	[Address(RVA = "0x2391E90", Offset = "0x2390490", VA = "0x182391E90")]
	internal static string LocalizedLabel(string key, string fallback)
	{
		return null;
	}

	[Token(Token = "0x6000880")]
	[Address(RVA = "0x2391D80", Offset = "0x2390380", VA = "0x182391D80")]
	private static string KeyItem(string key)
	{
		return null;
	}

	[Token(Token = "0x6000881")]
	[Address(RVA = "0x2392010", Offset = "0x2390610", VA = "0x182392010")]
	private static string[] OptionLabels(string sub, string item, string[] fallback)
	{
		return null;
	}

	[Token(Token = "0x6000882")]
	[Address(RVA = "0x2392180", Offset = "0x2390780", VA = "0x182392180")]
	public static string[] SafeLanguages()
	{
		return null;
	}

	[Token(Token = "0x6000883")]
	[Address(RVA = "0x2392300", Offset = "0x2390900", VA = "0x182392300")]
	public static string[] SafeThemes()
	{
		return null;
	}

	[Token(Token = "0x6000884")]
	[Address(RVA = "0x2392240", Offset = "0x2390840", VA = "0x182392240")]
	public static string[] SafeResolutions()
	{
		return null;
	}

	[Token(Token = "0x6000885")]
	[Address(RVA = "0x2391E20", Offset = "0x2390420", VA = "0x182391E20")]
	public static string Key(string sub, string item)
	{
		return null;
	}

	[Token(Token = "0x6000886")]
	[Address(RVA = "0x2391420", Offset = "0x238FA20", VA = "0x182391420")]
	public static string CommonKey(string item)
	{
		return null;
	}
}
