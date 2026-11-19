// ==================== AoTTG2 cross-reference ====================
// Type: UI.TipPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/TipPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/TipPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200088C")]
internal class TipPanel : MonoBehaviour
{
	[Token(Token = "0x4002B21")]
	[FieldOffset(Offset = "0x20")]
	private Text _label;

	[Token(Token = "0x4002B22")]
	[FieldOffset(Offset = "0x28")]
	private int currentTipIndex;

	[Token(Token = "0x6005151")]
	[Address(RVA = "0x5C5BC40", Offset = "0x5C5AC40", VA = "0x5C5BC40")]
	public void Setup()
	{
	}

	[Token(Token = "0x6005152")]
	[Address(RVA = "0x5C560C0", Offset = "0x5C550C0", VA = "0x5C560C0")]
	public void SetRandomTip()
	{
	}

	[Token(Token = "0x6005153")]
	[Address(RVA = "0x5C5BCC0", Offset = "0x5C5ACC0", VA = "0x5C5BCC0")]
	public static string RandomTipText(ref int lastIndex)
	{
		return null;
	}

	[Token(Token = "0x6005154")]
	[Address(RVA = "0x5C5C250", Offset = "0x5C5B250", VA = "0x5C5C250")]
	public void SetPressAnyKey()
	{
	}

	[Token(Token = "0x6005155")]
	[Address(RVA = "0x5C5C2D0", Offset = "0x5C5B2D0", VA = "0x5C5C2D0")]
	public TipPanel()
	{
	}
}
