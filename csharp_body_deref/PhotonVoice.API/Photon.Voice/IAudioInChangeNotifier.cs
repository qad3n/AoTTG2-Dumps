using System;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200003A")]
public interface IAudioInChangeNotifier : IDisposable
{
	[Token(Token = "0x1700004C")]
	bool IsSupported
	{
		[Token(Token = "0x600012C")]
		get;
	}

	[Token(Token = "0x1700004D")]
	string Error
	{
		[Token(Token = "0x600012D")]
		get;
	}
}
