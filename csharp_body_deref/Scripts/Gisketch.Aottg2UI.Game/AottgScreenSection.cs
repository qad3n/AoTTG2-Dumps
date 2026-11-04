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

[Token(Token = "0x20002ED")]
public readonly struct AottgScreenSection
{
	[Token(Token = "0x4000EF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Action<AottgUi, AottgScreenSectionContext> _buildContent;

	[Token(Token = "0x4000EF4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private readonly Action<AottgUi, AottgScreenSectionContext> _buildHeaderActions;

	[Token(Token = "0x4000EF5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly string Id;

	[Token(Token = "0x4000EF6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly string Label;

	[Token(Token = "0x4000EF7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public readonly string TextKey;

	[Token(Token = "0x4000EF8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public readonly string Icon;

	[Token(Token = "0x4000EF9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public readonly string SearchTitle;

	[Token(Token = "0x4000EFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public readonly string Keywords;

	[Token(Token = "0x4000EFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public readonly bool AutoAddKeywords;

	[Token(Token = "0x4000EFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x41")]
	public readonly bool HideSearch;

	[Token(Token = "0x4000EFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x42")]
	public readonly bool HideHeader;

	[Token(Token = "0x17000202")]
	public bool HasHeaderActions
	{
		[Token(Token = "0x600124B")]
		[Address(RVA = "0x1E2DAD0", Offset = "0x1E2C0D0", VA = "0x181E2DAD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600124C")]
	[Address(RVA = "0x1E2D750", Offset = "0x1E2BD50", VA = "0x181E2D750")]
	public AottgScreenSection(string id, string label, string icon, Action<AottgUi> buildContent, [Optional] string textKey, [Optional] string keywords, [Optional][DefaultParameterValue(false)] bool autoAddKeywords, [Optional] string searchTitle, [Optional] Action<AottgUi, AottgScreenSectionContext> buildHeaderActions, bool hideSearch = false, bool hideHeader = false)
	{
	}

	[Token(Token = "0x600124D")]
	[Address(RVA = "0x1E2D890", Offset = "0x1E2BE90", VA = "0x181E2D890")]
	public AottgScreenSection(string id, string label, string icon, Action<AottgUi, AottgScreenSectionContext> buildContent, [Optional] string textKey, [Optional] string keywords, [Optional][DefaultParameterValue(false)] bool autoAddKeywords, [Optional] string searchTitle, [Optional] Action<AottgUi, AottgScreenSectionContext> buildHeaderActions, bool hideSearch = false, bool hideHeader = false)
	{
	}

	[Token(Token = "0x600124E")]
	[Address(RVA = "0x1E2D680", Offset = "0x1E2BC80", VA = "0x181E2D680")]
	public void Build(AottgUi ui, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x600124F")]
	[Address(RVA = "0x1E2D640", Offset = "0x1E2BC40", VA = "0x181E2D640")]
	public void BuildHeaderActions(AottgUi ui, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6001250")]
	[Address(RVA = "0x1E2D6C0", Offset = "0x1E2BCC0", VA = "0x181E2D6C0")]
	private static string SafeId(string value)
	{
		return null;
	}
}
