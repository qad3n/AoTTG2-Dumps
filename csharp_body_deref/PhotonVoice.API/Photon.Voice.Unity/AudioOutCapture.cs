// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.AudioOutCapture
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Platforms/Unity/AudioOutCapture.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity;

[Token(Token = "0x20000A6")]
public class AudioOutCapture : MonoBehaviour
{
	[Token(Token = "0x40002BF")]
	[FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	private Action<float[], int> m_OnAudioFrame;

	[Token(Token = "0x14000004")]
	public event Action<float[], int> OnAudioFrame
	{
		[Token(Token = "0x600039B")]
		[Address(RVA = "0x1D83BF0", Offset = "0x1D821F0", VA = "0x181D83BF0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600039C")]
		[Address(RVA = "0x1D83CA0", Offset = "0x1D822A0", VA = "0x181D83CA0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x1D83BD0", Offset = "0x1D821D0", VA = "0x181D83BD0")]
	private void OnAudioFilterRead(float[] frame, int channels)
	{
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AudioOutCapture()
	{
	}
}
