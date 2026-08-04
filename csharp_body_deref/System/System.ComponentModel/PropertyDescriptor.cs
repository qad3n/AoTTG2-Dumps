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

[Token(Token = "0x20002C7")]
public abstract class PropertyDescriptor : MemberDescriptor
{
	[Token(Token = "0x4000DEB")]
	[FieldOffset(Offset = "0x60")]
	private TypeConverter _converter;

	[Token(Token = "0x4000DEC")]
	[FieldOffset(Offset = "0x68")]
	private Hashtable _valueChangedHandlers;

	[Token(Token = "0x4000DED")]
	[FieldOffset(Offset = "0x70")]
	private object[] _editors;

	[Token(Token = "0x4000DEE")]
	[FieldOffset(Offset = "0x78")]
	private Type[] _editorTypes;

	[Token(Token = "0x4000DEF")]
	[FieldOffset(Offset = "0x80")]
	private int _editorCount;

	[Token(Token = "0x17000402")]
	public abstract Type ComponentType
	{
		[Token(Token = "0x60011DE")]
		get;
	}

	[Token(Token = "0x17000403")]
	public virtual TypeConverter Converter
	{
		[Token(Token = "0x60011DF")]
		[Address(RVA = "0x48A1DA0", Offset = "0x48A1DA0", VA = "0x48A1DA0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000404")]
	public virtual bool IsLocalizable
	{
		[Token(Token = "0x60011E0")]
		[Address(RVA = "0x48A2410", Offset = "0x48A2410", VA = "0x48A2410", Slot = "19")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000405")]
	public abstract bool IsReadOnly
	{
		[Token(Token = "0x60011E1")]
		get;
	}

	[Token(Token = "0x17000406")]
	public DesignerSerializationVisibility SerializationVisibility
	{
		[Token(Token = "0x60011E2")]
		[Address(RVA = "0x48A24F0", Offset = "0x48A24F0", VA = "0x48A24F0")]
		get
		{
			return default(DesignerSerializationVisibility);
		}
	}

	[Token(Token = "0x17000407")]
	public abstract Type PropertyType
	{
		[Token(Token = "0x60011E3")]
		get;
	}

	[Token(Token = "0x17000408")]
	public virtual bool SupportsChangeEvents
	{
		[Token(Token = "0x60011F8")]
		[Address(RVA = "0x48A34C0", Offset = "0x48A34C0", VA = "0x48A34C0", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60011DB")]
	[Address(RVA = "0x48A1410", Offset = "0x48A1410", VA = "0x48A1410")]
	protected PropertyDescriptor(string name, Attribute[] attrs)
	{
	}

	[Token(Token = "0x60011DC")]
	[Address(RVA = "0x48A1630", Offset = "0x48A1630", VA = "0x48A1630")]
	protected PropertyDescriptor(MemberDescriptor descr)
	{
	}

	[Token(Token = "0x60011DD")]
	[Address(RVA = "0x48A17A0", Offset = "0x48A17A0", VA = "0x48A17A0")]
	protected PropertyDescriptor(MemberDescriptor descr, Attribute[] attrs)
	{
	}

	[Token(Token = "0x60011E4")]
	[Address(RVA = "0x48A25B0", Offset = "0x48A25B0", VA = "0x48A25B0", Slot = "22")]
	public virtual void AddValueChanged(object component, EventHandler handler)
	{
	}

	[Token(Token = "0x60011E5")]
	public abstract bool CanResetValue(object component);

	[Token(Token = "0x60011E6")]
	[Address(RVA = "0x48A2720", Offset = "0x48A2720", VA = "0x48A2720", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60011E7")]
	[Address(RVA = "0x48A2210", Offset = "0x48A2210", VA = "0x48A2210")]
	protected object CreateInstance(Type type)
	{
		return null;
	}

	[Token(Token = "0x60011E8")]
	[Address(RVA = "0x48A2950", Offset = "0x48A2950", VA = "0x48A2950", Slot = "15")]
	protected override void FillAttributes(IList attributeList)
	{
	}

	[Token(Token = "0x60011E9")]
	[Address(RVA = "0x48A2AE0", Offset = "0x48A2AE0", VA = "0x48A2AE0")]
	public PropertyDescriptorCollection GetChildProperties()
	{
		return null;
	}

	[Token(Token = "0x60011EA")]
	[Address(RVA = "0x48A2B00", Offset = "0x48A2B00", VA = "0x48A2B00")]
	public PropertyDescriptorCollection GetChildProperties(Attribute[] filter)
	{
		return null;
	}

	[Token(Token = "0x60011EB")]
	[Address(RVA = "0x48A2B20", Offset = "0x48A2B20", VA = "0x48A2B20")]
	public PropertyDescriptorCollection GetChildProperties(object instance)
	{
		return null;
	}

	[Token(Token = "0x60011EC")]
	[Address(RVA = "0x48A2B40", Offset = "0x48A2B40", VA = "0x48A2B40", Slot = "24")]
	public virtual PropertyDescriptorCollection GetChildProperties(object instance, Attribute[] filter)
	{
		return null;
	}

	[Token(Token = "0x60011ED")]
	[Address(RVA = "0x48A2BE0", Offset = "0x48A2BE0", VA = "0x48A2BE0", Slot = "25")]
	public virtual object GetEditor(Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x60011EE")]
	[Address(RVA = "0x48A3010", Offset = "0x48A3010", VA = "0x48A3010", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60011EF")]
	[Address(RVA = "0x48A3070", Offset = "0x48A3070", VA = "0x48A3070", Slot = "16")]
	protected override object GetInvocationTarget(Type type, object instance)
	{
		return null;
	}

	[Token(Token = "0x60011F0")]
	[Address(RVA = "0x48A2000", Offset = "0x48A2000", VA = "0x48A2000")]
	protected Type GetTypeFromName(string typeName)
	{
		return null;
	}

	[Token(Token = "0x60011F1")]
	public abstract object GetValue(object component);

	[Token(Token = "0x60011F2")]
	[Address(RVA = "0x48A3240", Offset = "0x48A3240", VA = "0x48A3240", Slot = "27")]
	protected virtual void OnValueChanged(object component, EventArgs e)
	{
	}

	[Token(Token = "0x60011F3")]
	[Address(RVA = "0x48A32D0", Offset = "0x48A32D0", VA = "0x48A32D0", Slot = "28")]
	public virtual void RemoveValueChanged(object component, EventHandler handler)
	{
	}

	[Token(Token = "0x60011F4")]
	[Address(RVA = "0x48A3440", Offset = "0x48A3440", VA = "0x48A3440")]
	protected internal EventHandler GetValueChangedHandler(object component)
	{
		return null;
	}

	[Token(Token = "0x60011F5")]
	public abstract void ResetValue(object component);

	[Token(Token = "0x60011F6")]
	public abstract void SetValue(object component, object value);

	[Token(Token = "0x60011F7")]
	public abstract bool ShouldSerializeValue(object component);
}
