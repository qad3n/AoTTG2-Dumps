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

[Token(Token = "0x2000637")]
internal class FeedPanel : BasePanel
{
	[Token(Token = "0x4001DF5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private GameObject _panel;

	[Token(Token = "0x4001DF6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private List<GameObject> _lines;

	[Token(Token = "0x4001DF7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private Transform _horizontalLine;

	[Token(Token = "0x17000BD6")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6003E6D")]
		[Address(RVA = "0x42BF490", Offset = "0x42BF490", VA = "0x42BF490", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003E6E")]
	[Address(RVA = "0x42BF4C0", Offset = "0x42BF4C0", VA = "0x42BF4C0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003E6F")]
	[Address(RVA = "0x42BF750", Offset = "0x42BF750", VA = "0x42BF750")]
	public void Sync()
	{
	}

	[Token(Token = "0x6003E70")]
	[Address(RVA = "0x42BFB20", Offset = "0x42BFB20", VA = "0x42BFB20")]
	public void AddLine(string line)
	{
	}

	[Token(Token = "0x6003E71")]
	[Address(RVA = "0x42BF940", Offset = "0x42BF940", VA = "0x42BF940")]
	public void AddLines(List<string> lines)
	{
	}

	[Token(Token = "0x6003E72")]
	[Address(RVA = "0x42BFDA0", Offset = "0x42BFDA0", VA = "0x42BFDA0")]
	protected void ClearExcessLines()
	{
	}

	[Token(Token = "0x6003E73")]
	[Address(RVA = "0x42BFBD0", Offset = "0x42BFBD0", VA = "0x42BFBD0")]
	protected GameObject CreateLine(string text)
	{
		return null;
	}

	[Token(Token = "0x6003E74")]
	[Address(RVA = "0x42BFFD0", Offset = "0x42BFFD0", VA = "0x42BFFD0")]
	public FeedPanel()
	{
	}
}
