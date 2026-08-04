// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.VoiceChatManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/VoiceChatManager.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/VoiceChatManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Voice.PUN;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x2000797")]
internal class VoiceChatManager : MonoBehaviour
{
	[Token(Token = "0x40024BD")]
	[FieldOffset(Offset = "0x0")]
	private static VoiceChatManager _instance;

	[Token(Token = "0x40024BE")]
	[FieldOffset(Offset = "0x8")]
	public static PunVoiceClient Client;

	[Token(Token = "0x40024BF")]
	[FieldOffset(Offset = "0x10")]
	public static float ProximitySpatialBlend;

	[Token(Token = "0x17000E0D")]
	public static string[] MicrophoneDevices
	{
		[Token(Token = "0x6004957")]
		[Address(RVA = "0x43C16A0", Offset = "0x43C16A0", VA = "0x43C16A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E0E")]
	public static string DefaultDevice
	{
		[Token(Token = "0x6004958")]
		[Address(RVA = "0x43C1770", Offset = "0x43C1770", VA = "0x43C1770")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004959")]
	[Address(RVA = "0x43C1830", Offset = "0x43C1830", VA = "0x43C1830")]
	public static void Init()
	{
	}

	[Token(Token = "0x600495A")]
	[Address(RVA = "0x43B7AE0", Offset = "0x43B7AE0", VA = "0x43B7AE0")]
	public static void ApplySoundSettings()
	{
	}

	[Token(Token = "0x600495B")]
	[Address(RVA = "0x43C1940", Offset = "0x43C1940", VA = "0x43C1940")]
	public static float GetInputVolume()
	{
		return default(float);
	}

	[Token(Token = "0x600495C")]
	[Address(RVA = "0x43C19E0", Offset = "0x43C19E0", VA = "0x43C19E0")]
	public static float GetOuputVolume(PhotonView view)
	{
		return default(float);
	}

	[Token(Token = "0x600495D")]
	[Address(RVA = "0x43C1BB0", Offset = "0x43C1BB0", VA = "0x43C1BB0")]
	public VoiceChatManager()
	{
	}
}
