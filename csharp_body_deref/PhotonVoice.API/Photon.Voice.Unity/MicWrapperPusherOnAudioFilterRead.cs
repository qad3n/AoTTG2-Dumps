// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.MicWrapperPusherOnAudioFilterRead
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Platforms/Unity/MicWrapperPusher.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity;

[Token(Token = "0x20000AB")]
internal class MicWrapperPusherOnAudioFilterRead : MonoBehaviour
{
	[Token(Token = "0x40002C9")]
	[FieldOffset(Offset = "0x20")]
	private float[] frame2;

	[Token(Token = "0x14000005")]
	public event Action<float[], int> OnAudioFrame
	{
		[Token(Token = "0x60003A7")]
		[Address(RVA = "0x3F3A770", Offset = "0x3F3A770", VA = "0x3F3A770")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60003A8")]
		[Address(RVA = "0x3F3AAA0", Offset = "0x3F3AAA0", VA = "0x3F3AAA0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x3F3AB50", Offset = "0x3F3AB50", VA = "0x3F3AB50")]
	private void OnAudioFilterRead(float[] frame, int channels)
	{
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x3F3AC10", Offset = "0x3F3AC10", VA = "0x3F3AC10")]
	public MicWrapperPusherOnAudioFilterRead()
	{
	}
}
