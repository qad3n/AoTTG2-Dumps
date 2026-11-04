// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.NullFileWatcher
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200028B")]
internal class NullFileWatcher : IFileWatcher
{
	[Token(Token = "0x4000907")]
	[FieldOffset(Offset = "0x0")]
	private static IFileWatcher instance;

	[Token(Token = "0x60011DD")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	public void StartDispatching(object handle)
	{
	}

	[Token(Token = "0x60011DE")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	public void StopDispatching(object handle)
	{
	}

	[Token(Token = "0x60011DF")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	public void Dispose(object handle)
	{
	}

	[Token(Token = "0x60011E0")]
	[Address(RVA = "0x2904CE0", Offset = "0x29032E0", VA = "0x182904CE0")]
	public static bool GetInstance(out IFileWatcher watcher)
	{
		return default(bool);
	}

	[Token(Token = "0x60011E1")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public NullFileWatcher()
	{
	}
}
