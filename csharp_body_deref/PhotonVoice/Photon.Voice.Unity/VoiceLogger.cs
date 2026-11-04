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
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void Start()
	{
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x1D998C0", Offset = "0x1D97EC0", VA = "0x181D998C0")]
	public static VoiceLogger FindLogger(GameObject gameObject)
	{
		return null;
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x1D99840", Offset = "0x1D97E40", VA = "0x181D99840")]
	public static VoiceLogger CreateRootLogger()
	{
		return null;
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x1D99BD0", Offset = "0x1D981D0", VA = "0x181D99BD0")]
	public VoiceLogger()
	{
	}
}
