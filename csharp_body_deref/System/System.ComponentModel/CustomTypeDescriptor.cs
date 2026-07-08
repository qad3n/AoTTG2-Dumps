using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200027B")]
public abstract class CustomTypeDescriptor : ICustomTypeDescriptor
{
	[Token(Token = "0x4000D31")]
	[FieldOffset(Offset = "0x10")]
	private readonly ICustomTypeDescriptor _parent;

	[Token(Token = "0x6000F8E")]
	[Address(RVA = "0x4568AA0", Offset = "0x4568AA0", VA = "0x4568AA0")]
	protected CustomTypeDescriptor()
	{
	}

	[Token(Token = "0x6000F8F")]
	[Address(RVA = "0x4568AB0", Offset = "0x4568AB0", VA = "0x4568AB0")]
	protected CustomTypeDescriptor(ICustomTypeDescriptor parent)
	{
	}

	[Token(Token = "0x6000F90")]
	[Address(RVA = "0x4568AE0", Offset = "0x4568AE0", VA = "0x4568AE0", Slot = "16")]
	public virtual AttributeCollection GetAttributes()
	{
		return null;
	}

	[Token(Token = "0x6000F91")]
	[Address(RVA = "0x4568BB0", Offset = "0x4568BB0", VA = "0x4568BB0", Slot = "17")]
	public virtual string GetClassName()
	{
		return null;
	}

	[Token(Token = "0x6000F92")]
	[Address(RVA = "0x4568C50", Offset = "0x4568C50", VA = "0x4568C50", Slot = "18")]
	public virtual string GetComponentName()
	{
		return null;
	}

	[Token(Token = "0x6000F93")]
	[Address(RVA = "0x4568CF0", Offset = "0x4568CF0", VA = "0x4568CF0", Slot = "19")]
	public virtual TypeConverter GetConverter()
	{
		return null;
	}

	[Token(Token = "0x6000F94")]
	[Address(RVA = "0x4568DC0", Offset = "0x4568DC0", VA = "0x4568DC0", Slot = "20")]
	public virtual EventDescriptor GetDefaultEvent()
	{
		return null;
	}

	[Token(Token = "0x6000F95")]
	[Address(RVA = "0x4568E60", Offset = "0x4568E60", VA = "0x4568E60", Slot = "21")]
	public virtual PropertyDescriptor GetDefaultProperty()
	{
		return null;
	}

	[Token(Token = "0x6000F96")]
	[Address(RVA = "0x4568F00", Offset = "0x4568F00", VA = "0x4568F00", Slot = "22")]
	public virtual object GetEditor(Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x6000F97")]
	[Address(RVA = "0x4568FC0", Offset = "0x4568FC0", VA = "0x4568FC0", Slot = "23")]
	public virtual EventDescriptorCollection GetEvents()
	{
		return null;
	}

	[Token(Token = "0x6000F98")]
	[Address(RVA = "0x45690A0", Offset = "0x45690A0", VA = "0x45690A0", Slot = "24")]
	public virtual EventDescriptorCollection GetEvents(Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000F99")]
	[Address(RVA = "0x4569190", Offset = "0x4569190", VA = "0x4569190", Slot = "25")]
	public virtual PropertyDescriptorCollection GetProperties()
	{
		return null;
	}

	[Token(Token = "0x6000F9A")]
	[Address(RVA = "0x4569270", Offset = "0x4569270", VA = "0x4569270", Slot = "26")]
	public virtual PropertyDescriptorCollection GetProperties(Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000F9B")]
	[Address(RVA = "0x4569360", Offset = "0x4569360", VA = "0x4569360", Slot = "27")]
	public virtual object GetPropertyOwner(PropertyDescriptor pd)
	{
		return null;
	}
}
