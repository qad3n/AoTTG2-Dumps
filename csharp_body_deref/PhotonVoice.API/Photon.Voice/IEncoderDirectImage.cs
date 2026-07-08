using System;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200007D")]
public interface IEncoderDirectImage : IEncoderDirect<ImageBufferNative>, IEncoder, IDisposable
{
	[Token(Token = "0x170000BE")]
	ImageFormat ImageFormat
	{
		[Token(Token = "0x60002C2")]
		get;
	}
}
