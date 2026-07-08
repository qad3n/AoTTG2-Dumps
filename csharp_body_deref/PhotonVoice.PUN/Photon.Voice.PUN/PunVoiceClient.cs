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
		[Address(RVA = "0x3C472C0", Offset = "0x3C472C0", VA = "0x3C472C0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000006")]
	protected override bool LeaderOfflineMode
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x3C47320", Offset = "0x3C47320", VA = "0x3C47320", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000007")]
	public static PunVoiceClient Instance
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x3C45C70", Offset = "0x3C45C70", VA = "0x3C45C70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000008")]
	public bool UsePunAppSettings
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x3C473D0", Offset = "0x3C473D0", VA = "0x3C473D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x3C473E0", Offset = "0x3C473E0", VA = "0x3C473E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public bool UsePunAuthValues
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x3C473F0", Offset = "0x3C473F0", VA = "0x3C473F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x3C47400", Offset = "0x3C47400", VA = "0x3C47400")]
		set
		{
		}
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x3C47410", Offset = "0x3C47410", VA = "0x3C47410", Slot = "18")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x3C476D0", Offset = "0x3C476D0", VA = "0x3C476D0", Slot = "10")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x3C479A0", Offset = "0x3C479A0", VA = "0x3C479A0", Slot = "11")]
	protected override Speaker InstantiateSpeakerForRemoteVoice(int playerId, byte voiceId, object userData)
	{
		return null;
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x3C48300", Offset = "0x3C48300", VA = "0x3C48300", Slot = "16")]
	protected override string GetVoiceRoomName()
	{
		return null;
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x3C48430", Offset = "0x3C48430", VA = "0x3C48430")]
	private void OnPunStateChange(ClientState s1, ClientState s2)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x3C48440", Offset = "0x3C48440", VA = "0x3C48440", Slot = "17")]
	protected override bool ConnectVoice()
	{
		return default(bool);
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x3C48720", Offset = "0x3C48720", VA = "0x3C48720")]
	public PunVoiceClient()
	{
	}
}
