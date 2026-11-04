// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ExtendedPropertyDescriptor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200019D")]
internal sealed class ExtendedPropertyDescriptor : PropertyDescriptor
{
	[Token(Token = "0x40006A7")]
	[FieldOffset(Offset = "0x88")]
	private readonly ReflectPropertyDescriptor _extenderInfo;

	[Token(Token = "0x40006A8")]
	[FieldOffset(Offset = "0x90")]
	private readonly IExtenderProvider _provider;

	[Token(Token = "0x1700020D")]
	public override Type ComponentType
	{
		[Token(Token = "0x6000A95")]
		[Address(RVA = "0x289E090", Offset = "0x289C690", VA = "0x18289E090", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020E")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x6000A96")]
		[Address(RVA = "0x289E220", Offset = "0x289C820", VA = "0x18289E220", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020F")]
	public override Type PropertyType
	{
		[Token(Token = "0x6000A97")]
		[Address(RVA = "0x289E310", Offset = "0x289C910", VA = "0x18289E310", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000210")]
	public override string DisplayName
	{
		[Token(Token = "0x6000A98")]
		[Address(RVA = "0x289E0C0", Offset = "0x289C6C0", VA = "0x18289E0C0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x289DE10", Offset = "0x289C410", VA = "0x18289DE10")]
	public ExtendedPropertyDescriptor(ReflectPropertyDescriptor extenderInfo, Type receiverType, IExtenderProvider provider, Attribute[] attributes)
	{
	}

	[Token(Token = "0x6000A93")]
	[Address(RVA = "0x289DCD0", Offset = "0x289C2D0", VA = "0x18289DCD0")]
	public ExtendedPropertyDescriptor(PropertyDescriptor extender, Attribute[] attributes)
	{
	}

	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x289DBC0", Offset = "0x289C1C0", VA = "0x18289DBC0", Slot = "23")]
	public override bool CanResetValue(object comp)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A99")]
	[Address(RVA = "0x289DBF0", Offset = "0x289C1F0", VA = "0x18289DBF0", Slot = "26")]
	public override object GetValue(object comp)
	{
		return null;
	}

	[Token(Token = "0x6000A9A")]
	[Address(RVA = "0x289DC20", Offset = "0x289C220", VA = "0x18289DC20", Slot = "29")]
	public override void ResetValue(object comp)
	{
	}

	[Token(Token = "0x6000A9B")]
	[Address(RVA = "0x289DC60", Offset = "0x289C260", VA = "0x18289DC60", Slot = "30")]
	public override void SetValue(object component, object value)
	{
	}

	[Token(Token = "0x6000A9C")]
	[Address(RVA = "0x289DCA0", Offset = "0x289C2A0", VA = "0x18289DCA0", Slot = "31")]
	public override bool ShouldSerializeValue(object comp)
	{
		return default(bool);
	}
}
