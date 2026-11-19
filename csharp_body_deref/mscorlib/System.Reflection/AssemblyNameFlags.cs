// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.AssemblyNameFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004D5")]
[Flags]
public enum AssemblyNameFlags
{
	[Token(Token = "0x4001313")]
	None = 0,
	[Token(Token = "0x4001314")]
	PublicKey = 1,
	[Token(Token = "0x4001315")]
	EnableJITcompileOptimizer = 0x4000,
	[Token(Token = "0x4001316")]
	EnableJITcompileTracking = 0x8000,
	[Token(Token = "0x4001317")]
	Retargetable = 0x100
}
