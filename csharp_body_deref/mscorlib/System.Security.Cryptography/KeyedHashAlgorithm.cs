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

[Token(Token = "0x2000316")]
[ComVisible(true)]
public abstract class KeyedHashAlgorithm : HashAlgorithm
{
	[Token(Token = "0x4000D20")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	protected byte[] KeyValue;

	[Token(Token = "0x170002B1")]
	public virtual byte[] Key
	{
		[Token(Token = "0x60019A8")]
		[Address(RVA = "0x19AB2E0", Offset = "0x19A98E0", VA = "0x1819AB2E0", Slot = "23")]
		get
		{
			return null;
		}
		[Token(Token = "0x60019A9")]
		[Address(RVA = "0x19AB360", Offset = "0x19A9960", VA = "0x1819AB360", Slot = "24")]
		set
		{
		}
	}

	[Token(Token = "0x60019A6")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected KeyedHashAlgorithm()
	{
	}

	[Token(Token = "0x60019A7")]
	[Address(RVA = "0x19AB290", Offset = "0x19A9890", VA = "0x1819AB290", Slot = "13")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60019AA")]
	[Address(RVA = "0x19AB240", Offset = "0x19A9840", VA = "0x1819AB240")]
	public new static KeyedHashAlgorithm Create()
	{
		return null;
	}

	[Token(Token = "0x60019AB")]
	[Address(RVA = "0x19AB1A0", Offset = "0x19A97A0", VA = "0x1819AB1A0")]
	public new static KeyedHashAlgorithm Create(string algName)
	{
		return null;
	}
}
