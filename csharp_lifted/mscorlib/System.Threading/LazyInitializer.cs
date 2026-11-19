// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.LazyInitializer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001CF")]
public static class LazyInitializer
{
	[Token(Token = "0x600118F")]
	public static T EnsureInitialized<T>(ref T target) where T : class
	{
		return null;
	}

	[Token(Token = "0x6001190")]
	private static T EnsureInitializedCore<T>(ref T target) where T : class
	{
		return null;
	}

	[Token(Token = "0x6001191")]
	public static T EnsureInitialized<T>(ref T target, Func<T> valueFactory) where T : class
	{
		return null;
	}

	[Token(Token = "0x6001192")]
	private static T EnsureInitializedCore<T>(ref T target, Func<T> valueFactory) where T : class
	{
		return null;
	}

	[Token(Token = "0x6001193")]
	public static T EnsureInitialized<T>(ref T target, ref bool initialized, ref object syncLock, Func<T> valueFactory)
	{
		return (T)null;
	}

	[Token(Token = "0x6001194")]
	private static T EnsureInitializedCore<T>(ref T target, ref bool initialized, ref object syncLock, Func<T> valueFactory)
	{
		return (T)null;
	}

	[Token(Token = "0x6001195")]
	public static T EnsureInitialized<T>(ref T target, ref object syncLock, Func<T> valueFactory) where T : class
	{
		return null;
	}

	[Token(Token = "0x6001196")]
	private static T EnsureInitializedCore<T>(ref T target, ref object syncLock, Func<T> valueFactory) where T : class
	{
		return null;
	}

	[Token(Token = "0x6001197")]
	[Address(RVA = "0x552B470", Offset = "0x552A470", VA = "0x552B470")]
	private static object EnsureLockInitialized(ref object syncLock)
	{
		return null;
	}
}
