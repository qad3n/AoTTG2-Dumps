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

[Token(Token = "0x2000005")]
[AddComponentMenu("Photon Voice/PUN/Pun Voice Client")]
[HelpURL("https://doc.photonengine.com/en-us/voice/v2/getting-started/voice-for-pun")]
public class PunVoiceClient : VoiceFollowClient
{
	[Token(Token = "0x400000A")]
	public const string VoiceRoomNameSuffix = "_ID(";

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x0")]
	private static PunVoiceClient instance;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0xC7")]
	[SerializeField]
	private bool usePunAppSettings;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0xC8")]
	[SerializeField]
	private bool usePunAuthValues;

	[Token(Token = "0x17000005")]
	protected override bool LeaderInRoom
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x3F57CF0", Offset = "0x3F57CF0", VA = "0x3F57CF0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000006")]
	protected override bool LeaderOfflineMode
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x3F57D50", Offset = "0x3F57D50", VA = "0x3F57D50", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000007")]
	public static PunVoiceClient Instance
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x3F566A0", Offset = "0x3F566A0", VA = "0x3F566A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000008")]
	public bool UsePunAppSettings
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x3F57E00", Offset = "0x3F57E00", VA = "0x3F57E00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x3F57E10", Offset = "0x3F57E10", VA = "0x3F57E10")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public bool UsePunAuthValues
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x3F57E20", Offset = "0x3F57E20", VA = "0x3F57E20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x3F57E30", Offset = "0x3F57E30", VA = "0x3F57E30")]
		set
		{
		}
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x3F57E40", Offset = "0x3F57E40", VA = "0x3F57E40", Slot = "18")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x3F58100", Offset = "0x3F58100", VA = "0x3F58100", Slot = "10")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x3F583D0", Offset = "0x3F583D0", VA = "0x3F583D0", Slot = "11")]
	protected override Speaker InstantiateSpeakerForRemoteVoice(int playerId, byte voiceId, object userData)
	{
		return null;
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x3F58D30", Offset = "0x3F58D30", VA = "0x3F58D30", Slot = "16")]
	protected override string GetVoiceRoomName()
	{
		return null;
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x3F58E60", Offset = "0x3F58E60", VA = "0x3F58E60")]
	private void OnPunStateChange(ClientState s1, ClientState s2)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x3F58E70", Offset = "0x3F58E70", VA = "0x3F58E70", Slot = "17")]
	protected override bool ConnectVoice()
	{
		return default(bool);
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x3F59150", Offset = "0x3F59150", VA = "0x3F59150")]
	public PunVoiceClient()
	{
	}
}
