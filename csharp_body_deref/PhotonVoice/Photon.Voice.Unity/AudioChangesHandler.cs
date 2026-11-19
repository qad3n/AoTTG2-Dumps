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

[Token(Token = "0x2000004")]
[RequireComponent(typeof(Recorder))]
[AddComponentMenu("Photon Voice/Audio Changes Handler")]
[DisallowMultipleComponent]
public class AudioChangesHandler : VoiceComponent
{
	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x28")]
	private IAudioInChangeNotifier photonMicChangeNotifier;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x30")]
	private Recorder recorder;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x38")]
	[Tooltip("React to device change notification when Recorder is started.")]
	public bool HandleDeviceChange;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x39")]
	[Tooltip("iOS: React to device change notification when Recorder is started.")]
	public bool HandleDeviceChangeIOS;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x3A")]
	[Tooltip("Android: React to device change notification when Recorder is started.")]
	public bool HandleDeviceChangeAndroid;

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x57277A0", Offset = "0x57267A0", VA = "0x57277A0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x57280F0", Offset = "0x57270F0", VA = "0x57280F0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x57284B0", Offset = "0x57274B0", VA = "0x57284B0")]
	private void PhotonMicrophoneChangeDetected()
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x5728650", Offset = "0x5727650", VA = "0x5728650")]
	private void OnDeviceChange()
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x57289C0", Offset = "0x57279C0", VA = "0x57289C0")]
	private void OnAudioConfigChanged(bool deviceWasChanged)
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x5728B50", Offset = "0x5727B50", VA = "0x5728B50")]
	public AudioChangesHandler()
	{
	}
}
