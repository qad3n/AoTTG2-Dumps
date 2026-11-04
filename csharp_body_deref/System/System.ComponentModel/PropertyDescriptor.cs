// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.PropertyDescriptor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001D2")]
public abstract class PropertyDescriptor : MemberDescriptor
{
	[Token(Token = "0x4000722")]
	[FieldOffset(Offset = "0x60")]
	private TypeConverter _converter;

	[Token(Token = "0x4000723")]
	[FieldOffset(Offset = "0x68")]
	private Hashtable _valueChangedHandlers;

	[Token(Token = "0x4000724")]
	[FieldOffset(Offset = "0x70")]
	private object[] _editors;

	[Token(Token = "0x4000725")]
	[FieldOffset(Offset = "0x78")]
	private Type[] _editorTypes;

	[Token(Token = "0x4000726")]
	[FieldOffset(Offset = "0x80")]
	private int _editorCount;

	[Token(Token = "0x17000271")]
	public abstract Type ComponentType
	{
		[Token(Token = "0x6000C26")]
		get;
	}

	[Token(Token = "0x17000272")]
	public virtual TypeConverter Converter
	{
		[Token(Token = "0x6000C27")]
		[Address(RVA = "0x28AB9D0", Offset = "0x28A9FD0", VA = "0x1828AB9D0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000273")]
	public virtual bool IsLocalizable
	{
		[Token(Token = "0x6000C28")]
		[Address(RVA = "0x28ABC70", Offset = "0x28AA270", VA = "0x1828ABC70", Slot = "19")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000274")]
	public abstract bool IsReadOnly
	{
		[Token(Token = "0x6000C29")]
		get;
	}

	[Token(Token = "0x17000275")]
	public DesignerSerializationVisibility SerializationVisibility
	{
		[Token(Token = "0x6000C2A")]
		[Address(RVA = "0x28ABD60", Offset = "0x28AA360", VA = "0x1828ABD60")]
		get
		{
			return default(DesignerSerializationVisibility);
		}
	}

	[Token(Token = "0x17000276")]
	public abstract Type PropertyType
	{
		[Token(Token = "0x6000C2B")]
		get;
	}

	[Token(Token = "0x17000277")]
	public virtual bool SupportsChangeEvents
	{
		[Token(Token = "0x6000C40")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000C23")]
	[Address(RVA = "0x289DB30", Offset = "0x289C130", VA = "0x18289DB30")]
	protected PropertyDescriptor(string name, Attribute[] attrs)
	{
	}

	[Token(Token = "0x6000C24")]
	[Address(RVA = "0x289DB50", Offset = "0x289C150", VA = "0x18289DB50")]
	protected PropertyDescriptor(MemberDescriptor descr)
	{
	}

	[Token(Token = "0x6000C25")]
	[Address(RVA = "0x289DB40", Offset = "0x289C140", VA = "0x18289DB40")]
	protected PropertyDescriptor(MemberDescriptor descr, Attribute[] attrs)
	{
	}

	[Token(Token = "0x6000C2C")]
	[Address(RVA = "0x28AA910", Offset = "0x28A8F10", VA = "0x1828AA910", Slot = "22")]
	public virtual void AddValueChanged(object component, EventHandler handler)
	{
	}

	[Token(Token = "0x6000C2D")]
	public abstract bool CanResetValue(object component);

	[Token(Token = "0x6000C2E")]
	[Address(RVA = "0x28AACC0", Offset = "0x28A92C0", VA = "0x1828AACC0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C2F")]
	[Address(RVA = "0x28AAAC0", Offset = "0x28A90C0", VA = "0x1828AAAC0")]
	protected object CreateInstance(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000C30")]
	[Address(RVA = "0x28AAE20", Offset = "0x28A9420", VA = "0x1828AAE20", Slot = "15")]
	protected override void FillAttributes(IList attributeList)
	{
	}

	[Token(Token = "0x6000C31")]
	[Address(RVA = "0x28AAF90", Offset = "0x28A9590", VA = "0x1828AAF90")]
	public PropertyDescriptorCollection GetChildProperties()
	{
		return null;
	}

	[Token(Token = "0x6000C32")]
	[Address(RVA = "0x28AAE90", Offset = "0x28A9490", VA = "0x1828AAE90")]
	public PropertyDescriptorCollection GetChildProperties(Attribute[] filter)
	{
		return null;
	}

	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x28AAEB0", Offset = "0x28A94B0", VA = "0x1828AAEB0")]
	public PropertyDescriptorCollection GetChildProperties(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x28AAED0", Offset = "0x28A94D0", VA = "0x1828AAED0", Slot = "24")]
	public virtual PropertyDescriptorCollection GetChildProperties(object instance, Attribute[] filter)
	{
		return null;
	}

	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x28AAFB0", Offset = "0x28A95B0", VA = "0x1828AAFB0", Slot = "25")]
	public virtual object GetEditor(Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x28AB3C0", Offset = "0x28A99C0", VA = "0x1828AB3C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x28AB420", Offset = "0x28A9A20", VA = "0x1828AB420", Slot = "16")]
	protected override object GetInvocationTarget(Type type, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x28AB4C0", Offset = "0x28A9AC0", VA = "0x1828AB4C0")]
	protected Type GetTypeFromName(string typeName)
	{
		return null;
	}

	[Token(Token = "0x6000C39")]
	public abstract object GetValue(object component);

	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x28AB780", Offset = "0x28A9D80", VA = "0x1828AB780", Slot = "27")]
	protected virtual void OnValueChanged(object component, EventArgs e)
	{
	}

	[Token(Token = "0x6000C3B")]
	[Address(RVA = "0x28AB820", Offset = "0x28A9E20", VA = "0x1828AB820", Slot = "28")]
	public virtual void RemoveValueChanged(object component, EventHandler handler)
	{
	}

	[Token(Token = "0x6000C3C")]
	[Address(RVA = "0x28AB6F0", Offset = "0x28A9CF0", VA = "0x1828AB6F0")]
	protected internal EventHandler GetValueChangedHandler(object component)
	{
		return null;
	}

	[Token(Token = "0x6000C3D")]
	public abstract void ResetValue(object component);

	[Token(Token = "0x6000C3E")]
	public abstract void SetValue(object component, object value);

	[Token(Token = "0x6000C3F")]
	public abstract bool ShouldSerializeValue(object component);
}
