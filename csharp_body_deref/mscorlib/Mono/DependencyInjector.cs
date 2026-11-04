// ==================== AoTTG2 cross-reference ====================
// Type: Mono.DependencyInjector
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono;

[Token(Token = "0x200002D")]
internal static class DependencyInjector
{
	[Token(Token = "0x400010A")]
	[FieldOffset(Offset = "0x0")]
	private static object locker;

	[Token(Token = "0x400010B")]
	[FieldOffset(Offset = "0x8")]
	private static Mono.ISystemDependencyProvider systemDependency;

	[Token(Token = "0x17000003")]
	internal static Mono.ISystemDependencyProvider SystemProvider
	{
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x1944BE0", Offset = "0x19431E0", VA = "0x181944BE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x19449C0", Offset = "0x1942FC0", VA = "0x1819449C0")]
	internal static void Register(Mono.ISystemDependencyProvider provider)
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x1944890", Offset = "0x1942E90", VA = "0x181944890")]
	private static Mono.ISystemDependencyProvider ReflectionLoad()
	{
		return null;
	}
}
