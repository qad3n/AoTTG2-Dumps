// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterTitanPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/CharacterTitanPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterTitanPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000818")]
internal class CharacterTitanPanel : CharacterCategoryPanel
{
	[Token(Token = "0x4002846")]
	private const string RandomOption = "Random";

	[Token(Token = "0x6004D60")]
	[Address(RVA = "0x5C075F0", Offset = "0x5C065F0", VA = "0x5C075F0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004D61")]
	[Address(RVA = "0x5C07CF0", Offset = "0x5C06CF0", VA = "0x5C07CF0")]
	protected string[] GetCharOptions()
	{
		return null;
	}

	[Token(Token = "0x6004D62")]
	[Address(RVA = "0x5C07E00", Offset = "0x5C06E00", VA = "0x5C07E00")]
	protected string[] GetCharIcons(string[] options)
	{
		return null;
	}

	[Token(Token = "0x6004D63")]
	[Address(RVA = "0x5C08550", Offset = "0x5C07550", VA = "0x5C08550")]
	public CharacterTitanPanel()
	{
	}
}
