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
		[Address(RVA = "0x4DE7760", Offset = "0x4DE7760", VA = "0x4DE7760")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x4DE7AE0", Offset = "0x4DE7AE0", VA = "0x4DE7AE0")]
	internal static void Register(Mono.ISystemDependencyProvider provider)
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x4DE79B0", Offset = "0x4DE79B0", VA = "0x4DE79B0")]
	private static Mono.ISystemDependencyProvider ReflectionLoad()
	{
		return null;
	}
}
