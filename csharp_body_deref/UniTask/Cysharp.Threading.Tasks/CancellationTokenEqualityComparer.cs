// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.CancellationTokenEqualityComparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000016")]
public class CancellationTokenEqualityComparer : IEqualityComparer<CancellationToken>
{
	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x0")]
	public static readonly IEqualityComparer<CancellationToken> Default;

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x49D2070", Offset = "0x49D2070", VA = "0x49D2070", Slot = "4")]
	public bool Equals(CancellationToken x, CancellationToken y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x49D20D0", Offset = "0x49D20D0", VA = "0x49D20D0", Slot = "5")]
	public int GetHashCode(CancellationToken obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x49D2120", Offset = "0x49D2120", VA = "0x49D2120")]
	public CancellationTokenEqualityComparer()
	{
	}
}
