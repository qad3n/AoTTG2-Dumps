using ExitGames.Client.Photon;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity.UtilityScripts;

[Token(Token = "0x2000022")]
public class PhotonVoiceStatsGui : MonoBehaviour
{
	[Token(Token = "0x40000A2")]
	[FieldOffset(Offset = "0x20")]
	private bool statsWindowOn;

	[Token(Token = "0x40000A3")]
	[FieldOffset(Offset = "0x21")]
	private bool statsOn;

	[Token(Token = "0x40000A4")]
	[FieldOffset(Offset = "0x22")]
	private bool healthStatsVisible;

	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x23")]
	private bool trafficStatsOn;

	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x24")]
	private bool buttonsOn;

	[Token(Token = "0x40000A7")]
	[FieldOffset(Offset = "0x25")]
	private bool voiceStatsOn;

	[Token(Token = "0x40000A8")]
	[FieldOffset(Offset = "0x28")]
	private Rect statsRect;

	[Token(Token = "0x40000A9")]
	[FieldOffset(Offset = "0x38")]
	private int windowId;

	[Token(Token = "0x40000AA")]
	[FieldOffset(Offset = "0x40")]
	private PhotonPeer peer;

	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x48")]
	private VoiceConnection voiceConnection;

	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0x50")]
	private VoiceClient voiceClient;

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x3C5F330", Offset = "0x3C5F330", VA = "0x3C5F330")]
	private void Start()
	{
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x3C5F570", Offset = "0x3C5F570", VA = "0x3C5F570")]
	private void Update()
	{
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x3C5F5A0", Offset = "0x3C5F5A0", VA = "0x3C5F5A0")]
	private void OnGUI()
	{
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x3C5F750", Offset = "0x3C5F750", VA = "0x3C5F750")]
	private void TrafficStatsWindow(int windowId)
	{
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x3C613A0", Offset = "0x3C613A0", VA = "0x3C613A0")]
	public PhotonVoiceStatsGui()
	{
	}
}
