using System;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200008E")]
public interface IProcessor<T> : IDisposable
{
	[Token(Token = "0x60002F7")]
	T[] Process(T[] buf);
}
