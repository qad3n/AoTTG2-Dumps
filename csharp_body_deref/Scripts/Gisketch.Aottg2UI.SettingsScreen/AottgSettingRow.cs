// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000179")]
internal sealed class AottgSettingRow : AottgComponent, IAottgSettingsSearchable, IAottgSettingsStateSync, IAottgSettingRowLayoutAware
{
	[Token(Token = "0x4000885")]
	private const float SliderValueButtonWidth = 80f;

	[Token(Token = "0x4000886")]
	[FieldOffset(Offset = "0x10")]
	private readonly AottgSettingDescriptor _descriptor;

	[Token(Token = "0x4000887")]
	[FieldOffset(Offset = "0x18")]
	private AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x4000888")]
	[FieldOffset(Offset = "0x40")]
	private AottgSettingRowLayoutMode _layoutMode;

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x5CC6D70", Offset = "0x5CC5D70", VA = "0x5CC6D70")]
	public AottgSettingRow(AottgSettingDescriptor descriptor)
	{
	}

	[Token(Token = "0x600080C")]
	[Address(RVA = "0x5CC6DA0", Offset = "0x5CC5DA0", VA = "0x5CC6DA0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x600080D")]
	[Address(RVA = "0x5CC71E0", Offset = "0x5CC61E0", VA = "0x5CC71E0", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
	}

	[Token(Token = "0x600080E")]
	[Address(RVA = "0x5CC7210", Offset = "0x5CC6210", VA = "0x5CC7210", Slot = "6")]
	public void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x600080F")]
	[Address(RVA = "0x5CC73D0", Offset = "0x5CC63D0", VA = "0x5CC73D0", Slot = "7")]
	public void ApplyLayoutMode(AottgSettingRowLayoutMode mode)
	{
	}

	[Token(Token = "0x6000810")]
	[Address(RVA = "0x5CC73E0", Offset = "0x5CC63E0", VA = "0x5CC73E0")]
	private void BuildControl(AottgUi control)
	{
	}

	[Token(Token = "0x6000811")]
	[Address(RVA = "0x5CC7440", Offset = "0x5CC6440", VA = "0x5CC7440")]
	private void BuildSwitch(AottgUi control)
	{
	}

	[Token(Token = "0x6000812")]
	[Address(RVA = "0x5CC7670", Offset = "0x5CC6670", VA = "0x5CC7670")]
	private void BuildDropdown(AottgUi control, bool dropdown)
	{
	}

	[Token(Token = "0x6000813")]
	[Address(RVA = "0x5CC79F0", Offset = "0x5CC69F0", VA = "0x5CC79F0")]
	private void BuildSlider(AottgUi control)
	{
	}

	[Token(Token = "0x6000814")]
	[Address(RVA = "0x5CC8890", Offset = "0x5CC7890", VA = "0x5CC8890")]
	private GisketchNodeDefinition SliderNode(AottgUi control, string id)
	{
		return null;
	}

	[Token(Token = "0x6000815")]
	[Address(RVA = "0x5CC8C90", Offset = "0x5CC7C90", VA = "0x5CC8C90")]
	private void UpdateSliderValueText(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000816")]
	[Address(RVA = "0x5CC8D40", Offset = "0x5CC7D40", VA = "0x5CC8D40")]
	private string SliderValueKey()
	{
		return null;
	}

	[Token(Token = "0x6000817")]
	[Address(RVA = "0x5CC8DD0", Offset = "0x5CC7DD0", VA = "0x5CC8DD0")]
	private string SliderValueText()
	{
		return null;
	}

	[Token(Token = "0x6000818")]
	[Address(RVA = "0x5CC7C70", Offset = "0x5CC6C70", VA = "0x5CC7C70")]
	private void BuildInput(AottgUi control)
	{
	}

	[Token(Token = "0x6000819")]
	[Address(RVA = "0x5CC8F80", Offset = "0x5CC7F80", VA = "0x5CC8F80")]
	private AottgInputType InputType()
	{
		return default(AottgInputType);
	}

	[Token(Token = "0x600081A")]
	[Address(RVA = "0x5CC8190", Offset = "0x5CC7190", VA = "0x5CC8190")]
	private void BuildActionButton(AottgUi control)
	{
	}

	[Token(Token = "0x600081B")]
	[Address(RVA = "0x5CC8330", Offset = "0x5CC7330", VA = "0x5CC8330")]
	private void BuildReadOnly(AottgUi control)
	{
	}

	[Token(Token = "0x600081C")]
	[Address(RVA = "0x5CC9000", Offset = "0x5CC8000", VA = "0x5CC9000")]
	private void OnValueChanged(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600081D")]
	[Address(RVA = "0x5CC91B0", Offset = "0x5CC81B0", VA = "0x5CC91B0")]
	private void OnInputChanged(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600081E")]
	[Address(RVA = "0x5CC92D0", Offset = "0x5CC82D0", VA = "0x5CC92D0")]
	private void OnInputCommitted(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600081F")]
	[Address(RVA = "0x5CC8D30", Offset = "0x5CC7D30", VA = "0x5CC8D30")]
	internal static void SyncSliderValue(GisketchUIRoot root, AottgSettingDescriptor descriptor)
	{
	}

	[Token(Token = "0x6000820")]
	[Address(RVA = "0x5CC72A0", Offset = "0x5CC62A0", VA = "0x5CC72A0")]
	internal static void SyncValue(GisketchUIRoot root, AottgSettingDescriptor descriptor)
	{
	}

	[Token(Token = "0x6000821")]
	[Address(RVA = "0x5CC8D90", Offset = "0x5CC7D90", VA = "0x5CC8D90")]
	private static string SliderValueKey(string id)
	{
		return null;
	}

	[Token(Token = "0x6000822")]
	[Address(RVA = "0x5CC85E0", Offset = "0x5CC75E0", VA = "0x5CC85E0")]
	private static string ControlValueKey(string id)
	{
		return null;
	}

	[Token(Token = "0x6000823")]
	[Address(RVA = "0x5CC8DE0", Offset = "0x5CC7DE0", VA = "0x5CC8DE0")]
	private static string SliderValueText(AottgSettingDescriptor descriptor)
	{
		return null;
	}

	[Token(Token = "0x6000824")]
	[Address(RVA = "0x5CC9470", Offset = "0x5CC8470", VA = "0x5CC9470")]
	private static string ControlValueText(IAottgSettingAdapter adapter)
	{
		return null;
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x5CC8780", Offset = "0x5CC7780", VA = "0x5CC8780")]
	private GisketchChoiceOptionDefinition[] ChoiceOptions()
	{
		return null;
	}

	[Token(Token = "0x6000826")]
	[Address(RVA = "0x5CC70C0", Offset = "0x5CC60C0", VA = "0x5CC70C0")]
	private float PreferredControlWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6000827")]
	[Address(RVA = "0x5CC7150", Offset = "0x5CC6150", VA = "0x5CC7150")]
	private float PreferredControlVisualWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6000828")]
	[Address(RVA = "0x5CC8620", Offset = "0x5CC7620", VA = "0x5CC8620")]
	private void ApplyControlLayout(GisketchNodeDefinition node, float minWidth)
	{
	}
}
