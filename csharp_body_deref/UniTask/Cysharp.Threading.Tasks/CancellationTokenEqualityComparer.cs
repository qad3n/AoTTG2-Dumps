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
	[Address(RVA = "0x46ACF70", Offset = "0x46ACF70", VA = "0x46ACF70", Slot = "4")]
	public bool Equals(CancellationToken x, CancellationToken y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x46ACFD0", Offset = "0x46ACFD0", VA = "0x46ACFD0", Slot = "5")]
	public int GetHashCode(CancellationToken obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x46AD020", Offset = "0x46AD020", VA = "0x46AD020")]
	public CancellationTokenEqualityComparer()
	{
	}
}
