// ==================== AoTTG2 cross-reference ====================
// Type: Unity.MemoryProfiler.MetadataInjector
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.MemoryProfiler;

[Token(Token = "0x2000002")]
internal static class MetadataInjector
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x0")]
	public static DefaultMetadataCollect DefaultCollector;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x8")]
	public static long CollectorCount;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x10")]
	public static byte DefaultCollectorInjected;

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x64A4230", Offset = "0x64A3230", VA = "0x64A4230")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSplashScreen)]
	private static void PlayerInitMetadata()
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x64A43F0", Offset = "0x64A33F0", VA = "0x64A43F0")]
	private static void InitializeMetadataCollection()
	{
	}
}
