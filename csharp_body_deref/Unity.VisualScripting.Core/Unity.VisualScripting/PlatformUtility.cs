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
	[Address(RVA = "0x2DB8B40", Offset = "0x2DB7140", VA = "0x182DB8B40")]
	static PlatformUtility()
	{
	}

	[Token(Token = "0x600050B")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	private static bool CheckJitSupport()
	{
		return default(bool);
	}

	[Token(Token = "0x600050C")]
	[Address(RVA = "0x2DB8B00", Offset = "0x2DB7100", VA = "0x182DB8B00")]
	public static bool IsEditor(this RuntimePlatform platform)
	{
		return default(bool);
	}

	[Token(Token = "0x600050D")]
	[Address(RVA = "0x2DB8B20", Offset = "0x2DB7120", VA = "0x182DB8B20")]
	public static bool IsStandalone(this RuntimePlatform platform)
	{
		return default(bool);
	}
}
