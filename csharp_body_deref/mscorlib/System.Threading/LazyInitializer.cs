// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.LazyInitializer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001CC")]
public static class LazyInitializer
{
	[Token(Token = "0x600115F")]
	public static T EnsureInitialized<T>(ref T target) where T : class
	{
		return null;
	}

	[Token(Token = "0x6001160")]
	private static T EnsureInitializedCore<T>(ref T target) where T : class
	{
		return null;
	}

	[Token(Token = "0x6001161")]
	public static T EnsureInitialized<T>(ref T target, Func<T> valueFactory) where T : class
	{
		return null;
	}

	[Token(Token = "0x6001162")]
	private static T EnsureInitializedCore<T>(ref T target, Func<T> valueFactory) where T : class
	{
		return null;
	}

	[Token(Token = "0x6001163")]
	public static T EnsureInitialized<T>(ref T target, ref object syncLock, Func<T> valueFactory) where T : class
	{
		return null;
	}

	[Token(Token = "0x6001164")]
	private static T EnsureInitializedCore<T>(ref T target, ref object syncLock, Func<T> valueFactory) where T : class
	{
		return null;
	}

	[Token(Token = "0x6001165")]
	[Address(RVA = "0x3D280B0", Offset = "0x3D280B0", VA = "0x3D280B0")]
	private static object EnsureLockInitialized(ref object syncLock)
	{
		return null;
	}
}
