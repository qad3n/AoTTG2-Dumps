using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001DD")]
public struct SpinWait
{
	[Token(Token = "0x4000957")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly int SpinCountforSpinBeforeWait;

	[Token(Token = "0x4000958")]
	[FieldOffset(Offset = "0x0")]
	private int _count;

	[Token(Token = "0x170001A0")]
	public int Count
	{
		[Token(Token = "0x60011A9")]
		[Address(RVA = "0x5045B40", Offset = "0x5045B40", VA = "0x5045B40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001A1")]
	public bool NextSpinWillYield
	{
		[Token(Token = "0x60011AA")]
		[Address(RVA = "0x5045B50", Offset = "0x5045B50", VA = "0x5045B50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60011AB")]
	[Address(RVA = "0x5045A40", Offset = "0x5045A40", VA = "0x5045A40")]
	public void SpinOnce()
	{
	}

	[Token(Token = "0x60011AC")]
	[Address(RVA = "0x50455D0", Offset = "0x50455D0", VA = "0x50455D0")]
	public void SpinOnce(int sleep1Threshold)
	{
	}

	[Token(Token = "0x60011AD")]
	[Address(RVA = "0x5045BB0", Offset = "0x5045BB0", VA = "0x5045BB0")]
	private void SpinOnceCore(int sleep1Threshold)
	{
	}
}
