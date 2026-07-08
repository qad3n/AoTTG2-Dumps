using System;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000066")]
public interface IAudioPusher<T> : IAudioDesc, IDisposable
{
	[Token(Token = "0x6000236")]
	void SetCallback(Action<T[]> callback, ObjectFactory<T[], int> bufferFactory);
}
