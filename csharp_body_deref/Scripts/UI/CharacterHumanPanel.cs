// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterHumanPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/CharacterHumanPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterHumanPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200080F")]
internal class CharacterHumanPanel : CharacterCategoryPanel
{
	[Token(Token = "0x4002810")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	protected List<GameObject> _statBars;

	[Token(Token = "0x6004D0E")]
	[Address(RVA = "0x5BFE2F0", Offset = "0x5BFD2F0", VA = "0x5BFE2F0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004D0F")]
	[Address(RVA = "0x5BFFDB0", Offset = "0x5BFEDB0", VA = "0x5BFFDB0")]
	protected void OnLoadoutClick()
	{
	}

	[Token(Token = "0x6004D10")]
	[Address(RVA = "0x5BFF840", Offset = "0x5BFE840", VA = "0x5BFF840")]
	protected void SyncStatBars()
	{
	}

	[Token(Token = "0x6004D11")]
	[Address(RVA = "0x5BFFDD0", Offset = "0x5BFEDD0", VA = "0x5BFFDD0")]
	protected void CreateStatBar(string title, int value)
	{
	}

	[Token(Token = "0x6004D12")]
	[Address(RVA = "0x5BFEBF0", Offset = "0x5BFDBF0", VA = "0x5BFEBF0")]
	protected string[] GetCharOptions()
	{
		return null;
	}

	[Token(Token = "0x6004D13")]
	[Address(RVA = "0x5BFED20", Offset = "0x5BFDD20", VA = "0x5BFED20")]
	protected string[] GetCharIcons(string[] options)
	{
		return null;
	}

	[Token(Token = "0x6004D14")]
	[Address(RVA = "0x5BFF4C0", Offset = "0x5BFE4C0", VA = "0x5BFF4C0")]
	protected string[] GetSpecialIcons(string[] options)
	{
		return null;
	}

	[Token(Token = "0x6004D15")]
	[Address(RVA = "0x5BFF700", Offset = "0x5BFE700", VA = "0x5BFF700")]
	protected string[] GetSpecialTooltips(string[] options)
	{
		return null;
	}

	[Token(Token = "0x6004D16")]
	[Address(RVA = "0x5C00050", Offset = "0x5BFF050", VA = "0x5C00050")]
	public CharacterHumanPanel()
	{
	}
}
