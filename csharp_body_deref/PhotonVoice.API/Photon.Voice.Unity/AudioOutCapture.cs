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

[Token(Token = "0x20000A4")]
public class AudioOutCapture : MonoBehaviour
{
	[Token(Token = "0x14000004")]
	public event Action<float[], int> OnAudioFrame
	{
		[Token(Token = "0x6000385")]
		[Address(RVA = "0x3F38160", Offset = "0x3F38160", VA = "0x3F38160")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000386")]
		[Address(RVA = "0x3F38210", Offset = "0x3F38210", VA = "0x3F38210")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000387")]
	[Address(RVA = "0x3F382C0", Offset = "0x3F382C0", VA = "0x3F382C0")]
	private void OnAudioFilterRead(float[] frame, int channels)
	{
	}

	[Token(Token = "0x6000388")]
	[Address(RVA = "0x3F382E0", Offset = "0x3F382E0", VA = "0x3F382E0")]
	public AudioOutCapture()
	{
	}
}
