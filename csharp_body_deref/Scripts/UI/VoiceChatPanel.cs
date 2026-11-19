// ==================== AoTTG2 cross-reference ====================
// Type: UI.VoiceChatPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/VoiceChatPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/VoiceChatPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000876")]
internal class VoiceChatPanel : BasePanel
{
	[Token(Token = "0x4002AED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private GameObject _panel;

	[Token(Token = "0x4002AEE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private readonly Dictionary<int, Text> _labels;

	[Token(Token = "0x17000E0E")]
	protected override string ThemePanel
	{
		[Token(Token = "0x60050B4")]
		[Address(RVA = "0x5C538D0", Offset = "0x5C528D0", VA = "0x5C538D0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60050B5")]
	[Address(RVA = "0x5C53900", Offset = "0x5C52900", VA = "0x5C53900", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60050B6")]
	[Address(RVA = "0x5C53A70", Offset = "0x5C52A70", VA = "0x5C53A70")]
	public void AddPlayer(Player player)
	{
	}

	[Token(Token = "0x60050B7")]
	[Address(RVA = "0x5C53F40", Offset = "0x5C52F40", VA = "0x5C53F40")]
	public void RemovePlayer(Player player)
	{
	}

	[Token(Token = "0x60050B8")]
	[Address(RVA = "0x5C53FF0", Offset = "0x5C52FF0", VA = "0x5C53FF0")]
	public void ClearPlayer(int actorNumber)
	{
	}

	[Token(Token = "0x60050B9")]
	[Address(RVA = "0x5C540C0", Offset = "0x5C530C0", VA = "0x5C540C0")]
	public VoiceChatPanel()
	{
	}
}
