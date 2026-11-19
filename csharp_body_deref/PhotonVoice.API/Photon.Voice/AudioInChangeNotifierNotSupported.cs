// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.AudioInChangeNotifierNotSupported
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/Device.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000039")]
public class AudioInChangeNotifierNotSupported : IAudioInChangeNotifier, IDisposable
{
	[Token(Token = "0x1700004E")]
	public bool IsSupported
	{
		[Token(Token = "0x600012C")]
		[Address(RVA = "0x5704EE0", Offset = "0x5703EE0", VA = "0x5704EE0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004F")]
	public string Error
	{
		[Token(Token = "0x600012E")]
		[Address(RVA = "0x5704F00", Offset = "0x5703F00", VA = "0x5704F00", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x5704EF0", Offset = "0x5703EF0", VA = "0x5704EF0")]
	public AudioInChangeNotifierNotSupported(Action callback, ILogger logger)
	{
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x5704F30", Offset = "0x5703F30", VA = "0x5704F30", Slot = "6")]
	public void Dispose()
	{
	}
}
