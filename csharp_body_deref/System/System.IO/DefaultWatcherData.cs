// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.DefaultWatcherData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200023E")]
internal class DefaultWatcherData
{
	[Token(Token = "0x40007F8")]
	[FieldOffset(Offset = "0x10")]
	public FileSystemWatcher FSW;

	[Token(Token = "0x40007F9")]
	[FieldOffset(Offset = "0x18")]
	public string Directory;

	[Token(Token = "0x40007FA")]
	[FieldOffset(Offset = "0x20")]
	public string FileMask;

	[Token(Token = "0x40007FB")]
	[FieldOffset(Offset = "0x28")]
	public bool IncludeSubdirs;

	[Token(Token = "0x40007FC")]
	[FieldOffset(Offset = "0x29")]
	public bool Enabled;

	[Token(Token = "0x40007FD")]
	[FieldOffset(Offset = "0x2A")]
	public bool NoWildcards;

	[Token(Token = "0x40007FE")]
	[FieldOffset(Offset = "0x30")]
	public DateTime DisabledTime;

	[Token(Token = "0x40007FF")]
	[FieldOffset(Offset = "0x38")]
	public object FilesLock;

	[Token(Token = "0x4000800")]
	[FieldOffset(Offset = "0x40")]
	public Dictionary<string, FileData> Files;

	[Token(Token = "0x6000FDA")]
	[Address(RVA = "0x6286570", Offset = "0x6285570", VA = "0x6286570")]
	public DefaultWatcherData()
	{
	}
}
