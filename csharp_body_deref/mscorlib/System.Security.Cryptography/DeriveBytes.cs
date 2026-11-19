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

[Token(Token = "0x20002E0")]
[ComVisible(true)]
public abstract class DeriveBytes : IDisposable
{
	[Token(Token = "0x6001922")]
	public abstract byte[] GetBytes(int cb);

	[Token(Token = "0x6001923")]
	public abstract void Reset();

	[Token(Token = "0x6001924")]
	[Address(RVA = "0x53383D0", Offset = "0x53373D0", VA = "0x53383D0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001925")]
	[Address(RVA = "0x5338440", Offset = "0x5337440", VA = "0x5338440", Slot = "7")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001926")]
	[Address(RVA = "0x5338450", Offset = "0x5337450", VA = "0x5338450")]
	protected DeriveBytes()
	{
	}
}
