// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.VoiceChatManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/VoiceChatManager.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/VoiceChatManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Voice;
using Photon.Voice.PUN;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x2000989")]
internal class VoiceChatManager : MonoBehaviour
{
	[Token(Token = "0x4003038")]
	[FieldOffset(Offset = "0x0")]
	private static VoiceChatManager _instance;

	[Token(Token = "0x4003039")]
	[FieldOffset(Offset = "0x8")]
	public static PunVoiceClient Client;

	[Token(Token = "0x400303A")]
	[FieldOffset(Offset = "0x10")]
	public static float ProximitySpatialBlend;

	[Token(Token = "0x400303B")]
	public const string DefaultDevice = "";

	[Token(Token = "0x17000F50")]
	public static string[] MicrophoneDevices
	{
		[Token(Token = "0x6005925")]
		[Address(RVA = "0x5D1E660", Offset = "0x5D1D660", VA = "0x5D1E660")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6005926")]
	[Address(RVA = "0x5D1E6D0", Offset = "0x5D1D6D0", VA = "0x5D1E6D0")]
	public static string GetDeviceLabel(string device)
	{
		return null;
	}

	[Token(Token = "0x6005927")]
	[Address(RVA = "0x5D1E7A0", Offset = "0x5D1D7A0", VA = "0x5D1E7A0")]
	public static DeviceInfo GetRecorderDevice(string[] devices)
	{
		return default(DeviceInfo);
	}

	[Token(Token = "0x6005928")]
	[Address(RVA = "0x5D1E8B0", Offset = "0x5D1D8B0", VA = "0x5D1E8B0")]
	public static bool HasMicrophonePermission()
	{
		return default(bool);
	}

	[Token(Token = "0x6005929")]
	[Address(RVA = "0x5D1E8C0", Offset = "0x5D1D8C0", VA = "0x5D1E8C0")]
	public static void RequestMicrophonePermission()
	{
	}

	[Token(Token = "0x600592A")]
	[Address(RVA = "0x5D09230", Offset = "0x5D08230", VA = "0x5D09230")]
	public static void Init()
	{
	}

	[Token(Token = "0x600592B")]
	[Address(RVA = "0x5D16380", Offset = "0x5D15380", VA = "0x5D16380")]
	public static void ApplySoundSettings()
	{
	}

	[Token(Token = "0x600592C")]
	[Address(RVA = "0x5D1E8D0", Offset = "0x5D1D8D0", VA = "0x5D1E8D0")]
	public static float GetInputVolume()
	{
		return default(float);
	}

	[Token(Token = "0x600592D")]
	[Address(RVA = "0x5D1E970", Offset = "0x5D1D970", VA = "0x5D1E970")]
	public static float GetOuputVolume(PhotonView view)
	{
		return default(float);
	}

	[Token(Token = "0x600592E")]
	[Address(RVA = "0x5D1EB40", Offset = "0x5D1DB40", VA = "0x5D1EB40")]
	public VoiceChatManager()
	{
	}
}
