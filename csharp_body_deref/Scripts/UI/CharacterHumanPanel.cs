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

[Token(Token = "0x2000767")]
internal class CharacterHumanPanel : CharacterCategoryPanel
{
	[Token(Token = "0x400249D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	protected List<GameObject> _statBars;

	[Token(Token = "0x400249E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private readonly string LocaleCategory;

	[Token(Token = "0x60047F2")]
	[Address(RVA = "0x221F710", Offset = "0x221DD10", VA = "0x18221F710", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60047F3")]
	[Address(RVA = "0x221F6F0", Offset = "0x221DCF0", VA = "0x18221F6F0")]
	protected void OnLoadoutClick()
	{
	}

	[Token(Token = "0x60047F4")]
	[Address(RVA = "0x2220170", Offset = "0x221E770", VA = "0x182220170")]
	protected void SyncStatBars()
	{
	}

	[Token(Token = "0x60047F5")]
	[Address(RVA = "0x221E9F0", Offset = "0x221CFF0", VA = "0x18221E9F0")]
	protected void CreateStatBar(string title, int value)
	{
	}

	[Token(Token = "0x60047F6")]
	[Address(RVA = "0x221F330", Offset = "0x221D930", VA = "0x18221F330")]
	protected string[] GetCharOptions()
	{
		return null;
	}

	[Token(Token = "0x60047F7")]
	[Address(RVA = "0x221ECB0", Offset = "0x221D2B0", VA = "0x18221ECB0")]
	protected string[] GetCharIcons(string[] options)
	{
		return null;
	}

	[Token(Token = "0x60047F8")]
	[Address(RVA = "0x221F460", Offset = "0x221DA60", VA = "0x18221F460")]
	protected string[] GetSpecialIcons(string[] options)
	{
		return null;
	}

	[Token(Token = "0x60047F9")]
	[Address(RVA = "0x221F640", Offset = "0x221DC40", VA = "0x18221F640")]
	protected string[] GetSpecialTooltips(string[] options)
	{
		return null;
	}

	[Token(Token = "0x60047FA")]
	[Address(RVA = "0x2220860", Offset = "0x221EE60", VA = "0x182220860")]
	public CharacterHumanPanel()
	{
	}
}
