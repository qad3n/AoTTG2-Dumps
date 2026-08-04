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
