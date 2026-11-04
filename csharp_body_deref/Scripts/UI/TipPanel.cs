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

[Token(Token = "0x200080C")]
internal class TipPanel : MonoBehaviour
{
	[Token(Token = "0x4002865")]
	[FieldOffset(Offset = "0x20")]
	private Text _label;

	[Token(Token = "0x4002866")]
	[FieldOffset(Offset = "0x28")]
	private int currentTipIndex;

	[Token(Token = "0x6004D9A")]
	[Address(RVA = "0x229AF40", Offset = "0x2299540", VA = "0x18229AF40")]
	public void Setup()
	{
	}

	[Token(Token = "0x6004D9B")]
	[Address(RVA = "0x229AD60", Offset = "0x2299360", VA = "0x18229AD60")]
	public void SetRandomTip()
	{
	}

	[Token(Token = "0x6004D9C")]
	[Address(RVA = "0x229ACE0", Offset = "0x22992E0", VA = "0x18229ACE0")]
	public void SetPressAnyKey()
	{
	}

	[Token(Token = "0x6004D9D")]
	[Address(RVA = "0x229AFD0", Offset = "0x22995D0", VA = "0x18229AFD0")]
	public TipPanel()
	{
	}
}
