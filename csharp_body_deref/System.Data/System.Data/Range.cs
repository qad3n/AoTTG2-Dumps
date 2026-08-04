// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Range
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000070")]
internal struct Range
{
	[Token(Token = "0x4000253")]
	[FieldOffset(Offset = "0x0")]
	private int _min;

	[Token(Token = "0x4000254")]
	[FieldOffset(Offset = "0x4")]
	private int _max;

	[Token(Token = "0x4000255")]
	[FieldOffset(Offset = "0x8")]
	private bool _isNotNull;

	[Token(Token = "0x17000120")]
	public int Count
	{
		[Token(Token = "0x60006DB")]
		[Address(RVA = "0x45B6DC0", Offset = "0x45B6DC0", VA = "0x45B6DC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000121")]
	public bool IsNull
	{
		[Token(Token = "0x60006DC")]
		[Address(RVA = "0x45B67A0", Offset = "0x45B67A0", VA = "0x45B67A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000122")]
	public int Min
	{
		[Token(Token = "0x60006DD")]
		[Address(RVA = "0x45B6DE0", Offset = "0x45B6DE0", VA = "0x45B6DE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x45BD680", Offset = "0x45BD680", VA = "0x45BD680")]
	public Range(int min, int max)
	{
	}

	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x45BD6C0", Offset = "0x45BD6C0", VA = "0x45BD6C0")]
	internal void CheckNull()
	{
	}
}
