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

[Token(Token = "0x2000307")]
[ComVisible(true)]
public abstract class DeriveBytes : IDisposable
{
	[Token(Token = "0x6001945")]
	public abstract byte[] GetBytes(int cb);

	[Token(Token = "0x6001946")]
	public abstract void Reset();

	[Token(Token = "0x6001947")]
	[Address(RVA = "0x19A7A30", Offset = "0x19A6030", VA = "0x1819A7A30", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001948")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001949")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected DeriveBytes()
	{
	}
}
