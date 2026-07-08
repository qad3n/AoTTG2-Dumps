using System;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000065")]
public interface IAudioReader<T> : IDataReader<T>, IDisposable, IAudioDesc
{
}
