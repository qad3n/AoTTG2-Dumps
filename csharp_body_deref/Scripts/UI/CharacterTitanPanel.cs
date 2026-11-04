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

[Token(Token = "0x200076E")]
internal class CharacterTitanPanel : CharacterCategoryPanel
{
	[Token(Token = "0x40024D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private readonly string LocaleCategory;

	[Token(Token = "0x6004840")]
	[Address(RVA = "0x22280F0", Offset = "0x22266F0", VA = "0x1822280F0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004841")]
	[Address(RVA = "0x2227FE0", Offset = "0x22265E0", VA = "0x182227FE0")]
	protected string[] GetCharOptions()
	{
		return null;
	}

	[Token(Token = "0x6004842")]
	[Address(RVA = "0x2227A00", Offset = "0x2226000", VA = "0x182227A00")]
	protected string[] GetCharIcons(string[] options)
	{
		return null;
	}

	[Token(Token = "0x6004843")]
	[Address(RVA = "0x2228920", Offset = "0x2226F20", VA = "0x182228920")]
	public CharacterTitanPanel()
	{
	}
}
