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

[Token(Token = "0x200003B")]
public class AudioInChangeNotifierNotSupported : IAudioInChangeNotifier, IDisposable
{
	[Token(Token = "0x1700004E")]
	public bool IsSupported
	{
		[Token(Token = "0x600012E")]
		[Address(RVA = "0x3F1A230", Offset = "0x3F1A230", VA = "0x3F1A230", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004F")]
	public string Error
	{
		[Token(Token = "0x6000130")]
		[Address(RVA = "0x3F1A250", Offset = "0x3F1A250", VA = "0x3F1A250", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x3F1A240", Offset = "0x3F1A240", VA = "0x3F1A240")]
	public AudioInChangeNotifierNotSupported(Action callback, ILogger logger)
	{
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x3F1A280", Offset = "0x3F1A280", VA = "0x3F1A280", Slot = "6")]
	public void Dispose()
	{
	}
}
