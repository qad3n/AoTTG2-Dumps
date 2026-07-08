using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000366")]
internal interface IFileWatcher
{
	[Token(Token = "0x60016D1")]
	void StartDispatching(object fsw);

	[Token(Token = "0x60016D2")]
	void StopDispatching(object fsw);

	[Token(Token = "0x60016D3")]
	void Dispose(object fsw);
}
