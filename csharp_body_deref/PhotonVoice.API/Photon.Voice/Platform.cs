// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Platform
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/Platform.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000050")]
public static class Platform
{
	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x3F1AFB0", Offset = "0x3F1AFB0", VA = "0x3F1AFB0")]
	public static IDeviceEnumerator CreateAudioInEnumerator(ILogger logger)
	{
		return null;
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x3F1B040", Offset = "0x3F1B040", VA = "0x3F1B040")]
	public static IAudioInChangeNotifier CreateAudioInChangeNotifier(Action callback, ILogger logger)
	{
		return null;
	}

	[Token(Token = "0x60001A3")]
	public static IEncoder CreateDefaultAudioEncoder<T>(ILogger logger, VoiceInfo info)
	{
		return null;
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x3F1B080", Offset = "0x3F1B080", VA = "0x3F1B080")]
	public static IAudioDesc CreateDefaultAudioSource(ILogger logger, DeviceInfo dev, int samplingRate, int channels, [Optional] object otherParams)
	{
		return null;
	}
}
