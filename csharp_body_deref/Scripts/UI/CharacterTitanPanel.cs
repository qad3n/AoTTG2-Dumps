// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterTitanPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterTitanPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterTitanPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000612")]
internal class CharacterTitanPanel : CharacterCategoryPanel
{
	[Token(Token = "0x4001D1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private readonly string LocaleCategory;

	[Token(Token = "0x6003D4F")]
	[Address(RVA = "0x42A55F0", Offset = "0x42A55F0", VA = "0x42A55F0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003D50")]
	[Address(RVA = "0x42A6810", Offset = "0x42A6810", VA = "0x42A6810")]
	protected void OnLoadoutClick()
	{
	}

	[Token(Token = "0x6003D51")]
	[Address(RVA = "0x42A5F80", Offset = "0x42A5F80", VA = "0x42A5F80")]
	protected string[] GetCharOptions()
	{
		return null;
	}

	[Token(Token = "0x6003D52")]
	[Address(RVA = "0x42A6090", Offset = "0x42A6090", VA = "0x42A6090")]
	protected string[] GetCharIcons(string[] options)
	{
		return null;
	}

	[Token(Token = "0x6003D53")]
	[Address(RVA = "0x42A68F0", Offset = "0x42A68F0", VA = "0x42A68F0")]
	public CharacterTitanPanel()
	{
	}
}
