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
		[Address(RVA = "0x457E680", Offset = "0x457E680", VA = "0x457E680")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000086")]
	private string System_002EComponentModel_002EIDataErrorInfo_002EItem
	{
		[Token(Token = "0x6000343")]
		[Address(RVA = "0x457E690", Offset = "0x457E690", VA = "0x457E690", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000087")]
	private string System_002EComponentModel_002EIDataErrorInfo_002EError
	{
		[Token(Token = "0x6000344")]
		[Address(RVA = "0x457E6B0", Offset = "0x457E6B0", VA = "0x457E6B0", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000088")]
	private DataRowVersion RowVersionDefault
	{
		[Token(Token = "0x6000345")]
		[Address(RVA = "0x457E6F0", Offset = "0x457E6F0", VA = "0x457E6F0")]
		get
		{
			return default(DataRowVersion);
		}
	}

	[Token(Token = "0x17000089")]
	public DataRow Row
	{
		[Token(Token = "0x600034C")]
		[Address(RVA = "0x457ED40", Offset = "0x457ED40", VA = "0x457ED40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008A")]
	public bool IsNew
	{
		[Token(Token = "0x6000350")]
		[Address(RVA = "0x457EDF0", Offset = "0x457EDF0", VA = "0x457EDF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000005")]
	public event PropertyChangedEventHandler PropertyChanged
	{
		[Token(Token = "0x6000351")]
		[Address(RVA = "0x457F0D0", Offset = "0x457F0D0", VA = "0x457F0D0", Slot = "21")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000352")]
		[Address(RVA = "0x457F160", Offset = "0x457F160", VA = "0x457F160", Slot = "22")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x457E600", Offset = "0x457E600", VA = "0x457E600")]
	internal DataRowView(DataView dataView, DataRow row)
	{
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x457E640", Offset = "0x457E640", VA = "0x457E640", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x457E650", Offset = "0x457E650", VA = "0x457E650", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x457E740", Offset = "0x457E740", VA = "0x457E740")]
	internal int GetRecord()
	{
		return default(int);
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x457E7A0", Offset = "0x457E7A0", VA = "0x457E7A0")]
	internal bool HasRecord()
	{
		return default(bool);
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x457E7F0", Offset = "0x457E7F0", VA = "0x457E7F0")]
	internal object GetColumnValue(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x457E870", Offset = "0x457E870", VA = "0x457E870")]
	internal void SetColumnValue(DataColumn column, object value)
	{
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x457E910", Offset = "0x457E910", VA = "0x457E910")]
	public DataView CreateChildView(DataRelation relation, bool followParent)
	{
		return null;
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x45797B0", Offset = "0x45797B0", VA = "0x45797B0")]
	public DataView CreateChildView(DataRelation relation)
	{
		return null;
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x457ED50", Offset = "0x457ED50", VA = "0x457ED50", Slot = "16")]
	public void BeginEdit()
	{
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x457ED60", Offset = "0x457ED60", VA = "0x457ED60", Slot = "18")]
	public void CancelEdit()
	{
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x457F090", Offset = "0x457F090", VA = "0x457F090", Slot = "17")]
	public void EndEdit()
	{
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x457F1F0", Offset = "0x457F1F0", VA = "0x457F1F0")]
	internal void RaisePropertyChangedEvent(string propName)
	{
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x457F270", Offset = "0x457F270", VA = "0x457F270", Slot = "4")]
	private AttributeCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetAttributes()
	{
		return null;
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x457F2B0", Offset = "0x457F2B0", VA = "0x457F2B0", Slot = "5")]
	private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetClassName()
	{
		return null;
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x457F2C0", Offset = "0x457F2C0", VA = "0x457F2C0", Slot = "6")]
	private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetComponentName()
	{
		return null;
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x457F2D0", Offset = "0x457F2D0", VA = "0x457F2D0", Slot = "7")]
	private TypeConverter System_002EComponentModel_002EICustomTypeDescriptor_002EGetConverter()
	{
		return null;
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x457F2E0", Offset = "0x457F2E0", VA = "0x457F2E0", Slot = "8")]
	private EventDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultEvent()
	{
		return null;
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x457F2F0", Offset = "0x457F2F0", VA = "0x457F2F0", Slot = "9")]
	private PropertyDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultProperty()
	{
		return null;
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x457F300", Offset = "0x457F300", VA = "0x457F300", Slot = "10")]
	private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetEditor(Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x457F310", Offset = "0x457F310", VA = "0x457F310", Slot = "11")]
	private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents()
	{
		return null;
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x457F350", Offset = "0x457F350", VA = "0x457F350", Slot = "12")]
	private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents(Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x457F390", Offset = "0x457F390", VA = "0x457F390", Slot = "13")]
	private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties()
	{
		return null;
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x457F430", Offset = "0x457F430", VA = "0x457F430", Slot = "14")]
	private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties(Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x457F4B0", Offset = "0x457F4B0", VA = "0x457F4B0", Slot = "15")]
	private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetPropertyOwner(PropertyDescriptor pd)
	{
		return null;
	}
}
