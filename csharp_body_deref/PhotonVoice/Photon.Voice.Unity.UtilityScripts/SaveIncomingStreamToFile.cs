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
	[Address(RVA = "0x1D91CC0", Offset = "0x1D902C0", VA = "0x181D91CC0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x1D92640", Offset = "0x1D90C40", VA = "0x181D92640")]
	private void OnSpeakerLinked(Speaker speaker)
	{
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x1D92220", Offset = "0x1D90820", VA = "0x181D92220")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x1D92340", Offset = "0x1D90940", VA = "0x181D92340")]
	private void OnRemoteVoiceAdded(RemoteVoiceLink remoteVoiceLink)
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x1D91F00", Offset = "0x1D90500", VA = "0x181D91F00")]
	private string GetFilePath(RemoteVoiceLink remoteVoiceLink)
	{
		return null;
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x1D8D100", Offset = "0x1D8B700", VA = "0x181D8D100")]
	public SaveIncomingStreamToFile()
	{
	}
}
