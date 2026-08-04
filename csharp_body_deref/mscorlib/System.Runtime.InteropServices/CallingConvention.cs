// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.InteropServices.CallingConvention
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Serializable]
[Token(Token = "0x200044E")]
[ComVisible(true)]
public enum CallingConvention
{
	[Token(Token = "0x40012C7")]
	Winapi = 1,
	[Token(Token = "0x40012C8")]
	Cdecl,
	[Token(Token = "0x40012C9")]
	StdCall,
	[Token(Token = "0x40012CA")]
	ThisCall,
	[Token(Token = "0x40012CB")]
	FastCall
}
