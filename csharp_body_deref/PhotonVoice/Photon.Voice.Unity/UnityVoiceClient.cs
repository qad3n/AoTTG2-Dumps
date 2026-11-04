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

[Token(Token = "0x200000F")]
[AddComponentMenu("Photon Voice/Unity Voice Client")]
[HelpURL("https://doc.photonengine.com/en-us/voice/v2/getting-started/voice-intro")]
public class UnityVoiceClient : VoiceConnection
{
	[Token(Token = "0x4000050")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	[SerializeField]
	public bool UseVoiceAppSettings;

	[Token(Token = "0x1700002C")]
	public override bool AlwaysUsePrimaryRecorder
	{
		[Token(Token = "0x6000097")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x1D95640", Offset = "0x1D93C40", VA = "0x181D95640", Slot = "14")]
	protected virtual void Start()
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x1D95540", Offset = "0x1D93B40", VA = "0x181D95540", Slot = "7")]
	public override bool ConnectUsingSettings([Optional] AppSettings overwriteSettings)
	{
		return default(bool);
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x1D95610", Offset = "0x1D93C10", VA = "0x181D95610", Slot = "11")]
	protected override Speaker InstantiateSpeakerForRemoteVoice(int playerId, byte voiceId, object userData)
	{
		return null;
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x1D956C0", Offset = "0x1D93CC0", VA = "0x181D956C0")]
	public UnityVoiceClient()
	{
	}
}
