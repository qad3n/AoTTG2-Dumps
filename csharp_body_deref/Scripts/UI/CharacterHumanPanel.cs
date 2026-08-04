// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterHumanPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterHumanPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterHumanPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200060B")]
internal class CharacterHumanPanel : CharacterCategoryPanel
{
	[Token(Token = "0x4001CEC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected List<GameObject> _statBars;

	[Token(Token = "0x4001CED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private readonly string LocaleCategory;

	[Token(Token = "0x6003D0F")]
	[Address(RVA = "0x429C3D0", Offset = "0x429C3D0", VA = "0x429C3D0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003D10")]
	[Address(RVA = "0x429E430", Offset = "0x429E430", VA = "0x429E430")]
	protected void OnLoadoutClick()
	{
	}

	[Token(Token = "0x6003D11")]
	[Address(RVA = "0x429DEC0", Offset = "0x429DEC0", VA = "0x429DEC0")]
	protected void SyncStatBars()
	{
	}

	[Token(Token = "0x6003D12")]
	[Address(RVA = "0x429E570", Offset = "0x429E570", VA = "0x429E570")]
	protected void CreateStatBar(string title, int value)
	{
	}

	[Token(Token = "0x6003D13")]
	[Address(RVA = "0x429D2A0", Offset = "0x429D2A0", VA = "0x429D2A0")]
	protected string[] GetCharOptions()
	{
		return null;
	}

	[Token(Token = "0x6003D14")]
	[Address(RVA = "0x429D3D0", Offset = "0x429D3D0", VA = "0x429D3D0")]
	protected string[] GetCharIcons(string[] options)
	{
		return null;
	}

	[Token(Token = "0x6003D15")]
	[Address(RVA = "0x429DBD0", Offset = "0x429DBD0", VA = "0x429DBD0")]
	protected string[] GetSpecialIcons(string[] options)
	{
		return null;
	}

	[Token(Token = "0x6003D16")]
	[Address(RVA = "0x429DE20", Offset = "0x429DE20", VA = "0x429DE20")]
	protected string[] GetSpecialTooltips(string[] options)
	{
		return null;
	}

	[Token(Token = "0x6003D17")]
	[Address(RVA = "0x429EA40", Offset = "0x429EA40", VA = "0x429EA40")]
	public CharacterHumanPanel()
	{
	}
}
