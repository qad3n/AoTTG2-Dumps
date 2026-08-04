// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.ConstrainedExecution.Consistency
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.ConstrainedExecution;

[Token(Token = "0x200045F")]
public enum Consistency
{
	[Token(Token = "0x40012EA")]
	MayCorruptProcess,
	[Token(Token = "0x40012EB")]
	MayCorruptAppDomain,
	[Token(Token = "0x40012EC")]
	MayCorruptInstance,
	[Token(Token = "0x40012ED")]
	WillNotCorruptState
}
