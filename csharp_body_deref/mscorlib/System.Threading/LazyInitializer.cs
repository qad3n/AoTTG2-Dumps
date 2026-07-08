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
	[Address(RVA = "0x5042590", Offset = "0x5042590", VA = "0x5042590")]
	private static object EnsureLockInitialized(ref object syncLock)
	{
		return null;
	}
}
