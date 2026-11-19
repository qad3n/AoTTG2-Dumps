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

[Token(Token = "0x2000193")]
public abstract class PropertyDescriptor : MemberDescriptor
{
	[Token(Token = "0x4000653")]
	[FieldOffset(Offset = "0x60")]
	private TypeConverter _converter;

	[Token(Token = "0x4000654")]
	[FieldOffset(Offset = "0x68")]
	private Hashtable _valueChangedHandlers;

	[Token(Token = "0x4000655")]
	[FieldOffset(Offset = "0x70")]
	private object[] _editors;

	[Token(Token = "0x4000656")]
	[FieldOffset(Offset = "0x78")]
	private Type[] _editorTypes;

	[Token(Token = "0x4000657")]
	[FieldOffset(Offset = "0x80")]
	private int _editorCount;

	[Token(Token = "0x17000242")]
	public abstract Type ComponentType
	{
		[Token(Token = "0x6000A66")]
		get;
	}

	[Token(Token = "0x17000243")]
	public virtual TypeConverter Converter
	{
		[Token(Token = "0x6000A67")]
		[Address(RVA = "0x6241720", Offset = "0x6240720", VA = "0x6241720", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000244")]
	public virtual bool IsLocalizable
	{
		[Token(Token = "0x6000A68")]
		[Address(RVA = "0x6241D90", Offset = "0x6240D90", VA = "0x6241D90", Slot = "19")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000245")]
	public abstract bool IsReadOnly
	{
		[Token(Token = "0x6000A69")]
		get;
	}

	[Token(Token = "0x17000246")]
	public DesignerSerializationVisibility SerializationVisibility
	{
		[Token(Token = "0x6000A6A")]
		[Address(RVA = "0x6241E70", Offset = "0x6240E70", VA = "0x6241E70")]
		get
		{
			return default(DesignerSerializationVisibility);
		}
	}

	[Token(Token = "0x17000247")]
	public abstract Type PropertyType
	{
		[Token(Token = "0x6000A6B")]
		get;
	}

	[Token(Token = "0x17000248")]
	public virtual bool SupportsChangeEvents
	{
		[Token(Token = "0x6000A80")]
		[Address(RVA = "0x6242DE0", Offset = "0x6241DE0", VA = "0x6242DE0", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000A63")]
	[Address(RVA = "0x6240F20", Offset = "0x623FF20", VA = "0x6240F20")]
	protected PropertyDescriptor(string name, Attribute[] attrs)
	{
	}

	[Token(Token = "0x6000A64")]
	[Address(RVA = "0x6241100", Offset = "0x6240100", VA = "0x6241100")]
	protected PropertyDescriptor(MemberDescriptor descr)
	{
	}

	[Token(Token = "0x6000A65")]
	[Address(RVA = "0x6241270", Offset = "0x6240270", VA = "0x6241270")]
	protected PropertyDescriptor(MemberDescriptor descr, Attribute[] attrs)
	{
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x6241F30", Offset = "0x6240F30", VA = "0x6241F30", Slot = "22")]
	public virtual void AddValueChanged(object component, EventHandler handler)
	{
	}

	[Token(Token = "0x6000A6D")]
	public abstract bool CanResetValue(object component);

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x62420A0", Offset = "0x62410A0", VA = "0x62420A0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x6241B90", Offset = "0x6240B90", VA = "0x6241B90")]
	protected object CreateInstance(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000A70")]
	[Address(RVA = "0x6242270", Offset = "0x6241270", VA = "0x6242270", Slot = "15")]
	protected override void FillAttributes(IList attributeList)
	{
	}

	[Token(Token = "0x6000A71")]
	[Address(RVA = "0x62423F0", Offset = "0x62413F0", VA = "0x62423F0")]
	public PropertyDescriptorCollection GetChildProperties()
	{
		return null;
	}

	[Token(Token = "0x6000A72")]
	[Address(RVA = "0x6242410", Offset = "0x6241410", VA = "0x6242410")]
	public PropertyDescriptorCollection GetChildProperties(Attribute[] filter)
	{
		return null;
	}

	[Token(Token = "0x6000A73")]
	[Address(RVA = "0x6242430", Offset = "0x6241430", VA = "0x6242430")]
	public PropertyDescriptorCollection GetChildProperties(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000A74")]
	[Address(RVA = "0x6242450", Offset = "0x6241450", VA = "0x6242450", Slot = "24")]
	public virtual PropertyDescriptorCollection GetChildProperties(object instance, Attribute[] filter)
	{
		return null;
	}

	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x62424F0", Offset = "0x62414F0", VA = "0x62424F0", Slot = "25")]
	public virtual object GetEditor(Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x6000A76")]
	[Address(RVA = "0x6242920", Offset = "0x6241920", VA = "0x6242920", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A77")]
	[Address(RVA = "0x6242980", Offset = "0x6241980", VA = "0x6242980", Slot = "16")]
	protected override object GetInvocationTarget(Type type, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000A78")]
	[Address(RVA = "0x6241980", Offset = "0x6240980", VA = "0x6241980")]
	protected Type GetTypeFromName(string typeName)
	{
		return null;
	}

	[Token(Token = "0x6000A79")]
	public abstract object GetValue(object component);

	[Token(Token = "0x6000A7A")]
	[Address(RVA = "0x6242B50", Offset = "0x6241B50", VA = "0x6242B50", Slot = "27")]
	protected virtual void OnValueChanged(object component, EventArgs e)
	{
	}

	[Token(Token = "0x6000A7B")]
	[Address(RVA = "0x6242BE0", Offset = "0x6241BE0", VA = "0x6242BE0", Slot = "28")]
	public virtual void RemoveValueChanged(object component, EventHandler handler)
	{
	}

	[Token(Token = "0x6000A7C")]
	[Address(RVA = "0x6242D60", Offset = "0x6241D60", VA = "0x6242D60")]
	protected internal EventHandler GetValueChangedHandler(object component)
	{
		return null;
	}

	[Token(Token = "0x6000A7D")]
	public abstract void ResetValue(object component);

	[Token(Token = "0x6000A7E")]
	public abstract void SetValue(object component, object value);

	[Token(Token = "0x6000A7F")]
	public abstract bool ShouldSerializeValue(object component);
}
