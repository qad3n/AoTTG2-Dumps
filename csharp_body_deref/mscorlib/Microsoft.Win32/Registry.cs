// ==================== AoTTG2 cross-reference ====================
// Type: Microsoft.Win32.Registry
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Microsoft.Win32;

[Token(Token = "0x2000076")]
public static class Registry
{
	[Token(Token = "0x4000210")]
	[FieldOffset(Offset = "0x0")]
	public static readonly RegistryKey CurrentUser;

	[Token(Token = "0x4000211")]
	[FieldOffset(Offset = "0x8")]
	public static readonly RegistryKey LocalMachine;

	[Token(Token = "0x4000212")]
	[FieldOffset(Offset = "0x10")]
	public static readonly RegistryKey ClassesRoot;

	[Token(Token = "0x4000213")]
	[FieldOffset(Offset = "0x18")]
	public static readonly RegistryKey Users;

	[Token(Token = "0x4000214")]
	[FieldOffset(Offset = "0x20")]
	public static readonly RegistryKey PerformanceData;

	[Token(Token = "0x4000215")]
	[FieldOffset(Offset = "0x28")]
	public static readonly RegistryKey CurrentConfig;

	[Token(Token = "0x4000216")]
	[FieldOffset(Offset = "0x30")]
	[Obsolete("Use PerformanceData instead")]
	public static readonly RegistryKey DynData;
}
