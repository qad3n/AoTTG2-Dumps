// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.InclusiveRange
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001B6")]
internal struct InclusiveRange
{
	[Token(Token = "0x4000966")]
	[FieldOffset(Offset = "0x0")]
	public short start;

	[Token(Token = "0x4000967")]
	[FieldOffset(Offset = "0x2")]
	public short end;

	[Token(Token = "0x17000239")]
	public bool isEmpty
	{
		[Token(Token = "0x600097E")]
		[Address(RVA = "0x6692CB0", Offset = "0x6691CB0", VA = "0x6692CB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700023A")]
	public static InclusiveRange empty
	{
		[Token(Token = "0x6000981")]
		[Address(RVA = "0x6692D40", Offset = "0x6691D40", VA = "0x6692D40")]
		get
		{
			return default(InclusiveRange);
		}
	}

	[Token(Token = "0x600097A")]
	[Address(RVA = "0x6692BA0", Offset = "0x6691BA0", VA = "0x6692BA0")]
	public InclusiveRange(short startEnd)
	{
	}

	[Token(Token = "0x600097B")]
	[Address(RVA = "0x6692BB0", Offset = "0x6691BB0", VA = "0x6692BB0")]
	public InclusiveRange(short start, short end)
	{
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x6692BC0", Offset = "0x6691BC0", VA = "0x6692BC0")]
	public void Expand(short index)
	{
	}

	[Token(Token = "0x600097D")]
	[Address(RVA = "0x6692C30", Offset = "0x6691C30", VA = "0x6692C30")]
	public void Clamp(short min, short max)
	{
	}

	[Token(Token = "0x600097F")]
	[Address(RVA = "0x6692CC0", Offset = "0x6691CC0", VA = "0x6692CC0")]
	public bool Contains(short index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000980")]
	[Address(RVA = "0x6692CD0", Offset = "0x6691CD0", VA = "0x6692CD0")]
	public static InclusiveRange Merge(InclusiveRange a, InclusiveRange b)
	{
		return default(InclusiveRange);
	}

	[Token(Token = "0x6000982")]
	[Address(RVA = "0x6692D50", Offset = "0x6691D50", VA = "0x6692D50", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
