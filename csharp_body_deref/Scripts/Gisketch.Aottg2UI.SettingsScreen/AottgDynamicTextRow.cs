// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgDynamicTextRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000156")]
internal sealed class AottgDynamicTextRow : AottgComponent, IAottgSettingsSearchable, IAottgSettingsStateSync, IAottgSettingRowLayoutAware
{
	[Token(Token = "0x40007C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40007C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _label;

	[Token(Token = "0x40007C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _labelKey;

	[Token(Token = "0x40007C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly Func<string> _text;

	[Token(Token = "0x40007C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly string _tooltip;

	[Token(Token = "0x40007C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly string _tooltipKey;

	[Token(Token = "0x40007CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly string _fallback;

	[Token(Token = "0x40007CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly string _bindingKey;

	[Token(Token = "0x40007CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly Func<string> _dirtyValue;

	[Token(Token = "0x40007CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x40007CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private AottgSettingRowLayoutMode _layoutMode;

	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x2304180", Offset = "0x2302780", VA = "0x182304180")]
	public AottgDynamicTextRow(string id, string label, Func<string> text, [Optional] string tooltip, [Optional][DefaultParameterValue("Unavailable")] string fallback, [Optional] string labelKey, [Optional] string tooltipKey, [Optional] string bindingKey, [Optional] Func<string> dirtyValue)
	{
	}

	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x2303EC0", Offset = "0x23024C0", VA = "0x182303EC0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60006D6")]
	[Address(RVA = "0x2303C70", Offset = "0x2302270", VA = "0x182303C70", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
	}

	[Token(Token = "0x60006D7")]
	[Address(RVA = "0xB5BE20", Offset = "0xB5A420", VA = "0x180B5BE20", Slot = "7")]
	public void ApplyLayoutMode(AottgSettingRowLayoutMode mode)
	{
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x2304070", Offset = "0x2302670", VA = "0x182304070", Slot = "6")]
	public void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x2303CA0", Offset = "0x23022A0", VA = "0x182303CA0")]
	private void BuildText(AottgUi control)
	{
	}

	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x2304120", Offset = "0x2302720", VA = "0x182304120")]
	private string TextValue()
	{
		return null;
	}
}
