// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.UtilityScripts.PhotonVoiceLagSimulationGui
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/UtilityScripts/PhotonVoiceLagSimulationGui.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using ExitGames.Client.Photon;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity.UtilityScripts;

[Token(Token = "0x200001F")]
[RequireComponent(typeof(VoiceConnection))]
public class PhotonVoiceLagSimulationGui : MonoBehaviour
{
	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0x20")]
	private VoiceConnection voiceConnection;

	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0x28")]
	private Rect windowRect;

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x38")]
	private int windowId;

	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0x3C")]
	private bool visible;

	[Token(Token = "0x400009B")]
	[FieldOffset(Offset = "0x40")]
	private PhotonPeer peer;

	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0x48")]
	private float debugLostPercent;

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x1D8B270", Offset = "0x1D89870", VA = "0x181D8B270")]
	public void Start()
	{
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x1D8B150", Offset = "0x1D89750", VA = "0x181D8B150")]
	private void OnGUI()
	{
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x1D8AB30", Offset = "0x1D89130", VA = "0x181D8AB30")]
	private void NetSimHasNoPeerWindow(int windowId)
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x1D8AB80", Offset = "0x1D89180", VA = "0x181D8AB80")]
	private void NetSimWindow(int windowId)
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x1D8B490", Offset = "0x1D89A90", VA = "0x181D8B490")]
	public PhotonVoiceLagSimulationGui()
	{
	}
}
