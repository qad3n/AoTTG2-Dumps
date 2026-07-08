using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000050")]
public static class Platform
{
	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x3C25660", Offset = "0x3C25660", VA = "0x3C25660")]
	public static IDeviceEnumerator CreateAudioInEnumerator(ILogger logger)
	{
		return null;
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x3C256F0", Offset = "0x3C256F0", VA = "0x3C256F0")]
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
	[Address(RVA = "0x3C25730", Offset = "0x3C25730", VA = "0x3C25730")]
	public static IAudioDesc CreateDefaultAudioSource(ILogger logger, DeviceInfo dev, int samplingRate, int channels, [Optional] object otherParams)
	{
		return null;
	}
}
