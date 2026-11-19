// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgColorSettingRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200015B")]
internal sealed class AottgColorSettingRow : AottgComponent, IAottgSettingsSearchable, IAottgSettingsStateSync, IAottgSettingRowLayoutAware
{
	[Token(Token = "0x40007FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly AottgSettingDescriptor _descriptor;

	[Token(Token = "0x40007FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x4000800")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private AottgSettingRowLayoutMode _layoutMode;

	[Token(Token = "0x6000738")]
	[Address(RVA = "0x5CBC5E0", Offset = "0x5CBB5E0", VA = "0x5CBC5E0")]
	public AottgColorSettingRow(AottgSettingDescriptor descriptor)
	{
	}

	[Token(Token = "0x6000739")]
	[Address(RVA = "0x5CBC610", Offset = "0x5CBB610", VA = "0x5CBC610", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x600073A")]
	[Address(RVA = "0x5CBC800", Offset = "0x5CBB800", VA = "0x5CBC800", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
	}

	[Token(Token = "0x600073B")]
	[Address(RVA = "0x5CBC830", Offset = "0x5CBB830", VA = "0x5CBC830", Slot = "7")]
	public void ApplyLayoutMode(AottgSettingRowLayoutMode mode)
	{
	}

	[Token(Token = "0x600073C")]
	[Address(RVA = "0x5CBC840", Offset = "0x5CBB840", VA = "0x5CBC840", Slot = "6")]
	public void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x600073D")]
	[Address(RVA = "0x5CBCA30", Offset = "0x5CBBA30", VA = "0x5CBCA30")]
	private void BuildPicker(AottgUi control)
	{
	}

	[Token(Token = "0x600073E")]
	[Address(RVA = "0x5CBCAE0", Offset = "0x5CBBAE0", VA = "0x5CBCAE0")]
	internal static void BuildPicker(AottgUi control, IAottgSettingAdapter adapter, bool disabled, [Optional] string id, [Optional] Action<GisketchActionContext> changed, [Optional] string enabledKey, [Optional] bool? pickerDisabled)
	{
	}
}
