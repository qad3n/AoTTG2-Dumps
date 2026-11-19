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
	[FieldOffset(Offset = "0xC7")]
	[SerializeField]
	private bool usePunAppSettings;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0xC8")]
	[SerializeField]
	private bool usePunAuthValues;

	[Token(Token = "0x17000005")]
	protected override bool LeaderInRoom
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x5741810", Offset = "0x5740810", VA = "0x5741810", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000006")]
	protected override bool LeaderOfflineMode
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x5741870", Offset = "0x5740870", VA = "0x5741870", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000007")]
	public static PunVoiceClient Instance
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x57400D0", Offset = "0x573F0D0", VA = "0x57400D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000008")]
	public bool UsePunAppSettings
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x5741920", Offset = "0x5740920", VA = "0x5741920")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x5741930", Offset = "0x5740930", VA = "0x5741930")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public bool UsePunAuthValues
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x5741940", Offset = "0x5740940", VA = "0x5741940")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x5741950", Offset = "0x5740950", VA = "0x5741950")]
		set
		{
		}
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x5741960", Offset = "0x5740960", VA = "0x5741960", Slot = "18")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x5741C20", Offset = "0x5740C20", VA = "0x5741C20", Slot = "10")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x5741EF0", Offset = "0x5740EF0", VA = "0x5741EF0", Slot = "11")]
	protected override Speaker InstantiateSpeakerForRemoteVoice(int playerId, byte voiceId, object userData)
	{
		return null;
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x5742860", Offset = "0x5741860", VA = "0x5742860", Slot = "16")]
	protected override string GetVoiceRoomName()
	{
		return null;
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x5742970", Offset = "0x5741970", VA = "0x5742970")]
	private void OnPunStateChange(ClientState s1, ClientState s2)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x5742980", Offset = "0x5741980", VA = "0x5742980", Slot = "17")]
	protected override bool ConnectVoice()
	{
		return default(bool);
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x5742C80", Offset = "0x5741C80", VA = "0x5742C80")]
	public PunVoiceClient()
	{
	}
}
