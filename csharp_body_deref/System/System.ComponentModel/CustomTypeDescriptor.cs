// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.CustomTypeDescriptor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000147")]
public abstract class CustomTypeDescriptor : ICustomTypeDescriptor
{
	[Token(Token = "0x4000599")]
	[FieldOffset(Offset = "0x10")]
	private readonly ICustomTypeDescriptor _parent;

	[Token(Token = "0x6000816")]
	[Address(RVA = "0x622DCF0", Offset = "0x622CCF0", VA = "0x622DCF0")]
	protected CustomTypeDescriptor()
	{
	}

	[Token(Token = "0x6000817")]
	[Address(RVA = "0x622DD00", Offset = "0x622CD00", VA = "0x622DD00")]
	protected CustomTypeDescriptor(ICustomTypeDescriptor parent)
	{
	}

	[Token(Token = "0x6000818")]
	[Address(RVA = "0x622DD30", Offset = "0x622CD30", VA = "0x622DD30", Slot = "16")]
	public virtual AttributeCollection GetAttributes()
	{
		return null;
	}

	[Token(Token = "0x6000819")]
	[Address(RVA = "0x622DE00", Offset = "0x622CE00", VA = "0x622DE00", Slot = "17")]
	public virtual string GetClassName()
	{
		return null;
	}

	[Token(Token = "0x600081A")]
	[Address(RVA = "0x622DEA0", Offset = "0x622CEA0", VA = "0x622DEA0", Slot = "18")]
	public virtual string GetComponentName()
	{
		return null;
	}

	[Token(Token = "0x600081B")]
	[Address(RVA = "0x622DF40", Offset = "0x622CF40", VA = "0x622DF40", Slot = "19")]
	public virtual TypeConverter GetConverter()
	{
		return null;
	}

	[Token(Token = "0x600081C")]
	[Address(RVA = "0x622E010", Offset = "0x622D010", VA = "0x622E010", Slot = "20")]
	public virtual EventDescriptor GetDefaultEvent()
	{
		return null;
	}

	[Token(Token = "0x600081D")]
	[Address(RVA = "0x622E0B0", Offset = "0x622D0B0", VA = "0x622E0B0", Slot = "21")]
	public virtual PropertyDescriptor GetDefaultProperty()
	{
		return null;
	}

	[Token(Token = "0x600081E")]
	[Address(RVA = "0x622E150", Offset = "0x622D150", VA = "0x622E150", Slot = "22")]
	public virtual object GetEditor(Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x600081F")]
	[Address(RVA = "0x622E210", Offset = "0x622D210", VA = "0x622E210", Slot = "23")]
	public virtual EventDescriptorCollection GetEvents()
	{
		return null;
	}

	[Token(Token = "0x6000820")]
	[Address(RVA = "0x622E2F0", Offset = "0x622D2F0", VA = "0x622E2F0", Slot = "24")]
	public virtual EventDescriptorCollection GetEvents(Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000821")]
	[Address(RVA = "0x622E3E0", Offset = "0x622D3E0", VA = "0x622E3E0", Slot = "25")]
	public virtual PropertyDescriptorCollection GetProperties()
	{
		return null;
	}

	[Token(Token = "0x6000822")]
	[Address(RVA = "0x622E4C0", Offset = "0x622D4C0", VA = "0x622E4C0", Slot = "26")]
	public virtual PropertyDescriptorCollection GetProperties(Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000823")]
	[Address(RVA = "0x622E5B0", Offset = "0x622D5B0", VA = "0x622E5B0", Slot = "27")]
	public virtual object GetPropertyOwner(PropertyDescriptor pd)
	{
		return null;
	}
}
