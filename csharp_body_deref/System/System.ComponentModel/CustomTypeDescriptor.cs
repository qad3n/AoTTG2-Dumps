// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.CustomTypeDescriptor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200027B")]
public abstract class CustomTypeDescriptor : ICustomTypeDescriptor
{
	[Token(Token = "0x4000D31")]
	[FieldOffset(Offset = "0x10")]
	private readonly ICustomTypeDescriptor _parent;

	[Token(Token = "0x6000F8E")]
	[Address(RVA = "0x488DBA0", Offset = "0x488DBA0", VA = "0x488DBA0")]
	protected CustomTypeDescriptor()
	{
	}

	[Token(Token = "0x6000F8F")]
	[Address(RVA = "0x488DBB0", Offset = "0x488DBB0", VA = "0x488DBB0")]
	protected CustomTypeDescriptor(ICustomTypeDescriptor parent)
	{
	}

	[Token(Token = "0x6000F90")]
	[Address(RVA = "0x488DBE0", Offset = "0x488DBE0", VA = "0x488DBE0", Slot = "16")]
	public virtual AttributeCollection GetAttributes()
	{
		return null;
	}

	[Token(Token = "0x6000F91")]
	[Address(RVA = "0x488DCB0", Offset = "0x488DCB0", VA = "0x488DCB0", Slot = "17")]
	public virtual string GetClassName()
	{
		return null;
	}

	[Token(Token = "0x6000F92")]
	[Address(RVA = "0x488DD50", Offset = "0x488DD50", VA = "0x488DD50", Slot = "18")]
	public virtual string GetComponentName()
	{
		return null;
	}

	[Token(Token = "0x6000F93")]
	[Address(RVA = "0x488DDF0", Offset = "0x488DDF0", VA = "0x488DDF0", Slot = "19")]
	public virtual TypeConverter GetConverter()
	{
		return null;
	}

	[Token(Token = "0x6000F94")]
	[Address(RVA = "0x488DEC0", Offset = "0x488DEC0", VA = "0x488DEC0", Slot = "20")]
	public virtual EventDescriptor GetDefaultEvent()
	{
		return null;
	}

	[Token(Token = "0x6000F95")]
	[Address(RVA = "0x488DF60", Offset = "0x488DF60", VA = "0x488DF60", Slot = "21")]
	public virtual PropertyDescriptor GetDefaultProperty()
	{
		return null;
	}

	[Token(Token = "0x6000F96")]
	[Address(RVA = "0x488E000", Offset = "0x488E000", VA = "0x488E000", Slot = "22")]
	public virtual object GetEditor(Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x6000F97")]
	[Address(RVA = "0x488E0C0", Offset = "0x488E0C0", VA = "0x488E0C0", Slot = "23")]
	public virtual EventDescriptorCollection GetEvents()
	{
		return null;
	}

	[Token(Token = "0x6000F98")]
	[Address(RVA = "0x488E1A0", Offset = "0x488E1A0", VA = "0x488E1A0", Slot = "24")]
	public virtual EventDescriptorCollection GetEvents(Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000F99")]
	[Address(RVA = "0x488E290", Offset = "0x488E290", VA = "0x488E290", Slot = "25")]
	public virtual PropertyDescriptorCollection GetProperties()
	{
		return null;
	}

	[Token(Token = "0x6000F9A")]
	[Address(RVA = "0x488E370", Offset = "0x488E370", VA = "0x488E370", Slot = "26")]
	public virtual PropertyDescriptorCollection GetProperties(Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000F9B")]
	[Address(RVA = "0x488E460", Offset = "0x488E460", VA = "0x488E460", Slot = "27")]
	public virtual object GetPropertyOwner(PropertyDescriptor pd)
	{
		return null;
	}
}
