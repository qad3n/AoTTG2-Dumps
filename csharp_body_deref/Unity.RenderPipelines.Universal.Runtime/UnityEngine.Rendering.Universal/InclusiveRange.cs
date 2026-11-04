// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.InclusiveRange
// Update status: NEW in this game update
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
		[Address(RVA = "0x2C91A30", Offset = "0x2C90030", VA = "0x182C91A30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700023A")]
	public static InclusiveRange empty
	{
		[Token(Token = "0x6000981")]
		[Address(RVA = "0x2C91A20", Offset = "0x2C90020", VA = "0x182C91A20")]
		get
		{
			return default(InclusiveRange);
		}
	}

	[Token(Token = "0x600097A")]
	[Address(RVA = "0x2A94580", Offset = "0x2A92B80", VA = "0x182A94580")]
	public InclusiveRange(short startEnd)
	{
	}

	[Token(Token = "0x600097B")]
	[Address(RVA = "0x1A6A860", Offset = "0x1A68E60", VA = "0x181A6A860")]
	public InclusiveRange(short start, short end)
	{
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x2C918A0", Offset = "0x2C8FEA0", VA = "0x182C918A0")]
	public void Expand(short index)
	{
	}

	[Token(Token = "0x600097D")]
	[Address(RVA = "0x2C91810", Offset = "0x2C8FE10", VA = "0x182C91810")]
	public void Clamp(short min, short max)
	{
	}

	[Token(Token = "0x600097F")]
	[Address(RVA = "0x2C91890", Offset = "0x2C8FE90", VA = "0x182C91890")]
	public bool Contains(short index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000980")]
	[Address(RVA = "0x2C91920", Offset = "0x2C8FF20", VA = "0x182C91920")]
	public static InclusiveRange Merge(InclusiveRange a, InclusiveRange b)
	{
		return default(InclusiveRange);
	}

	[Token(Token = "0x6000982")]
	[Address(RVA = "0x2C919A0", Offset = "0x2C8FFA0", VA = "0x182C919A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
