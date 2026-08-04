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

[Token(Token = "0x20002EA")]
[ComVisible(true)]
public abstract class MaskGenerationMethod
{
	[Token(Token = "0x600195C")]
	[ComVisible(true)]
	public abstract byte[] GenerateMask(byte[] rgbSeed, int cbReturn);

	[Token(Token = "0x600195D")]
	[Address(RVA = "0x3B34500", Offset = "0x3B34500", VA = "0x3B34500")]
	protected MaskGenerationMethod()
	{
	}
}
