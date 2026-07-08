using Il2CppDummyDll;
using Photon.Pun;
using Photon.Voice.PUN;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x2000748")]
internal class VoiceChatManager : MonoBehaviour
{
	[Token(Token = "0x400235E")]
	[FieldOffset(Offset = "0x0")]
	private static VoiceChatManager _instance;

	[Token(Token = "0x400235F")]
	[FieldOffset(Offset = "0x8")]
	public static PunVoiceClient Client;

	[Token(Token = "0x4002360")]
	[FieldOffset(Offset = "0x10")]
	public static float ProximitySpatialBlend;

	[Token(Token = "0x17000D91")]
	public static string[] MicrophoneDevices
	{
		[Token(Token = "0x60046E8")]
		[Address(RVA = "0x40A86E0", Offset = "0x40A86E0", VA = "0x40A86E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D92")]
	public static string DefaultDevice
	{
		[Token(Token = "0x60046E9")]
		[Address(RVA = "0x40A87B0", Offset = "0x40A87B0", VA = "0x40A87B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60046EA")]
	[Address(RVA = "0x40A8870", Offset = "0x40A8870", VA = "0x40A8870")]
	public static void Init()
	{
	}

	[Token(Token = "0x60046EB")]
	[Address(RVA = "0x409E960", Offset = "0x409E960", VA = "0x409E960")]
	public static void ApplySoundSettings()
	{
	}

	[Token(Token = "0x60046EC")]
	[Address(RVA = "0x40A8980", Offset = "0x40A8980", VA = "0x40A8980")]
	public static float GetInputVolume()
	{
		return default(float);
	}

	[Token(Token = "0x60046ED")]
	[Address(RVA = "0x40A8A20", Offset = "0x40A8A20", VA = "0x40A8A20")]
	public static float GetOuputVolume(PhotonView view)
	{
		return default(float);
	}

	[Token(Token = "0x60046EE")]
	[Address(RVA = "0x40A8BF0", Offset = "0x40A8BF0", VA = "0x40A8BF0")]
	public VoiceChatManager()
	{
	}
}
