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
	[Address(RVA = "0x3F49B60", Offset = "0x3F49B60", VA = "0x3F49B60", Slot = "5")]
	protected override IAudioOut<float> CreateAudioOut()
	{
		return null;
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x3F49C40", Offset = "0x3F49C40", VA = "0x3F49C40")]
	private void OnAudioFilterRead(float[] data, int channels)
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x3F49CA0", Offset = "0x3F49CA0", VA = "0x3F49CA0")]
	public SpeakerAudioFilterRead()
	{
	}
}
