// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.PlatformAutoDetect
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001EB")]
internal static class PlatformAutoDetect
{
	[Token(Token = "0x20001EC")]
	private sealed class PlatformDetectionCache
	{
		[Token(Token = "0x4000BAB")]
		[FieldOffset(Offset = "0x10")]
		public readonly bool isXRMobile;

		[Token(Token = "0x4000BAC")]
		[FieldOffset(Offset = "0x11")]
		public readonly bool isShaderAPIMobileDefined;

		[Token(Token = "0x4000BAD")]
		[FieldOffset(Offset = "0x12")]
		public readonly bool isSwitch;

		[Token(Token = "0x4000BAE")]
		[FieldOffset(Offset = "0x13")]
		public readonly bool isSwitch2;

		[Token(Token = "0x4000BAF")]
		[FieldOffset(Offset = "0x14")]
		public readonly bool isRunningOnPowerVRGPU;

		[Token(Token = "0x6000ABF")]
		[Address(RVA = "0x2CC54C0", Offset = "0x2CC3AC0", VA = "0x182CC54C0")]
		public PlatformDetectionCache()
		{
		}
	}

	[Token(Token = "0x4000BAA")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Lazy<PlatformDetectionCache> platformCache;

	[Token(Token = "0x170002A4")]
	internal static bool isXRMobile
	{
		[Token(Token = "0x6000AB8")]
		[Address(RVA = "0x2CC5440", Offset = "0x2CC3A40", VA = "0x182CC5440")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002A5")]
	internal static bool isShaderAPIMobileDefined
	{
		[Token(Token = "0x6000AB9")]
		[Address(RVA = "0x2CC52C0", Offset = "0x2CC38C0", VA = "0x182CC52C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002A6")]
	internal static bool isSwitch
	{
		[Token(Token = "0x6000ABA")]
		[Address(RVA = "0x2CC53C0", Offset = "0x2CC39C0", VA = "0x182CC53C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002A7")]
	internal static bool isSwitch2
	{
		[Token(Token = "0x6000ABB")]
		[Address(RVA = "0x2CC5340", Offset = "0x2CC3940", VA = "0x182CC5340")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002A8")]
	internal static bool isRunningOnPowerVRGPU
	{
		[Token(Token = "0x6000ABC")]
		[Address(RVA = "0x2CC5240", Offset = "0x2CC3840", VA = "0x182CC5240")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000AB7")]
	[Address(RVA = "0x2CC4E40", Offset = "0x2CC3440", VA = "0x182CC4E40")]
	internal static void Initialize()
	{
	}

	[Token(Token = "0x6000ABD")]
	[Address(RVA = "0x2CC4EB0", Offset = "0x2CC34B0", VA = "0x182CC4EB0")]
	internal static ShEvalMode ShAutoDetect(ShEvalMode mode)
	{
		return default(ShEvalMode);
	}
}
