using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity;

[Token(Token = "0x2000010")]
[AddComponentMenu("Photon Voice/Speaker AudioFilterRead")]
public class SpeakerAudioFilterRead : Speaker
{
	[Token(Token = "0x4000053")]
	[FieldOffset(Offset = "0x60")]
	private AudioSyncBuffer<float> outBuffer;

	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x68")]
	private int outputSampleRate;

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x3C575B0", Offset = "0x3C575B0", VA = "0x3C575B0", Slot = "5")]
	protected override IAudioOut<float> CreateAudioOut()
	{
		return null;
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x3C57690", Offset = "0x3C57690", VA = "0x3C57690")]
	private void OnAudioFilterRead(float[] data, int channels)
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x3C576F0", Offset = "0x3C576F0", VA = "0x3C576F0")]
	public SpeakerAudioFilterRead()
	{
	}
}
