// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.PlatformUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x20000D0")]
public static class PlatformUtility
{
	[Token(Token = "0x400013A")]
	[FieldOffset(Offset = "0x0")]
	public static readonly bool supportsJit;

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x4CB9CB0", Offset = "0x4CB9CB0", VA = "0x4CB9CB0")]
	static PlatformUtility()
	{
	}

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x4CB9CF0", Offset = "0x4CB9CF0", VA = "0x4CB9CF0")]
	private static bool CheckJitSupport()
	{
		return default(bool);
	}

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x4CB9D00", Offset = "0x4CB9D00", VA = "0x4CB9D00")]
	public static bool IsEditor(this RuntimePlatform platform)
	{
		return default(bool);
	}

	[Token(Token = "0x6000503")]
	[Address(RVA = "0x4CB9D20", Offset = "0x4CB9D20", VA = "0x4CB9D20")]
	public static bool IsStandalone(this RuntimePlatform platform)
	{
		return default(bool);
	}
}
