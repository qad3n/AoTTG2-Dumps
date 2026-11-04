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
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004F")]
	public string Error
	{
		[Token(Token = "0x600012E")]
		[Address(RVA = "0x1D67D50", Offset = "0x1D66350", VA = "0x181D67D50", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public AudioInChangeNotifierNotSupported(Action callback, ILogger logger)
	{
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	public void Dispose()
	{
	}
}
