// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.PlatformAutoDetect
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x66B10B0", Offset = "0x66B00B0", VA = "0x66B10B0")]
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
		[Address(RVA = "0x66B0BC0", Offset = "0x66AFBC0", VA = "0x66B0BC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002A5")]
	internal static bool isShaderAPIMobileDefined
	{
		[Token(Token = "0x6000AB9")]
		[Address(RVA = "0x66B0C60", Offset = "0x66AFC60", VA = "0x66B0C60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002A6")]
	internal static bool isSwitch
	{
		[Token(Token = "0x6000ABA")]
		[Address(RVA = "0x66B0D00", Offset = "0x66AFD00", VA = "0x66B0D00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002A7")]
	internal static bool isSwitch2
	{
		[Token(Token = "0x6000ABB")]
		[Address(RVA = "0x66B0DA0", Offset = "0x66AFDA0", VA = "0x66B0DA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002A8")]
	internal static bool isRunningOnPowerVRGPU
	{
		[Token(Token = "0x6000ABC")]
		[Address(RVA = "0x66B0E40", Offset = "0x66AFE40", VA = "0x66B0E40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000AB7")]
	[Address(RVA = "0x66B0B30", Offset = "0x66AFB30", VA = "0x66B0B30")]
	internal static void Initialize()
	{
	}

	[Token(Token = "0x6000ABD")]
	[Address(RVA = "0x66B0EE0", Offset = "0x66AFEE0", VA = "0x66B0EE0")]
	internal static ShEvalMode ShAutoDetect(ShEvalMode mode)
	{
		return default(ShEvalMode);
	}
}
