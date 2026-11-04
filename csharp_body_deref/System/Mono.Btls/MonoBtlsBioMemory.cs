// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.MonoBtlsBioMemory
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Mono.Btls;

[Token(Token = "0x200006D")]
internal class MonoBtlsBioMemory : MonoBtlsBio
{
	[PreserveSig]
	[Token(Token = "0x6000188")]
	[Address(RVA = "0x2494A30", Offset = "0x2493030", VA = "0x182494A30")]
	private static extern IntPtr mono_btls_bio_mem_new();

	[PreserveSig]
	[Token(Token = "0x6000189")]
	[Address(RVA = "0x24949A0", Offset = "0x2492FA0", VA = "0x1824949A0")]
	private static extern int mono_btls_bio_mem_get_data(IntPtr handle, out IntPtr data);

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x24948C0", Offset = "0x2492EC0", VA = "0x1824948C0")]
	public MonoBtlsBioMemory()
	{
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x24946A0", Offset = "0x2492CA0", VA = "0x1824946A0")]
	public byte[] GetData()
	{
		return null;
	}
}
