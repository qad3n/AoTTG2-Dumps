// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.TypeConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Globalization;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000214")]
[ComVisible(true)]
public class TypeConverter
{
	[Token(Token = "0x2000215")]
	protected abstract class SimplePropertyDescriptor : PropertyDescriptor
	{
		[Token(Token = "0x40007D2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		private Type componentType;

		[Token(Token = "0x40007D3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
		private Type propertyType;

		[Token(Token = "0x170002F0")]
		public override Type ComponentType
		{
			[Token(Token = "0x6000E5D")]
			[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0", Slot = "17")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170002F1")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6000E5E")]
			[Address(RVA = "0x28DBE60", Offset = "0x28DA460", VA = "0x1828DBE60", Slot = "20")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170002F2")]
		public override Type PropertyType
		{
			[Token(Token = "0x6000E5F")]
			[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0", Slot = "21")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E5B")]
		[Address(RVA = "0x28DBDD0", Offset = "0x28DA3D0", VA = "0x1828DBDD0")]
		protected SimplePropertyDescriptor(Type componentType, string name, Type propertyType)
		{
		}

		[Token(Token = "0x6000E5C")]
		[Address(RVA = "0x28DBD60", Offset = "0x28DA360", VA = "0x1828DBD60")]
		protected SimplePropertyDescriptor(Type componentType, string name, Type propertyType, Attribute[] attributes)
		{
		}

		[Token(Token = "0x6000E60")]
		[Address(RVA = "0x28DBB20", Offset = "0x28DA120", VA = "0x1828DBB20", Slot = "23")]
		public override bool CanResetValue(object component)
		{
			return default(bool);
		}

		[Token(Token = "0x6000E61")]
		[Address(RVA = "0x28DBC50", Offset = "0x28DA250", VA = "0x1828DBC50", Slot = "29")]
		public override void ResetValue(object component)
		{
		}

		[Token(Token = "0x6000E62")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "31")]
		public override bool ShouldSerializeValue(object component)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000216")]
	public class StandardValuesCollection : ICollection, IEnumerable
	{
		[Token(Token = "0x40007D4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private ICollection values;

		[Token(Token = "0x40007D5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private Array valueArray;

		[Token(Token = "0x170002F3")]
		public int Count
		{
			[Token(Token = "0x6000E64")]
			[Address(RVA = "0x28DBFA0", Offset = "0x28DA5A0", VA = "0x1828DBFA0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170002F4")]
		public object this[int index]
		{
			[Token(Token = "0x6000E65")]
			[Address(RVA = "0x28DC0C0", Offset = "0x28DA6C0", VA = "0x1828DC0C0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170002F5")]
		private int System_002ECollections_002EICollection_002ECount
		{
			[Token(Token = "0x6000E68")]
			[Address(RVA = "0x28DBFA0", Offset = "0x28DA5A0", VA = "0x1828DBFA0", Slot = "5")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170002F6")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x6000E69")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170002F7")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x6000E6A")]
			[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E63")]
		[Address(RVA = "0x28DC010", Offset = "0x28DA610", VA = "0x1828DC010")]
		public StandardValuesCollection(ICollection values)
		{
		}

		[Token(Token = "0x6000E66")]
		[Address(RVA = "0x28DBEE0", Offset = "0x28DA4E0", VA = "0x1828DBEE0")]
		public void CopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6000E67")]
		[Address(RVA = "0x28DBF50", Offset = "0x28DA550", VA = "0x1828DBF50")]
		public IEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000E6B")]
		[Address(RVA = "0x28DBEE0", Offset = "0x28DA4E0", VA = "0x1828DBEE0", Slot = "4")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6000E6C")]
		[Address(RVA = "0x28DBF50", Offset = "0x28DA550", VA = "0x1828DBF50", Slot = "8")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40007D0")]
	private const string s_UseCompatibleTypeConverterBehavior = "UseCompatibleTypeConverterBehavior";

	[Token(Token = "0x40007D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static bool useCompatibleTypeConversion;

	[Token(Token = "0x170002EF")]
	private static bool UseCompatibleTypeConversion
	{
		[Token(Token = "0x6000E33")]
		[Address(RVA = "0x28DD610", Offset = "0x28DBC10", VA = "0x1828DD610")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000E34")]
	[Address(RVA = "0x2893C60", Offset = "0x2892260", VA = "0x182893C60")]
	public bool CanConvertFrom(Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E35")]
	[Address(RVA = "0x28DC620", Offset = "0x28DAC20", VA = "0x1828DC620", Slot = "4")]
	public virtual bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E36")]
	[Address(RVA = "0x28DC690", Offset = "0x28DAC90", VA = "0x1828DC690")]
	public bool CanConvertTo(Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E37")]
	[Address(RVA = "0x28DC6B0", Offset = "0x28DACB0", VA = "0x1828DC6B0", Slot = "5")]
	public virtual bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E38")]
	[Address(RVA = "0x28DC8D0", Offset = "0x28DAED0", VA = "0x1828DC8D0")]
	public object ConvertFrom(object value)
	{
		return null;
	}

	[Token(Token = "0x6000E39")]
	[Address(RVA = "0x28DC950", Offset = "0x28DAF50", VA = "0x1828DC950", Slot = "6")]
	public virtual object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000E3A")]
	[Address(RVA = "0x28DC700", Offset = "0x28DAD00", VA = "0x1828DC700")]
	public object ConvertFromInvariantString(string text)
	{
		return null;
	}

	[Token(Token = "0x6000E3B")]
	[Address(RVA = "0x28DC780", Offset = "0x28DAD80", VA = "0x1828DC780")]
	public object ConvertFromInvariantString(ITypeDescriptorContext context, string text)
	{
		return null;
	}

	[Token(Token = "0x6000E3C")]
	[Address(RVA = "0x28DC8A0", Offset = "0x28DAEA0", VA = "0x1828DC8A0")]
	public object ConvertFromString(string text)
	{
		return null;
	}

	[Token(Token = "0x6000E3D")]
	[Address(RVA = "0x28DC810", Offset = "0x28DAE10", VA = "0x1828DC810")]
	public object ConvertFromString(ITypeDescriptorContext context, string text)
	{
		return null;
	}

	[Token(Token = "0x6000E3E")]
	[Address(RVA = "0x28453A0", Offset = "0x28439A0", VA = "0x1828453A0")]
	public object ConvertFromString(ITypeDescriptorContext context, CultureInfo culture, string text)
	{
		return null;
	}

	[Token(Token = "0x6000E3F")]
	[Address(RVA = "0x28DCCF0", Offset = "0x28DB2F0", VA = "0x1828DCCF0")]
	public object ConvertTo(object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000E40")]
	[Address(RVA = "0x28DCD20", Offset = "0x28DB320", VA = "0x1828DCD20", Slot = "7")]
	public virtual object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000E41")]
	[Address(RVA = "0x28DC9C0", Offset = "0x28DAFC0", VA = "0x1828DC9C0")]
	public string ConvertToInvariantString(object value)
	{
		return null;
	}

	[Token(Token = "0x6000E42")]
	[Address(RVA = "0x28DCA30", Offset = "0x28DB030", VA = "0x1828DCA30")]
	public string ConvertToInvariantString(ITypeDescriptorContext context, object value)
	{
		return null;
	}

	[Token(Token = "0x6000E43")]
	[Address(RVA = "0x28DCAB0", Offset = "0x28DB0B0", VA = "0x1828DCAB0")]
	public string ConvertToString(object value)
	{
		return null;
	}

	[Token(Token = "0x6000E44")]
	[Address(RVA = "0x28DCC20", Offset = "0x28DB220", VA = "0x1828DCC20")]
	public string ConvertToString(ITypeDescriptorContext context, object value)
	{
		return null;
	}

	[Token(Token = "0x6000E45")]
	[Address(RVA = "0x28DCB80", Offset = "0x28DB180", VA = "0x1828DCB80")]
	public string ConvertToString(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000E46")]
	[Address(RVA = "0x28DCF40", Offset = "0x28DB540", VA = "0x1828DCF40")]
	public object CreateInstance(IDictionary propertyValues)
	{
		return null;
	}

	[Token(Token = "0x6000E47")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "8")]
	public virtual object CreateInstance(ITypeDescriptorContext context, IDictionary propertyValues)
	{
		return null;
	}

	[Token(Token = "0x6000E48")]
	[Address(RVA = "0x28DCF60", Offset = "0x28DB560", VA = "0x1828DCF60")]
	protected Exception GetConvertFromException(object value)
	{
		return null;
	}

	[Token(Token = "0x6000E49")]
	[Address(RVA = "0x28DD0A0", Offset = "0x28DB6A0", VA = "0x1828DD0A0")]
	protected Exception GetConvertToException(object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000E4A")]
	[Address(RVA = "0x28DD220", Offset = "0x28DB820", VA = "0x1828DD220")]
	public bool GetCreateInstanceSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E4B")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
	public virtual bool GetCreateInstanceSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E4C")]
	[Address(RVA = "0x28DD260", Offset = "0x28DB860", VA = "0x1828DD260")]
	public PropertyDescriptorCollection GetProperties(object value)
	{
		return null;
	}

	[Token(Token = "0x6000E4D")]
	[Address(RVA = "0x28DD370", Offset = "0x28DB970", VA = "0x1828DD370")]
	public PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value)
	{
		return null;
	}

	[Token(Token = "0x6000E4E")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "10")]
	public virtual PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000E4F")]
	[Address(RVA = "0x28DD240", Offset = "0x28DB840", VA = "0x1828DD240")]
	public bool GetPropertiesSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E50")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "11")]
	public virtual bool GetPropertiesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E51")]
	[Address(RVA = "0x28DD490", Offset = "0x28DBA90", VA = "0x1828DD490")]
	public ICollection GetStandardValues()
	{
		return null;
	}

	[Token(Token = "0x6000E52")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "12")]
	public virtual StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x6000E53")]
	[Address(RVA = "0x1C7CEB0", Offset = "0x1C7B4B0", VA = "0x181C7CEB0")]
	public bool GetStandardValuesExclusive()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E54")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
	public virtual bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E55")]
	[Address(RVA = "0x28DD470", Offset = "0x28DBA70", VA = "0x1828DD470")]
	public bool GetStandardValuesSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E56")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "14")]
	public virtual bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E57")]
	[Address(RVA = "0x28DD4B0", Offset = "0x28DBAB0", VA = "0x1828DD4B0")]
	public bool IsValid(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E58")]
	[Address(RVA = "0x28DD4D0", Offset = "0x28DBAD0", VA = "0x1828DD4D0", Slot = "15")]
	public virtual bool IsValid(ITypeDescriptorContext context, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E59")]
	[Address(RVA = "0x28DD5D0", Offset = "0x28DBBD0", VA = "0x1828DD5D0")]
	protected PropertyDescriptorCollection SortProperties(PropertyDescriptorCollection props, string[] names)
	{
		return null;
	}

	[Token(Token = "0x6000E5A")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public TypeConverter()
	{
	}
}
