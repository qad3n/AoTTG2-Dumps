// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataRowView
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000046")]
[DefaultMember("Item")]
public class DataRowView : ICustomTypeDescriptor, IEditableObject, IDataErrorInfo, INotifyPropertyChanged
{
	[Token(Token = "0x4000161")]
	[FieldOffset(Offset = "0x10")]
	private readonly DataView _dataView;

	[Token(Token = "0x4000162")]
	[FieldOffset(Offset = "0x18")]
	private readonly DataRow _row;

	[Token(Token = "0x4000163")]
	[FieldOffset(Offset = "0x20")]
	private bool _delayBeginEdit;

	[Token(Token = "0x4000164")]
	[FieldOffset(Offset = "0x0")]
	private static readonly PropertyDescriptorCollection s_zeroPropertyDescriptorCollection;

	[Token(Token = "0x4000165")]
	[FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	private PropertyChangedEventHandler m_PropertyChanged;

	[Token(Token = "0x170000C6")]
	public DataView DataView
	{
		[Token(Token = "0x60004B0")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	// C# has no syntax for parameterized property 'System.ComponentModel.IDataErrorInfo.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x170000C7")]
	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x24F5610", Offset = "0x24F3C10", VA = "0x1824F5610", Slot = "19")]
	private string System_002EComponentModel_002EIDataErrorInfo_002Eget_Item(string colName)
	{
		return null;
	}

	[Token(Token = "0x170000C8")]
	private string System_002EComponentModel_002EIDataErrorInfo_002EError
	{
		[Token(Token = "0x60004B2")]
		[Address(RVA = "0x24F55D0", Offset = "0x24F3BD0", VA = "0x1824F55D0", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C9")]
	private DataRowVersion RowVersionDefault
	{
		[Token(Token = "0x60004B3")]
		[Address(RVA = "0x24F57A0", Offset = "0x24F3DA0", VA = "0x1824F57A0")]
		get
		{
			return default(DataRowVersion);
		}
	}

	[Token(Token = "0x170000CA")]
	public DataRow Row
	{
		[Token(Token = "0x60004BA")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CB")]
	public bool IsNew
	{
		[Token(Token = "0x60004BE")]
		[Address(RVA = "0x24F5770", Offset = "0x24F3D70", VA = "0x1824F5770")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000007")]
	public event PropertyChangedEventHandler PropertyChanged
	{
		[Token(Token = "0x60004BF")]
		[Address(RVA = "0x24F56D0", Offset = "0x24F3CD0", VA = "0x1824F56D0", Slot = "21")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60004C0")]
		[Address(RVA = "0x24F5800", Offset = "0x24F3E00", VA = "0x1824F5800", Slot = "22")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
	internal DataRowView(DataView dataView, DataRow row)
	{
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x841F20", Offset = "0x840520", VA = "0x180841F20", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x24F5110", Offset = "0x24F3710", VA = "0x1824F5110", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x24F5140", Offset = "0x24F3740", VA = "0x1824F5140")]
	internal int GetRecord()
	{
		return default(int);
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x24F51C0", Offset = "0x24F37C0", VA = "0x1824F51C0")]
	internal bool HasRecord()
	{
		return default(bool);
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x24F4FE0", Offset = "0x24F35E0", VA = "0x1824F4FE0")]
	internal object GetColumnValue(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x24F52D0", Offset = "0x24F38D0", VA = "0x1824F52D0")]
	internal void SetColumnValue(DataColumn column, object value)
	{
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x24F4D50", Offset = "0x24F3350", VA = "0x1824F4D50")]
	public DataView CreateChildView(DataRelation relation, bool followParent)
	{
		return null;
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x24F4F70", Offset = "0x24F3570", VA = "0x1824F4F70")]
	public DataView CreateChildView(DataRelation relation)
	{
		return null;
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x24F4CE0", Offset = "0x24F32E0", VA = "0x1824F4CE0", Slot = "16")]
	public void BeginEdit()
	{
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x24F4CF0", Offset = "0x24F32F0", VA = "0x1824F4CF0", Slot = "18")]
	public void CancelEdit()
	{
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x24F4F80", Offset = "0x24F3580", VA = "0x1824F4F80", Slot = "17")]
	public void EndEdit()
	{
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x24F5240", Offset = "0x24F3840", VA = "0x1824F5240")]
	internal void RaisePropertyChangedEvent(string propName)
	{
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x24F5390", Offset = "0x24F3990", VA = "0x1824F5390", Slot = "4")]
	private AttributeCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetAttributes()
	{
		return null;
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "5")]
	private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetClassName()
	{
		return null;
	}

	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
	private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetComponentName()
	{
		return null;
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "7")]
	private TypeConverter System_002EComponentModel_002EICustomTypeDescriptor_002EGetConverter()
	{
		return null;
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "8")]
	private EventDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultEvent()
	{
		return null;
	}

	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "9")]
	private PropertyDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultProperty()
	{
		return null;
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "10")]
	private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetEditor(Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x24F53E0", Offset = "0x24F39E0", VA = "0x1824F53E0", Slot = "11")]
	private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents()
	{
		return null;
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x24F5430", Offset = "0x24F3A30", VA = "0x1824F5430", Slot = "12")]
	private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents(Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x24F5510", Offset = "0x24F3B10", VA = "0x1824F5510", Slot = "13")]
	private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties()
	{
		return null;
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x24F5480", Offset = "0x24F3A80", VA = "0x1824F5480", Slot = "14")]
	private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties(Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "15")]
	private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetPropertyOwner(PropertyDescriptor pd)
	{
		return null;
	}
}
