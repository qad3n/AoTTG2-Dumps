// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.AndroidAudioInParameters
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Platforms/Unity/Android/UnityAndroidAudioInAEC.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Photon.Voice.Unity;

[Serializable]
[Token(Token = "0x20000A0")]
public struct AndroidAudioInParameters
{
	[Token(Token = "0x40002A2")]
	[FieldOffset(Offset = "0x0")]
	public bool EnableAEC;

	[Token(Token = "0x40002A3")]
	[FieldOffset(Offset = "0x1")]
	public bool EnableAGC;

	[Token(Token = "0x40002A4")]
	[FieldOffset(Offset = "0x2")]
	public bool EnableNS;

	[Token(Token = "0x40002A5")]
	[FieldOffset(Offset = "0x0")]
	public static AndroidAudioInParameters Default;
}
