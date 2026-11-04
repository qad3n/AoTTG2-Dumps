// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Net.Security.MonoTlsProviderFactory
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Mono.Net.Security;

[Token(Token = "0x2000060")]
internal static class MonoTlsProviderFactory
{
	[Token(Token = "0x4000113")]
	[FieldOffset(Offset = "0x0")]
	private static object locker;

	[Token(Token = "0x4000114")]
	[FieldOffset(Offset = "0x8")]
	private static bool initialized;

	[Token(Token = "0x4000115")]
	[FieldOffset(Offset = "0x10")]
	private static MobileTlsProvider defaultProvider;

	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0x18")]
	private static Dictionary<string, Tuple<Guid, string>> providerRegistration;

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x20")]
	private static Dictionary<Guid, MobileTlsProvider> providerCache;

	[Token(Token = "0x4000118")]
	[FieldOffset(Offset = "0x28")]
	internal static readonly Guid UnityTlsId;

	[Token(Token = "0x4000119")]
	[FieldOffset(Offset = "0x38")]
	internal static readonly Guid AppleTlsId;

	[Token(Token = "0x400011A")]
	[FieldOffset(Offset = "0x48")]
	internal static readonly Guid BtlsId;

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x249CC10", Offset = "0x249B210", VA = "0x18249CC10")]
	internal static MobileTlsProvider GetProviderInternal()
	{
		return null;
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x249CD60", Offset = "0x249B360", VA = "0x18249CD60")]
	internal static void InitializeInternal()
	{
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x249D6B0", Offset = "0x249BCB0", VA = "0x18249D6B0")]
	private static MobileTlsProvider LookupProvider(string name, bool throwOnError)
	{
		return null;
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x249D110", Offset = "0x249B710", VA = "0x18249D110")]
	private static void InitializeProviderRegistration()
	{
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x249DE50", Offset = "0x249C450", VA = "0x18249DE50")]
	private static void PopulateUnityProviders()
	{
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x249DC40", Offset = "0x249C240", VA = "0x18249DC40")]
	private static void PopulateProviders()
	{
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6000162")]
	[Address(RVA = "0x1948290", Offset = "0x1946890", VA = "0x181948290")]
	internal static extern bool IsBtlsSupported();

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x249C9C0", Offset = "0x249AFC0", VA = "0x18249C9C0")]
	private static MobileTlsProvider CreateDefaultProviderImpl()
	{
		return null;
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x249CD20", Offset = "0x249B320", VA = "0x18249CD20")]
	internal static MobileTlsProvider GetProvider()
	{
		return null;
	}
}
