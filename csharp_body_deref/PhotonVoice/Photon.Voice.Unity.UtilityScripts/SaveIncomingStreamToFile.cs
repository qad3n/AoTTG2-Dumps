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
	[Address(RVA = "0x3C613D0", Offset = "0x3C613D0", VA = "0x3C613D0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x3C61610", Offset = "0x3C61610", VA = "0x3C61610")]
	private void OnSpeakerLinked(Speaker speaker)
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x3C616C0", Offset = "0x3C616C0", VA = "0x3C616C0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x3C617D0", Offset = "0x3C617D0", VA = "0x3C617D0")]
	private void OnRemoteVoiceAdded(RemoteVoiceLink remoteVoiceLink)
	{
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x3C61C10", Offset = "0x3C61C10", VA = "0x3C61C10")]
	private string GetFilePath(RemoteVoiceLink remoteVoiceLink)
	{
		return null;
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x3C61F40", Offset = "0x3C61F40", VA = "0x3C61F40")]
	public SaveIncomingStreamToFile()
	{
	}
}
