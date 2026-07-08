using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Photon.Voice.Unity;

[Token(Token = "0x2000011")]
[AddComponentMenu("Photon Voice/Unity Voice Client")]
[HelpURL("https://doc.photonengine.com/en-us/voice/v2/getting-started/voice-intro")]
public class UnityVoiceClient : VoiceConnection
{
	[Token(Token = "0x4000055")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC4")]
	[SerializeField]
	public bool UseVoiceAppSettings;

	[Token(Token = "0x1700002C")]
	public override bool AlwaysUsePrimaryRecorder
	{
		[Token(Token = "0x6000099")]
		[Address(RVA = "0x3C57700", Offset = "0x3C57700", VA = "0x3C57700", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x3C57710", Offset = "0x3C57710", VA = "0x3C57710", Slot = "14")]
	protected virtual void Start()
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x3C579B0", Offset = "0x3C579B0", VA = "0x3C579B0", Slot = "7")]
	public override bool ConnectUsingSettings([Optional] AppSettings overwriteSettings)
	{
		return default(bool);
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x3C58030", Offset = "0x3C58030", VA = "0x3C58030", Slot = "11")]
	protected override Speaker InstantiateSpeakerForRemoteVoice(int playerId, byte voiceId, object userData)
	{
		return null;
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x3C58880", Offset = "0x3C58880", VA = "0x3C58880")]
	public UnityVoiceClient()
	{
	}
}
