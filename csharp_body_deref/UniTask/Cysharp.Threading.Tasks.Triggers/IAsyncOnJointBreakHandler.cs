using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001C1")]
public interface IAsyncOnJointBreakHandler
{
	[Token(Token = "0x6000B0A")]
	UniTask<float> OnJointBreakAsync();
}
