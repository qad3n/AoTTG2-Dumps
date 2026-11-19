// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.SpinWait
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001E0")]
public struct SpinWait
{
	[Token(Token = "0x400090C")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly int SpinCountforSpinBeforeWait;

	[Token(Token = "0x400090D")]
	[FieldOffset(Offset = "0x0")]
	private int _count;

	[Token(Token = "0x170001A1")]
	public int Count
	{
		[Token(Token = "0x60011DB")]
		[Address(RVA = "0x552E8A0", Offset = "0x552D8A0", VA = "0x552E8A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001A2")]
	public bool NextSpinWillYield
	{
		[Token(Token = "0x60011DC")]
		[Address(RVA = "0x552E8B0", Offset = "0x552D8B0", VA = "0x552E8B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60011DD")]
	[Address(RVA = "0x552E7A0", Offset = "0x552D7A0", VA = "0x552E7A0")]
	public void SpinOnce()
	{
	}

	[Token(Token = "0x60011DE")]
	[Address(RVA = "0x552E340", Offset = "0x552D340", VA = "0x552E340")]
	public void SpinOnce(int sleep1Threshold)
	{
	}

	[Token(Token = "0x60011DF")]
	[Address(RVA = "0x552E910", Offset = "0x552D910", VA = "0x552E910")]
	private void SpinOnceCore(int sleep1Threshold)
	{
	}
}
