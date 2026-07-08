using ExitGames.Client.Photon;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity.UtilityScripts;

[Token(Token = "0x2000021")]
[RequireComponent(typeof(VoiceConnection))]
public class PhotonVoiceLagSimulationGui : MonoBehaviour
{
	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0x20")]
	private VoiceConnection voiceConnection;

	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0x28")]
	private Rect windowRect;

	[Token(Token = "0x400009E")]
	[FieldOffset(Offset = "0x38")]
	private int windowId;

	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x3C")]
	private bool visible;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x40")]
	private PhotonPeer peer;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x48")]
	private float debugLostPercent;

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x3C5E310", Offset = "0x3C5E310", VA = "0x3C5E310")]
	public void Start()
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x3C5E520", Offset = "0x3C5E520", VA = "0x3C5E520")]
	private void OnGUI()
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x3C5E6B0", Offset = "0x3C5E6B0", VA = "0x3C5E6B0")]
	private void NetSimHasNoPeerWindow(int windowId)
	{
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x3C5E780", Offset = "0x3C5E780", VA = "0x3C5E780")]
	private void NetSimWindow(int windowId)
	{
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x3C5F310", Offset = "0x3C5F310", VA = "0x3C5F310")]
	public PhotonVoiceLagSimulationGui()
	{
	}
}
