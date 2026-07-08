using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200006B")]
public class LocalVoiceAudioFloat : LocalVoiceAudio<float>
{
	[Token(Token = "0x6000248")]
	[Address(RVA = "0x3C31210", Offset = "0x3C31210", VA = "0x3C31210")]
	internal LocalVoiceAudioFloat(VoiceClient voiceClient, byte id, VoiceInfo voiceInfo, IAudioDesc audioSourceDesc, int channelId, VoiceCreateOptions opt)
	{
	}
}
