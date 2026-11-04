// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.LazyInitializer
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001F7")]
public static class LazyInitializer
{
	[Token(Token = "0x60011B8")]
	public static T EnsureInitialized<T>(ref T target) where T : class
	{
		return null;
	}

	[Token(Token = "0x60011B9")]
	private static T EnsureInitializedCore<T>(ref T target) where T : class
	{
		return null;
	}

	[Token(Token = "0x60011BA")]
	public static T EnsureInitialized<T>(ref T target, Func<T> valueFactory) where T : class
	{
		return null;
	}

	[Token(Token = "0x60011BB")]
	private static T EnsureInitializedCore<T>(ref T target, Func<T> valueFactory) where T : class
	{
		return null;
	}

	[Token(Token = "0x60011BC")]
	public static T EnsureInitialized<T>(ref T target, ref bool initialized, ref object syncLock, Func<T> valueFactory)
	{
		return (T)null;
	}

	[Token(Token = "0x60011BD")]
	private static T EnsureInitializedCore<T>(ref T target, ref bool initialized, ref object syncLock, Func<T> valueFactory)
	{
		return (T)null;
	}

	[Token(Token = "0x60011BE")]
	public static T EnsureInitialized<T>(ref T target, ref object syncLock, Func<T> valueFactory) where T : class
	{
		return null;
	}

	[Token(Token = "0x60011BF")]
	private static T EnsureInitializedCore<T>(ref T target, ref object syncLock, Func<T> valueFactory) where T : class
	{
		return null;
	}

	[Token(Token = "0x60011C0")]
	[Address(RVA = "0x1BA0C60", Offset = "0x1B9F260", VA = "0x181BA0C60")]
	private static object EnsureLockInitialized(ref object syncLock)
	{
		return null;
	}
}
