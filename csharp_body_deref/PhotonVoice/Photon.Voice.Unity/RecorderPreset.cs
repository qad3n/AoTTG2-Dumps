using System;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity;

[Token(Token = "0x200000C")]
[AddComponentMenu("Photon Voice/Recorder Preset")]
public class RecorderPreset : VoiceComponent
{
	[Serializable]
	[Token(Token = "0x200000D")]
	public struct DSP
	{
		[Token(Token = "0x4000044")]
		[FieldOffset(Offset = "0x0")]
		[Tooltip("Acoustic Echo Cancellation")]
		public bool AEC;

		[Token(Token = "0x4000045")]
		[FieldOffset(Offset = "0x1")]
		[Tooltip("Voice Activity Detection")]
		public bool VAD;
	}

	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0x28")]
	[Tooltip("On which platform to apply the filter.")]
	public RuntimePlatform Platform;

	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x2C")]
	[Tooltip("Which microphone API to use when the Source is set to Microphone.")]
	[Header("Overrides:")]
	public Recorder.MicType MicrophoneType;

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x30")]
	[Tooltip("Enable WebRtcAudioDsp component.")]
	public bool DSPEnabled;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x31")]
	public DSP DSPSettings;

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x3C54780", Offset = "0x3C54780", VA = "0x3C54780", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x3C55030", Offset = "0x3C55030", VA = "0x3C55030")]
	public RecorderPreset()
	{
	}
}
