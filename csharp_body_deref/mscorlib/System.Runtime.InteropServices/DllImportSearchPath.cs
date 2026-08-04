// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.InteropServices.DllImportSearchPath
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Token(Token = "0x2000449")]
[Flags]
public enum DllImportSearchPath
{
	[Token(Token = "0x40012B0")]
	UseDllDirectoryForDependencies = 0x100,
	[Token(Token = "0x40012B1")]
	ApplicationDirectory = 0x200,
	[Token(Token = "0x40012B2")]
	UserDirectories = 0x400,
	[Token(Token = "0x40012B3")]
	System32 = 0x800,
	[Token(Token = "0x40012B4")]
	SafeDirectories = 0x1000,
	[Token(Token = "0x40012B5")]
	AssemblyDirectory = 2,
	[Token(Token = "0x40012B6")]
	LegacyBehavior = 0
}
