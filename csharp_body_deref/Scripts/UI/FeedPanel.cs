using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x20005EC")]
internal class FeedPanel : BasePanel
{
	[Token(Token = "0x4001CB8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private GameObject _panel;

	[Token(Token = "0x4001CB9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private List<GameObject> _lines;

	[Token(Token = "0x4001CBA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private Transform _horizontalLine;

	[Token(Token = "0x17000B5E")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6003C23")]
		[Address(RVA = "0x3FAD3A0", Offset = "0x3FAD3A0", VA = "0x3FAD3A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003C24")]
	[Address(RVA = "0x3FAD3D0", Offset = "0x3FAD3D0", VA = "0x3FAD3D0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003C25")]
	[Address(RVA = "0x3FAD660", Offset = "0x3FAD660", VA = "0x3FAD660")]
	public void Sync()
	{
	}

	[Token(Token = "0x6003C26")]
	[Address(RVA = "0x3FADA30", Offset = "0x3FADA30", VA = "0x3FADA30")]
	public void AddLine(string line)
	{
	}

	[Token(Token = "0x6003C27")]
	[Address(RVA = "0x3FAD850", Offset = "0x3FAD850", VA = "0x3FAD850")]
	public void AddLines(List<string> lines)
	{
	}

	[Token(Token = "0x6003C28")]
	[Address(RVA = "0x3FADCB0", Offset = "0x3FADCB0", VA = "0x3FADCB0")]
	protected void ClearExcessLines()
	{
	}

	[Token(Token = "0x6003C29")]
	[Address(RVA = "0x3FADAE0", Offset = "0x3FADAE0", VA = "0x3FADAE0")]
	protected GameObject CreateLine(string text)
	{
		return null;
	}

	[Token(Token = "0x6003C2A")]
	[Address(RVA = "0x3FADEE0", Offset = "0x3FADEE0", VA = "0x3FADEE0")]
	public FeedPanel()
	{
	}
}
