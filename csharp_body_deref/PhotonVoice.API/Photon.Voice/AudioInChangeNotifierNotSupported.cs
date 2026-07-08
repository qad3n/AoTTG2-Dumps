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
		[Address(RVA = "0x3C248E0", Offset = "0x3C248E0", VA = "0x3C248E0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004F")]
	public string Error
	{
		[Token(Token = "0x6000130")]
		[Address(RVA = "0x3C24900", Offset = "0x3C24900", VA = "0x3C24900", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x3C248F0", Offset = "0x3C248F0", VA = "0x3C248F0")]
	public AudioInChangeNotifierNotSupported(Action callback, ILogger logger)
	{
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x3C24930", Offset = "0x3C24930", VA = "0x3C24930", Slot = "6")]
	public void Dispose()
	{
	}
}
