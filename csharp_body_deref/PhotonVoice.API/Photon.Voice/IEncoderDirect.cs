using System;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200007C")]
public interface IEncoderDirect<B> : IEncoder, IDisposable
{
	[Token(Token = "0x60002C1")]
	void Input(B buf);
}
