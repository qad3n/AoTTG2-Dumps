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

[Token(Token = "0x2000019")]
[AddComponentMenu("Photon Voice/Voice Logger")]
[DisallowMultipleComponent]
public class VoiceLogger : MonoBehaviour
{
	[Token(Token = "0x400007C")]
	[FieldOffset(Offset = "0x20")]
	public DebugLevel LogLevel;

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x3F4D770", Offset = "0x3F4D770", VA = "0x3F4D770")]
	private void Start()
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x3F4CF80", Offset = "0x3F4CF80", VA = "0x3F4CF80")]
	public static VoiceLogger FindLogger(GameObject gameObject)
	{
		return null;
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x3F4D330", Offset = "0x3F4D330", VA = "0x3F4D330")]
	public static VoiceLogger CreateRootLogger()
	{
		return null;
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x3F4D780", Offset = "0x3F4D780", VA = "0x3F4D780")]
	public VoiceLogger()
	{
	}
}
