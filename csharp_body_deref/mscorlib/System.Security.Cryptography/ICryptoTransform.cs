using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002E6")]
[ComVisible(true)]
public interface ICryptoTransform : IDisposable
{
	[Token(Token = "0x170002AB")]
	int InputBlockSize
	{
		[Token(Token = "0x6001938")]
		get;
	}

	[Token(Token = "0x170002AC")]
	int OutputBlockSize
	{
		[Token(Token = "0x6001939")]
		get;
	}

	[Token(Token = "0x170002AD")]
	bool CanTransformMultipleBlocks
	{
		[Token(Token = "0x600193A")]
		get;
	}

	[Token(Token = "0x170002AE")]
	bool CanReuseTransform
	{
		[Token(Token = "0x600193B")]
		get;
	}

	[Token(Token = "0x600193C")]
	int TransformBlock(byte[] inputBuffer, int inputOffset, int inputCount, byte[] outputBuffer, int outputOffset);

	[Token(Token = "0x600193D")]
	byte[] TransformFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount);
}
