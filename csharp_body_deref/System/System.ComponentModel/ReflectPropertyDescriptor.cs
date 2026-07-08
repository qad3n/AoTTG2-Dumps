using System.Collections;
using System.Collections.Specialized;
using System.Diagnostics;
using System.Reflection;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000304")]
internal sealed class ReflectPropertyDescriptor : PropertyDescriptor
{
	[Token(Token = "0x4000E65")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type[] argsNone;

	[Token(Token = "0x4000E66")]
	[FieldOffset(Offset = "0x8")]
	private static readonly object noValue;

	[Token(Token = "0x4000E67")]
	[FieldOffset(Offset = "0x10")]
	private static TraceSwitch PropDescCreateSwitch;

	[Token(Token = "0x4000E68")]
	[FieldOffset(Offset = "0x18")]
	private static TraceSwitch PropDescUsageSwitch;

	[Token(Token = "0x4000E69")]
	[FieldOffset(Offset = "0x20")]
	private static readonly int BitDefaultValueQueried;

	[Token(Token = "0x4000E6A")]
	[FieldOffset(Offset = "0x24")]
	private static readonly int BitGetQueried;

	[Token(Token = "0x4000E6B")]
	[FieldOffset(Offset = "0x28")]
	private static readonly int BitSetQueried;

	[Token(Token = "0x4000E6C")]
	[FieldOffset(Offset = "0x2C")]
	private static readonly int BitShouldSerializeQueried;

	[Token(Token = "0x4000E6D")]
	[FieldOffset(Offset = "0x30")]
	private static readonly int BitResetQueried;

	[Token(Token = "0x4000E6E")]
	[FieldOffset(Offset = "0x34")]
	private static readonly int BitChangedQueried;

	[Token(Token = "0x4000E6F")]
	[FieldOffset(Offset = "0x38")]
	private static readonly int BitIPropChangedQueried;

	[Token(Token = "0x4000E70")]
	[FieldOffset(Offset = "0x3C")]
	private static readonly int BitReadOnlyChecked;

	[Token(Token = "0x4000E71")]
	[FieldOffset(Offset = "0x40")]
	private static readonly int BitAmbientValueQueried;

	[Token(Token = "0x4000E72")]
	[FieldOffset(Offset = "0x44")]
	private static readonly int BitSetOnDemand;

	[Token(Token = "0x4000E73")]
	[FieldOffset(Offset = "0x84")]
	private BitVector32 state;

	[Token(Token = "0x4000E74")]
	[FieldOffset(Offset = "0x88")]
	private Type componentClass;

	[Token(Token = "0x4000E75")]
	[FieldOffset(Offset = "0x90")]
	private Type type;

	[Token(Token = "0x4000E76")]
	[FieldOffset(Offset = "0x98")]
	private object defaultValue;

	[Token(Token = "0x4000E77")]
	[FieldOffset(Offset = "0xA0")]
	private object ambientValue;

	[Token(Token = "0x4000E78")]
	[FieldOffset(Offset = "0xA8")]
	private PropertyInfo propInfo;

	[Token(Token = "0x4000E79")]
	[FieldOffset(Offset = "0xB0")]
	private MethodInfo getMethod;

	[Token(Token = "0x4000E7A")]
	[FieldOffset(Offset = "0xB8")]
	private MethodInfo setMethod;

	[Token(Token = "0x4000E7B")]
	[FieldOffset(Offset = "0xC0")]
	private MethodInfo shouldSerializeMethod;

	[Token(Token = "0x4000E7C")]
	[FieldOffset(Offset = "0xC8")]
	private MethodInfo resetMethod;

	[Token(Token = "0x4000E7D")]
	[FieldOffset(Offset = "0xD0")]
	private EventDescriptor realChangedEvent;

	[Token(Token = "0x4000E7E")]
	[FieldOffset(Offset = "0xD8")]
	private EventDescriptor realIPropChangedEvent;

	[Token(Token = "0x4000E7F")]
	[FieldOffset(Offset = "0xE0")]
	private Type receiverType;

	[Token(Token = "0x1700046E")]
	private object AmbientValue
	{
		[Token(Token = "0x6001388")]
		[Address(RVA = "0x45915A0", Offset = "0x45915A0", VA = "0x45915A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700046F")]
	private EventDescriptor ChangedEventValue
	{
		[Token(Token = "0x6001389")]
		[Address(RVA = "0x4591720", Offset = "0x4591720", VA = "0x4591720")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000470")]
	private EventDescriptor IPropChangedEventValue
	{
		[Token(Token = "0x600138A")]
		[Address(RVA = "0x45918A0", Offset = "0x45918A0", VA = "0x45918A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600138B")]
		[Address(RVA = "0x4591A60", Offset = "0x4591A60", VA = "0x4591A60")]
		set
		{
		}
	}

	[Token(Token = "0x17000471")]
	public override Type ComponentType
	{
		[Token(Token = "0x600138C")]
		[Address(RVA = "0x4591AE0", Offset = "0x4591AE0", VA = "0x4591AE0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000472")]
	private object DefaultValue
	{
		[Token(Token = "0x600138D")]
		[Address(RVA = "0x4591AF0", Offset = "0x4591AF0", VA = "0x4591AF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000473")]
	private MethodInfo GetMethodValue
	{
		[Token(Token = "0x600138E")]
		[Address(RVA = "0x4591DC0", Offset = "0x4591DC0", VA = "0x4591DC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000474")]
	private bool IsExtender
	{
		[Token(Token = "0x600138F")]
		[Address(RVA = "0x45922C0", Offset = "0x45922C0", VA = "0x45922C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000475")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x6001390")]
		[Address(RVA = "0x4592300", Offset = "0x4592300", VA = "0x4592300", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000476")]
	public override Type PropertyType
	{
		[Token(Token = "0x6001391")]
		[Address(RVA = "0x4592A00", Offset = "0x4592A00", VA = "0x4592A00", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000477")]
	private MethodInfo ResetMethodValue
	{
		[Token(Token = "0x6001392")]
		[Address(RVA = "0x4592A10", Offset = "0x4592A10", VA = "0x4592A10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000478")]
	private MethodInfo SetMethodValue
	{
		[Token(Token = "0x6001393")]
		[Address(RVA = "0x45923E0", Offset = "0x45923E0", VA = "0x45923E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000479")]
	private MethodInfo ShouldSerializeMethodValue
	{
		[Token(Token = "0x6001394")]
		[Address(RVA = "0x4592C30", Offset = "0x4592C30", VA = "0x4592C30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700047A")]
	public override bool SupportsChangeEvents
	{
		[Token(Token = "0x60013A6")]
		[Address(RVA = "0x4596990", Offset = "0x4596990", VA = "0x4596990", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001384")]
	[Address(RVA = "0x4590A70", Offset = "0x4590A70", VA = "0x4590A70")]
	public ReflectPropertyDescriptor(Type componentClass, string name, Type type, Attribute[] attributes)
	{
	}

	[Token(Token = "0x6001385")]
	[Address(RVA = "0x4590E00", Offset = "0x4590E00", VA = "0x4590E00")]
	public ReflectPropertyDescriptor(Type componentClass, string name, Type type, PropertyInfo propInfo, MethodInfo getMethod, MethodInfo setMethod, Attribute[] attrs)
	{
	}

	[Token(Token = "0x6001386")]
	[Address(RVA = "0x4590F60", Offset = "0x4590F60", VA = "0x4590F60")]
	public ReflectPropertyDescriptor(Type componentClass, string name, Type type, Type receiverType, MethodInfo getMethod, MethodInfo setMethod, Attribute[] attrs)
	{
	}

	[Token(Token = "0x6001387")]
	[Address(RVA = "0x4591060", Offset = "0x4591060", VA = "0x4591060")]
	public ReflectPropertyDescriptor(Type componentClass, PropertyDescriptor oldReflectPropertyDescriptor, Attribute[] attributes)
	{
	}

	[Token(Token = "0x6001395")]
	[Address(RVA = "0x4592E50", Offset = "0x4592E50", VA = "0x4592E50", Slot = "22")]
	public override void AddValueChanged(object component, EventHandler handler)
	{
	}

	[Token(Token = "0x6001396")]
	[Address(RVA = "0x4593030", Offset = "0x4593030", VA = "0x4593030")]
	internal bool ExtenderCanResetValue(IExtenderProvider provider, object component)
	{
		return default(bool);
	}

	[Token(Token = "0x6001397")]
	[Address(RVA = "0x4593410", Offset = "0x4593410", VA = "0x4593410")]
	internal Type ExtenderGetReceiverType()
	{
		return null;
	}

	[Token(Token = "0x6001398")]
	[Address(RVA = "0x4593420", Offset = "0x4593420", VA = "0x4593420")]
	internal Type ExtenderGetType(IExtenderProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6001399")]
	[Address(RVA = "0x45932E0", Offset = "0x45932E0", VA = "0x45932E0")]
	internal object ExtenderGetValue(IExtenderProvider provider, object component)
	{
		return null;
	}

	[Token(Token = "0x600139A")]
	[Address(RVA = "0x4593440", Offset = "0x4593440", VA = "0x4593440")]
	internal void ExtenderResetValue(IExtenderProvider provider, object component, PropertyDescriptor notifyDesc)
	{
	}

	[Token(Token = "0x600139B")]
	[Address(RVA = "0x4593980", Offset = "0x4593980", VA = "0x4593980")]
	internal void ExtenderSetValue(IExtenderProvider provider, object component, object value, PropertyDescriptor notifyDesc)
	{
	}

	[Token(Token = "0x600139C")]
	[Address(RVA = "0x4593E30", Offset = "0x4593E30", VA = "0x4593E30")]
	internal bool ExtenderShouldSerializeValue(IExtenderProvider provider, object component)
	{
		return default(bool);
	}

	[Token(Token = "0x600139D")]
	[Address(RVA = "0x45942F0", Offset = "0x45942F0", VA = "0x45942F0", Slot = "23")]
	public override bool CanResetValue(object component)
	{
		return default(bool);
	}

	[Token(Token = "0x600139E")]
	[Address(RVA = "0x4594580", Offset = "0x4594580", VA = "0x4594580", Slot = "15")]
	protected override void FillAttributes(IList attributes)
	{
	}

	[Token(Token = "0x600139F")]
	[Address(RVA = "0x45952F0", Offset = "0x45952F0", VA = "0x45952F0", Slot = "26")]
	public override object GetValue(object component)
	{
		return null;
	}

	[Token(Token = "0x60013A0")]
	[Address(RVA = "0x4595730", Offset = "0x4595730", VA = "0x4595730")]
	internal void OnINotifyPropertyChanged(object component, PropertyChangedEventArgs e)
	{
	}

	[Token(Token = "0x60013A1")]
	[Address(RVA = "0x4595830", Offset = "0x4595830", VA = "0x4595830", Slot = "27")]
	protected override void OnValueChanged(object component, EventArgs e)
	{
	}

	[Token(Token = "0x60013A2")]
	[Address(RVA = "0x4595930", Offset = "0x4595930", VA = "0x4595930", Slot = "28")]
	public override void RemoveValueChanged(object component, EventHandler handler)
	{
	}

	[Token(Token = "0x60013A3")]
	[Address(RVA = "0x4595B00", Offset = "0x4595B00", VA = "0x4595B00", Slot = "29")]
	public override void ResetValue(object component)
	{
	}

	[Token(Token = "0x60013A4")]
	[Address(RVA = "0x4595F70", Offset = "0x4595F70", VA = "0x4595F70", Slot = "30")]
	public override void SetValue(object component, object value)
	{
	}

	[Token(Token = "0x60013A5")]
	[Address(RVA = "0x4596630", Offset = "0x4596630", VA = "0x4596630", Slot = "31")]
	public override bool ShouldSerializeValue(object component)
	{
		return default(bool);
	}
}
