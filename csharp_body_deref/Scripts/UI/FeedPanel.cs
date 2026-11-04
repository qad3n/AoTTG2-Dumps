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

[Token(Token = "0x2000792")]
internal class FeedPanel : BasePanel
{
	[Token(Token = "0x40025AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private GameObject _panel;

	[Token(Token = "0x40025AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private List<GameObject> _lines;

	[Token(Token = "0x40025AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private Transform _horizontalLine;

	[Token(Token = "0x17000D29")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004962")]
		[Address(RVA = "0x22458E0", Offset = "0x2243EE0", VA = "0x1822458E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004963")]
	[Address(RVA = "0x22453E0", Offset = "0x22439E0", VA = "0x1822453E0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004964")]
	[Address(RVA = "0x22456A0", Offset = "0x2243CA0", VA = "0x1822456A0")]
	public void Sync()
	{
	}

	[Token(Token = "0x6004965")]
	[Address(RVA = "0x2244D00", Offset = "0x2243300", VA = "0x182244D00")]
	public void AddLine(string line)
	{
	}

	[Token(Token = "0x6004966")]
	[Address(RVA = "0x2244DD0", Offset = "0x22433D0", VA = "0x182244DD0")]
	public void AddLines(List<string> lines)
	{
	}

	[Token(Token = "0x6004967")]
	[Address(RVA = "0x2244FA0", Offset = "0x22435A0", VA = "0x182244FA0")]
	protected void ClearExcessLines()
	{
	}

	[Token(Token = "0x6004968")]
	[Address(RVA = "0x22451D0", Offset = "0x22437D0", VA = "0x1822451D0")]
	protected GameObject CreateLine(string text)
	{
		return null;
	}

	[Token(Token = "0x6004969")]
	[Address(RVA = "0x2245860", Offset = "0x2243E60", VA = "0x182245860")]
	public FeedPanel()
	{
	}
}
