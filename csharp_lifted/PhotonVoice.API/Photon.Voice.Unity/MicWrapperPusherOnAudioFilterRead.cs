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

[Token(Token = "0x20000A9")]
internal class MicWrapperPusherOnAudioFilterRead : MonoBehaviour
{
	[Token(Token = "0x40002C4")]
	[FieldOffset(Offset = "0x20")]
	private float[] frame2;

	[Token(Token = "0x40002C5")]
	[FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	private Action<float[], int> m_OnAudioFrame;

	[Token(Token = "0x14000005")]
	public event Action<float[], int> OnAudioFrame
	{
		[Token(Token = "0x60003A5")]
		[Address(RVA = "0x57242A0", Offset = "0x57232A0", VA = "0x57242A0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60003A6")]
		[Address(RVA = "0x57245C0", Offset = "0x57235C0", VA = "0x57245C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x5724660", Offset = "0x5723660", VA = "0x5724660")]
	private void OnAudioFilterRead(float[] frame, int channels)
	{
	}

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x5724720", Offset = "0x5723720", VA = "0x5724720")]
	public MicWrapperPusherOnAudioFilterRead()
	{
	}
}
