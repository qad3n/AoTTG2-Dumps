// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.MonoBtlsKey
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using System.Security.Cryptography;
using Il2CppDummyDll;

namespace Mono.Btls;

[Token(Token = "0x2000077")]
internal class MonoBtlsKey : MonoBtlsObject
{
	[Token(Token = "0x2000078")]
	internal class BoringKeyHandle : MonoBtlsHandle
	{
		[Token(Token = "0x60001D4")]
		[Address(RVA = "0x248F970", Offset = "0x248DF70", VA = "0x18248F970")]
		internal BoringKeyHandle(IntPtr handle)
		{
		}

		[Token(Token = "0x60001D5")]
		[Address(RVA = "0x248F980", Offset = "0x248DF80", VA = "0x18248F980", Slot = "7")]
		protected override bool ReleaseHandle()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005B")]
	internal new BoringKeyHandle Handle
	{
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x2498BB0", Offset = "0x24971B0", VA = "0x182498BB0")]
		get
		{
			return null;
		}
	}

	[PreserveSig]
	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x2498DE0", Offset = "0x24973E0", VA = "0x182498DE0")]
	private static extern IntPtr mono_btls_key_new();

	[PreserveSig]
	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x2498CD0", Offset = "0x24972D0", VA = "0x182498CD0")]
	private static extern void mono_btls_key_free(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x2498E50", Offset = "0x2497450", VA = "0x182498E50")]
	private static extern IntPtr mono_btls_key_up_ref(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x2498D50", Offset = "0x2497350", VA = "0x182498D50")]
	private static extern int mono_btls_key_get_bytes(IntPtr handle, out IntPtr data, out int size, int include_private_bits);

	[PreserveSig]
	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x2498C30", Offset = "0x2497230", VA = "0x182498C30")]
	private static extern int mono_btls_key_assign_rsa_private_key(IntPtr handle, byte[] der, int der_length);

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	internal MonoBtlsKey(BoringKeyHandle handle)
	{
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x24989E0", Offset = "0x2496FE0", VA = "0x1824989E0")]
	public byte[] GetBytes(bool include_private_bits)
	{
		return null;
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x24986A0", Offset = "0x2496CA0", VA = "0x1824986A0")]
	public MonoBtlsKey Copy()
	{
		return null;
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x24987F0", Offset = "0x2496DF0", VA = "0x1824987F0")]
	public static MonoBtlsKey CreateFromRSAPrivateKey(RSA privateKey)
	{
		return null;
	}
}
