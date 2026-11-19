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
		[Address(RVA = "0x5EA0CE0", Offset = "0x5E9FCE0", VA = "0x5EA0CE0")]
		get
		{
			return null;
		}
	}

	// C# has no syntax for parameterized property 'System.ComponentModel.IDataErrorInfo.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x170000C7")]
	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x5EA0CF0", Offset = "0x5E9FCF0", VA = "0x5EA0CF0", Slot = "19")]
	private string System_002EComponentModel_002EIDataErrorInfo_002Eget_Item(string colName)
	{
		return null;
	}

	[Token(Token = "0x170000C8")]
	private string System_002EComponentModel_002EIDataErrorInfo_002EError
	{
		[Token(Token = "0x60004B2")]
		[Address(RVA = "0x5EA0D10", Offset = "0x5E9FD10", VA = "0x5EA0D10", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C9")]
	private DataRowVersion RowVersionDefault
	{
		[Token(Token = "0x60004B3")]
		[Address(RVA = "0x5EA0D50", Offset = "0x5E9FD50", VA = "0x5EA0D50")]
		get
		{
			return default(DataRowVersion);
		}
	}

	[Token(Token = "0x170000CA")]
	public DataRow Row
	{
		[Token(Token = "0x60004BA")]
		[Address(RVA = "0x5EA1030", Offset = "0x5EA0030", VA = "0x5EA1030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CB")]
	public bool IsNew
	{
		[Token(Token = "0x60004BE")]
		[Address(RVA = "0x5EA10F0", Offset = "0x5EA00F0", VA = "0x5EA10F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000007")]
	public event PropertyChangedEventHandler PropertyChanged
	{
		[Token(Token = "0x60004BF")]
		[Address(RVA = "0x5EA1160", Offset = "0x5EA0160", VA = "0x5EA1160", Slot = "21")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60004C0")]
		[Address(RVA = "0x5EA11F0", Offset = "0x5EA01F0", VA = "0x5EA11F0", Slot = "22")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x5EA0C60", Offset = "0x5E9FC60", VA = "0x5EA0C60")]
	internal DataRowView(DataView dataView, DataRow row)
	{
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x5EA0CA0", Offset = "0x5E9FCA0", VA = "0x5EA0CA0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x5EA0CB0", Offset = "0x5E9FCB0", VA = "0x5EA0CB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x5EA0DA0", Offset = "0x5E9FDA0", VA = "0x5EA0DA0")]
	internal int GetRecord()
	{
		return default(int);
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x5EA0E00", Offset = "0x5E9FE00", VA = "0x5EA0E00")]
	internal bool HasRecord()
	{
		return default(bool);
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x5E93820", Offset = "0x5E92820", VA = "0x5E93820")]
	internal object GetColumnValue(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x5E939D0", Offset = "0x5E929D0", VA = "0x5E939D0")]
	internal void SetColumnValue(DataColumn column, object value)
	{
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x5EA0E50", Offset = "0x5E9FE50", VA = "0x5EA0E50")]
	public DataView CreateChildView(DataRelation relation, bool followParent)
	{
		return null;
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x5E9C2E0", Offset = "0x5E9B2E0", VA = "0x5E9C2E0")]
	public DataView CreateChildView(DataRelation relation)
	{
		return null;
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x5EA1040", Offset = "0x5EA0040", VA = "0x5EA1040", Slot = "16")]
	public void BeginEdit()
	{
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x5EA1050", Offset = "0x5EA0050", VA = "0x5EA1050", Slot = "18")]
	public void CancelEdit()
	{
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x5EA1110", Offset = "0x5EA0110", VA = "0x5EA1110", Slot = "17")]
	public void EndEdit()
	{
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x5EA1280", Offset = "0x5EA0280", VA = "0x5EA1280")]
	internal void RaisePropertyChangedEvent(string propName)
	{
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x5EA1300", Offset = "0x5EA0300", VA = "0x5EA1300", Slot = "4")]
	private AttributeCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetAttributes()
	{
		return null;
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x5EA1340", Offset = "0x5EA0340", VA = "0x5EA1340", Slot = "5")]
	private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetClassName()
	{
		return null;
	}

	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x5EA1350", Offset = "0x5EA0350", VA = "0x5EA1350", Slot = "6")]
	private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetComponentName()
	{
		return null;
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x5EA1360", Offset = "0x5EA0360", VA = "0x5EA1360", Slot = "7")]
	private TypeConverter System_002EComponentModel_002EICustomTypeDescriptor_002EGetConverter()
	{
		return null;
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x5EA1370", Offset = "0x5EA0370", VA = "0x5EA1370", Slot = "8")]
	private EventDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultEvent()
	{
		return null;
	}

	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x5EA1380", Offset = "0x5EA0380", VA = "0x5EA1380", Slot = "9")]
	private PropertyDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultProperty()
	{
		return null;
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x5EA1390", Offset = "0x5EA0390", VA = "0x5EA1390", Slot = "10")]
	private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetEditor(Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x5EA13A0", Offset = "0x5EA03A0", VA = "0x5EA13A0", Slot = "11")]
	private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents()
	{
		return null;
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x5EA13E0", Offset = "0x5EA03E0", VA = "0x5EA13E0", Slot = "12")]
	private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents(Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x5EA1420", Offset = "0x5EA0420", VA = "0x5EA1420", Slot = "13")]
	private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties()
	{
		return null;
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x5EA14C0", Offset = "0x5EA04C0", VA = "0x5EA14C0", Slot = "14")]
	private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties(Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x5EA1540", Offset = "0x5EA0540", VA = "0x5EA1540", Slot = "15")]
	private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetPropertyOwner(PropertyDescriptor pd)
	{
		return null;
	}
}
