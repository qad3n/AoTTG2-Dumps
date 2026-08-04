// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.ITaskCompletionAction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
