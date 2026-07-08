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
	[Address(RVA = "0x3C5B1C0", Offset = "0x3C5B1C0", VA = "0x3C5B1C0")]
	private void Start()
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x3C5A9D0", Offset = "0x3C5A9D0", VA = "0x3C5A9D0")]
	public static VoiceLogger FindLogger(GameObject gameObject)
	{
		return null;
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x3C5AD80", Offset = "0x3C5AD80", VA = "0x3C5AD80")]
	public static VoiceLogger CreateRootLogger()
	{
		return null;
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x3C5B1D0", Offset = "0x3C5B1D0", VA = "0x3C5B1D0")]
	public VoiceLogger()
	{
	}
}
