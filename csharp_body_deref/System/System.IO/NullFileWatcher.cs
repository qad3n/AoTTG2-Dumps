// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.NullFileWatcher
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200024C")]
internal class NullFileWatcher : IFileWatcher
{
	[Token(Token = "0x4000838")]
	[FieldOffset(Offset = "0x0")]
	private static IFileWatcher instance;

	[Token(Token = "0x600101D")]
	[Address(RVA = "0x628B120", Offset = "0x628A120", VA = "0x628B120", Slot = "4")]
	public void StartDispatching(object handle)
	{
	}

	[Token(Token = "0x600101E")]
	[Address(RVA = "0x628B130", Offset = "0x628A130", VA = "0x628B130", Slot = "5")]
	public void StopDispatching(object handle)
	{
	}

	[Token(Token = "0x600101F")]
	[Address(RVA = "0x628B140", Offset = "0x628A140", VA = "0x628B140", Slot = "6")]
	public void Dispose(object handle)
	{
	}

	[Token(Token = "0x6001020")]
	[Address(RVA = "0x6289830", Offset = "0x6288830", VA = "0x6289830")]
	public static bool GetInstance(out IFileWatcher watcher)
	{
		return default(bool);
	}

	[Token(Token = "0x6001021")]
	[Address(RVA = "0x628B150", Offset = "0x628A150", VA = "0x628B150")]
	public NullFileWatcher()
	{
	}
}
