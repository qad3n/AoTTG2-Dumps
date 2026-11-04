// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.SpeakerAudioFilterRead
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/SpeakerAudioFilterRead.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity;

[Token(Token = "0x200000E")]
[AddComponentMenu("Photon Voice/Speaker AudioFilterRead")]
public class SpeakerAudioFilterRead : Speaker
{
	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0x60")]
	private AudioSyncBuffer<float> outBuffer;

	[Token(Token = "0x400004F")]
	[FieldOffset(Offset = "0x68")]
	private int outputSampleRate;

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x1D93100", Offset = "0x1D91700", VA = "0x181D93100", Slot = "5")]
	protected override IAudioOut<float> CreateAudioOut()
	{
		return null;
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x1D931F0", Offset = "0x1D917F0", VA = "0x181D931F0")]
	private void OnAudioFilterRead(float[] data, int channels)
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x1D93260", Offset = "0x1D91860", VA = "0x181D93260")]
	public SpeakerAudioFilterRead()
	{
	}
}
