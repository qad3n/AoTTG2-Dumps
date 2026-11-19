// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Switch): clean
		AottgBoolSettingAdapter __this;
		AottgSettingDescriptor descriptor;
		AottgSettingRow __this_00;

		__this = new AottgBoolSettingAdapter(setting);
		descriptor = AottgSettingsRows.Descriptor(id, sub, item, 0, (IAottgSettingAdapter)__this, tooltipItem, changed);
		__this_00 = new AottgSettingRow(descriptor);
		return (AottgComponent)__this_00;
	}

	[Token(Token = "0x60008FB")]
	[Address(RVA = "0x5D3ED70", Offset = "0x5D3DD70", VA = "0x5D3ED70")]
	public static AottgComponent Input(string id, string sub, string item, IntSetting setting, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Input): clean
		AottgIntSettingAdapter __this;
		AottgSettingDescriptor descriptor;
		AottgSettingRow __this_00;

		__this = new AottgIntSettingAdapter(setting);
		descriptor = AottgSettingsRows.Descriptor(id, sub, item, 4, (IAottgSettingAdapter)__this, tooltipItem, changed);
		__this_00 = new AottgSettingRow(descriptor);
		return (AottgComponent)__this_00;
	}

	[Token(Token = "0x60008FC")]
	[Address(RVA = "0x5D3ECA0", Offset = "0x5D3DCA0", VA = "0x5D3ECA0")]
	public static AottgComponent Input(string id, string sub, string item, FloatSetting setting, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Input): clean
		AottgFloatSettingAdapter __this;
		AottgSettingDescriptor descriptor;
		AottgSettingRow __this_00;

		__this = new AottgFloatSettingAdapter(setting);
		descriptor = AottgSettingsRows.Descriptor(id, sub, item, 4, (IAottgSettingAdapter)__this, tooltipItem, changed);
		__this_00 = new AottgSettingRow(descriptor);
		return (AottgComponent)__this_00;
	}

	[Token(Token = "0x60008FD")]
	[Address(RVA = "0x5D4A5E0", Offset = "0x5D495E0", VA = "0x5D4A5E0")]
	public static AottgComponent Input(string id, string sub, string item, StringSetting setting, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Input): clean
		AottgStringSettingAdapter __this;
		AottgSettingDescriptor descriptor;
		AottgSettingRow __this_00;

		__this = new AottgStringSettingAdapter(setting);
		descriptor = AottgSettingsRows.Descriptor(id, sub, item, 4, (IAottgSettingAdapter)__this, tooltipItem, changed);
		__this_00 = new AottgSettingRow(descriptor);
		return (AottgComponent)__this_00;
	}

	[Token(Token = "0x60008FE")]
	[Address(RVA = "0x5D3EBC0", Offset = "0x5D3DBC0", VA = "0x5D3EBC0")]
	public static AottgComponent Slider(string id, string sub, string item, FloatSetting setting, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Slider): clean
		AottgFloatSettingAdapter __this;
		AottgSettingDescriptor descriptor;
		AottgSettingRow __this_00;

		__this = new AottgFloatSettingAdapter(setting);
		descriptor = AottgSettingsRows.Descriptor(id, sub, item, 3, (IAottgSettingAdapter)__this, tooltipItem, changed);
		if (descriptor == null) {
			throw new NullReferenceException();
		}
		descriptor.ShowValue = true;
		__this_00 = new AottgSettingRow(descriptor);
		return (AottgComponent)__this_00;
	}

	[Token(Token = "0x60008FF")]
	[Address(RVA = "0x5D40B40", Offset = "0x5D3FB40", VA = "0x5D40B40")]
	public static AottgComponent Slider(string id, string sub, string item, IntSetting setting, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Slider): clean
		AottgIntSettingAdapter __this;
		AottgSettingDescriptor descriptor;
		AottgSettingRow __this_00;

		__this = new AottgIntSettingAdapter(setting);
		descriptor = AottgSettingsRows.Descriptor(id, sub, item, 3, (IAottgSettingAdapter)__this, tooltipItem, changed);
		if (descriptor == null) {
			throw new NullReferenceException();
		}
		descriptor.ShowValue = true;
		__this_00 = new AottgSettingRow(descriptor);
		return (AottgComponent)__this_00;
	}

	[Token(Token = "0x6000900")]
	[Address(RVA = "0x5D408C0", Offset = "0x5D3F8C0", VA = "0x5D408C0")]
	public static AottgComponent Dropdown(string id, string sub, string item, IntSetting setting, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Dropdown): clean
		String item_00;
		String[] labels;
		AottgComponent pGVar1;

		item_00 = String.Concat(item, "Options");
		labels = UIManager.GetLocaleOptions("SettingsPopup", sub, item_00);
		pGVar1 = AottgSettingsRows.IndexedChoice(id, sub, item, 1, setting, labels, tooltipItem, changed);
		return pGVar1;
	}

	[Token(Token = "0x6000901")]
	[Address(RVA = "0x5D40A70", Offset = "0x5D3FA70", VA = "0x5D40A70")]
	public static AottgComponent Dropdown(string id, string sub, string item, IntSetting setting, string[] labels, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Dropdown): clean
		String item_00;
		String[] labels_00;
		AottgComponent pGVar1;

		item_00 = String.Concat(item, "Options");
		labels_00 = UIManager.GetLocaleOptions("SettingsPopup", sub, item_00, labels);
		pGVar1 = AottgSettingsRows.IndexedChoice(id, sub, item, 1, setting, labels_00, tooltipItem, changed);
		return pGVar1;
	}

	[Token(Token = "0x6000902")]
	[Address(RVA = "0x5D4A940", Offset = "0x5D49940", VA = "0x5D4A940")]
	public static AottgComponent Dropdown(string id, string sub, string item, StringSetting setting, string[] values, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Dropdown): clean
		String item_00;
		String[] labels;
		AottgComponent pGVar1;

		item_00 = String.Concat(item, "Options");
		labels = UIManager.GetLocaleOptions("SettingsPopup", sub, item_00, values);
		pGVar1 = AottgSettingsRows.StringChoice(id, sub, item, 1, setting, values, labels, tooltipItem, changed);
		return pGVar1;
	}

	[Token(Token = "0x6000903")]
	[Address(RVA = "0x5D4AB20", Offset = "0x5D49B20", VA = "0x5D4AB20")]
	public static AottgComponent Dropdown(string id, string sub, string item, StringSetting setting, string[] values, string[] labels, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Dropdown): clean
		AottgComponent pGVar1;

		pGVar1 = AottgSettingsRows.StringChoice(id, sub, item, 1, setting, values, labels, tooltipItem, changed);
		return pGVar1;
	}

	[Token(Token = "0x6000904")]
	[Address(RVA = "0x5D3EAF0", Offset = "0x5D3DAF0", VA = "0x5D3EAF0")]
	public static AottgComponent Select(string id, string sub, string item, IntSetting setting, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Select): clean
		String item_00;
		String[] labels;
		AottgComponent pGVar1;

		item_00 = String.Concat(item, "Options");
		labels = UIManager.GetLocaleOptions("SettingsPopup", sub, item_00);
		pGVar1 = AottgSettingsRows.IndexedChoice(id, sub, item, 2, setting, labels, tooltipItem, changed);
		return pGVar1;
	}

	[Token(Token = "0x6000905")]
	[Address(RVA = "0x5D4AB50", Offset = "0x5D49B50", VA = "0x5D4AB50")]
	public static AottgComponent Select(string id, string sub, string item, StringSetting setting, string[] values, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Select): clean
		String item_00;
		String[] labels;
		AottgComponent pGVar1;

		item_00 = String.Concat(item, "Options");
		labels = UIManager.GetLocaleOptions("SettingsPopup", sub, item_00, values);
		pGVar1 = AottgSettingsRows.StringChoice(id, sub, item, 2, setting, values, labels, tooltipItem, changed);
		return pGVar1;
	}

	[Token(Token = "0x6000906")]
	[Address(RVA = "0x5D3AAB0", Offset = "0x5D39AB0", VA = "0x5D3AAB0")]
	public static AottgComponent Color(string id, string sub, string item, ColorSetting setting, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Color): clean
		AottgColorSettingAdapter __this;
		AottgSettingDescriptor descriptor;
		AottgColorSettingRow __this_00;

		__this = new AottgColorSettingAdapter(setting);
		descriptor = AottgSettingsRows.Descriptor(id, sub, item, 6, (IAottgSettingAdapter)__this, tooltipItem, changed);
		__this_00 = new AottgColorSettingRow(descriptor);
		return (AottgComponent)__this_00;
	}

	[Token(Token = "0x6000907")]
	[Address(RVA = "0x5D4AC30", Offset = "0x5D49C30", VA = "0x5D4AC30")]
	public static AottgComponent ToggleColor(string id, string sub, string item, ToggleColorSetting setting, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$ToggleColor): clean
		AottgBoolSettingAdapter __this;
		AottgSettingDescriptor pGVar1;
		AottgColorSettingAdapter __this_00;
		AottgToggleColorSettingRow __this_01;
		ColorSetting setting_00;
		BoolSetting setting_01;

		if (setting == null) {
			setting_01 = null;
		}
		else {
			setting_01 = setting.Enabled;
		}
		setting_00 = null;
		__this = new AottgBoolSettingAdapter(setting_01);
		pGVar1 = AottgSettingsRows.Descriptor(id, sub, item, 6, (IAottgSettingAdapter)__this, tooltipItem, changed);
		if (setting != null) {
			setting_00 = setting.Color;
		}
		__this_00 = new AottgColorSettingAdapter(setting_00);
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		pGVar1.SecondaryAdapter = (IAottgSettingAdapter)__this_00;
		__this_01 = new AottgToggleColorSettingRow();
		__this_01._descriptor = pGVar1;
		return (AottgComponent)__this_01;
	}

	[Token(Token = "0x6000908")]
	[Address(RVA = "0x5D3A900", Offset = "0x5D39900", VA = "0x5D3A900")]
	public static AottgComponent Dynamic(string id, string sub, string item, Func<string> text, [Optional] string fallback, [Optional] string bindingKey, [Optional] Func<string> dirtyValue)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Dynamic): 1 lines keep C-only constructs
		String key;
		String label;
		AottgDynamicTextRow __this;

		if (Il2CppMethodInitialized_07548622 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgDynamicTextRow)) ;
			Il2CppMethodInitialized_07548622 = true;
		}
		key = String.Concat("SettingsPopup.", sub, ".", item);
		label = Aottg2GisketchLocale.Text(key);
		__this = new AottgDynamicTextRow(id, label, text, null, fallback, key, null, bindingKey, dirtyValue);
		return (AottgComponent)__this;
	}

	[Token(Token = "0x6000909")]
	[Address(RVA = "0x5D3F020", Offset = "0x5D3E020", VA = "0x5D3F020")]
	public static AottgComponent Row(AottgSettingDescriptor descriptor)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Row): 1 lines keep C-only constructs
		AottgSettingRow __this;

		__this = il2cpp_codegen_object_new(typeof(AottgSettingRow)) ;
		__this = new AottgSettingRow(descriptor);
		return (AottgComponent)__this;
	}

	[Token(Token = "0x600090A")]
	[Address(RVA = "0x5D3EE40", Offset = "0x5D3DE40", VA = "0x5D3EE40")]
	public static AottgSettingDescriptor Descriptor(string id, string sub, string item, AottgSettingControlKind kind, IAottgSettingAdapter adapter, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Descriptor): clean
		String key;
		String label;
		AottgSettingDescriptor pGVar1;

		key = String.Concat("SettingsPopup.", sub, ".", item);
		label = Aottg2GisketchLocale.Text(key);
		pGVar1 = AottgSettingsRows.LabeledDescriptor(id, sub, label, kind, adapter, tooltipItem, changed);
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		pGVar1.LabelKey = key;
		return pGVar1;
	}

	[Token(Token = "0x600090B")]
	[Address(RVA = "0x5D4ADB0", Offset = "0x5D49DB0", VA = "0x5D4ADB0")]
	public static AottgSettingDescriptor LabeledDescriptor(string id, string sub, string label, AottgSettingControlKind kind, IAottgSettingAdapter adapter, [Optional] string tooltipItem, [Optional] Action<GisketchActionContext> changed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$LabeledDescriptor): 2 lines keep C-only constructs
		IAottgSettingAdapter adapter_00;
		bool bVar1;
		AottgSettingsRows.c__DisplayClass18_0 __this;
		AottgSettingDescriptor __this_00;
		String pSVar2;
		Func<string> __this_01;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSettingsRows.c__DisplayClass18_0));
		__this = new Object();
		if (__this != null) {
			__this.adapter = adapter;
			adapter_00 = __this.adapter;
			pSVar2 = null;
			__this_00 = new AottgSettingDescriptor(id, label, kind, adapter_00);
			bVar1 = String.IsNullOrEmpty(tooltipItem);
			if (!bVar1) {
				pSVar2 = String.Concat("SettingsPopup.", sub, ".", tooltipItem);
			}
			if (__this_00 != null) {
				__this_00.TooltipKey = pSVar2;
				__this_00.SearchTitle = label;
				pSVar2 = String.Concat(sub, " ", label);
				__this_00.SearchKeywords = pSVar2;
				__this_01 = new Func<string>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows_c__DisplayClass18_0_LabeledDescriptor_b__0);
				__this_00.DirtyValue = __this_01;
				__this_00.OnChanged = changed;
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600090C")]
	[Address(RVA = "0x5D4A6B0", Offset = "0x5D496B0", VA = "0x5D4A6B0")]
	private static AottgComponent SliderRow(AottgSettingDescriptor descriptor)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$SliderRow): 1 lines keep C-only constructs
		AottgSettingRow __this;

		if (descriptor == null) {
			throw new NullReferenceException();
		}
		descriptor.ShowValue = true;
		__this = il2cpp_codegen_object_new(typeof(AottgSettingRow)) ;
		__this = new AottgSettingRow(descriptor);
		return (AottgComponent)__this;
	}

	[Token(Token = "0x600090D")]
	[Address(RVA = "0x5D4A7A0", Offset = "0x5D497A0", VA = "0x5D4A7A0")]
	private static AottgComponent IndexedChoice(string id, string sub, string item, AottgSettingControlKind kind, IntSetting setting, string[] labels, string tooltipItem, Action<GisketchActionContext> changed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$IndexedChoice): clean
		AottgIntSettingAdapter __this;
		AottgSettingDescriptor descriptor;
		AottgSettingOption[] pGVar1;
		AottgSettingRow __this_00;

		__this = new AottgIntSettingAdapter(setting);
		descriptor = AottgSettingsRows.Descriptor(id, sub, item, kind, (IAottgSettingAdapter)__this, tooltipItem, changed);
		pGVar1 = AottgSettingOption.IndexedOptions(labels);
		if (descriptor == null) {
			throw new NullReferenceException();
		}
		descriptor.Options = pGVar1;
		__this_00 = new AottgSettingRow(descriptor);
		return (AottgComponent)__this_00;
	}

	[Token(Token = "0x600090E")]
	[Address(RVA = "0x5D4AA20", Offset = "0x5D49A20", VA = "0x5D4AA20")]
	private static AottgComponent StringChoice(string id, string sub, string item, AottgSettingControlKind kind, StringSetting setting, string[] values, string[] labels, string tooltipItem, Action<GisketchActionContext> changed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$StringChoice): clean
		AottgStringSettingAdapter __this;
		AottgSettingDescriptor descriptor;
		AottgSettingOption[] pGVar1;
		AottgSettingRow __this_00;

		__this = new AottgStringSettingAdapter(setting);
		descriptor = AottgSettingsRows.Descriptor(id, sub, item, kind, (IAottgSettingAdapter)__this, tooltipItem, changed);
		pGVar1 = AottgSettingOption.LocalizedStringOptions(values, labels);
		if (descriptor == null) {
			throw new NullReferenceException();
		}
		descriptor.Options = pGVar1;
		__this_00 = new AottgSettingRow(descriptor);
		return (AottgComponent)__this_00;
	}

	[Token(Token = "0x600090F")]
	[Address(RVA = "0x5D4A710", Offset = "0x5D49710", VA = "0x5D4A710")]
	private static string[] LocalizedOptions(string sub, string item)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$LocalizedOptions): clean
		String item_00;
		String[] pSVar1;

		item_00 = String.Concat(item, "Options");
		pSVar1 = UIManager.GetLocaleOptions("SettingsPopup", sub, item_00);
		return pSVar1;
	}

	[Token(Token = "0x6000910")]
	[Address(RVA = "0x5D4A8A0", Offset = "0x5D498A0", VA = "0x5D4A8A0")]
	private static string[] DataOptions(string sub, string item, string[] values)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$DataOptions): clean
		String item_00;
		String[] pSVar1;

		item_00 = String.Concat(item, "Options");
		pSVar1 = UIManager.GetLocaleOptions("SettingsPopup", sub, item_00, values);
		return pSVar1;
	}

	[Token(Token = "0x6000911")]
	[Address(RVA = "0x5D3EF40", Offset = "0x5D3DF40", VA = "0x5D3EF40")]
	public static string[] SafeLanguages()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$SafeLanguages): clean
		uint uVar1;
		String[] pSVar2;

		if (Il2CppMethodInitialized_0754862a == false) {
			Il2CppMethodInitialized_0754862a = true;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = UIManager.GetLanguages();
		}
		else {
			pSVar2 = UIManager.GetLanguages();
		}
		if (pSVar2 != null) {
			if (pSVar2.Length != 0) {
				return pSVar2;
			}
		}
		pSVar2 = (String[])new string[1];
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		if ((int)pSVar2.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		pSVar2[0] = "English";
		return pSVar2;
	}

	[Token(Token = "0x6000912")]
	[Address(RVA = "0x5D4AFD0", Offset = "0x5D49FD0", VA = "0x5D4AFD0")]
	public static string[] SafeThemes()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$SafeThemes): clean
		uint uVar1;
		String[] pSVar2;

		if (Il2CppMethodInitialized_0754862b == false) {
			Il2CppMethodInitialized_0754862b = true;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = UIManager.GetUIThemes();
		}
		else {
			pSVar2 = UIManager.GetUIThemes();
		}
		if (pSVar2 != null) {
			if (pSVar2.Length != 0) {
				return pSVar2;
			}
		}
		pSVar2 = (String[])new string[2];
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		if ((int)pSVar2.Length != 0) {
			pSVar2[0] = "Light";
			if ((pSVar2.Length & 0xfffffffe) != 0) {
				pSVar2[1] = "Dark";
				return pSVar2;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6000913")]
	[Address(RVA = "0x5D40990", Offset = "0x5D3F990", VA = "0x5D40990")]
	public static string[] SafeResolutions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$SafeResolutions): clean
		uint uVar1;
		String[] pSVar2;

		if (Il2CppMethodInitialized_0754862c == false) {
			Il2CppMethodInitialized_0754862c = true;
			uVar1 = (typeof(FullscreenHandler)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(FullscreenHandler)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = FullscreenHandler.GetResolutionOptions();
		}
		else {
			pSVar2 = FullscreenHandler.GetResolutionOptions();
		}
		if (pSVar2 != null) {
			if (pSVar2.Length != 0) {
				return pSVar2;
			}
		}
		pSVar2 = (String[])new string[1];
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		if ((int)pSVar2.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		pSVar2[0] = "800 x 600";
		return pSVar2;
	}

	[Token(Token = "0x6000914")]
	[Address(RVA = "0x5D45450", Offset = "0x5D44450", VA = "0x5D45450")]
	public static string Key(string sub, string item)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Key): clean
		String pSVar1;

		pSVar1 = String.Concat("SettingsPopup.", sub, ".", item);
		return pSVar1;
	}

	[Token(Token = "0x6000915")]
	[Address(RVA = "0x5D459E0", Offset = "0x5D449E0", VA = "0x5D459E0")]
	public static string CommonKey(string item)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$CommonKey): clean
		String pSVar1;

		pSVar1 = String.Concat("Common.", item);
		return pSVar1;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRows.c.

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows.<>c__DisplayClass18_0$$.ctor: clean
	private void c__DisplayClass18_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows.<>c__DisplayClass18_0$$<LabeledDescriptor>b__0: clean
	private String c__DisplayClass18_0__LabeledDescriptor_b__0()
	{
		object obj;
		String pSVar4;

		obj = (object)this.adapter;
		if (obj == null) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		return pSVar4;
	}
}
