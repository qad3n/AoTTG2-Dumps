// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Burst.CompilerServices.Aliasing
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Burst.CompilerServices;

[Token(Token = "0x2000054")]
public static class Aliasing
{
	[Token(Token = "0x6000E40")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public unsafe static void ExpectAliased(void* a, void* b)
	{
	}

	[Token(Token = "0x6000E41")]
	public static void ExpectAliased<A, B>(in A a, in B b) where A : struct where B : struct
	{
	}

	[Token(Token = "0x6000E42")]
	public unsafe static void ExpectAliased<B>(void* a, in B b) where B : struct
	{
	}

	[Token(Token = "0x6000E43")]
	public unsafe static void ExpectAliased<A>(in A a, void* b) where A : struct
	{
	}

	[Token(Token = "0x6000E44")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public unsafe static void ExpectNotAliased(void* a, void* b)
	{
	}

	[Token(Token = "0x6000E45")]
	public static void ExpectNotAliased<A, B>(in A a, in B b) where A : struct where B : struct
	{
	}

	[Token(Token = "0x6000E46")]
	public unsafe static void ExpectNotAliased<B>(void* a, in B b) where B : struct
	{
	}

	[Token(Token = "0x6000E47")]
	public unsafe static void ExpectNotAliased<A>(in A a, void* b) where A : struct
	{
	}
}
