// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.SpinWait
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3D2B660", Offset = "0x3D2B660", VA = "0x3D2B660")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001A1")]
	public bool NextSpinWillYield
	{
		[Token(Token = "0x60011AA")]
		[Address(RVA = "0x3D2B670", Offset = "0x3D2B670", VA = "0x3D2B670")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60011AB")]
	[Address(RVA = "0x3D2B560", Offset = "0x3D2B560", VA = "0x3D2B560")]
	public void SpinOnce()
	{
	}

	[Token(Token = "0x60011AC")]
	[Address(RVA = "0x3D2B0F0", Offset = "0x3D2B0F0", VA = "0x3D2B0F0")]
	public void SpinOnce(int sleep1Threshold)
	{
	}

	[Token(Token = "0x60011AD")]
	[Address(RVA = "0x3D2B6D0", Offset = "0x3D2B6D0", VA = "0x3D2B6D0")]
	private void SpinOnceCore(int sleep1Threshold)
	{
	}
}
