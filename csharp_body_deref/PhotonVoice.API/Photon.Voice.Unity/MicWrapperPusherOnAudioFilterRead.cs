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
		[Address(RVA = "0x3C44E20", Offset = "0x3C44E20", VA = "0x3C44E20")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60003A8")]
		[Address(RVA = "0x3C45150", Offset = "0x3C45150", VA = "0x3C45150")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x3C45200", Offset = "0x3C45200", VA = "0x3C45200")]
	private void OnAudioFilterRead(float[] frame, int channels)
	{
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x3C452C0", Offset = "0x3C452C0", VA = "0x3C452C0")]
	public MicWrapperPusherOnAudioFilterRead()
	{
	}
}
