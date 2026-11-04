// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000153")]
internal sealed class AottgColorSettingRow : AottgComponent, IAottgSettingsSearchable, IAottgSettingsStateSync, IAottgSettingRowLayoutAware
{
	[Token(Token = "0x40007B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly AottgSettingDescriptor _descriptor;

	[Token(Token = "0x40007B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x40007B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private AottgSettingRowLayoutMode _layoutMode;

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public AottgColorSettingRow(AottgSettingDescriptor descriptor)
	{
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x21EC130", Offset = "0x21EA730", VA = "0x1821EC130", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x21EBCD0", Offset = "0x21EA2D0", VA = "0x1821EBCD0", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x58AA60", Offset = "0x589060", VA = "0x18058AA60", Slot = "7")]
	public void ApplyLayoutMode(AottgSettingRowLayoutMode mode)
	{
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x21EC3B0", Offset = "0x21EA9B0", VA = "0x1821EC3B0", Slot = "6")]
	public void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x21EC050", Offset = "0x21EA650", VA = "0x1821EC050")]
	private void BuildPicker(AottgUi control)
	{
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x21EBD00", Offset = "0x21EA300", VA = "0x1821EBD00")]
	internal static void BuildPicker(AottgUi control, IAottgSettingAdapter adapter, bool disabled, [Optional] string id, [Optional] Action<GisketchActionContext> changed, [Optional] string enabledKey, [Optional] bool? pickerDisabled)
	{
	}
}
