using System;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000041")]
public interface ObjectFactory<TType, TInfo> : IDisposable
{
	[Token(Token = "0x1700005D")]
	TInfo Info
	{
		[Token(Token = "0x6000157")]
		get;
	}

	[Token(Token = "0x6000158")]
	TType New();

	[Token(Token = "0x6000159")]
	TType New(TInfo info);

	[Token(Token = "0x600015A")]
	void Free(TType obj);

	[Token(Token = "0x600015B")]
	void Free(TType obj, TInfo info);
}
