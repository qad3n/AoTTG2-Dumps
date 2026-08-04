// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.UtilityScripts.PhotonVoiceStatsGui
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/UtilityScripts/PhotonVoiceStatsGui.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3F518E0", Offset = "0x3F518E0", VA = "0x3F518E0")]
	private void Start()
	{
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x3F51B20", Offset = "0x3F51B20", VA = "0x3F51B20")]
	private void Update()
	{
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x3F51B50", Offset = "0x3F51B50", VA = "0x3F51B50")]
	private void OnGUI()
	{
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x3F51D00", Offset = "0x3F51D00", VA = "0x3F51D00")]
	private void TrafficStatsWindow(int windowId)
	{
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x3F53950", Offset = "0x3F53950", VA = "0x3F53950")]
	public PhotonVoiceStatsGui()
	{
	}
}
