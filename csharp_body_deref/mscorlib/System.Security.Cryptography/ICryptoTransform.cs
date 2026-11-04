// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.ICryptoTransform
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000315")]
[ComVisible(true)]
public interface ICryptoTransform : IDisposable
{
	[Token(Token = "0x170002AD")]
	int InputBlockSize
	{
		[Token(Token = "0x60019A0")]
		get;
	}

	[Token(Token = "0x170002AE")]
	int OutputBlockSize
	{
		[Token(Token = "0x60019A1")]
		get;
	}

	[Token(Token = "0x170002AF")]
	bool CanTransformMultipleBlocks
	{
		[Token(Token = "0x60019A2")]
		get;
	}

	[Token(Token = "0x170002B0")]
	bool CanReuseTransform
	{
		[Token(Token = "0x60019A3")]
		get;
	}

	[Token(Token = "0x60019A4")]
	int TransformBlock(byte[] inputBuffer, int inputOffset, int inputCount, byte[] outputBuffer, int outputOffset);

	[Token(Token = "0x60019A5")]
	byte[] TransformFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount);
}
