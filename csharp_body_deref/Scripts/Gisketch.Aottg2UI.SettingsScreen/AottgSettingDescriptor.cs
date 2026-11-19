// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingDescriptor
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingDescriptor.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000177")]
internal sealed class AottgSettingDescriptor
{
	[Token(Token = "0x4000869")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly string Id;

	[Token(Token = "0x400086A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly string Label;

	[Token(Token = "0x400086B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public readonly AottgSettingControlKind Kind;

	[Token(Token = "0x400086C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public readonly IAottgSettingAdapter Adapter;

	[Token(Token = "0x400086D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public string LabelKey;

	[Token(Token = "0x400086E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public IAottgSettingAdapter SecondaryAdapter;

	[Token(Token = "0x400086F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public string Tooltip;

	[Token(Token = "0x4000870")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public string TooltipKey;

	[Token(Token = "0x4000871")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public string SearchTitle;

	[Token(Token = "0x4000872")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	public string SearchKeywords;

	[Token(Token = "0x4000873")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public string Icon;

	[Token(Token = "0x4000874")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public bool Disabled;

	[Token(Token = "0x4000875")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x69")]
	public bool ShowValue;

	[Token(Token = "0x4000876")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	public int MaxVisibleItems;

	[Token(Token = "0x4000877")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	public AottgSettingOption[] Options;

	[Token(Token = "0x4000878")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	public string ActionText;

	[Token(Token = "0x4000879")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	public string ActionId;

	[Token(Token = "0x400087A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	public Action<GisketchActionContext> Action;

	[Token(Token = "0x400087B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	public Func<string> DirtyValue;

	[Token(Token = "0x400087C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	public string ReadOnlyText;

	[Token(Token = "0x400087D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	public Action<GisketchActionContext> OnChanged;

	[Token(Token = "0x400087E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public Action<GisketchActionContext> OnCommitted;

	[Token(Token = "0x6000803")]
	[Address(RVA = "0x5CC65D0", Offset = "0x5CC55D0", VA = "0x5CC65D0")]
	public AottgSettingDescriptor(string id, string label, AottgSettingControlKind kind, [Optional] IAottgSettingAdapter adapter)
	{
	}

	[Token(Token = "0x6000804")]
	[Address(RVA = "0x5CC6680", Offset = "0x5CC5680", VA = "0x5CC6680")]
	public void Changed(GisketchActionContext context)
	{
	}
}
