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
	[Token(Token = "0x4000138")]
	[FieldOffset(Offset = "0x0")]
	public static readonly bool supportsJit;

	[Token(Token = "0x600050A")]
	[Address(RVA = "0x67A87B0", Offset = "0x67A77B0", VA = "0x67A87B0")]
	static PlatformUtility()
	{
	}

	[Token(Token = "0x600050B")]
	[Address(RVA = "0x67A87F0", Offset = "0x67A77F0", VA = "0x67A87F0")]
	private static bool CheckJitSupport()
	{
		return default(bool);
	}

	[Token(Token = "0x600050C")]
	[Address(RVA = "0x67A8800", Offset = "0x67A7800", VA = "0x67A8800")]
	public static bool IsEditor(this RuntimePlatform platform)
	{
		return default(bool);
	}

	[Token(Token = "0x600050D")]
	[Address(RVA = "0x67A8820", Offset = "0x67A7820", VA = "0x67A8820")]
	public static bool IsStandalone(this RuntimePlatform platform)
	{
		return default(bool);
	}
}
