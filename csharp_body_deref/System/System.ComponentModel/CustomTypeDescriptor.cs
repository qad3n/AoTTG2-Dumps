// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.CustomTypeDescriptor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000186")]
public abstract class CustomTypeDescriptor : ICustomTypeDescriptor
{
	[Token(Token = "0x4000668")]
	[FieldOffset(Offset = "0x10")]
	private readonly ICustomTypeDescriptor _parent;

	[Token(Token = "0x60009D6")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected CustomTypeDescriptor()
	{
	}

	[Token(Token = "0x60009D7")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	protected CustomTypeDescriptor(ICustomTypeDescriptor parent)
	{
	}

	[Token(Token = "0x60009D8")]
	[Address(RVA = "0x2899680", Offset = "0x2897C80", VA = "0x182899680", Slot = "16")]
	public virtual AttributeCollection GetAttributes()
	{
		return null;
	}

	[Token(Token = "0x60009D9")]
	[Address(RVA = "0x2899770", Offset = "0x2897D70", VA = "0x182899770", Slot = "17")]
	public virtual string GetClassName()
	{
		return null;
	}

	[Token(Token = "0x60009DA")]
	[Address(RVA = "0x28997C0", Offset = "0x2897DC0", VA = "0x1828997C0", Slot = "18")]
	public virtual string GetComponentName()
	{
		return null;
	}

	[Token(Token = "0x60009DB")]
	[Address(RVA = "0x2899810", Offset = "0x2897E10", VA = "0x182899810", Slot = "19")]
	public virtual TypeConverter GetConverter()
	{
		return null;
	}

	[Token(Token = "0x60009DC")]
	[Address(RVA = "0x2899910", Offset = "0x2897F10", VA = "0x182899910", Slot = "20")]
	public virtual EventDescriptor GetDefaultEvent()
	{
		return null;
	}

	[Token(Token = "0x60009DD")]
	[Address(RVA = "0x28999D0", Offset = "0x2897FD0", VA = "0x1828999D0", Slot = "21")]
	public virtual PropertyDescriptor GetDefaultProperty()
	{
		return null;
	}

	[Token(Token = "0x60009DE")]
	[Address(RVA = "0x2899A90", Offset = "0x2898090", VA = "0x182899A90", Slot = "22")]
	public virtual object GetEditor(Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x2899AF0", Offset = "0x28980F0", VA = "0x182899AF0", Slot = "23")]
	public virtual EventDescriptorCollection GetEvents()
	{
		return null;
	}

	[Token(Token = "0x60009E0")]
	[Address(RVA = "0x2899C00", Offset = "0x2898200", VA = "0x182899C00", Slot = "24")]
	public virtual EventDescriptorCollection GetEvents(Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x60009E1")]
	[Address(RVA = "0x2899E20", Offset = "0x2898420", VA = "0x182899E20", Slot = "25")]
	public virtual PropertyDescriptorCollection GetProperties()
	{
		return null;
	}

	[Token(Token = "0x60009E2")]
	[Address(RVA = "0x2899D10", Offset = "0x2898310", VA = "0x182899D10", Slot = "26")]
	public virtual PropertyDescriptorCollection GetProperties(Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x60009E3")]
	[Address(RVA = "0x2899F30", Offset = "0x2898530", VA = "0x182899F30", Slot = "27")]
	public virtual object GetPropertyOwner(PropertyDescriptor pd)
	{
		return null;
	}
}
