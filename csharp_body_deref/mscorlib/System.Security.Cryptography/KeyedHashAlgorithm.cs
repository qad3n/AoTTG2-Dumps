// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.KeyedHashAlgorithm
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002EF")]
[ComVisible(true)]
public abstract class KeyedHashAlgorithm : HashAlgorithm
{
	[Token(Token = "0x4000C80")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	protected byte[] KeyValue;

	[Token(Token = "0x170002B0")]
	public virtual byte[] Key
	{
		[Token(Token = "0x6001985")]
		[Address(RVA = "0x533D080", Offset = "0x533C080", VA = "0x533D080", Slot = "23")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001986")]
		[Address(RVA = "0x533D100", Offset = "0x533C100", VA = "0x533D100", Slot = "24")]
		set
		{
		}
	}

	[Token(Token = "0x6001983")]
	[Address(RVA = "0x533C730", Offset = "0x533B730", VA = "0x533C730")]
	protected KeyedHashAlgorithm()
	{
	}

	[Token(Token = "0x6001984")]
	[Address(RVA = "0x533C550", Offset = "0x533B550", VA = "0x533C550", Slot = "13")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001987")]
	[Address(RVA = "0x533D210", Offset = "0x533C210", VA = "0x533D210")]
	public new static KeyedHashAlgorithm Create()
	{
		return null;
	}

	[Token(Token = "0x6001988")]
	[Address(RVA = "0x533D2A0", Offset = "0x533C2A0", VA = "0x533D2A0")]
	public new static KeyedHashAlgorithm Create(string algName)
	{
		return null;
	}
}
