// ==================== AoTTG2 cross-reference ====================
// Type: Utility.Algorithms.LZFAlgorithm
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/Algorithms/LZFAlgorithm.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.IO.Compression;
using Il2CppDummyDll;

namespace Utility.Algorithms;

[Token(Token = "0x2000944")]
internal class LZFAlgorithm : CompressionAlgorithm
{
	[Token(Token = "0x600572B")]
	[Address(RVA = "0x5CF6140", Offset = "0x5CF5140", VA = "0x5CF6140", Slot = "4")]
	public override byte[] Compress(byte[] data, CompressionLevel level = CompressionLevel.Fastest)
	{
		// Lifted from source/cpp/Utility/Algorithms/LZFAlgorithm.c (Utility.Algorithms.LZFAlgorithm$$Compress): clean
		uint uVar1;
		Byte[] pSVar2;

		if (Il2CppMethodInitialized_0754831e == false) {
			Il2CppMethodInitialized_0754831e = true;
			uVar1 = (typeof(CLZF2)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CLZF2)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return pSVar2;
		}
		return pSVar2;
	}

	[Token(Token = "0x600572C")]
	[Address(RVA = "0x5CF61A0", Offset = "0x5CF51A0", VA = "0x5CF61A0", Slot = "5")]
	public override byte[] Decompress(byte[] data, int bufferSize = 4096, long maxSize = 10485760L)
	{
		// Lifted from source/cpp/Utility/Algorithms/LZFAlgorithm.c (Utility.Algorithms.LZFAlgorithm$$Decompress): clean
		uint uVar1;
		Byte[] pSVar2;

		if (Il2CppMethodInitialized_0754831f == false) {
			Il2CppMethodInitialized_0754831f = true;
			uVar1 = (typeof(CLZF2)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CLZF2)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return pSVar2;
		}
		return pSVar2;
	}

	[Token(Token = "0x600572D")]
	[Address(RVA = "0x5CEA970", Offset = "0x5CE9970", VA = "0x5CEA970")]
	public LZFAlgorithm()
	{
		// Lifted from source/cpp/Utility/Algorithms/LZFAlgorithm.c (Utility.Algorithms.LZFAlgorithm$$.ctor): clean
		base();
		return;
	}
}
