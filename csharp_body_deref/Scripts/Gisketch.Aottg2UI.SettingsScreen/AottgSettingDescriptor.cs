// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingDescriptor
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingDescriptor.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000128")]
internal sealed class AottgSettingDescriptor
{
	[Token(Token = "0x40006C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly string Id;

	[Token(Token = "0x40006C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly string Label;

	[Token(Token = "0x40006C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public readonly AottgSettingControlKind Kind;

	[Token(Token = "0x40006C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public readonly IAottgSettingAdapter Adapter;

	[Token(Token = "0x40006C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public IAottgSettingAdapter SecondaryAdapter;

	[Token(Token = "0x40006C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public string Tooltip;

	[Token(Token = "0x40006CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public string SearchTitle;

	[Token(Token = "0x40006CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public string SearchKeywords;

	[Token(Token = "0x40006CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public string Icon;

	[Token(Token = "0x40006CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	public bool Disabled;

	[Token(Token = "0x40006CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x59")]
	public bool ShowValue;

	[Token(Token = "0x40006CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	public int MaxVisibleItems;

	[Token(Token = "0x40006D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public AottgSettingOption[] Options;

	[Token(Token = "0x40006D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public string ActionText;

	[Token(Token = "0x40006D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	public string ActionId;

	[Token(Token = "0x40006D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	public Action<GisketchActionContext> Action;

	[Token(Token = "0x40006D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	public string ReadOnlyText;

	[Token(Token = "0x40006D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	public Action<GisketchActionContext> OnChanged;

	[Token(Token = "0x6000617")]
	[Address(RVA = "0x4360940", Offset = "0x4360940", VA = "0x4360940")]
	public AottgSettingDescriptor(string id, string label, AottgSettingControlKind kind, [Optional] IAottgSettingAdapter adapter)
	{
	}

	[Token(Token = "0x6000618")]
	[Address(RVA = "0x43609F0", Offset = "0x43609F0", VA = "0x43609F0")]
	public void Changed(GisketchActionContext context)
	{
	}
}
