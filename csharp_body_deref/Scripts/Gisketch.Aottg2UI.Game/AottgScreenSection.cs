// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgScreenSection
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgScreenSection.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200034B")]
public readonly struct AottgScreenSection
{
	[Token(Token = "0x4001089")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Action<AottgUi, AottgScreenSectionContext> _buildContent;

	[Token(Token = "0x400108A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private readonly Action<AottgUi, AottgScreenSectionContext> _buildHeaderActions;

	[Token(Token = "0x400108B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly string Id;

	[Token(Token = "0x400108C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly string Text;

	[Token(Token = "0x400108D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public readonly string TextKey;

	[Token(Token = "0x400108E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public readonly string Icon;

	[Token(Token = "0x400108F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public readonly string Keywords;

	[Token(Token = "0x4001090")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public readonly bool AutoAddKeywords;

	[Token(Token = "0x4001091")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x39")]
	public readonly bool HideSearch;

	[Token(Token = "0x4001092")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3A")]
	public readonly bool HideHeader;

	[Token(Token = "0x1700023F")]
	public bool HasHeaderActions
	{
		[Token(Token = "0x60014A1")]
		[Address(RVA = "0x5815EE0", Offset = "0x5814EE0", VA = "0x5815EE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60014A2")]
	[Address(RVA = "0x5815EF0", Offset = "0x5814EF0", VA = "0x5815EF0")]
	public AottgScreenSection(string id, string textKey, string icon, Action<AottgUi> buildContent, [Optional] string keywords, [Optional][DefaultParameterValue(false)] bool autoAddKeywords, [Optional] Action<AottgUi, AottgScreenSectionContext> buildHeaderActions, bool hideSearch = false, bool hideHeader = false)
	{
	}

	[Token(Token = "0x60014A3")]
	[Address(RVA = "0x5816070", Offset = "0x5815070", VA = "0x5816070")]
	public AottgScreenSection(string id, string textKey, string icon, Action<AottgUi, AottgScreenSectionContext> buildContent, [Optional] string keywords, [Optional][DefaultParameterValue(false)] bool autoAddKeywords, [Optional] Action<AottgUi, AottgScreenSectionContext> buildHeaderActions, bool hideSearch = false, bool hideHeader = false)
	{
	}

	[Token(Token = "0x60014A4")]
	[Address(RVA = "0x5816130", Offset = "0x5815130", VA = "0x5816130")]
	private AottgScreenSection(string id, string textKey, string text, string icon, Action<AottgUi, AottgScreenSectionContext> buildContent, string keywords, bool autoAddKeywords, Action<AottgUi, AottgScreenSectionContext> buildHeaderActions, bool hideSearch, bool hideHeader)
	{
	}

	[Token(Token = "0x60014A5")]
	[Address(RVA = "0x58162E0", Offset = "0x58152E0", VA = "0x58162E0")]
	public static AottgScreenSection WithText(string id, string text, string icon, Action<AottgUi, AottgScreenSectionContext> buildContent, [Optional] string keywords, [Optional][DefaultParameterValue(false)] bool autoAddKeywords, [Optional] Action<AottgUi, AottgScreenSectionContext> buildHeaderActions, bool hideSearch = false, bool hideHeader = false)
	{
		return default(AottgScreenSection);
	}

	[Token(Token = "0x60014A6")]
	[Address(RVA = "0x5815FB0", Offset = "0x5814FB0", VA = "0x5815FB0")]
	private static Action<AottgUi, AottgScreenSectionContext> Adapt(Action<AottgUi> buildContent)
	{
		return null;
	}

	[Token(Token = "0x60014A7")]
	[Address(RVA = "0x5816360", Offset = "0x5815360", VA = "0x5816360")]
	public void Build(AottgUi ui, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x60014A8")]
	[Address(RVA = "0x5816380", Offset = "0x5815380", VA = "0x5816380")]
	public void BuildHeaderActions(AottgUi ui, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x60014A9")]
	[Address(RVA = "0x5816250", Offset = "0x5815250", VA = "0x5816250")]
	private static string SafeId(string value)
	{
		return null;
	}
}
