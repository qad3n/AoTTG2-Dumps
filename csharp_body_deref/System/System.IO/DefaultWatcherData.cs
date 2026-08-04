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

[Token(Token = "0x200035C")]
internal class DefaultWatcherData
{
	[Token(Token = "0x4000F4F")]
	[FieldOffset(Offset = "0x10")]
	public FileSystemWatcher FSW;

	[Token(Token = "0x4000F50")]
	[FieldOffset(Offset = "0x18")]
	public string Directory;

	[Token(Token = "0x4000F51")]
	[FieldOffset(Offset = "0x20")]
	public string FileMask;

	[Token(Token = "0x4000F52")]
	[FieldOffset(Offset = "0x28")]
	public bool IncludeSubdirs;

	[Token(Token = "0x4000F53")]
	[FieldOffset(Offset = "0x29")]
	public bool Enabled;

	[Token(Token = "0x4000F54")]
	[FieldOffset(Offset = "0x2A")]
	public bool NoWildcards;

	[Token(Token = "0x4000F55")]
	[FieldOffset(Offset = "0x30")]
	public DateTime DisabledTime;

	[Token(Token = "0x4000F56")]
	[FieldOffset(Offset = "0x38")]
	public object FilesLock;

	[Token(Token = "0x4000F57")]
	[FieldOffset(Offset = "0x40")]
	public Dictionary<string, FileData> Files;

	[Token(Token = "0x6001698")]
	[Address(RVA = "0x48E9F50", Offset = "0x48E9F50", VA = "0x48E9F50")]
	public DefaultWatcherData()
	{
	}
}
