// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ExtendedPropertyDescriptor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000292")]
internal sealed class ExtendedPropertyDescriptor : PropertyDescriptor
{
	[Token(Token = "0x4000D70")]
	[FieldOffset(Offset = "0x88")]
	private readonly ReflectPropertyDescriptor _extenderInfo;

	[Token(Token = "0x4000D71")]
	[FieldOffset(Offset = "0x90")]
	private readonly IExtenderProvider _provider;

	[Token(Token = "0x1700039E")]
	public override Type ComponentType
	{
		[Token(Token = "0x600104D")]
		[Address(RVA = "0x4893BC0", Offset = "0x4893BC0", VA = "0x4893BC0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700039F")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x600104E")]
		[Address(RVA = "0x4893BF0", Offset = "0x4893BF0", VA = "0x4893BF0", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003A0")]
	public override Type PropertyType
	{
		[Token(Token = "0x600104F")]
		[Address(RVA = "0x4893CD0", Offset = "0x4893CD0", VA = "0x4893CD0", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A1")]
	public override string DisplayName
	{
		[Token(Token = "0x6001050")]
		[Address(RVA = "0x4893D00", Offset = "0x4893D00", VA = "0x4893D00", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600104A")]
	[Address(RVA = "0x4893750", Offset = "0x4893750", VA = "0x4893750")]
	public ExtendedPropertyDescriptor(ReflectPropertyDescriptor extenderInfo, Type receiverType, IExtenderProvider provider, Attribute[] attributes)
	{
	}

	[Token(Token = "0x600104B")]
	[Address(RVA = "0x4893A60", Offset = "0x4893A60", VA = "0x4893A60")]
	public ExtendedPropertyDescriptor(PropertyDescriptor extender, Attribute[] attributes)
	{
	}

	[Token(Token = "0x600104C")]
	[Address(RVA = "0x4893B90", Offset = "0x4893B90", VA = "0x4893B90", Slot = "23")]
	public override bool CanResetValue(object comp)
	{
		return default(bool);
	}

	[Token(Token = "0x6001051")]
	[Address(RVA = "0x4893EE0", Offset = "0x4893EE0", VA = "0x4893EE0", Slot = "26")]
	public override object GetValue(object comp)
	{
		return null;
	}

	[Token(Token = "0x6001052")]
	[Address(RVA = "0x4893F10", Offset = "0x4893F10", VA = "0x4893F10", Slot = "29")]
	public override void ResetValue(object comp)
	{
	}

	[Token(Token = "0x6001053")]
	[Address(RVA = "0x4893F40", Offset = "0x4893F40", VA = "0x4893F40", Slot = "30")]
	public override void SetValue(object component, object value)
	{
	}

	[Token(Token = "0x6001054")]
	[Address(RVA = "0x4893F70", Offset = "0x4893F70", VA = "0x4893F70", Slot = "31")]
	public override bool ShouldSerializeValue(object comp)
	{
		return default(bool);
	}
}
