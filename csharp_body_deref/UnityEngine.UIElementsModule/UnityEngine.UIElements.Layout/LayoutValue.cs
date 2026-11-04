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
		[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0")]
		get
		{
			return default(LayoutUnit);
		}
	}

	[Token(Token = "0x17000B0D")]
	public float Value
	{
		[Token(Token = "0x6002CAD")]
		[Address(RVA = "0x562BA0", Offset = "0x5611A0", VA = "0x180562BA0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6002CAE")]
	[Address(RVA = "0x31C32F0", Offset = "0x31C18F0", VA = "0x1831C32F0")]
	public static LayoutValue Point(float value)
	{
		return default(LayoutValue);
	}

	[Token(Token = "0x6002CAF")]
	[Address(RVA = "0x31C3230", Offset = "0x31C1830", VA = "0x1831C3230")]
	public bool Equals(LayoutValue other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002CB0")]
	[Address(RVA = "0x31C3150", Offset = "0x31C1750", VA = "0x1831C3150", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002CB1")]
	[Address(RVA = "0x31C3290", Offset = "0x31C1890", VA = "0x1831C3290", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002CB2")]
	[Address(RVA = "0x31C3320", Offset = "0x31C1920", VA = "0x1831C3320")]
	public static LayoutValue Undefined()
	{
		return default(LayoutValue);
	}

	[Token(Token = "0x6002CB3")]
	[Address(RVA = "0x31C3130", Offset = "0x31C1730", VA = "0x1831C3130")]
	public static LayoutValue Auto()
	{
		return default(LayoutValue);
	}

	[Token(Token = "0x6002CB4")]
	[Address(RVA = "0x31C32C0", Offset = "0x31C18C0", VA = "0x1831C32C0")]
	public static LayoutValue Percent(float value)
	{
		return default(LayoutValue);
	}

	[Token(Token = "0x6002CB5")]
	[Address(RVA = "0x31C32F0", Offset = "0x31C18F0", VA = "0x1831C32F0")]
	public static implicit operator LayoutValue(float value)
	{
		return default(LayoutValue);
	}
}
