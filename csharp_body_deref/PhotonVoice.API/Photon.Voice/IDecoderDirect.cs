using System;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200007F")]
public interface IDecoderDirect<B> : IDecoder, IDisposable
{
	[Token(Token = "0x170000C0")]
	Action<B> Output
	{
		[Token(Token = "0x60002C6")]
		get;
		[Token(Token = "0x60002C7")]
		set;
	}
}
