using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x200019B")]
public interface IAsyncOnApplicationPauseHandler
{
	[Token(Token = "0x6000A85")]
	UniTask<bool> OnApplicationPauseAsync();
}
