// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.PUN.PunVoiceClient
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/PUN/PunVoiceClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Photon.Realtime;
using Photon.Voice.Unity;
using UnityEngine;

namespace Photon.Voice.PUN;

[Token(Token = "0x2000003")]
[AddComponentMenu("Photon Voice/PUN/Pun Voice Client")]
[HelpURL("https://doc.photonengine.com/en-us/voice/v2/getting-started/voice-for-pun")]
public class PunVoiceClient : VoiceFollowClient
{
	[Token(Token = "0x4000005")]
	public const string VoiceRoomNameSuffix = "_ID(";

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x0")]
	private static PunVoiceClient instance;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0xD0")]
	[SerializeField]
	private bool usePunAppSettings;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0xD1")]
	[SerializeField]
	private bool usePunAuthValues;

	[Token(Token = "0x17000005")]
	protected override bool LeaderInRoom
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x1D9DA30", Offset = "0x1D9C030", VA = "0x181D9DA30", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000006")]
	protected override bool LeaderOfflineMode
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x1D9DA70", Offset = "0x1D9C070", VA = "0x181D9DA70", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000007")]
	public static PunVoiceClient Instance
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x1D9D650", Offset = "0x1D9BC50", VA = "0x181D9D650")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000008")]
	public bool UsePunAppSettings
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x1AAAD60", Offset = "0x1AA9360", VA = "0x181AAAD60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x1C61330", Offset = "0x1C5F930", VA = "0x181C61330")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public bool UsePunAuthValues
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x1D9DB00", Offset = "0x1D9C100", VA = "0x181D9DB00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x1D9DB10", Offset = "0x1D9C110", VA = "0x181D9DB10")]
		set
		{
		}
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x1D9D480", Offset = "0x1D9BA80", VA = "0x181D9D480", Slot = "18")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x1D9D2B0", Offset = "0x1D9B8B0", VA = "0x181D9D2B0", Slot = "10")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x1D9CA10", Offset = "0x1D9B010", VA = "0x181D9CA10", Slot = "11")]
	protected override Speaker InstantiateSpeakerForRemoteVoice(int playerId, byte voiceId, object userData)
	{
		return null;
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x1D9C920", Offset = "0x1D9AF20", VA = "0x181D9C920", Slot = "16")]
	protected override string GetVoiceRoomName()
	{
		return null;
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x1D9D470", Offset = "0x1D9BA70", VA = "0x181D9D470")]
	private void OnPunStateChange(ClientState s1, ClientState s2)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x1D9C660", Offset = "0x1D9AC60", VA = "0x181D9C660", Slot = "17")]
	protected override bool ConnectVoice()
	{
		return default(bool);
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x1D9D640", Offset = "0x1D9BC40", VA = "0x181D9D640")]
	public PunVoiceClient()
	{
	}
}
