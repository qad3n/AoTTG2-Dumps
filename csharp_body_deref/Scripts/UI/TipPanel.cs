// ==================== AoTTG2 cross-reference ====================
// Type: UI.TipPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/TipPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/TipPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20006B1")]
internal class TipPanel : MonoBehaviour
{
	[Token(Token = "0x4002091")]
	[FieldOffset(Offset = "0x20")]
	private Text _label;

	[Token(Token = "0x4002092")]
	[FieldOffset(Offset = "0x28")]
	private int currentTipIndex;

	[Token(Token = "0x60042A6")]
	[Address(RVA = "0x4313740", Offset = "0x4313740", VA = "0x4313740")]
	public void Setup()
	{
	}

	[Token(Token = "0x60042A7")]
	[Address(RVA = "0x43137C0", Offset = "0x43137C0", VA = "0x43137C0")]
	public void SetRandomTip()
	{
	}

	[Token(Token = "0x60042A8")]
	[Address(RVA = "0x4313990", Offset = "0x4313990", VA = "0x4313990")]
	public void SetPressAnyKey()
	{
	}

	[Token(Token = "0x60042A9")]
	[Address(RVA = "0x4313A10", Offset = "0x4313A10", VA = "0x4313A10")]
	public TipPanel()
	{
	}
}
