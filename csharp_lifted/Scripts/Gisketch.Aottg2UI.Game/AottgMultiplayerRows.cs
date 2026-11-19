// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMultiplayerRows
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMultiplayerRows.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.SettingsScreen;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002C0")]
internal static class AottgMultiplayerRows
{
	[Token(Token = "0x4000DFA")]
	public const float DialogWidth = 920f;

	[Token(Token = "0x60010A4")]
	[Address(RVA = "0x57C7260", Offset = "0x57C6260", VA = "0x57C7260")]
	public static AottgComponent Input(string id, string labelKey, StringSetting setting, [Optional] Action<GisketchActionContext> committed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMultiplayerRows.c (Gisketch.Aottg2UI.Game.AottgMultiplayerRows$$Input): clean
		AottgStringSettingAdapter __this;
		AottgComponent pGVar1;

		__this = new AottgStringSettingAdapter(setting);
		pGVar1 = AottgMultiplayerRows.Row(id, labelKey, 4, (IAottgSettingAdapter)__this, null, null, committed);
		return pGVar1;
	}

	[Token(Token = "0x60010A5")]
	[Address(RVA = "0x57C72E0", Offset = "0x57C62E0", VA = "0x57C72E0")]
	public static AottgComponent Input(string id, string labelKey, IntSetting setting, [Optional] Action<GisketchActionContext> committed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMultiplayerRows.c (Gisketch.Aottg2UI.Game.AottgMultiplayerRows$$Input): clean
		AottgIntSettingAdapter __this;
		AottgComponent pGVar1;

		__this = new AottgIntSettingAdapter(setting);
		pGVar1 = AottgMultiplayerRows.Row(id, labelKey, 4, (IAottgSettingAdapter)__this, null, null, committed);
		return pGVar1;
	}

	[Token(Token = "0x60010A6")]
	[Address(RVA = "0x57C7360", Offset = "0x57C6360", VA = "0x57C7360")]
	public static AottgComponent Switch(string id, string labelKey, BoolSetting setting, [Optional] string tooltipKey, [Optional] Action<GisketchActionContext> changed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMultiplayerRows.c (Gisketch.Aottg2UI.Game.AottgMultiplayerRows$$Switch): clean
		AottgBoolSettingAdapter __this;
		AottgComponent pGVar1;

		__this = new AottgBoolSettingAdapter(setting);
		pGVar1 = AottgMultiplayerRows.Row(id, labelKey, 0, (IAottgSettingAdapter)__this, tooltipKey, changed, null);
		return pGVar1;
	}

	[Token(Token = "0x60010A7")]
	[Address(RVA = "0x57C7870", Offset = "0x57C6870", VA = "0x57C7870")]
	public static AottgComponent Select(string id, string category, string sub, string item, IntSetting setting)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMultiplayerRows.c (Gisketch.Aottg2UI.Game.AottgMultiplayerRows$$Select): clean
		String pSVar1;
		AottgIntSettingAdapter __this;
		AottgSettingDescriptor descriptor;
		String[] labels;
		AottgSettingOption[] pGVar2;
		GisketchUIRoot root;
		AottgSettingRow __this_00;

		pSVar1 = AottgMultiplayerRows.Key(category, sub, item);
		__this = new AottgIntSettingAdapter(setting);
		descriptor = AottgMultiplayerRows.Descriptor(id, pSVar1, 2, (IAottgSettingAdapter)__this);
		pSVar1 = String.Concat(item, "Options");
		labels = UIManager.GetLocaleOptions(category, sub, pSVar1);
		pGVar2 = AottgSettingOption.IndexedOptions(labels);
		if (descriptor == null) {
			throw new NullReferenceException();
		}
		descriptor.Options = pGVar2;
		pSVar1 = String.Concat(item, "Tooltip");
		pSVar1 = AottgMultiplayerRows.Key(category, sub, pSVar1);
		descriptor.TooltipKey = pSVar1;
		root = AottgGisketchUiHost.Root;
		AottgSettingRow.SyncValue(root, descriptor);
		__this_00 = new AottgSettingRow(descriptor);
		return (AottgComponent)__this_00;
	}

	[Token(Token = "0x60010A8")]
	[Address(RVA = "0x57C7A10", Offset = "0x57C6A10", VA = "0x57C7A10")]
	public static string Key(string category, string sub, string item)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMultiplayerRows.c (Gisketch.Aottg2UI.Game.AottgMultiplayerRows$$Key): clean
		String[] values;
		String pSVar1;

		values = (String[])new string[5];
		if (values == null) {
			throw new NullReferenceException();
		}
		if ((int)values.Length != 0) {
			values[0] = category;
			if ((values.Length & 0xfffffffe) != 0) {
				values[1] = ".";
				if (2 < (uint)values.Length) {
					values[2] = sub;
					if ((values.Length & 0xfffffffc) != 0) {
						values[3] = ".";
						if (4 < (uint)values.Length) {
							values[4] = item;
							return pSVar1;
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60010A9")]
	[Address(RVA = "0x57C77A0", Offset = "0x57C67A0", VA = "0x57C77A0")]
	private static AottgComponent Row(string id, string labelKey, AottgSettingControlKind kind, IAottgSettingAdapter adapter, [Optional] string tooltipKey, [Optional] Action<GisketchActionContext> changed, [Optional] Action<GisketchActionContext> committed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMultiplayerRows.c (Gisketch.Aottg2UI.Game.AottgMultiplayerRows$$Row): 1 lines keep C-only constructs
		AottgSettingDescriptor descriptor;
		GisketchUIRoot root;
		AottgSettingRow __this;

		descriptor = AottgMultiplayerRows.Descriptor(id, labelKey, kind, adapter);
		if (descriptor == null) {
			throw new NullReferenceException();
		}
		descriptor.TooltipKey = tooltipKey;
		descriptor.OnChanged = changed;
		descriptor.OnCommitted = committed;
		root = AottgGisketchUiHost.Root;
		AottgSettingRow.SyncValue(root, descriptor);
		__this = il2cpp_codegen_object_new(typeof(AottgSettingRow)) ;
		__this = new AottgSettingRow(descriptor);
		return (AottgComponent)__this;
	}

	[Token(Token = "0x60010AA")]
	[Address(RVA = "0x57C7BD0", Offset = "0x57C6BD0", VA = "0x57C7BD0")]
	private static AottgComponent SyncedRow(AottgSettingDescriptor descriptor)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMultiplayerRows.c (Gisketch.Aottg2UI.Game.AottgMultiplayerRows$$SyncedRow): 1 lines keep C-only constructs
		GisketchUIRoot root;
		AottgSettingRow __this;

		root = AottgGisketchUiHost.Root;
		AottgSettingRow.SyncValue(root, descriptor);
		__this = il2cpp_codegen_object_new(typeof(AottgSettingRow)) ;
		__this = new AottgSettingRow(descriptor);
		return (AottgComponent)__this;
	}

	[Token(Token = "0x60010AB")]
	[Address(RVA = "0x57C7B10", Offset = "0x57C6B10", VA = "0x57C7B10")]
	private static AottgSettingDescriptor Descriptor(string id, string labelKey, AottgSettingControlKind kind, IAottgSettingAdapter adapter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMultiplayerRows.c (Gisketch.Aottg2UI.Game.AottgMultiplayerRows$$Descriptor): clean
		String label;
		AottgSettingDescriptor __this;

		label = Aottg2GisketchLocale.Text(labelKey);
		__this = new AottgSettingDescriptor(id, label, kind, adapter);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.LabelKey = labelKey;
		return __this;
	}
}
