// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.StreamingContextStates
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Serializable]
[Token(Token = "0x20003FA")]
[ComVisible(true)]
[Flags]
public enum StreamingContextStates
{
	[Token(Token = "0x4000F91")]
	CrossProcess = 1,
	[Token(Token = "0x4000F92")]
	CrossMachine = 2,
	[Token(Token = "0x4000F93")]
	File = 4,
	[Token(Token = "0x4000F94")]
	Persistence = 8,
	[Token(Token = "0x4000F95")]
	Remoting = 0x10,
	[Token(Token = "0x4000F96")]
	Other = 0x20,
	[Token(Token = "0x4000F97")]
	Clone = 0x40,
	[Token(Token = "0x4000F98")]
	CrossAppDomain = 0x80,
	[Token(Token = "0x4000F99")]
	All = CrossProcess | CrossMachine | File | Persistence | Remoting | Other | Clone | CrossAppDomain
}
