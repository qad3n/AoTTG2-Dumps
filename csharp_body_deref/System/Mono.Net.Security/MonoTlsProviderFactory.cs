// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Net.Security.MonoTlsProviderFactory
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Mono.Net.Security;

[Token(Token = "0x2000060")]
internal static class MonoTlsProviderFactory
{
	[Token(Token = "0x4000111")]
	[FieldOffset(Offset = "0x0")]
	private static object locker;

	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0x8")]
	private static bool initialized;

	[Token(Token = "0x4000113")]
	[FieldOffset(Offset = "0x10")]
	private static MobileTlsProvider defaultProvider;

	[Token(Token = "0x4000114")]
	[FieldOffset(Offset = "0x18")]
	private static Dictionary<string, Tuple<Guid, string>> providerRegistration;

	[Token(Token = "0x4000115")]
	[FieldOffset(Offset = "0x20")]
	private static Dictionary<Guid, MobileTlsProvider> providerCache;

	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0x28")]
	internal static readonly Guid UnityTlsId;

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x38")]
	internal static readonly Guid AppleTlsId;

	[Token(Token = "0x4000118")]
	[FieldOffset(Offset = "0x48")]
	internal static readonly Guid BtlsId;

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x4524B20", Offset = "0x4524B20", VA = "0x4524B20")]
	internal static MobileTlsProvider GetProviderInternal()
	{
		return null;
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x4529630", Offset = "0x4529630", VA = "0x4529630")]
	internal static void InitializeInternal()
	{
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x4529DF0", Offset = "0x4529DF0", VA = "0x4529DF0")]
	private static MobileTlsProvider LookupProvider(string name, bool throwOnError)
	{
		return null;
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x4529A00", Offset = "0x4529A00", VA = "0x4529A00")]
	private static void InitializeProviderRegistration()
	{
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x452A3D0", Offset = "0x452A3D0", VA = "0x452A3D0")]
	private static void PopulateUnityProviders()
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x452A510", Offset = "0x452A510", VA = "0x452A510")]
	private static void PopulateProviders()
	{
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x4529C80", Offset = "0x4529C80", VA = "0x4529C80")]
	private static MobileTlsProvider CreateDefaultProviderImpl()
	{
		return null;
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x452A560", Offset = "0x452A560", VA = "0x452A560")]
	internal static MobileTlsProvider GetProvider()
	{
		return null;
	}
}
