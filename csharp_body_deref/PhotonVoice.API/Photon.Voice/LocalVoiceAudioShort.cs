using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200006C")]
public class LocalVoiceAudioShort : LocalVoiceAudio<short>
{
	[Token(Token = "0x6000249")]
	[Address(RVA = "0x3C313D0", Offset = "0x3C313D0", VA = "0x3C313D0")]
	internal LocalVoiceAudioShort(VoiceClient voiceClient, byte id, VoiceInfo voiceInfo, IAudioDesc audioSourceDesc, int channelId, VoiceCreateOptions opt)
	{
	}
}
