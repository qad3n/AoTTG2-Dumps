using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000623")]
internal class VoiceChatPanel : BasePanel
{
	[Token(Token = "0x4001E4B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private GameObject _panel;

	[Token(Token = "0x4001E4C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Dictionary<int, GameObject> _playersTalking;

	[Token(Token = "0x17000BD9")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6003E49")]
		[Address(RVA = "0x3FDAEB0", Offset = "0x3FDAEB0", VA = "0x3FDAEB0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003E4A")]
	[Address(RVA = "0x3FDAEE0", Offset = "0x3FDAEE0", VA = "0x3FDAEE0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003E4B")]
	[Address(RVA = "0x3FDB050", Offset = "0x3FDB050", VA = "0x3FDB050")]
	public void AddPlayer(Player player)
	{
	}

	[Token(Token = "0x6003E4C")]
	[Address(RVA = "0x3FDB260", Offset = "0x3FDB260", VA = "0x3FDB260")]
	public void RemovePlayer(Player player)
	{
	}

	[Token(Token = "0x6003E4D")]
	[Address(RVA = "0x3FDB350", Offset = "0x3FDB350", VA = "0x3FDB350")]
	protected GameObject CreateLine(string text)
	{
		return null;
	}

	[Token(Token = "0x6003E4E")]
	[Address(RVA = "0x3FDB510", Offset = "0x3FDB510", VA = "0x3FDB510")]
	public VoiceChatPanel()
	{
	}
}
