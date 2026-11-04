// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.MaskGenerationMethod
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000319")]
[ComVisible(true)]
public abstract class MaskGenerationMethod
{
	[Token(Token = "0x60019C4")]
	[ComVisible(true)]
	public abstract byte[] GenerateMask(byte[] rgbSeed, int cbReturn);

	[Token(Token = "0x60019C5")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected MaskGenerationMethod()
	{
	}
}
