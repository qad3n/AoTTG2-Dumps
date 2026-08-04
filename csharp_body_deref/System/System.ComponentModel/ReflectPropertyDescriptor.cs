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
		[Address(RVA = "0x48B66A0", Offset = "0x48B66A0", VA = "0x48B66A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700046F")]
	private EventDescriptor ChangedEventValue
	{
		[Token(Token = "0x6001389")]
		[Address(RVA = "0x48B6820", Offset = "0x48B6820", VA = "0x48B6820")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000470")]
	private EventDescriptor IPropChangedEventValue
	{
		[Token(Token = "0x600138A")]
		[Address(RVA = "0x48B69A0", Offset = "0x48B69A0", VA = "0x48B69A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600138B")]
		[Address(RVA = "0x48B6B60", Offset = "0x48B6B60", VA = "0x48B6B60")]
		set
		{
		}
	}

	[Token(Token = "0x17000471")]
	public override Type ComponentType
	{
		[Token(Token = "0x600138C")]
		[Address(RVA = "0x48B6BE0", Offset = "0x48B6BE0", VA = "0x48B6BE0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000472")]
	private object DefaultValue
	{
		[Token(Token = "0x600138D")]
		[Address(RVA = "0x48B6BF0", Offset = "0x48B6BF0", VA = "0x48B6BF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000473")]
	private MethodInfo GetMethodValue
	{
		[Token(Token = "0x600138E")]
		[Address(RVA = "0x48B6EC0", Offset = "0x48B6EC0", VA = "0x48B6EC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000474")]
	private bool IsExtender
	{
		[Token(Token = "0x600138F")]
		[Address(RVA = "0x48B73C0", Offset = "0x48B73C0", VA = "0x48B73C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000475")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x6001390")]
		[Address(RVA = "0x48B7400", Offset = "0x48B7400", VA = "0x48B7400", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000476")]
	public override Type PropertyType
	{
		[Token(Token = "0x6001391")]
		[Address(RVA = "0x48B7B00", Offset = "0x48B7B00", VA = "0x48B7B00", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000477")]
	private MethodInfo ResetMethodValue
	{
		[Token(Token = "0x6001392")]
		[Address(RVA = "0x48B7B10", Offset = "0x48B7B10", VA = "0x48B7B10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000478")]
	private MethodInfo SetMethodValue
	{
		[Token(Token = "0x6001393")]
		[Address(RVA = "0x48B74E0", Offset = "0x48B74E0", VA = "0x48B74E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000479")]
	private MethodInfo ShouldSerializeMethodValue
	{
		[Token(Token = "0x6001394")]
		[Address(RVA = "0x48B7D30", Offset = "0x48B7D30", VA = "0x48B7D30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700047A")]
	public override bool SupportsChangeEvents
	{
		[Token(Token = "0x60013A6")]
		[Address(RVA = "0x48BBA90", Offset = "0x48BBA90", VA = "0x48BBA90", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001384")]
	[Address(RVA = "0x48B5B70", Offset = "0x48B5B70", VA = "0x48B5B70")]
	public ReflectPropertyDescriptor(Type componentClass, string name, Type type, Attribute[] attributes)
	{
	}

	[Token(Token = "0x6001385")]
	[Address(RVA = "0x48B5F00", Offset = "0x48B5F00", VA = "0x48B5F00")]
	public ReflectPropertyDescriptor(Type componentClass, string name, Type type, PropertyInfo propInfo, MethodInfo getMethod, MethodInfo setMethod, Attribute[] attrs)
	{
	}

	[Token(Token = "0x6001386")]
	[Address(RVA = "0x48B6060", Offset = "0x48B6060", VA = "0x48B6060")]
	public ReflectPropertyDescriptor(Type componentClass, string name, Type type, Type receiverType, MethodInfo getMethod, MethodInfo setMethod, Attribute[] attrs)
	{
	}

	[Token(Token = "0x6001387")]
	[Address(RVA = "0x48B6160", Offset = "0x48B6160", VA = "0x48B6160")]
	public ReflectPropertyDescriptor(Type componentClass, PropertyDescriptor oldReflectPropertyDescriptor, Attribute[] attributes)
	{
	}

	[Token(Token = "0x6001395")]
	[Address(RVA = "0x48B7F50", Offset = "0x48B7F50", VA = "0x48B7F50", Slot = "22")]
	public override void AddValueChanged(object component, EventHandler handler)
	{
	}

	[Token(Token = "0x6001396")]
	[Address(RVA = "0x48B8130", Offset = "0x48B8130", VA = "0x48B8130")]
	internal bool ExtenderCanResetValue(IExtenderProvider provider, object component)
	{
		return default(bool);
	}

	[Token(Token = "0x6001397")]
	[Address(RVA = "0x48B8510", Offset = "0x48B8510", VA = "0x48B8510")]
	internal Type ExtenderGetReceiverType()
	{
		return null;
	}

	[Token(Token = "0x6001398")]
	[Address(RVA = "0x48B8520", Offset = "0x48B8520", VA = "0x48B8520")]
	internal Type ExtenderGetType(IExtenderProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6001399")]
	[Address(RVA = "0x48B83E0", Offset = "0x48B83E0", VA = "0x48B83E0")]
	internal object ExtenderGetValue(IExtenderProvider provider, object component)
	{
		return null;
	}

	[Token(Token = "0x600139A")]
	[Address(RVA = "0x48B8540", Offset = "0x48B8540", VA = "0x48B8540")]
	internal void ExtenderResetValue(IExtenderProvider provider, object component, PropertyDescriptor notifyDesc)
	{
	}

	[Token(Token = "0x600139B")]
	[Address(RVA = "0x48B8A80", Offset = "0x48B8A80", VA = "0x48B8A80")]
	internal void ExtenderSetValue(IExtenderProvider provider, object component, object value, PropertyDescriptor notifyDesc)
	{
	}

	[Token(Token = "0x600139C")]
	[Address(RVA = "0x48B8F30", Offset = "0x48B8F30", VA = "0x48B8F30")]
	internal bool ExtenderShouldSerializeValue(IExtenderProvider provider, object component)
	{
		return default(bool);
	}

	[Token(Token = "0x600139D")]
	[Address(RVA = "0x48B93F0", Offset = "0x48B93F0", VA = "0x48B93F0", Slot = "23")]
	public override bool CanResetValue(object component)
	{
		return default(bool);
	}

	[Token(Token = "0x600139E")]
	[Address(RVA = "0x48B9680", Offset = "0x48B9680", VA = "0x48B9680", Slot = "15")]
	protected override void FillAttributes(IList attributes)
	{
	}

	[Token(Token = "0x600139F")]
	[Address(RVA = "0x48BA3F0", Offset = "0x48BA3F0", VA = "0x48BA3F0", Slot = "26")]
	public override object GetValue(object component)
	{
		return null;
	}

	[Token(Token = "0x60013A0")]
	[Address(RVA = "0x48BA830", Offset = "0x48BA830", VA = "0x48BA830")]
	internal void OnINotifyPropertyChanged(object component, PropertyChangedEventArgs e)
	{
	}

	[Token(Token = "0x60013A1")]
	[Address(RVA = "0x48BA930", Offset = "0x48BA930", VA = "0x48BA930", Slot = "27")]
	protected override void OnValueChanged(object component, EventArgs e)
	{
	}

	[Token(Token = "0x60013A2")]
	[Address(RVA = "0x48BAA30", Offset = "0x48BAA30", VA = "0x48BAA30", Slot = "28")]
	public override void RemoveValueChanged(object component, EventHandler handler)
	{
	}

	[Token(Token = "0x60013A3")]
	[Address(RVA = "0x48BAC00", Offset = "0x48BAC00", VA = "0x48BAC00", Slot = "29")]
	public override void ResetValue(object component)
	{
	}

	[Token(Token = "0x60013A4")]
	[Address(RVA = "0x48BB070", Offset = "0x48BB070", VA = "0x48BB070", Slot = "30")]
	public override void SetValue(object component, object value)
	{
	}

	[Token(Token = "0x60013A5")]
	[Address(RVA = "0x48BB730", Offset = "0x48BB730", VA = "0x48BB730", Slot = "31")]
	public override bool ShouldSerializeValue(object component)
	{
		return default(bool);
	}
}
