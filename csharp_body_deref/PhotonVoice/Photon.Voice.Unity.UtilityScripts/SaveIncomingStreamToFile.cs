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

[Token(Token = "0x2000023")]
[RequireComponent(typeof(VoiceConnection))]
[DisallowMultipleComponent]
public class SaveIncomingStreamToFile : VoiceComponent
{
	[Token(Token = "0x40000AD")]
	[FieldOffset(Offset = "0x28")]
	private VoiceConnection voiceConnection;

	[Token(Token = "0x40000AE")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private bool muteLocalSpeaker;

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x3F53980", Offset = "0x3F53980", VA = "0x3F53980", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x3F53BC0", Offset = "0x3F53BC0", VA = "0x3F53BC0")]
	private void OnSpeakerLinked(Speaker speaker)
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x3F53C70", Offset = "0x3F53C70", VA = "0x3F53C70")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x3F53D80", Offset = "0x3F53D80", VA = "0x3F53D80")]
	private void OnRemoteVoiceAdded(RemoteVoiceLink remoteVoiceLink)
	{
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x3F541C0", Offset = "0x3F541C0", VA = "0x3F541C0")]
	private string GetFilePath(RemoteVoiceLink remoteVoiceLink)
	{
		return null;
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x3F544F0", Offset = "0x3F544F0", VA = "0x3F544F0")]
	public SaveIncomingStreamToFile()
	{
	}
}
