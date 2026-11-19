// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Contexts.IContextProperty
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Contexts;

[Token(Token = "0x2000377")]
[ComVisible(true)]
public interface IContextProperty
{
	[Token(Token = "0x1700036D")]
	string Name
	{
		[Token(Token = "0x6001DB6")]
		get;
	}

	[Token(Token = "0x6001DB7")]
	void Freeze(Context newContext);

	[Token(Token = "0x6001DB8")]
	bool IsNewContextOK(Context newCtx);
}
