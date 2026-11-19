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
[Token(Token = "0x2000456")]
[ComVisible(true)]
public enum CallingConvention
{
	[Token(Token = "0x4001229")]
	Winapi = 1,
	[Token(Token = "0x400122A")]
	Cdecl,
	[Token(Token = "0x400122B")]
	StdCall,
	[Token(Token = "0x400122C")]
	ThisCall,
	[Token(Token = "0x400122D")]
	FastCall
}
