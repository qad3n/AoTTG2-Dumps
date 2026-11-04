// ==================== AoTTG2 cross-reference ====================
// Type: UI.VoiceChatPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/VoiceChatPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/VoiceChatPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace UI;

[Token(Token = "0x20007CA")]
internal class VoiceChatPanel : BasePanel
{
	[Token(Token = "0x400276D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private GameObject _panel;

	[Token(Token = "0x400276E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Dictionary<int, GameObject> _playersTalking;

	[Token(Token = "0x17000D9C")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004B93")]
		[Address(RVA = "0x22842E0", Offset = "0x22828E0", VA = "0x1822842E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004B94")]
	[Address(RVA = "0x22840D0", Offset = "0x22826D0", VA = "0x1822840D0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004B95")]
	[Address(RVA = "0x2283BB0", Offset = "0x22821B0", VA = "0x182283BB0")]
	public void AddPlayer(Player player)
	{
	}

	[Token(Token = "0x6004B96")]
	[Address(RVA = "0x2283FE0", Offset = "0x22825E0", VA = "0x182283FE0")]
	public void RemovePlayer(Player player)
	{
	}

	[Token(Token = "0x6004B97")]
	[Address(RVA = "0x2283DE0", Offset = "0x22823E0", VA = "0x182283DE0")]
	protected GameObject CreateLine(string text)
	{
		return null;
	}

	[Token(Token = "0x6004B98")]
	[Address(RVA = "0x2284260", Offset = "0x2282860", VA = "0x182284260")]
	public VoiceChatPanel()
	{
	}
}
