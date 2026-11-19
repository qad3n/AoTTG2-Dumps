// ==================== AoTTG2 cross-reference ====================
// Type: Utility.Algorithms.BrotliAlgorithm
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/Algorithms/BrotliAlgorithm.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.IO.Compression;
using Il2CppDummyDll;

namespace Utility.Algorithms;

[Token(Token = "0x2000940")]
internal class BrotliAlgorithm : CompressionAlgorithm
{
	[Token(Token = "0x600571D")]
	[Address(RVA = "0x5CF4690", Offset = "0x5CF3690", VA = "0x5CF4690", Slot = "4")]
	public override byte[] Compress(byte[] data, CompressionLevel level = CompressionLevel.Fastest)
	{
		// Lifted from source/cpp/Utility/Algorithms/BrotliAlgorithm.c (Utility.Algorithms.BrotliAlgorithm$$Compress): 4 lines keep C-only constructs
		MemoryStream pSVar4;
		BrotliStream pSVar5;
		Byte[] pSVar7;
		MemoryStream pSStack_50;
		BrotliStream pSStack_48;
		BrotliStream* ppSStack_38;
		MemoryStream* ppSStack_28;

		pSStack_50 = null;
		pSStack_48 = null;
		pSVar4 = new MemoryStream();
		ppSStack_28 = &pSStack_50;
		pSStack_50 = pSVar4;
		pSVar5 = new BrotliStream((Stream)pSVar4, level, true);
		ppSStack_38 = &pSStack_48;
		pSStack_48 = pSVar5;
		if ((data == null) || (pSVar5 == null)) {
			throw new NullReferenceException();
		}
		pSVar5.Write(data, 0, (int32_t)data.Length);
		pSVar5 = pSStack_48;
		if (pSStack_48 != null) {
			pSVar5.Dispose();
		}
		if (pSStack_50 == null) {
			throw new NullReferenceException();
		}
		pSVar4 = pSStack_50;
		if (pSStack_50 != null) {
			pSVar4.Dispose();
		}
		return pSVar7;
	}

	[Token(Token = "0x600571E")]
	[Address(RVA = "0x5CF4A60", Offset = "0x5CF3A60", VA = "0x5CF4A60", Slot = "5")]
	public override byte[] Decompress(byte[] data, int bufferSize = 4096, long maxSize = 10485760L)
	{
		// Lifted from source/cpp/Utility/Algorithms/BrotliAlgorithm.c (Utility.Algorithms.BrotliAlgorithm$$Decompress): 9 lines keep C-only constructs
		uint uVar4;
		MemoryStream pSVar5;
		BrotliStream pSVar6;
		Byte[] pSVar7;
		object arg0;
		object arg1;
		String pSVar9;
		Il2CppClass klass;
		IOException __this_00;
		MethodInfo lastManagedFrame;
		long lVar11;
		MemoryStream pSStack_70;
		BrotliStream pSStack_68;
		long iStack_60;
		long[] alStack_58 = new long[2];
		BrotliStream* ppSStack_48;
		MemoryStream* ppSStack_38;

		pSStack_70 = null;
		pSStack_68 = null;
		pSVar5 = new MemoryStream();
		ppSStack_38 = &pSStack_70;
		pSStack_70 = pSVar5;
		pSVar5 = new MemoryStream(data);
		pSVar6 = new BrotliStream((Stream)pSVar5, 0);
		alStack_58[1] = 0;
		ppSStack_48 = &pSStack_68;
		pSStack_68 = pSVar6;
		pSVar7 = (Byte[])new byte[bufferSize];
		lVar11 = 0;
		while(true) {
			if (pSStack_68 == null) {
				throw new NullReferenceException();
			}
			uVar4 = pSStack_68.Read(pSVar7, 0, bufferSize);
			pSVar6 = pSStack_68;
			if ((int)uVar4 < 1) break;
			lVar11 = lVar11 + (ulong)uVar4;
			if (maxSize < lVar11) {
				alStack_58[0] = lVar11;
				arg0 = (object)alStack_58;
				iStack_60 = maxSize;
				arg1 = (object)iStack_60;
				pSVar9 = il2cpp_codegen_get_runtime_metadata(&"Decompressed size exceeded maximum allowed ({0} > {1})");
				pSVar9 = String.Format(pSVar9, arg0, arg1);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(IOException));
				__this_00 = (IOException)il2cpp_codegen_object_new(klass);
				__this_00 = new IOException(pSVar9);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Utility_Algorithms_BrotliAlgorithm_Decompress);
				throw (object)__this_00;
			}
			if (pSStack_70 == null) {
				throw new NullReferenceException();
			}
			pSStack_70.Write(pSVar7, 0, uVar4);
		}
		if (pSStack_68 != null) {
			pSVar6.Dispose();
		}
		if (pSStack_70 == null) {
			throw new NullReferenceException();
		}
		pSVar7 = pSStack_70.ToArray();
		pSVar5 = pSStack_70;
		if (pSStack_70 != null) {
			pSVar5.Dispose();
		}
		return pSVar7;
	}

	[Token(Token = "0x600571F")]
	[Address(RVA = "0x5CEA940", Offset = "0x5CE9940", VA = "0x5CEA940")]
	public BrotliAlgorithm()
	{
		// Lifted from source/cpp/Utility/Algorithms/BrotliAlgorithm.c (Utility.Algorithms.BrotliAlgorithm$$.ctor): clean
		base();
		return;
	}
}
