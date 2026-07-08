using System;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200007E")]
public interface IDecoder : IDisposable
{
	[Token(Token = "0x170000BF")]
	string Error
	{
		[Token(Token = "0x60002C4")]
		get;
	}

	[Token(Token = "0x60002C3")]
	void Open(VoiceInfo info);

	[Token(Token = "0x60002C5")]
	void Input(ref FrameBuffer buf);
}
