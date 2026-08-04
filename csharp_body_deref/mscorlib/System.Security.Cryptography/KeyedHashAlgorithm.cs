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

[Token(Token = "0x20002E7")]
[ComVisible(true)]
public abstract class KeyedHashAlgorithm : HashAlgorithm
{
	[Token(Token = "0x4000D13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	protected byte[] KeyValue;

	[Token(Token = "0x170002AF")]
	public virtual byte[] Key
	{
		[Token(Token = "0x6001940")]
		[Address(RVA = "0x3B33260", Offset = "0x3B33260", VA = "0x3B33260", Slot = "23")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001941")]
		[Address(RVA = "0x3B332E0", Offset = "0x3B332E0", VA = "0x3B332E0", Slot = "24")]
		set
		{
		}
	}

	[Token(Token = "0x600193E")]
	[Address(RVA = "0x3B32910", Offset = "0x3B32910", VA = "0x3B32910")]
	protected KeyedHashAlgorithm()
	{
	}

	[Token(Token = "0x600193F")]
	[Address(RVA = "0x3B32730", Offset = "0x3B32730", VA = "0x3B32730", Slot = "13")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001942")]
	[Address(RVA = "0x3B333F0", Offset = "0x3B333F0", VA = "0x3B333F0")]
	public new static KeyedHashAlgorithm Create()
	{
		return null;
	}

	[Token(Token = "0x6001943")]
	[Address(RVA = "0x3B33480", Offset = "0x3B33480", VA = "0x3B33480")]
	public new static KeyedHashAlgorithm Create(string algName)
	{
		return null;
	}
}
