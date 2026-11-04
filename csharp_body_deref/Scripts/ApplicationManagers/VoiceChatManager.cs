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

[Token(Token = "0x2000922")]
internal class VoiceChatManager : MonoBehaviour
{
	[Token(Token = "0x4002D8B")]
	[FieldOffset(Offset = "0x0")]
	private static VoiceChatManager _instance;

	[Token(Token = "0x4002D8C")]
	[FieldOffset(Offset = "0x8")]
	public static PunVoiceClient Client;

	[Token(Token = "0x4002D8D")]
	[FieldOffset(Offset = "0x10")]
	public static float ProximitySpatialBlend;

	[Token(Token = "0x17000F70")]
	public static string[] MicrophoneDevices
	{
		[Token(Token = "0x60055CF")]
		[Address(RVA = "0x2377760", Offset = "0x2375D60", VA = "0x182377760")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000F71")]
	public static string DefaultDevice
	{
		[Token(Token = "0x60055D0")]
		[Address(RVA = "0x2377690", Offset = "0x2375C90", VA = "0x182377690")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60055D1")]
	[Address(RVA = "0x2377520", Offset = "0x2375B20", VA = "0x182377520")]
	public static void Init()
	{
	}

	[Token(Token = "0x60055D2")]
	[Address(RVA = "0x2377020", Offset = "0x2375620", VA = "0x182377020")]
	public static void ApplySoundSettings()
	{
	}

	[Token(Token = "0x60055D3")]
	[Address(RVA = "0x2377260", Offset = "0x2375860", VA = "0x182377260")]
	public static float GetInputVolume()
	{
		return default(float);
	}

	[Token(Token = "0x60055D4")]
	[Address(RVA = "0x2377320", Offset = "0x2375920", VA = "0x182377320")]
	public static float GetOuputVolume(PhotonView view)
	{
		return default(float);
	}

	[Token(Token = "0x60055D5")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public VoiceChatManager()
	{
	}
}
