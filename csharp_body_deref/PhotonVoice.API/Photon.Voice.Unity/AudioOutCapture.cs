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
		[Address(RVA = "0x3C42810", Offset = "0x3C42810", VA = "0x3C42810")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000386")]
		[Address(RVA = "0x3C428C0", Offset = "0x3C428C0", VA = "0x3C428C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000387")]
	[Address(RVA = "0x3C42970", Offset = "0x3C42970", VA = "0x3C42970")]
	private void OnAudioFilterRead(float[] frame, int channels)
	{
	}

	[Token(Token = "0x6000388")]
	[Address(RVA = "0x3C42990", Offset = "0x3C42990", VA = "0x3C42990")]
	public AudioOutCapture()
	{
	}
}
