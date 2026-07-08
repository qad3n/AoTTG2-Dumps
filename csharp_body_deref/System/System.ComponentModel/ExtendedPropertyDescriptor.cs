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
		[Address(RVA = "0x456EAC0", Offset = "0x456EAC0", VA = "0x456EAC0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700039F")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x600104E")]
		[Address(RVA = "0x456EAF0", Offset = "0x456EAF0", VA = "0x456EAF0", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003A0")]
	public override Type PropertyType
	{
		[Token(Token = "0x600104F")]
		[Address(RVA = "0x456EBD0", Offset = "0x456EBD0", VA = "0x456EBD0", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A1")]
	public override string DisplayName
	{
		[Token(Token = "0x6001050")]
		[Address(RVA = "0x456EC00", Offset = "0x456EC00", VA = "0x456EC00", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600104A")]
	[Address(RVA = "0x456E650", Offset = "0x456E650", VA = "0x456E650")]
	public ExtendedPropertyDescriptor(ReflectPropertyDescriptor extenderInfo, Type receiverType, IExtenderProvider provider, Attribute[] attributes)
	{
	}

	[Token(Token = "0x600104B")]
	[Address(RVA = "0x456E960", Offset = "0x456E960", VA = "0x456E960")]
	public ExtendedPropertyDescriptor(PropertyDescriptor extender, Attribute[] attributes)
	{
	}

	[Token(Token = "0x600104C")]
	[Address(RVA = "0x456EA90", Offset = "0x456EA90", VA = "0x456EA90", Slot = "23")]
	public override bool CanResetValue(object comp)
	{
		return default(bool);
	}

	[Token(Token = "0x6001051")]
	[Address(RVA = "0x456EDE0", Offset = "0x456EDE0", VA = "0x456EDE0", Slot = "26")]
	public override object GetValue(object comp)
	{
		return null;
	}

	[Token(Token = "0x6001052")]
	[Address(RVA = "0x456EE10", Offset = "0x456EE10", VA = "0x456EE10", Slot = "29")]
	public override void ResetValue(object comp)
	{
	}

	[Token(Token = "0x6001053")]
	[Address(RVA = "0x456EE40", Offset = "0x456EE40", VA = "0x456EE40", Slot = "30")]
	public override void SetValue(object component, object value)
	{
	}

	[Token(Token = "0x6001054")]
	[Address(RVA = "0x456EE70", Offset = "0x456EE70", VA = "0x456EE70", Slot = "31")]
	public override bool ShouldSerializeValue(object comp)
	{
		return default(bool);
	}
}
