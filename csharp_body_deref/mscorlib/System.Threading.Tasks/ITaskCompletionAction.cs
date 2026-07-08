using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000248")]
internal interface ITaskCompletionAction
{
	[Token(Token = "0x17000203")]
	bool InvokeMayRunArbitraryCode
	{
		[Token(Token = "0x6001493")]
		get;
	}

	[Token(Token = "0x6001492")]
	void Invoke(Task completingTask);
}
