// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/UtilityScripts/SaveIncomingStreamToFile.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity.UtilityScripts;

[Token(Token = "0x2000021")]
[RequireComponent(typeof(VoiceConnection))]
[DisallowMultipleComponent]
public class SaveIncomingStreamToFile : VoiceComponent
{
	[Token(Token = "0x40000A8")]
	[FieldOffset(Offset = "0x28")]
	private VoiceConnection voiceConnection;

	[Token(Token = "0x40000A9")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private bool muteLocalSpeaker;

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x573D5B0", Offset = "0x573C5B0", VA = "0x573D5B0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x573D7E0", Offset = "0x573C7E0", VA = "0x573D7E0")]
	private void OnSpeakerLinked(Speaker speaker)
	{
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x573D890", Offset = "0x573C890", VA = "0x573D890")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x573D9A0", Offset = "0x573C9A0", VA = "0x573D9A0")]
	private void OnRemoteVoiceAdded(RemoteVoiceLink remoteVoiceLink)
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x573DDC0", Offset = "0x573CDC0", VA = "0x573DDC0")]
	private string GetFilePath(RemoteVoiceLink remoteVoiceLink)
	{
		return null;
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x573E0F0", Offset = "0x573D0F0", VA = "0x573E0F0")]
	public SaveIncomingStreamToFile()
	{
	}
}
