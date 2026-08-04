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

[Token(Token = "0x200066E")]
internal class VoiceChatPanel : BasePanel
{
	[Token(Token = "0x4001F92")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private GameObject _panel;

	[Token(Token = "0x4001F93")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Dictionary<int, GameObject> _playersTalking;

	[Token(Token = "0x17000C51")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004096")]
		[Address(RVA = "0x42ED8D0", Offset = "0x42ED8D0", VA = "0x42ED8D0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004097")]
	[Address(RVA = "0x42ED900", Offset = "0x42ED900", VA = "0x42ED900", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004098")]
	[Address(RVA = "0x42EDA70", Offset = "0x42EDA70", VA = "0x42EDA70")]
	public void AddPlayer(Player player)
	{
	}

	[Token(Token = "0x6004099")]
	[Address(RVA = "0x42EDC80", Offset = "0x42EDC80", VA = "0x42EDC80")]
	public void RemovePlayer(Player player)
	{
	}

	[Token(Token = "0x600409A")]
	[Address(RVA = "0x42EDD70", Offset = "0x42EDD70", VA = "0x42EDD70")]
	protected GameObject CreateLine(string text)
	{
		return null;
	}

	[Token(Token = "0x600409B")]
	[Address(RVA = "0x42EDF30", Offset = "0x42EDF30", VA = "0x42EDF30")]
	public VoiceChatPanel()
	{
	}
}
