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

[Token(Token = "0x20001D0")]
internal sealed class ReflectPropertyDescriptor : PropertyDescriptor
{
	[Token(Token = "0x40006CD")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type[] argsNone;

	[Token(Token = "0x40006CE")]
	[FieldOffset(Offset = "0x8")]
	private static readonly object noValue;

	[Token(Token = "0x40006CF")]
	[FieldOffset(Offset = "0x10")]
	private static TraceSwitch PropDescCreateSwitch;

	[Token(Token = "0x40006D0")]
	[FieldOffset(Offset = "0x18")]
	private static TraceSwitch PropDescUsageSwitch;

	[Token(Token = "0x40006D1")]
	[FieldOffset(Offset = "0x20")]
	private static readonly int BitDefaultValueQueried;

	[Token(Token = "0x40006D2")]
	[FieldOffset(Offset = "0x24")]
	private static readonly int BitGetQueried;

	[Token(Token = "0x40006D3")]
	[FieldOffset(Offset = "0x28")]
	private static readonly int BitSetQueried;

	[Token(Token = "0x40006D4")]
	[FieldOffset(Offset = "0x2C")]
	private static readonly int BitShouldSerializeQueried;

	[Token(Token = "0x40006D5")]
	[FieldOffset(Offset = "0x30")]
	private static readonly int BitResetQueried;

	[Token(Token = "0x40006D6")]
	[FieldOffset(Offset = "0x34")]
	private static readonly int BitChangedQueried;

	[Token(Token = "0x40006D7")]
	[FieldOffset(Offset = "0x38")]
	private static readonly int BitIPropChangedQueried;

	[Token(Token = "0x40006D8")]
	[FieldOffset(Offset = "0x3C")]
	private static readonly int BitReadOnlyChecked;

	[Token(Token = "0x40006D9")]
	[FieldOffset(Offset = "0x40")]
	private static readonly int BitAmbientValueQueried;

	[Token(Token = "0x40006DA")]
	[FieldOffset(Offset = "0x44")]
	private static readonly int BitSetOnDemand;

	[Token(Token = "0x40006DB")]
	[FieldOffset(Offset = "0x84")]
	private BitVector32 state;

	[Token(Token = "0x40006DC")]
	[FieldOffset(Offset = "0x88")]
	private Type componentClass;

	[Token(Token = "0x40006DD")]
	[FieldOffset(Offset = "0x90")]
	private Type type;

	[Token(Token = "0x40006DE")]
	[FieldOffset(Offset = "0x98")]
	private object defaultValue;

	[Token(Token = "0x40006DF")]
	[FieldOffset(Offset = "0xA0")]
	private object ambientValue;

	[Token(Token = "0x40006E0")]
	[FieldOffset(Offset = "0xA8")]
	private PropertyInfo propInfo;

	[Token(Token = "0x40006E1")]
	[FieldOffset(Offset = "0xB0")]
	private MethodInfo getMethod;

	[Token(Token = "0x40006E2")]
	[FieldOffset(Offset = "0xB8")]
	private MethodInfo setMethod;

	[Token(Token = "0x40006E3")]
	[FieldOffset(Offset = "0xC0")]
	private MethodInfo shouldSerializeMethod;

	[Token(Token = "0x40006E4")]
	[FieldOffset(Offset = "0xC8")]
	private MethodInfo resetMethod;

	[Token(Token = "0x40006E5")]
	[FieldOffset(Offset = "0xD0")]
	private EventDescriptor realChangedEvent;

	[Token(Token = "0x40006E6")]
	[FieldOffset(Offset = "0xD8")]
	private EventDescriptor realIPropChangedEvent;

	[Token(Token = "0x40006E7")]
	[FieldOffset(Offset = "0xE0")]
	private Type receiverType;

	[Token(Token = "0x170002AE")]
	private object AmbientValue
	{
		[Token(Token = "0x6000C10")]
		[Address(RVA = "0x62553E0", Offset = "0x62543E0", VA = "0x62553E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002AF")]
	private EventDescriptor ChangedEventValue
	{
		[Token(Token = "0x6000C11")]
		[Address(RVA = "0x6255560", Offset = "0x6254560", VA = "0x6255560")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B0")]
	private EventDescriptor IPropChangedEventValue
	{
		[Token(Token = "0x6000C12")]
		[Address(RVA = "0x62556E0", Offset = "0x62546E0", VA = "0x62556E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000C13")]
		[Address(RVA = "0x62558A0", Offset = "0x62548A0", VA = "0x62558A0")]
		set
		{
		}
	}

	[Token(Token = "0x170002B1")]
	public override Type ComponentType
	{
		[Token(Token = "0x6000C14")]
		[Address(RVA = "0x6255920", Offset = "0x6254920", VA = "0x6255920", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B2")]
	private object DefaultValue
	{
		[Token(Token = "0x6000C15")]
		[Address(RVA = "0x6255930", Offset = "0x6254930", VA = "0x6255930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B3")]
	private MethodInfo GetMethodValue
	{
		[Token(Token = "0x6000C16")]
		[Address(RVA = "0x6255C00", Offset = "0x6254C00", VA = "0x6255C00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B4")]
	private bool IsExtender
	{
		[Token(Token = "0x6000C17")]
		[Address(RVA = "0x6256100", Offset = "0x6255100", VA = "0x6256100")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B5")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x6000C18")]
		[Address(RVA = "0x6256140", Offset = "0x6255140", VA = "0x6256140", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B6")]
	public override Type PropertyType
	{
		[Token(Token = "0x6000C19")]
		[Address(RVA = "0x6256830", Offset = "0x6255830", VA = "0x6256830", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B7")]
	private MethodInfo ResetMethodValue
	{
		[Token(Token = "0x6000C1A")]
		[Address(RVA = "0x6256840", Offset = "0x6255840", VA = "0x6256840")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B8")]
	private MethodInfo SetMethodValue
	{
		[Token(Token = "0x6000C1B")]
		[Address(RVA = "0x6256220", Offset = "0x6255220", VA = "0x6256220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B9")]
	private MethodInfo ShouldSerializeMethodValue
	{
		[Token(Token = "0x6000C1C")]
		[Address(RVA = "0x6256AD0", Offset = "0x6255AD0", VA = "0x6256AD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002BA")]
	public override bool SupportsChangeEvents
	{
		[Token(Token = "0x6000C2E")]
		[Address(RVA = "0x625A450", Offset = "0x6259450", VA = "0x625A450", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x62549D0", Offset = "0x62539D0", VA = "0x62549D0")]
	public ReflectPropertyDescriptor(Type componentClass, string name, Type type, Attribute[] attributes)
	{
	}

	[Token(Token = "0x6000C0D")]
	[Address(RVA = "0x6254C60", Offset = "0x6253C60", VA = "0x6254C60")]
	public ReflectPropertyDescriptor(Type componentClass, string name, Type type, PropertyInfo propInfo, MethodInfo getMethod, MethodInfo setMethod, Attribute[] attrs)
	{
	}

	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x6254DC0", Offset = "0x6253DC0", VA = "0x6254DC0")]
	public ReflectPropertyDescriptor(Type componentClass, string name, Type type, Type receiverType, MethodInfo getMethod, MethodInfo setMethod, Attribute[] attrs)
	{
	}

	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x6254EC0", Offset = "0x6253EC0", VA = "0x6254EC0")]
	public ReflectPropertyDescriptor(Type componentClass, PropertyDescriptor oldReflectPropertyDescriptor, Attribute[] attributes)
	{
	}

	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x6256D60", Offset = "0x6255D60", VA = "0x6256D60", Slot = "22")]
	public override void AddValueChanged(object component, EventHandler handler)
	{
	}

	[Token(Token = "0x6000C1E")]
	[Address(RVA = "0x6256F40", Offset = "0x6255F40", VA = "0x6256F40")]
	internal bool ExtenderCanResetValue(IExtenderProvider provider, object component)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C1F")]
	[Address(RVA = "0x6257300", Offset = "0x6256300", VA = "0x6257300")]
	internal Type ExtenderGetReceiverType()
	{
		return null;
	}

	[Token(Token = "0x6000C20")]
	[Address(RVA = "0x6257310", Offset = "0x6256310", VA = "0x6257310")]
	internal Type ExtenderGetType(IExtenderProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000C21")]
	[Address(RVA = "0x62571D0", Offset = "0x62561D0", VA = "0x62571D0")]
	internal object ExtenderGetValue(IExtenderProvider provider, object component)
	{
		return null;
	}

	[Token(Token = "0x6000C22")]
	[Address(RVA = "0x6257330", Offset = "0x6256330", VA = "0x6257330")]
	internal void ExtenderResetValue(IExtenderProvider provider, object component, PropertyDescriptor notifyDesc)
	{
	}

	[Token(Token = "0x6000C23")]
	[Address(RVA = "0x62577D0", Offset = "0x62567D0", VA = "0x62577D0")]
	internal void ExtenderSetValue(IExtenderProvider provider, object component, object value, PropertyDescriptor notifyDesc)
	{
	}

	[Token(Token = "0x6000C24")]
	[Address(RVA = "0x6257C70", Offset = "0x6256C70", VA = "0x6257C70")]
	internal bool ExtenderShouldSerializeValue(IExtenderProvider provider, object component)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C25")]
	[Address(RVA = "0x62580E0", Offset = "0x62570E0", VA = "0x62580E0", Slot = "23")]
	public override bool CanResetValue(object component)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C26")]
	[Address(RVA = "0x6258330", Offset = "0x6257330", VA = "0x6258330", Slot = "15")]
	protected override void FillAttributes(IList attributes)
	{
	}

	[Token(Token = "0x6000C27")]
	[Address(RVA = "0x6259040", Offset = "0x6258040", VA = "0x6259040", Slot = "26")]
	public override object GetValue(object component)
	{
		return null;
	}

	[Token(Token = "0x6000C28")]
	[Address(RVA = "0x6259350", Offset = "0x6258350", VA = "0x6259350")]
	internal void OnINotifyPropertyChanged(object component, PropertyChangedEventArgs e)
	{
	}

	[Token(Token = "0x6000C29")]
	[Address(RVA = "0x6259450", Offset = "0x6258450", VA = "0x6259450", Slot = "27")]
	protected override void OnValueChanged(object component, EventArgs e)
	{
	}

	[Token(Token = "0x6000C2A")]
	[Address(RVA = "0x6259550", Offset = "0x6258550", VA = "0x6259550", Slot = "28")]
	public override void RemoveValueChanged(object component, EventHandler handler)
	{
	}

	[Token(Token = "0x6000C2B")]
	[Address(RVA = "0x6259720", Offset = "0x6258720", VA = "0x6259720", Slot = "29")]
	public override void ResetValue(object component)
	{
	}

	[Token(Token = "0x6000C2C")]
	[Address(RVA = "0x6259B30", Offset = "0x6258B30", VA = "0x6259B30", Slot = "30")]
	public override void SetValue(object component, object value)
	{
	}

	[Token(Token = "0x6000C2D")]
	[Address(RVA = "0x625A130", Offset = "0x6259130", VA = "0x625A130", Slot = "31")]
	public override bool ShouldSerializeValue(object component)
	{
		return default(bool);
	}
}
