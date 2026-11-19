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

[Token(Token = "0x200015E")]
internal sealed class AottgDynamicTextRow : AottgComponent, IAottgSettingsSearchable, IAottgSettingsStateSync, IAottgSettingRowLayoutAware
{
	[Token(Token = "0x4000810")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000811")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _label;

	[Token(Token = "0x4000812")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _labelKey;

	[Token(Token = "0x4000813")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly Func<string> _text;

	[Token(Token = "0x4000814")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly string _tooltip;

	[Token(Token = "0x4000815")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly string _tooltipKey;

	[Token(Token = "0x4000816")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly string _fallback;

	[Token(Token = "0x4000817")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly string _bindingKey;

	[Token(Token = "0x4000818")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly Func<string> _dirtyValue;

	[Token(Token = "0x4000819")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x400081A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private AottgSettingRowLayoutMode _layoutMode;

	[Token(Token = "0x600074A")]
	[Address(RVA = "0x5CBD9E0", Offset = "0x5CBC9E0", VA = "0x5CBD9E0")]
	public AottgDynamicTextRow(string id, string label, Func<string> text, [Optional] string tooltip, [Optional] string fallback, [Optional] string labelKey, [Optional] string tooltipKey, [Optional] string bindingKey, [Optional] Func<string> dirtyValue)
	{
	}

	[Token(Token = "0x600074B")]
	[Address(RVA = "0x5CBDAE0", Offset = "0x5CBCAE0", VA = "0x5CBDAE0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x600074C")]
	[Address(RVA = "0x5CBDC80", Offset = "0x5CBCC80", VA = "0x5CBDC80", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
	}

	[Token(Token = "0x600074D")]
	[Address(RVA = "0x5CBDCB0", Offset = "0x5CBCCB0", VA = "0x5CBDCB0", Slot = "7")]
	public void ApplyLayoutMode(AottgSettingRowLayoutMode mode)
	{
	}

	[Token(Token = "0x600074E")]
	[Address(RVA = "0x5CBDCC0", Offset = "0x5CBCCC0", VA = "0x5CBDCC0", Slot = "6")]
	public void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x600074F")]
	[Address(RVA = "0x5CBDED0", Offset = "0x5CBCED0", VA = "0x5CBDED0")]
	private void BuildText(AottgUi control)
	{
	}

	[Token(Token = "0x6000750")]
	[Address(RVA = "0x5CBDD60", Offset = "0x5CBCD60", VA = "0x5CBDD60")]
	private string TextValue()
	{
		return null;
	}

	[Token(Token = "0x6000751")]
	[Address(RVA = "0x5CBE0B0", Offset = "0x5CBD0B0", VA = "0x5CBE0B0")]
	private string Fallback()
	{
		return null;
	}
}
