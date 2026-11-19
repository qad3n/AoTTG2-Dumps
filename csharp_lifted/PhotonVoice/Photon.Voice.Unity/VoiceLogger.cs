// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.VoiceLogger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/VoiceLogger.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using ExitGames.Client.Photon;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity;

[Token(Token = "0x2000017")]
[AddComponentMenu("Photon Voice/Voice Logger")]
[DisallowMultipleComponent]
public class VoiceLogger : MonoBehaviour
{
	[Token(Token = "0x4000077")]
	[FieldOffset(Offset = "0x20")]
	public DebugLevel LogLevel;

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x5737290", Offset = "0x5736290", VA = "0x5737290")]
	private void Start()
	{
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x57369B0", Offset = "0x57359B0", VA = "0x57369B0")]
	public static VoiceLogger FindLogger(GameObject gameObject)
	{
		return null;
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x5736DD0", Offset = "0x5735DD0", VA = "0x5736DD0")]
	public static VoiceLogger CreateRootLogger()
	{
		return null;
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x57372A0", Offset = "0x57362A0", VA = "0x57372A0")]
	public VoiceLogger()
	{
	}
}
