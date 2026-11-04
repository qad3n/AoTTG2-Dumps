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

[Token(Token = "0x200016F")]
internal sealed class AottgSettingDescriptor
{
	[Token(Token = "0x4000820")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly string Id;

	[Token(Token = "0x4000821")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly string Label;

	[Token(Token = "0x4000822")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public readonly AottgSettingControlKind Kind;

	[Token(Token = "0x4000823")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public readonly IAottgSettingAdapter Adapter;

	[Token(Token = "0x4000824")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public string LabelKey;

	[Token(Token = "0x4000825")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public IAottgSettingAdapter SecondaryAdapter;

	[Token(Token = "0x4000826")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public string Tooltip;

	[Token(Token = "0x4000827")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public string TooltipKey;

	[Token(Token = "0x4000828")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public string SearchTitle;

	[Token(Token = "0x4000829")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	public string SearchKeywords;

	[Token(Token = "0x400082A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public string Icon;

	[Token(Token = "0x400082B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public bool Disabled;

	[Token(Token = "0x400082C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x69")]
	public bool ShowValue;

	[Token(Token = "0x400082D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	public int MaxVisibleItems;

	[Token(Token = "0x400082E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	public AottgSettingOption[] Options;

	[Token(Token = "0x400082F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	public string ActionText;

	[Token(Token = "0x4000830")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	public string ActionId;

	[Token(Token = "0x4000831")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	public Action<GisketchActionContext> Action;

	[Token(Token = "0x4000832")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	public Func<string> DirtyValue;

	[Token(Token = "0x4000833")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	public string ReadOnlyText;

	[Token(Token = "0x4000834")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	public Action<GisketchActionContext> OnChanged;

	[Token(Token = "0x600078D")]
	[Address(RVA = "0x230BF80", Offset = "0x230A580", VA = "0x18230BF80")]
	public AottgSettingDescriptor(string id, string label, AottgSettingControlKind kind, [Optional] IAottgSettingAdapter adapter)
	{
	}

	[Token(Token = "0x600078E")]
	[Address(RVA = "0x230BE70", Offset = "0x230A470", VA = "0x18230BE70")]
	public void Changed(GisketchActionContext context)
	{
	}
}
