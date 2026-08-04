// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgScreenSection
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgScreenSection.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001DE")]
public readonly struct AottgScreenSection
{
	[Token(Token = "0x4000A22")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Action<AottgUi, AottgScreenSectionContext> _buildContent;

	[Token(Token = "0x4000A23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private readonly Action<AottgUi, AottgScreenSectionContext> _buildHeaderActions;

	[Token(Token = "0x4000A24")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly string Id;

	[Token(Token = "0x4000A25")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly string Label;

	[Token(Token = "0x4000A26")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public readonly string TextKey;

	[Token(Token = "0x4000A27")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public readonly string Icon;

	[Token(Token = "0x4000A28")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public readonly string SearchTitle;

	[Token(Token = "0x4000A29")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public readonly string Keywords;

	[Token(Token = "0x4000A2A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public readonly bool AutoAddKeywords;

	[Token(Token = "0x4000A2B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x41")]
	public readonly bool HideSearch;

	[Token(Token = "0x4000A2C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x42")]
	public readonly bool HideHeader;

	[Token(Token = "0x1700016E")]
	public bool HasHeaderActions
	{
		[Token(Token = "0x6000B45")]
		[Address(RVA = "0x4435280", Offset = "0x4435280", VA = "0x4435280")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x4435290", Offset = "0x4435290", VA = "0x4435290")]
	public AottgScreenSection(string id, string label, string icon, Action<AottgUi> buildContent, [Optional] string textKey, [Optional] string keywords, [Optional][DefaultParameterValue(false)] bool autoAddKeywords, [Optional] string searchTitle, [Optional] Action<AottgUi, AottgScreenSectionContext> buildHeaderActions, bool hideSearch = false, bool hideHeader = false)
	{
	}

	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x44353E0", Offset = "0x44353E0", VA = "0x44353E0")]
	public AottgScreenSection(string id, string label, string icon, Action<AottgUi, AottgScreenSectionContext> buildContent, [Optional] string textKey, [Optional] string keywords, [Optional][DefaultParameterValue(false)] bool autoAddKeywords, [Optional] string searchTitle, [Optional] Action<AottgUi, AottgScreenSectionContext> buildHeaderActions, bool hideSearch = false, bool hideHeader = false)
	{
	}

	[Token(Token = "0x6000B48")]
	[Address(RVA = "0x44355C0", Offset = "0x44355C0", VA = "0x44355C0")]
	public void Build(AottgUi ui, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6000B49")]
	[Address(RVA = "0x44355D0", Offset = "0x44355D0", VA = "0x44355D0")]
	public void BuildHeaderActions(AottgUi ui, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6000B4A")]
	[Address(RVA = "0x4435530", Offset = "0x4435530", VA = "0x4435530")]
	private static string SafeId(string value)
	{
		return null;
	}
}
