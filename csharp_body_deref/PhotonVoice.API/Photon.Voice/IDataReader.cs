using System;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200005A")]
public interface IDataReader<T> : IDisposable
{
	[Token(Token = "0x60001C7")]
	bool Read(T[] buffer);
}
