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
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x52D8950", Offset = "0x52D7950", VA = "0x52D8950")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x52D8C90", Offset = "0x52D7C90", VA = "0x52D8C90")]
	internal static void Register(Mono.ISystemDependencyProvider provider)
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x52D8B60", Offset = "0x52D7B60", VA = "0x52D8B60")]
	private static Mono.ISystemDependencyProvider ReflectionLoad()
	{
		return null;
	}
}
