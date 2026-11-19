// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ExtendedPropertyDescriptor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200015E")]
internal sealed class ExtendedPropertyDescriptor : PropertyDescriptor
{
	[Token(Token = "0x40005D8")]
	[FieldOffset(Offset = "0x88")]
	private readonly ReflectPropertyDescriptor _extenderInfo;

	[Token(Token = "0x40005D9")]
	[FieldOffset(Offset = "0x90")]
	private readonly IExtenderProvider _provider;

	[Token(Token = "0x170001DE")]
	public override Type ComponentType
	{
		[Token(Token = "0x60008D5")]
		[Address(RVA = "0x6233C70", Offset = "0x6232C70", VA = "0x6233C70", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DF")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x60008D6")]
		[Address(RVA = "0x6233CA0", Offset = "0x6232CA0", VA = "0x6233CA0", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E0")]
	public override Type PropertyType
	{
		[Token(Token = "0x60008D7")]
		[Address(RVA = "0x6233D80", Offset = "0x6232D80", VA = "0x6233D80", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E1")]
	public override string DisplayName
	{
		[Token(Token = "0x60008D8")]
		[Address(RVA = "0x6233DB0", Offset = "0x6232DB0", VA = "0x6233DB0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x6233810", Offset = "0x6232810", VA = "0x6233810")]
	public ExtendedPropertyDescriptor(ReflectPropertyDescriptor extenderInfo, Type receiverType, IExtenderProvider provider, Attribute[] attributes)
	{
	}

	[Token(Token = "0x60008D3")]
	[Address(RVA = "0x6233B10", Offset = "0x6232B10", VA = "0x6233B10")]
	public ExtendedPropertyDescriptor(PropertyDescriptor extender, Attribute[] attributes)
	{
	}

	[Token(Token = "0x60008D4")]
	[Address(RVA = "0x6233C40", Offset = "0x6232C40", VA = "0x6233C40", Slot = "23")]
	public override bool CanResetValue(object comp)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D9")]
	[Address(RVA = "0x6233F90", Offset = "0x6232F90", VA = "0x6233F90", Slot = "26")]
	public override object GetValue(object comp)
	{
		return null;
	}

	[Token(Token = "0x60008DA")]
	[Address(RVA = "0x6233FC0", Offset = "0x6232FC0", VA = "0x6233FC0", Slot = "29")]
	public override void ResetValue(object comp)
	{
	}

	[Token(Token = "0x60008DB")]
	[Address(RVA = "0x6233FF0", Offset = "0x6232FF0", VA = "0x6233FF0", Slot = "30")]
	public override void SetValue(object component, object value)
	{
	}

	[Token(Token = "0x60008DC")]
	[Address(RVA = "0x6234020", Offset = "0x6233020", VA = "0x6234020", Slot = "31")]
	public override bool ShouldSerializeValue(object comp)
	{
		return default(bool);
	}
}
