// ==================== AoTTG2 cross-reference ====================
// Type: UI.FeedPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/FeedPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/FeedPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200083D")]
internal class FeedPanel : BasePanel
{
	[Token(Token = "0x400291B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private GameObject _panel;

	[Token(Token = "0x400291C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private List<GameObject> _lines;

	[Token(Token = "0x400291D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private Transform _horizontalLine;

	[Token(Token = "0x17000DA5")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004E89")]
		[Address(RVA = "0x5C21340", Offset = "0x5C20340", VA = "0x5C21340", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004E8A")]
	[Address(RVA = "0x5C21370", Offset = "0x5C20370", VA = "0x5C21370", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004E8B")]
	[Address(RVA = "0x5C21600", Offset = "0x5C20600", VA = "0x5C21600")]
	public void Sync()
	{
	}

	[Token(Token = "0x6004E8C")]
	[Address(RVA = "0x5C219A0", Offset = "0x5C209A0", VA = "0x5C219A0")]
	public void AddLine(string line)
	{
	}

	[Token(Token = "0x6004E8D")]
	[Address(RVA = "0x5C217E0", Offset = "0x5C207E0", VA = "0x5C217E0")]
	public void AddLines(List<string> lines)
	{
	}

	[Token(Token = "0x6004E8E")]
	[Address(RVA = "0x5C21C60", Offset = "0x5C20C60", VA = "0x5C21C60")]
	protected void ClearExcessLines()
	{
	}

	[Token(Token = "0x6004E8F")]
	[Address(RVA = "0x5C21A50", Offset = "0x5C20A50", VA = "0x5C21A50")]
	protected GameObject CreateLine(string text)
	{
		return null;
	}

	[Token(Token = "0x6004E90")]
	[Address(RVA = "0x5C21E90", Offset = "0x5C20E90", VA = "0x5C21E90")]
	public FeedPanel()
	{
	}
}
