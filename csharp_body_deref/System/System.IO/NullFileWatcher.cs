// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.NullFileWatcher
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200036A")]
internal class NullFileWatcher : IFileWatcher
{
	[Token(Token = "0x4000F8F")]
	[FieldOffset(Offset = "0x0")]
	private static IFileWatcher instance;

	[Token(Token = "0x60016D9")]
	[Address(RVA = "0x48EEDD0", Offset = "0x48EEDD0", VA = "0x48EEDD0", Slot = "4")]
	public void StartDispatching(object handle)
	{
	}

	[Token(Token = "0x60016DA")]
	[Address(RVA = "0x48EEDE0", Offset = "0x48EEDE0", VA = "0x48EEDE0", Slot = "5")]
	public void StopDispatching(object handle)
	{
	}

	[Token(Token = "0x60016DB")]
	[Address(RVA = "0x48EEDF0", Offset = "0x48EEDF0", VA = "0x48EEDF0", Slot = "6")]
	public void Dispose(object handle)
	{
	}

	[Token(Token = "0x60016DC")]
	[Address(RVA = "0x48ED560", Offset = "0x48ED560", VA = "0x48ED560")]
	public static bool GetInstance(out IFileWatcher watcher)
	{
		return default(bool);
	}

	[Token(Token = "0x60016DD")]
	[Address(RVA = "0x48EEE00", Offset = "0x48EEE00", VA = "0x48EEE00")]
	public NullFileWatcher()
	{
	}
}
