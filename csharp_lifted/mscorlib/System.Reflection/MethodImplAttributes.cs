// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.MethodImplAttributes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004F0")]
public enum MethodImplAttributes
{
	[Token(Token = "0x4001389")]
	CodeTypeMask = 3,
	[Token(Token = "0x400138A")]
	IL = 0,
	[Token(Token = "0x400138B")]
	Native = 1,
	[Token(Token = "0x400138C")]
	OPTIL = 2,
	[Token(Token = "0x400138D")]
	Runtime = CodeTypeMask,
	[Token(Token = "0x400138E")]
	ManagedMask = 4,
	[Token(Token = "0x400138F")]
	Unmanaged = ManagedMask,
	[Token(Token = "0x4001390")]
	Managed = IL,
	[Token(Token = "0x4001391")]
	ForwardRef = 16,
	[Token(Token = "0x4001392")]
	PreserveSig = 128,
	[Token(Token = "0x4001393")]
	InternalCall = 4096,
	[Token(Token = "0x4001394")]
	Synchronized = 32,
	[Token(Token = "0x4001395")]
	NoInlining = 8,
	[Token(Token = "0x4001396")]
	AggressiveInlining = 256,
	[Token(Token = "0x4001397")]
	NoOptimization = 64,
	[Token(Token = "0x4001398")]
	MaxMethodImplVal = 65535,
	[Token(Token = "0x4001399")]
	SecurityMitigations = 1024
}
