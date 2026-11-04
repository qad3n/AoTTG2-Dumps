// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ReflectPropertyDescriptor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Specialized;
using System.Diagnostics;
using System.Reflection;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200020F")]
internal sealed class ReflectPropertyDescriptor : PropertyDescriptor
{
	[Token(Token = "0x400079C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type[] argsNone;

	[Token(Token = "0x400079D")]
	[FieldOffset(Offset = "0x8")]
	private static readonly object noValue;

	[Token(Token = "0x400079E")]
	[FieldOffset(Offset = "0x10")]
	private static TraceSwitch PropDescCreateSwitch;

	[Token(Token = "0x400079F")]
	[FieldOffset(Offset = "0x18")]
	private static TraceSwitch PropDescUsageSwitch;

	[Token(Token = "0x40007A0")]
	[FieldOffset(Offset = "0x20")]
	private static readonly int BitDefaultValueQueried;

	[Token(Token = "0x40007A1")]
	[FieldOffset(Offset = "0x24")]
	private static readonly int BitGetQueried;

	[Token(Token = "0x40007A2")]
	[FieldOffset(Offset = "0x28")]
	private static readonly int BitSetQueried;

	[Token(Token = "0x40007A3")]
	[FieldOffset(Offset = "0x2C")]
	private static readonly int BitShouldSerializeQueried;

	[Token(Token = "0x40007A4")]
	[FieldOffset(Offset = "0x30")]
	private static readonly int BitResetQueried;

	[Token(Token = "0x40007A5")]
	[FieldOffset(Offset = "0x34")]
	private static readonly int BitChangedQueried;

	[Token(Token = "0x40007A6")]
	[FieldOffset(Offset = "0x38")]
	private static readonly int BitIPropChangedQueried;

	[Token(Token = "0x40007A7")]
	[FieldOffset(Offset = "0x3C")]
	private static readonly int BitReadOnlyChecked;

	[Token(Token = "0x40007A8")]
	[FieldOffset(Offset = "0x40")]
	private static readonly int BitAmbientValueQueried;

	[Token(Token = "0x40007A9")]
	[FieldOffset(Offset = "0x44")]
	private static readonly int BitSetOnDemand;

	[Token(Token = "0x40007AA")]
	[FieldOffset(Offset = "0x88")]
	private BitVector32 state;

	[Token(Token = "0x40007AB")]
	[FieldOffset(Offset = "0x90")]
	private Type componentClass;

	[Token(Token = "0x40007AC")]
	[FieldOffset(Offset = "0x98")]
	private Type type;

	[Token(Token = "0x40007AD")]
	[FieldOffset(Offset = "0xA0")]
	private object defaultValue;

	[Token(Token = "0x40007AE")]
	[FieldOffset(Offset = "0xA8")]
	private object ambientValue;

	[Token(Token = "0x40007AF")]
	[FieldOffset(Offset = "0xB0")]
	private PropertyInfo propInfo;

	[Token(Token = "0x40007B0")]
	[FieldOffset(Offset = "0xB8")]
	private MethodInfo getMethod;

	[Token(Token = "0x40007B1")]
	[FieldOffset(Offset = "0xC0")]
	private MethodInfo setMethod;

	[Token(Token = "0x40007B2")]
	[FieldOffset(Offset = "0xC8")]
	private MethodInfo shouldSerializeMethod;

	[Token(Token = "0x40007B3")]
	[FieldOffset(Offset = "0xD0")]
	private MethodInfo resetMethod;

	[Token(Token = "0x40007B4")]
	[FieldOffset(Offset = "0xD8")]
	private EventDescriptor realChangedEvent;

	[Token(Token = "0x40007B5")]
	[FieldOffset(Offset = "0xE0")]
	private EventDescriptor realIPropChangedEvent;

	[Token(Token = "0x40007B6")]
	[FieldOffset(Offset = "0xE8")]
	private Type receiverType;

	[Token(Token = "0x170002DD")]
	private object AmbientValue
	{
		[Token(Token = "0x6000DD0")]
		[Address(RVA = "0x28BEA10", Offset = "0x28BD010", VA = "0x1828BEA10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002DE")]
	private EventDescriptor ChangedEventValue
	{
		[Token(Token = "0x6000DD1")]
		[Address(RVA = "0x28BEBC0", Offset = "0x28BD1C0", VA = "0x1828BEBC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002DF")]
	private EventDescriptor IPropChangedEventValue
	{
		[Token(Token = "0x6000DD2")]
		[Address(RVA = "0x28BF590", Offset = "0x28BDB90", VA = "0x1828BF590")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DD3")]
		[Address(RVA = "0x28C04C0", Offset = "0x28BEAC0", VA = "0x1828C04C0")]
		set
		{
		}
	}

	[Token(Token = "0x170002E0")]
	public override Type ComponentType
	{
		[Token(Token = "0x6000DD4")]
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E1")]
	private object DefaultValue
	{
		[Token(Token = "0x6000DD5")]
		[Address(RVA = "0x28BED60", Offset = "0x28BD360", VA = "0x1828BED60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E2")]
	private MethodInfo GetMethodValue
	{
		[Token(Token = "0x6000DD6")]
		[Address(RVA = "0x28BF060", Offset = "0x28BD660", VA = "0x1828BF060")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E3")]
	private bool IsExtender
	{
		[Token(Token = "0x6000DD7")]
		[Address(RVA = "0x28BF750", Offset = "0x28BDD50", VA = "0x1828BF750")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002E4")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x6000DD8")]
		[Address(RVA = "0x28BF790", Offset = "0x28BDD90", VA = "0x1828BF790", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002E5")]
	public override Type PropertyType
	{
		[Token(Token = "0x6000DD9")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E6")]
	private MethodInfo ResetMethodValue
	{
		[Token(Token = "0x6000DDA")]
		[Address(RVA = "0x28BF890", Offset = "0x28BDE90", VA = "0x1828BF890")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E7")]
	private MethodInfo SetMethodValue
	{
		[Token(Token = "0x6000DDB")]
		[Address(RVA = "0x28BFB50", Offset = "0x28BE150", VA = "0x1828BFB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E8")]
	private MethodInfo ShouldSerializeMethodValue
	{
		[Token(Token = "0x6000DDC")]
		[Address(RVA = "0x28C01C0", Offset = "0x28BE7C0", VA = "0x1828C01C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E9")]
	public override bool SupportsChangeEvents
	{
		[Token(Token = "0x6000DEE")]
		[Address(RVA = "0x28C0480", Offset = "0x28BEA80", VA = "0x1828C0480", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x28BE5A0", Offset = "0x28BCBA0", VA = "0x1828BE5A0")]
	public ReflectPropertyDescriptor(Type componentClass, string name, Type type, Attribute[] attributes)
	{
	}

	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x28BE8C0", Offset = "0x28BCEC0", VA = "0x1828BE8C0")]
	public ReflectPropertyDescriptor(Type componentClass, string name, Type type, PropertyInfo propInfo, MethodInfo getMethod, MethodInfo setMethod, Attribute[] attrs)
	{
	}

	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x28BE7D0", Offset = "0x28BCDD0", VA = "0x1828BE7D0")]
	public ReflectPropertyDescriptor(Type componentClass, string name, Type type, Type receiverType, MethodInfo getMethod, MethodInfo setMethod, Attribute[] attrs)
	{
	}

	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x28BE090", Offset = "0x28BC690", VA = "0x1828BE090")]
	public ReflectPropertyDescriptor(Type componentClass, PropertyDescriptor oldReflectPropertyDescriptor, Attribute[] attributes)
	{
	}

	[Token(Token = "0x6000DDD")]
	[Address(RVA = "0x28BB0D0", Offset = "0x28B96D0", VA = "0x1828BB0D0", Slot = "22")]
	public override void AddValueChanged(object component, EventHandler handler)
	{
	}

	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x28BB500", Offset = "0x28B9B00", VA = "0x1828BB500")]
	internal bool ExtenderCanResetValue(IExtenderProvider provider, object component)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DDF")]
	[Address(RVA = "0x187BC30", Offset = "0x187A230", VA = "0x18187BC30")]
	internal Type ExtenderGetReceiverType()
	{
		return null;
	}

	[Token(Token = "0x6000DE0")]
	[Address(RVA = "0x273B380", Offset = "0x2739980", VA = "0x18273B380")]
	internal Type ExtenderGetType(IExtenderProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000DE1")]
	[Address(RVA = "0x28BB730", Offset = "0x28B9D30", VA = "0x1828BB730")]
	internal object ExtenderGetValue(IExtenderProvider provider, object component)
	{
		return null;
	}

	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x28BB890", Offset = "0x28B9E90", VA = "0x1828BB890")]
	internal void ExtenderResetValue(IExtenderProvider provider, object component, PropertyDescriptor notifyDesc)
	{
	}

	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x28BBC60", Offset = "0x28BA260", VA = "0x1828BBC60")]
	internal void ExtenderSetValue(IExtenderProvider provider, object component, object value, PropertyDescriptor notifyDesc)
	{
	}

	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x28BBFB0", Offset = "0x28BA5B0", VA = "0x1828BBFB0")]
	internal bool ExtenderShouldSerializeValue(IExtenderProvider provider, object component)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE5")]
	[Address(RVA = "0x28BB2C0", Offset = "0x28B98C0", VA = "0x1828BB2C0", Slot = "23")]
	public override bool CanResetValue(object component)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x28BC350", Offset = "0x28BA950", VA = "0x1828BC350", Slot = "15")]
	protected override void FillAttributes(IList attributes)
	{
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x28BCCD0", Offset = "0x28BB2D0", VA = "0x1828BCCD0", Slot = "26")]
	public override object GetValue(object component)
	{
		return null;
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x28BCFD0", Offset = "0x28BB5D0", VA = "0x1828BCFD0")]
	internal void OnINotifyPropertyChanged(object component, PropertyChangedEventArgs e)
	{
	}

	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x28BD0E0", Offset = "0x28BB6E0", VA = "0x1828BD0E0", Slot = "27")]
	protected override void OnValueChanged(object component, EventArgs e)
	{
	}

	[Token(Token = "0x6000DEA")]
	[Address(RVA = "0x28BD180", Offset = "0x28BB780", VA = "0x1828BD180", Slot = "28")]
	public override void RemoveValueChanged(object component, EventHandler handler)
	{
	}

	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x28BD370", Offset = "0x28BB970", VA = "0x1828BD370", Slot = "29")]
	public override void ResetValue(object component)
	{
	}

	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x28BD670", Offset = "0x28BBC70", VA = "0x1828BD670", Slot = "30")]
	public override void SetValue(object component, object value)
	{
	}

	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x28BDAE0", Offset = "0x28BC0E0", VA = "0x1828BDAE0", Slot = "31")]
	public override bool ShouldSerializeValue(object component)
	{
		return default(bool);
	}
}
