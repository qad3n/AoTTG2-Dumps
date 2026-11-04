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

[Token(Token = "0x200004E")]
public static class Platform
{
	[Token(Token = "0x600019F")]
	[Address(RVA = "0x1D705E0", Offset = "0x1D6EBE0", VA = "0x181D705E0")]
	public static IDeviceEnumerator CreateAudioInEnumerator(ILogger logger)
	{
		return null;
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x1D70590", Offset = "0x1D6EB90", VA = "0x181D70590")]
	public static IAudioInChangeNotifier CreateAudioInChangeNotifier(Action callback, ILogger logger)
	{
		return null;
	}

	[Token(Token = "0x60001A1")]
	public static IEncoder CreateDefaultAudioEncoder<T>(ILogger logger, VoiceInfo info)
	{
		return null;
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x1D70640", Offset = "0x1D6EC40", VA = "0x181D70640")]
	public static IAudioDesc CreateDefaultAudioSource(ILogger logger, DeviceInfo dev, int samplingRate, int channels, [Optional] object otherParams)
	{
		return null;
	}
}
