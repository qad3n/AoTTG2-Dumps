// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.SpinWait
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000208")]
public struct SpinWait
{
	[Token(Token = "0x40009AE")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly int SpinCountforSpinBeforeWait;

	[Token(Token = "0x40009AF")]
	[FieldOffset(Offset = "0x0")]
	private int _count;

	[Token(Token = "0x170001A2")]
	public int Count
	{
		[Token(Token = "0x6001204")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001A3")]
	public bool NextSpinWillYield
	{
		[Token(Token = "0x6001205")]
		[Address(RVA = "0x1BA5BA0", Offset = "0x1BA41A0", VA = "0x181BA5BA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001206")]
	[Address(RVA = "0x1BA59D0", Offset = "0x1BA3FD0", VA = "0x181BA59D0")]
	public void SpinOnce()
	{
	}

	[Token(Token = "0x6001207")]
	[Address(RVA = "0x1BA5A20", Offset = "0x1BA4020", VA = "0x181BA5A20")]
	public void SpinOnce(int sleep1Threshold)
	{
	}

	[Token(Token = "0x6001208")]
	[Address(RVA = "0x1BA5840", Offset = "0x1BA3E40", VA = "0x181BA5840")]
	private void SpinOnceCore(int sleep1Threshold)
	{
	}
}
