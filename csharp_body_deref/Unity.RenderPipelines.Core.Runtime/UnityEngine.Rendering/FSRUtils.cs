// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.FSRUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001C4")]
public static class FSRUtils
{
	[Token(Token = "0x20001C5")]
	private static class ShaderConstants
	{
		[Token(Token = "0x40008D5")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int _FsrEasuConstants0;

		[Token(Token = "0x40008D6")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int _FsrEasuConstants1;

		[Token(Token = "0x40008D7")]
		[FieldOffset(Offset = "0x8")]
		public static readonly int _FsrEasuConstants2;

		[Token(Token = "0x40008D8")]
		[FieldOffset(Offset = "0xC")]
		public static readonly int _FsrEasuConstants3;

		[Token(Token = "0x40008D9")]
		[FieldOffset(Offset = "0x10")]
		public static readonly int _FsrRcasConstants;
	}

	[Token(Token = "0x40008D2")]
	internal const float kMaxSharpnessStops = 2.5f;

	[Token(Token = "0x40008D3")]
	public const float kDefaultSharpnessStops = 0.2f;

	[Token(Token = "0x40008D4")]
	public const float kDefaultSharpnessLinear = 0.92f;

	[Token(Token = "0x6000E0A")]
	[Address(RVA = "0x6548050", Offset = "0x6547050", VA = "0x6548050")]
	public static void SetEasuConstants(CommandBuffer cmd, Vector2 inputViewportSizeInPixels, Vector2 inputImageSizeInPixels, Vector2 outputImageSizeInPixels)
	{
	}

	[Token(Token = "0x6000E0B")]
	[Address(RVA = "0x65481F0", Offset = "0x65471F0", VA = "0x65481F0")]
	public static void SetEasuConstants(BaseCommandBuffer cmd, Vector2 inputViewportSizeInPixels, Vector2 inputImageSizeInPixels, Vector2 outputImageSizeInPixels)
	{
	}

	[Token(Token = "0x6000E0C")]
	[Address(RVA = "0x6548210", Offset = "0x6547210", VA = "0x6548210")]
	public static void SetRcasConstants(CommandBuffer cmd, float sharpnessStops = 0.2f)
	{
	}

	[Token(Token = "0x6000E0D")]
	[Address(RVA = "0x65482C0", Offset = "0x65472C0", VA = "0x65482C0")]
	public static void SetRcasConstants(BaseCommandBuffer cmd, float sharpnessStops = 0.2f)
	{
	}

	[Token(Token = "0x6000E0E")]
	[Address(RVA = "0x6548370", Offset = "0x6547370", VA = "0x6548370")]
	public static void SetRcasConstantsLinear(CommandBuffer cmd, float sharpnessLinear = 0.92f)
	{
	}

	[Token(Token = "0x6000E0F")]
	[Address(RVA = "0x6548430", Offset = "0x6547430", VA = "0x6548430")]
	public static void SetRcasConstantsLinear(RasterCommandBuffer cmd, float sharpnessLinear = 0.92f)
	{
	}

	[Token(Token = "0x6000E10")]
	[Address(RVA = "0x65484F0", Offset = "0x65474F0", VA = "0x65484F0")]
	public static bool IsSupported()
	{
		return default(bool);
	}
}
