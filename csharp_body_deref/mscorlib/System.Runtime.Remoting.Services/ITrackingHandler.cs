// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Services.ITrackingHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Services;

[Token(Token = "0x2000388")]
[ComVisible(true)]
public interface ITrackingHandler
{
	[Token(Token = "0x6001D56")]
	void DisconnectedObject(object obj);

	[Token(Token = "0x6001D57")]
	void MarshaledObject(object obj, ObjRef or);

	[Token(Token = "0x6001D58")]
	void UnmarshaledObject(object obj, ObjRef or);
}
