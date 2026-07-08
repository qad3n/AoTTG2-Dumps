using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001AB")]
public readonly struct AottgScreenSection
{
	[Token(Token = "0x400095C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Action<AottgUi, AottgScreenSectionContext> _buildContent;

	[Token(Token = "0x400095D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private readonly Action<AottgUi, AottgScreenSectionContext> _buildHeaderActions;

	[Token(Token = "0x400095E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly string Id;

	[Token(Token = "0x400095F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly string Label;

	[Token(Token = "0x4000960")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public readonly string TextKey;

	[Token(Token = "0x4000961")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public readonly string Icon;

	[Token(Token = "0x4000962")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public readonly string SearchTitle;

	[Token(Token = "0x4000963")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public readonly string Keywords;

	[Token(Token = "0x4000964")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public readonly bool AutoAddKeywords;

	[Token(Token = "0x4000965")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x41")]
	public readonly bool HideSearch;

	[Token(Token = "0x4000966")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x42")]
	public readonly bool HideHeader;

	[Token(Token = "0x17000118")]
	public bool HasHeaderActions
	{
		[Token(Token = "0x60009C8")]
		[Address(RVA = "0x41038E0", Offset = "0x41038E0", VA = "0x41038E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60009C9")]
	[Address(RVA = "0x41038F0", Offset = "0x41038F0", VA = "0x41038F0")]
	public AottgScreenSection(string id, string label, string icon, Action<AottgUi> buildContent, [Optional] string textKey, [Optional] string keywords, [Optional][DefaultParameterValue(false)] bool autoAddKeywords, [Optional] string searchTitle, [Optional] Action<AottgUi, AottgScreenSectionContext> buildHeaderActions, bool hideSearch = false, bool hideHeader = false)
	{
	}

	[Token(Token = "0x60009CA")]
	[Address(RVA = "0x40F8370", Offset = "0x40F8370", VA = "0x40F8370")]
	public AottgScreenSection(string id, string label, string icon, Action<AottgUi, AottgScreenSectionContext> buildContent, [Optional] string textKey, [Optional] string keywords, [Optional][DefaultParameterValue(false)] bool autoAddKeywords, [Optional] string searchTitle, [Optional] Action<AottgUi, AottgScreenSectionContext> buildHeaderActions, bool hideSearch = false, bool hideHeader = false)
	{
	}

	[Token(Token = "0x60009CB")]
	[Address(RVA = "0x4103AD0", Offset = "0x4103AD0", VA = "0x4103AD0")]
	public void Build(AottgUi ui, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x60009CC")]
	[Address(RVA = "0x4103AE0", Offset = "0x4103AE0", VA = "0x4103AE0")]
	public void BuildHeaderActions(AottgUi ui, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x60009CD")]
	[Address(RVA = "0x4103A40", Offset = "0x4103A40", VA = "0x4103A40")]
	private static string SafeId(string value)
	{
		return null;
	}
}
