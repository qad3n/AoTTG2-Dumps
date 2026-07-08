using System.ComponentModel;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000035")]
[DefaultMember("Item")]
public class DataRowView : ICustomTypeDescriptor, IEditableObject, IDataErrorInfo, INotifyPropertyChanged
{
	[Token(Token = "0x40000AF")]
	[FieldOffset(Offset = "0x10")]
	private readonly DataView _dataView;

	[Token(Token = "0x40000B0")]
	[FieldOffset(Offset = "0x18")]
	private readonly DataRow _row;

	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0x20")]
	private bool _delayBeginEdit;

	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0x0")]
	private static readonly PropertyDescriptorCollection s_zeroPropertyDescriptorCollection;

	[Token(Token = "0x17000085")]
	public DataView DataView
	{
		[Token(Token = "0x6000342")]
		[Address(RVA = "0x4240F20", Offset = "0x4240F20", VA = "0x4240F20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000086")]
	private string System_002EComponentModel_002EIDataErrorInfo_002EItem
	{
		[Token(Token = "0x6000343")]
		[Address(RVA = "0x4240F30", Offset = "0x4240F30", VA = "0x4240F30", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000087")]
	private string System_002EComponentModel_002EIDataErrorInfo_002EError
	{
		[Token(Token = "0x6000344")]
		[Address(RVA = "0x4240F50", Offset = "0x4240F50", VA = "0x4240F50", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000088")]
	private DataRowVersion RowVersionDefault
	{
		[Token(Token = "0x6000345")]
		[Address(RVA = "0x4240F90", Offset = "0x4240F90", VA = "0x4240F90")]
		get
		{
			return default(DataRowVersion);
		}
	}

	[Token(Token = "0x17000089")]
	public DataRow Row
	{
		[Token(Token = "0x600034C")]
		[Address(RVA = "0x42415E0", Offset = "0x42415E0", VA = "0x42415E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008A")]
	public bool IsNew
	{
		[Token(Token = "0x6000350")]
		[Address(RVA = "0x4241690", Offset = "0x4241690", VA = "0x4241690")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000005")]
	public event PropertyChangedEventHandler PropertyChanged
	{
		[Token(Token = "0x6000351")]
		[Address(RVA = "0x4241970", Offset = "0x4241970", VA = "0x4241970", Slot = "21")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000352")]
		[Address(RVA = "0x4241A00", Offset = "0x4241A00", VA = "0x4241A00", Slot = "22")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x4240EA0", Offset = "0x4240EA0", VA = "0x4240EA0")]
	internal DataRowView(DataView dataView, DataRow row)
	{
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x4240EE0", Offset = "0x4240EE0", VA = "0x4240EE0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x4240EF0", Offset = "0x4240EF0", VA = "0x4240EF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x4240FE0", Offset = "0x4240FE0", VA = "0x4240FE0")]
	internal int GetRecord()
	{
		return default(int);
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x4241040", Offset = "0x4241040", VA = "0x4241040")]
	internal bool HasRecord()
	{
		return default(bool);
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x4241090", Offset = "0x4241090", VA = "0x4241090")]
	internal object GetColumnValue(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x4241110", Offset = "0x4241110", VA = "0x4241110")]
	internal void SetColumnValue(DataColumn column, object value)
	{
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x42411B0", Offset = "0x42411B0", VA = "0x42411B0")]
	public DataView CreateChildView(DataRelation relation, bool followParent)
	{
		return null;
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x423C050", Offset = "0x423C050", VA = "0x423C050")]
	public DataView CreateChildView(DataRelation relation)
	{
		return null;
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x42415F0", Offset = "0x42415F0", VA = "0x42415F0", Slot = "16")]
	public void BeginEdit()
	{
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x4241600", Offset = "0x4241600", VA = "0x4241600", Slot = "18")]
	public void CancelEdit()
	{
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x4241930", Offset = "0x4241930", VA = "0x4241930", Slot = "17")]
	public void EndEdit()
	{
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x4241A90", Offset = "0x4241A90", VA = "0x4241A90")]
	internal void RaisePropertyChangedEvent(string propName)
	{
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x4241B10", Offset = "0x4241B10", VA = "0x4241B10", Slot = "4")]
	private AttributeCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetAttributes()
	{
		return null;
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x4241B50", Offset = "0x4241B50", VA = "0x4241B50", Slot = "5")]
	private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetClassName()
	{
		return null;
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x4241B60", Offset = "0x4241B60", VA = "0x4241B60", Slot = "6")]
	private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetComponentName()
	{
		return null;
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x4241B70", Offset = "0x4241B70", VA = "0x4241B70", Slot = "7")]
	private TypeConverter System_002EComponentModel_002EICustomTypeDescriptor_002EGetConverter()
	{
		return null;
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x4241B80", Offset = "0x4241B80", VA = "0x4241B80", Slot = "8")]
	private EventDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultEvent()
	{
		return null;
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x4241B90", Offset = "0x4241B90", VA = "0x4241B90", Slot = "9")]
	private PropertyDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultProperty()
	{
		return null;
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x4241BA0", Offset = "0x4241BA0", VA = "0x4241BA0", Slot = "10")]
	private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetEditor(Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x4241BB0", Offset = "0x4241BB0", VA = "0x4241BB0", Slot = "11")]
	private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents()
	{
		return null;
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x4241BF0", Offset = "0x4241BF0", VA = "0x4241BF0", Slot = "12")]
	private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents(Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x4241C30", Offset = "0x4241C30", VA = "0x4241C30", Slot = "13")]
	private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties()
	{
		return null;
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x4241CD0", Offset = "0x4241CD0", VA = "0x4241CD0", Slot = "14")]
	private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties(Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x4241D50", Offset = "0x4241D50", VA = "0x4241D50", Slot = "15")]
	private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetPropertyOwner(PropertyDescriptor pd)
	{
		return null;
	}
}
