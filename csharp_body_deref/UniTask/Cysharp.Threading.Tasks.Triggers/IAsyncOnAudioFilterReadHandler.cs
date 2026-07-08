using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x200019F")]
public interface IAsyncOnAudioFilterReadHandler
{
	[Token(Token = "0x6000A93")]
	UniTask<(float[], int)> OnAudioFilterReadAsync();
}
