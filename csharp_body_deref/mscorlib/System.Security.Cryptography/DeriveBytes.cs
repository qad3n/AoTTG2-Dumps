using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002D8")]
[ComVisible(true)]
public abstract class DeriveBytes : IDisposable
{
	[Token(Token = "0x60018DD")]
	public abstract byte[] GetBytes(int cb);

	[Token(Token = "0x60018DE")]
	public abstract void Reset();

	[Token(Token = "0x60018DF")]
	[Address(RVA = "0x4E48820", Offset = "0x4E48820", VA = "0x4E48820", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60018E0")]
	[Address(RVA = "0x4E48890", Offset = "0x4E48890", VA = "0x4E48890", Slot = "7")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60018E1")]
	[Address(RVA = "0x4E488A0", Offset = "0x4E488A0", VA = "0x4E488A0")]
	protected DeriveBytes()
	{
	}
}
