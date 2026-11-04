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

[Token(Token = "0x2000014")]
public class CancellationTokenEqualityComparer : IEqualityComparer<CancellationToken>
{
	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x0")]
	public static readonly IEqualityComparer<CancellationToken> Default;

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x2909780", Offset = "0x2907D80", VA = "0x182909780", Slot = "4")]
	public bool Equals(CancellationToken x, CancellationToken y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x29097E0", Offset = "0x2907DE0", VA = "0x1829097E0", Slot = "5")]
	public int GetHashCode(CancellationToken obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public CancellationTokenEqualityComparer()
	{
	}
}
