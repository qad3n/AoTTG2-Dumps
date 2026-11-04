// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Range
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200007A")]
internal struct Range
{
	[Token(Token = "0x4000266")]
	[FieldOffset(Offset = "0x0")]
	private int _min;

	[Token(Token = "0x4000267")]
	[FieldOffset(Offset = "0x4")]
	private int _max;

	[Token(Token = "0x4000268")]
	[FieldOffset(Offset = "0x8")]
	private bool _isNotNull;

	[Token(Token = "0x17000123")]
	public int Count
	{
		[Token(Token = "0x60006FA")]
		[Address(RVA = "0x2523680", Offset = "0x2521C80", VA = "0x182523680")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000124")]
	public bool IsNull
	{
		[Token(Token = "0x60006FB")]
		[Address(RVA = "0x25236A0", Offset = "0x2521CA0", VA = "0x1825236A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000125")]
	public int Min
	{
		[Token(Token = "0x60006FC")]
		[Address(RVA = "0x25236B0", Offset = "0x2521CB0", VA = "0x1825236B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x2523630", Offset = "0x2521C30", VA = "0x182523630")]
	public Range(int min, int max)
	{
	}

	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x25235F0", Offset = "0x2521BF0", VA = "0x1825235F0")]
	internal void CheckNull()
	{
	}
}
