// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000171")]
internal sealed class AottgSettingRow : AottgComponent, IAottgSettingsSearchable, IAottgSettingsStateSync, IAottgSettingRowLayoutAware
{
	[Token(Token = "0x400083B")]
	private const float SliderValueButtonWidth = 80f;

	[Token(Token = "0x400083C")]
	[FieldOffset(Offset = "0x10")]
	private readonly AottgSettingDescriptor _descriptor;

	[Token(Token = "0x400083D")]
	[FieldOffset(Offset = "0x18")]
	private AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x400083E")]
	[FieldOffset(Offset = "0x40")]
	private AottgSettingRowLayoutMode _layoutMode;

	[Token(Token = "0x6000796")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public AottgSettingRow(AottgSettingDescriptor descriptor)
	{
	}

	[Token(Token = "0x6000797")]
	[Address(RVA = "0x2310580", Offset = "0x230EB80", VA = "0x182310580", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000798")]
	[Address(RVA = "0x21EBCD0", Offset = "0x21EA2D0", VA = "0x1821EBCD0", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
	}

	[Token(Token = "0x6000799")]
	[Address(RVA = "0x2311490", Offset = "0x230FA90", VA = "0x182311490", Slot = "6")]
	public void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x600079A")]
	[Address(RVA = "0x58AA60", Offset = "0x589060", VA = "0x18058AA60", Slot = "7")]
	public void ApplyLayoutMode(AottgSettingRowLayoutMode mode)
	{
	}

	[Token(Token = "0x600079B")]
	[Address(RVA = "0x230F160", Offset = "0x230D760", VA = "0x18230F160")]
	private void BuildControl(AottgUi control)
	{
	}

	[Token(Token = "0x600079C")]
	[Address(RVA = "0x23103B0", Offset = "0x230E9B0", VA = "0x1823103B0")]
	private void BuildSwitch(AottgUi control)
	{
	}

	[Token(Token = "0x600079D")]
	[Address(RVA = "0x230F6C0", Offset = "0x230DCC0", VA = "0x18230F6C0")]
	private void BuildDropdown(AottgUi control, bool dropdown)
	{
	}

	[Token(Token = "0x600079E")]
	[Address(RVA = "0x2310130", Offset = "0x230E730", VA = "0x182310130")]
	private void BuildSlider(AottgUi control)
	{
	}

	[Token(Token = "0x600079F")]
	[Address(RVA = "0x2311040", Offset = "0x230F640", VA = "0x182311040")]
	private GisketchNodeDefinition SliderNode(AottgUi control, string id)
	{
		return null;
	}

	[Token(Token = "0x60007A0")]
	[Address(RVA = "0x2311F50", Offset = "0x2310550", VA = "0x182311F50")]
	private void UpdateSliderValueText(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60007A1")]
	[Address(RVA = "0x2311310", Offset = "0x230F910", VA = "0x182311310")]
	private string SliderValueKey()
	{
		return null;
	}

	[Token(Token = "0x60007A2")]
	[Address(RVA = "0x2311370", Offset = "0x230F970", VA = "0x182311370")]
	private string SliderValueText()
	{
		return null;
	}

	[Token(Token = "0x60007A3")]
	[Address(RVA = "0x230FA30", Offset = "0x230E030", VA = "0x18230FA30")]
	private void BuildInput(AottgUi control)
	{
	}

	[Token(Token = "0x60007A4")]
	[Address(RVA = "0x2310A90", Offset = "0x230F090", VA = "0x182310A90")]
	private AottgInputType InputType()
	{
		return default(AottgInputType);
	}

	[Token(Token = "0x60007A5")]
	[Address(RVA = "0x230F010", Offset = "0x230D610", VA = "0x18230F010")]
	private void BuildActionButton(AottgUi control)
	{
	}

	[Token(Token = "0x60007A6")]
	[Address(RVA = "0x230FF20", Offset = "0x230E520", VA = "0x18230FF20")]
	private void BuildReadOnly(AottgUi control)
	{
	}

	[Token(Token = "0x60007A7")]
	[Address(RVA = "0x2310DC0", Offset = "0x230F3C0", VA = "0x182310DC0")]
	private void OnValueChanged(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60007A8")]
	[Address(RVA = "0x2310B30", Offset = "0x230F130", VA = "0x182310B30")]
	private void OnInputChanged(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60007A9")]
	[Address(RVA = "0x2310C40", Offset = "0x230F240", VA = "0x182310C40")]
	private void OnInputCommitted(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60007AA")]
	[Address(RVA = "0x2311480", Offset = "0x230FA80", VA = "0x182311480")]
	internal static void SyncSliderValue(GisketchUIRoot root, AottgSettingDescriptor descriptor)
	{
	}

	[Token(Token = "0x60007AB")]
	[Address(RVA = "0x2311510", Offset = "0x230FB10", VA = "0x182311510")]
	internal static void SyncValue(GisketchUIRoot root, AottgSettingDescriptor descriptor)
	{
	}

	[Token(Token = "0x60007AC")]
	[Address(RVA = "0x23112D0", Offset = "0x230F8D0", VA = "0x1823112D0")]
	private static string SliderValueKey(string id)
	{
		return null;
	}

	[Token(Token = "0x60007AD")]
	[Address(RVA = "0x2310980", Offset = "0x230EF80", VA = "0x182310980")]
	private static string ControlValueKey(string id)
	{
		return null;
	}

	[Token(Token = "0x60007AE")]
	[Address(RVA = "0x2311380", Offset = "0x230F980", VA = "0x182311380")]
	private static string SliderValueText(AottgSettingDescriptor descriptor)
	{
		return null;
	}

	[Token(Token = "0x60007AF")]
	[Address(RVA = "0x23109C0", Offset = "0x230EFC0", VA = "0x1823109C0")]
	private static string ControlValueText(IAottgSettingAdapter adapter)
	{
		return null;
	}

	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x2310870", Offset = "0x230EE70", VA = "0x182310870")]
	private GisketchChoiceOptionDefinition[] ChoiceOptions()
	{
		return null;
	}

	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x2310FA0", Offset = "0x230F5A0", VA = "0x182310FA0")]
	private float PreferredControlWidth()
	{
		return default(float);
	}

	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x2310F60", Offset = "0x230F560", VA = "0x182310F60")]
	private float PreferredControlVisualWidth()
	{
		return default(float);
	}

	[Token(Token = "0x60007B3")]
	[Address(RVA = "0x230EE60", Offset = "0x230D460", VA = "0x18230EE60")]
	private void ApplyControlLayout(GisketchNodeDefinition node, float minWidth)
	{
	}
}
