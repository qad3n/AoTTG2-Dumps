// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.MonoBtlsBio
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Mono.Btls;

[Token(Token = "0x200006B")]
internal class MonoBtlsBio : MonoBtlsObject
{
	[Token(Token = "0x200006C")]
	protected internal class BoringBioHandle : MonoBtlsHandle
	{
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x248F970", Offset = "0x248DF70", VA = "0x18248F970")]
		public BoringBioHandle(IntPtr handle)
		{
		}

		[Token(Token = "0x6000187")]
		[Address(RVA = "0x248F8D0", Offset = "0x248DED0", VA = "0x18248F8D0", Slot = "7")]
		protected override bool ReleaseHandle()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000057")]
	protected internal new BoringBioHandle Handle
	{
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x2495AE0", Offset = "0x24940E0", VA = "0x182495AE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	internal MonoBtlsBio(BoringBioHandle handle)
	{
	}

	[PreserveSig]
	[Token(Token = "0x6000185")]
	[Address(RVA = "0x2495B60", Offset = "0x2494160", VA = "0x182495B60")]
	private static extern void mono_btls_bio_free(IntPtr handle);
}
