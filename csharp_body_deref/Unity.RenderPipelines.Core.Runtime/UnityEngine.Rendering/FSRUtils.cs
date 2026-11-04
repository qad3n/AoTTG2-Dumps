// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.FSRUtils
// Update status: CHANGED in this game update
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
	[Address(RVA = "0x2B58070", Offset = "0x2B56670", VA = "0x182B58070")]
	public static void SetEasuConstants(CommandBuffer cmd, Vector2 inputViewportSizeInPixels, Vector2 inputImageSizeInPixels, Vector2 outputImageSizeInPixels)
	{
	}

	[Token(Token = "0x6000E0B")]
	[Address(RVA = "0x2B58340", Offset = "0x2B56940", VA = "0x182B58340")]
	public static void SetEasuConstants(BaseCommandBuffer cmd, Vector2 inputViewportSizeInPixels, Vector2 inputImageSizeInPixels, Vector2 outputImageSizeInPixels)
	{
	}

	[Token(Token = "0x6000E0C")]
	[Address(RVA = "0x2B58690", Offset = "0x2B56C90", VA = "0x182B58690")]
	public static void SetRcasConstants(CommandBuffer cmd, float sharpnessStops = 0.2f)
	{
	}

	[Token(Token = "0x6000E0D")]
	[Address(RVA = "0x2B58760", Offset = "0x2B56D60", VA = "0x182B58760")]
	public static void SetRcasConstants(BaseCommandBuffer cmd, float sharpnessStops = 0.2f)
	{
	}

	[Token(Token = "0x6000E0E")]
	[Address(RVA = "0x2B58630", Offset = "0x2B56C30", VA = "0x182B58630")]
	public static void SetRcasConstantsLinear(CommandBuffer cmd, float sharpnessLinear = 0.92f)
	{
	}

	[Token(Token = "0x6000E0F")]
	[Address(RVA = "0x2B58650", Offset = "0x2B56C50", VA = "0x182B58650")]
	public static void SetRcasConstantsLinear(RasterCommandBuffer cmd, float sharpnessLinear = 0.92f)
	{
	}

	[Token(Token = "0x6000E10")]
	[Address(RVA = "0x2B58050", Offset = "0x2B56650", VA = "0x182B58050")]
	public static bool IsSupported()
	{
		return default(bool);
	}
}
