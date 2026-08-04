// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.AudioChangesHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/AudioChangesHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity;

[Token(Token = "0x2000006")]
[RequireComponent(typeof(Recorder))]
[AddComponentMenu("Photon Voice/Audio Changes Handler")]
[DisallowMultipleComponent]
public class AudioChangesHandler : VoiceComponent
{
	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x28")]
	private IAudioInChangeNotifier photonMicChangeNotifier;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x30")]
	private Recorder recorder;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x38")]
	[Tooltip("React to device change notification when Recorder is started.")]
	public bool HandleDeviceChange;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x39")]
	[Tooltip("iOS: React to device change notification when Recorder is started.")]
	public bool HandleDeviceChangeIOS;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x3A")]
	[Tooltip("Android: React to device change notification when Recorder is started.")]
	public bool HandleDeviceChangeAndroid;

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x3F3DD90", Offset = "0x3F3DD90", VA = "0x3F3DD90", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x3F3E6E0", Offset = "0x3F3E6E0", VA = "0x3F3E6E0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x3F3EAA0", Offset = "0x3F3EAA0", VA = "0x3F3EAA0")]
	private void PhotonMicrophoneChangeDetected()
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x3F3EC40", Offset = "0x3F3EC40", VA = "0x3F3EC40")]
	private void OnDeviceChange()
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x3F3EFD0", Offset = "0x3F3EFD0", VA = "0x3F3EFD0")]
	private void OnAudioConfigChanged(bool deviceWasChanged)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x3F3F160", Offset = "0x3F3F160", VA = "0x3F3F160")]
	public AudioChangesHandler()
	{
	}
}
