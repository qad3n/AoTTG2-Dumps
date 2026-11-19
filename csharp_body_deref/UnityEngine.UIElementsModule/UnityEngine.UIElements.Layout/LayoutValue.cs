// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutValue
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x200061C")]
internal struct LayoutValue
{
	[Token(Token = "0x40016DE")]
	[FieldOffset(Offset = "0x0")]
	private float value;

	[Token(Token = "0x40016DF")]
	[FieldOffset(Offset = "0x4")]
	private LayoutUnit unit;

	[Token(Token = "0x17000B0C")]
	public LayoutUnit Unit
	{
		[Token(Token = "0x6002CAC")]
		[Address(RVA = "0x6BC5360", Offset = "0x6BC4360", VA = "0x6BC5360")]
		get
		{
			return default(LayoutUnit);
		}
	}

	[Token(Token = "0x17000B0D")]
	public float Value
	{
		[Token(Token = "0x6002CAD")]
		[Address(RVA = "0x6BC5370", Offset = "0x6BC4370", VA = "0x6BC5370")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6002CAE")]
	[Address(RVA = "0x6BC1960", Offset = "0x6BC0960", VA = "0x6BC1960")]
	public static LayoutValue Point(float value)
	{
		return default(LayoutValue);
	}

	[Token(Token = "0x6002CAF")]
	[Address(RVA = "0x6BC5380", Offset = "0x6BC4380", VA = "0x6BC5380")]
	public bool Equals(LayoutValue other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002CB0")]
	[Address(RVA = "0x6BC53D0", Offset = "0x6BC43D0", VA = "0x6BC53D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002CB1")]
	[Address(RVA = "0x6BC5460", Offset = "0x6BC4460", VA = "0x6BC5460", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002CB2")]
	[Address(RVA = "0x6BC1A00", Offset = "0x6BC0A00", VA = "0x6BC1A00")]
	public static LayoutValue Undefined()
	{
		return default(LayoutValue);
	}

	[Token(Token = "0x6002CB3")]
	[Address(RVA = "0x6BC1950", Offset = "0x6BC0950", VA = "0x6BC1950")]
	public static LayoutValue Auto()
	{
		return default(LayoutValue);
	}

	[Token(Token = "0x6002CB4")]
	[Address(RVA = "0x6BC19E0", Offset = "0x6BC09E0", VA = "0x6BC19E0")]
	public static LayoutValue Percent(float value)
	{
		return default(LayoutValue);
	}

	[Token(Token = "0x6002CB5")]
	[Address(RVA = "0x6BC5490", Offset = "0x6BC4490", VA = "0x6BC5490")]
	public static implicit operator LayoutValue(float value)
	{
		return default(LayoutValue);
	}
}
