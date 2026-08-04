// ==================== AoTTG2 cross-reference ====================
// Type: Mono.DependencyInjector
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono;

[Token(Token = "0x200000F")]
internal static class DependencyInjector
{
	[Token(Token = "0x4000088")]
	[FieldOffset(Offset = "0x0")]
	private static object locker;

	[Token(Token = "0x4000089")]
	[FieldOffset(Offset = "0x8")]
	private static Mono.ISystemDependencyProvider systemDependency;

	[Token(Token = "0x17000003")]
	internal static Mono.ISystemDependencyProvider SystemProvider
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x3ACD280", Offset = "0x3ACD280", VA = "0x3ACD280")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x3ACD600", Offset = "0x3ACD600", VA = "0x3ACD600")]
	internal static void Register(Mono.ISystemDependencyProvider provider)
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x3ACD4D0", Offset = "0x3ACD4D0", VA = "0x3ACD4D0")]
	private static Mono.ISystemDependencyProvider ReflectionLoad()
	{
		return null;
	}
}
