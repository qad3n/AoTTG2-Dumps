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

[Token(Token = "0x20000AD")]
internal class MicWrapperPusherOnAudioFilterRead : MonoBehaviour
{
	[Token(Token = "0x40002D2")]
	[FieldOffset(Offset = "0x20")]
	private float[] frame2;

	[Token(Token = "0x40002D3")]
	[FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	private Action<float[], int> m_OnAudioFrame;

	[Token(Token = "0x14000005")]
	public event Action<float[], int> OnAudioFrame
	{
		[Token(Token = "0x60003BD")]
		[Address(RVA = "0x1D84AC0", Offset = "0x1D830C0", VA = "0x181D84AC0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60003BE")]
		[Address(RVA = "0x1D84B70", Offset = "0x1D83170", VA = "0x181D84B70")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x1D84990", Offset = "0x1D82F90", VA = "0x181D84990")]
	private void OnAudioFilterRead(float[] frame, int channels)
	{
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x1D84A60", Offset = "0x1D83060", VA = "0x181D84A60")]
	public MicWrapperPusherOnAudioFilterRead()
	{
	}
}
