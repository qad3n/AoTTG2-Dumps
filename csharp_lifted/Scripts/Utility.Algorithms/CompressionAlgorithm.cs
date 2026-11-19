// ==================== AoTTG2 cross-reference ====================
// Type: Utility.Algorithms.CompressionAlgorithm
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/Algorithms/CompressionAlgorithm.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.IO.Compression;
using Il2CppDummyDll;

namespace Utility.Algorithms;

[Token(Token = "0x2000941")]
internal abstract class CompressionAlgorithm
{
	[Token(Token = "0x4002E80")]
	public const int DefaultBufferSize = 4096;

	[Token(Token = "0x4002E81")]
	public const int DefaultMaxSize = 10485760;

	[Token(Token = "0x6005720")]
	public abstract byte[] Compress(byte[] data, CompressionLevel level = CompressionLevel.Fastest);

	[Token(Token = "0x6005721")]
	public abstract byte[] Decompress(byte[] data, int bufferSize = 4096, long maxSize = 10485760L);

	[Token(Token = "0x6005722")]
	[Address(RVA = "0x5CE90E0", Offset = "0x5CE80E0", VA = "0x5CE90E0")]
	public byte[] CompressString(string str, CompressionLevel level = CompressionLevel.Fastest)
	{
		// Lifted from source/cpp/Utility/Algorithms/CompressionAlgorithm.c (Utility.Algorithms.CompressionAlgorithm$$CompressString): 8 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		MethodInfo pMVar3;
		bool bVar4;
		Il2CppClass pIVar5;
		Encoding pSVar6;
		Byte[] pSVar7;

		bVar4 = String.IsNullOrEmpty(str);
		pMVar3 = MethodInfo_System_Array_Empty_byte;
		if (bVar4) {
			if ((MethodInfo_System_Array_Empty_byte.field7_0x38).methodMetadataHandle == null) {
				il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_byte);
				pIVar5 = *(Il2CppClass*)((long)(pMVar3.field7_0x38).methodMetadataHandle + 0x10);
				bVar1 = (pIVar5._2).bitflags1;
			}
			else {
				pIVar5 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_byte.field7_0x38).methodMetadataHandle + 0x10);
				bVar1 = (pIVar5._2).bitflags1;
			}
			if ((bVar1 & 1) == 0) {
				pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
				uVar2 = (pIVar5._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar2 = (pIVar5._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
				pIVar5 = (pMVar3.field7_0x38).rgctx_data[2].klass;
				bVar1 = (pIVar5._2).bitflags1;
			}
			else {
				pIVar5 = (pMVar3.field7_0x38).rgctx_data[2].klass;
				bVar1 = (pIVar5._2).bitflags1;
			}
			if ((bVar1 & 1) == 0) {
				pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			}
			return *(Byte[]*)pIVar5.static_fields;
		}
		pSVar6 = Encoding.UTF8;
		if (pSVar6 == null) {
			throw new NullReferenceException();
		}
		pSVar7 = pSVar6.GetBytes(str);
		pSVar7 = this.Compress(pSVar7, level);
		return pSVar7;
	}

	[Token(Token = "0x6005723")]
	[Address(RVA = "0x5CE96B0", Offset = "0x5CE86B0", VA = "0x5CE96B0")]
	public string DecompressString(byte[] data, int bufferSize = 4096, long maxSize = 10485760L)
	{
		// Lifted from source/cpp/Utility/Algorithms/CompressionAlgorithm.c (Utility.Algorithms.CompressionAlgorithm$$DecompressString): clean
		Encoding pSVar1;
		Byte[] pSVar2;
		String pSVar3;

		if ((data == null) || (data.Length == 0)) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		pSVar1 = Encoding.UTF8;
		pSVar2 = this.Decompress(data, bufferSize, maxSize);
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		return pSVar3;
	}

	[Token(Token = "0x6005724")]
	[Address(RVA = "0x5CF4F70", Offset = "0x5CF3F70", VA = "0x5CF4F70")]
	protected CompressionAlgorithm()
	{
		// Lifted from source/cpp/Utility/Algorithms/CompressionAlgorithm.c (Utility.Algorithms.CompressionAlgorithm$$.ctor): clean
		base();
		return;
	}
}
