// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200012A")]
internal sealed class AottgSettingRow : AottgComponent
{
	[Token(Token = "0x40006DA")]
	[FieldOffset(Offset = "0x10")]
	private readonly AottgSettingDescriptor _descriptor;

	[Token(Token = "0x600061D")]
	[Address(RVA = "0x4360EA0", Offset = "0x4360EA0", VA = "0x4360EA0")]
	public AottgSettingRow(AottgSettingDescriptor descriptor)
	{
	}

	[Token(Token = "0x600061E")]
	[Address(RVA = "0x4360ED0", Offset = "0x4360ED0", VA = "0x4360ED0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x43610E0", Offset = "0x43610E0", VA = "0x43610E0")]
	private void BuildControl(AottgUi control)
	{
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x4361140", Offset = "0x4361140", VA = "0x4361140")]
	private void BuildSwitch(AottgUi control)
	{
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x43612C0", Offset = "0x43612C0", VA = "0x43612C0")]
	private void BuildDropdown(AottgUi control, bool dropdown)
	{
	}

	[Token(Token = "0x6000622")]
	[Address(RVA = "0x4361500", Offset = "0x4361500", VA = "0x4361500")]
	private void BuildSlider(AottgUi control)
	{
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x43620C0", Offset = "0x43620C0", VA = "0x43620C0")]
	private GisketchNodeDefinition SliderNode(AottgUi control, string id)
	{
		return null;
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x4361710", Offset = "0x4361710", VA = "0x4361710")]
	private void BuildInput(AottgUi control)
	{
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x4361B00", Offset = "0x4361B00", VA = "0x4361B00")]
	private void BuildActionButton(AottgUi control)
	{
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x4361C10", Offset = "0x4361C10", VA = "0x4361C10")]
	private void BuildReadOnly(AottgUi control)
	{
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x4362460", Offset = "0x4362460", VA = "0x4362460")]
	private void OnValueChanged(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x4361FB0", Offset = "0x4361FB0", VA = "0x4361FB0")]
	private GisketchChoiceOptionDefinition[] ChoiceOptions()
	{
		return null;
	}

	[Token(Token = "0x6000629")]
	[Address(RVA = "0x4361060", Offset = "0x4361060", VA = "0x4361060")]
	private float PreferredControlWidth()
	{
		return default(float);
	}

	[Token(Token = "0x600062A")]
	[Address(RVA = "0x43610A0", Offset = "0x43610A0", VA = "0x43610A0")]
	private float PreferredControlVisualWidth()
	{
		return default(float);
	}

	[Token(Token = "0x600062B")]
	[Address(RVA = "0x4361E50", Offset = "0x4361E50", VA = "0x4361E50")]
	private void ApplyControlLayout(GisketchNodeDefinition node, float minWidth)
	{
	}
}
