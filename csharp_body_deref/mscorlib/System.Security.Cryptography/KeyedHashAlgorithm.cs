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
		[Address(RVA = "0x4E4D740", Offset = "0x4E4D740", VA = "0x4E4D740", Slot = "23")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001941")]
		[Address(RVA = "0x4E4D7C0", Offset = "0x4E4D7C0", VA = "0x4E4D7C0", Slot = "24")]
		set
		{
		}
	}

	[Token(Token = "0x600193E")]
	[Address(RVA = "0x4E4CDF0", Offset = "0x4E4CDF0", VA = "0x4E4CDF0")]
	protected KeyedHashAlgorithm()
	{
	}

	[Token(Token = "0x600193F")]
	[Address(RVA = "0x4E4CC10", Offset = "0x4E4CC10", VA = "0x4E4CC10", Slot = "13")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001942")]
	[Address(RVA = "0x4E4D8D0", Offset = "0x4E4D8D0", VA = "0x4E4D8D0")]
	public new static KeyedHashAlgorithm Create()
	{
		return null;
	}

	[Token(Token = "0x6001943")]
	[Address(RVA = "0x4E4D960", Offset = "0x4E4D960", VA = "0x4E4D960")]
	public new static KeyedHashAlgorithm Create(string algName)
	{
		return null;
	}
}
