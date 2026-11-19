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
		[Address(RVA = "0x5EC0120", Offset = "0x5EBF120", VA = "0x5EC0120")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000124")]
	public bool IsNull
	{
		[Token(Token = "0x60006FB")]
		[Address(RVA = "0x5EBFB30", Offset = "0x5EBEB30", VA = "0x5EBFB30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000125")]
	public int Min
	{
		[Token(Token = "0x60006FC")]
		[Address(RVA = "0x5EC0140", Offset = "0x5EBF140", VA = "0x5EC0140")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x5EC6320", Offset = "0x5EC5320", VA = "0x5EC6320")]
	public Range(int min, int max)
	{
	}

	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x5EC6360", Offset = "0x5EC5360", VA = "0x5EC6360")]
	internal void CheckNull()
	{
	}
}
