// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ISynchronizeInvoke
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000164")]
public interface ISynchronizeInvoke
{
	[Token(Token = "0x170001B5")]
	bool InvokeRequired
	{
		[Token(Token = "0x60008F3")]
		get;
	}

	[Token(Token = "0x60008F4")]
	IAsyncResult BeginInvoke(Delegate method, object[] args);

	[Token(Token = "0x60008F5")]
	object EndInvoke(IAsyncResult result);

	[Token(Token = "0x60008F6")]
	object Invoke(Delegate method, object[] args);
}
