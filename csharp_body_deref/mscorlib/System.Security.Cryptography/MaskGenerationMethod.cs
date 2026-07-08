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
	[Address(RVA = "0x4E4E9E0", Offset = "0x4E4E9E0", VA = "0x4E4E9E0")]
	protected MaskGenerationMethod()
	{
	}
}
