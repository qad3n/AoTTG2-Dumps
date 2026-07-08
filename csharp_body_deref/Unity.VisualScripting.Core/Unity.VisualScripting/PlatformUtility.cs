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
	[Address(RVA = "0x49950E0", Offset = "0x49950E0", VA = "0x49950E0")]
	static PlatformUtility()
	{
	}

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x4995120", Offset = "0x4995120", VA = "0x4995120")]
	private static bool CheckJitSupport()
	{
		return default(bool);
	}

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x4995130", Offset = "0x4995130", VA = "0x4995130")]
	public static bool IsEditor(this RuntimePlatform platform)
	{
		return default(bool);
	}

	[Token(Token = "0x6000503")]
	[Address(RVA = "0x4995150", Offset = "0x4995150", VA = "0x4995150")]
	public static bool IsStandalone(this RuntimePlatform platform)
	{
		return default(bool);
	}
}
