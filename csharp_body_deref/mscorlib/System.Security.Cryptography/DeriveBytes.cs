// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.DeriveBytes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3B2E340", Offset = "0x3B2E340", VA = "0x3B2E340", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60018E0")]
	[Address(RVA = "0x3B2E3B0", Offset = "0x3B2E3B0", VA = "0x3B2E3B0", Slot = "7")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60018E1")]
	[Address(RVA = "0x3B2E3C0", Offset = "0x3B2E3C0", VA = "0x3B2E3C0")]
	protected DeriveBytes()
	{
	}
}
