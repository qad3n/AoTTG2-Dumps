// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.UnityVoiceClient
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/UnityVoiceClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3F49CB0", Offset = "0x3F49CB0", VA = "0x3F49CB0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x3F49CC0", Offset = "0x3F49CC0", VA = "0x3F49CC0", Slot = "14")]
	protected virtual void Start()
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x3F49F60", Offset = "0x3F49F60", VA = "0x3F49F60", Slot = "7")]
	public override bool ConnectUsingSettings([Optional] AppSettings overwriteSettings)
	{
		return default(bool);
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x3F4A5E0", Offset = "0x3F4A5E0", VA = "0x3F4A5E0", Slot = "11")]
	protected override Speaker InstantiateSpeakerForRemoteVoice(int playerId, byte voiceId, object userData)
	{
		return null;
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x3F4AE30", Offset = "0x3F4AE30", VA = "0x3F4AE30")]
	public UnityVoiceClient()
	{
	}
}
