using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000199")]
public interface IAsyncOnApplicationFocusHandler
{
	[Token(Token = "0x6000A7E")]
	UniTask<bool> OnApplicationFocusAsync();
}
