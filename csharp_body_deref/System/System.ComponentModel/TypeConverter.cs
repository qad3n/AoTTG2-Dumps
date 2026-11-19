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

[Token(Token = "0x20001D5")]
[ComVisible(true)]
public class TypeConverter
{
	[Token(Token = "0x20001D6")]
	protected abstract class SimplePropertyDescriptor : PropertyDescriptor
	{
		[Token(Token = "0x4000703")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		private Type componentType;

		[Token(Token = "0x4000704")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
		private Type propertyType;

		[Token(Token = "0x170002C1")]
		public override Type ComponentType
		{
			[Token(Token = "0x6000C9D")]
			[Address(RVA = "0x6265CE0", Offset = "0x6264CE0", VA = "0x6265CE0", Slot = "17")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170002C2")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6000C9E")]
			[Address(RVA = "0x6265CF0", Offset = "0x6264CF0", VA = "0x6265CF0", Slot = "20")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170002C3")]
		public override Type PropertyType
		{
			[Token(Token = "0x6000C9F")]
			[Address(RVA = "0x6265D70", Offset = "0x6264D70", VA = "0x6265D70", Slot = "21")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000C9B")]
		[Address(RVA = "0x6265C00", Offset = "0x6264C00", VA = "0x6265C00")]
		protected SimplePropertyDescriptor(Type componentType, string name, Type propertyType)
		{
		}

		[Token(Token = "0x6000C9C")]
		[Address(RVA = "0x6265C90", Offset = "0x6264C90", VA = "0x6265C90")]
		protected SimplePropertyDescriptor(Type componentType, string name, Type propertyType, Attribute[] attributes)
		{
		}

		[Token(Token = "0x6000CA0")]
		[Address(RVA = "0x6265D80", Offset = "0x6264D80", VA = "0x6265D80", Slot = "23")]
		public override bool CanResetValue(object component)
		{
			return default(bool);
		}

		[Token(Token = "0x6000CA1")]
		[Address(RVA = "0x6265EC0", Offset = "0x6264EC0", VA = "0x6265EC0", Slot = "29")]
		public override void ResetValue(object component)
		{
		}

		[Token(Token = "0x6000CA2")]
		[Address(RVA = "0x6265FE0", Offset = "0x6264FE0", VA = "0x6265FE0", Slot = "31")]
		public override bool ShouldSerializeValue(object component)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x20001D7")]
	public class StandardValuesCollection : ICollection, IEnumerable
	{
		[Token(Token = "0x4000705")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private ICollection values;

		[Token(Token = "0x4000706")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private Array valueArray;

		[Token(Token = "0x170002C4")]
		public int Count
		{
			[Token(Token = "0x6000CA4")]
			[Address(RVA = "0x62660A0", Offset = "0x62650A0", VA = "0x62660A0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170002C5")]
		public object this[int index]
		{
			[Token(Token = "0x6000CA5")]
			[Address(RVA = "0x6266150", Offset = "0x6265150", VA = "0x6266150")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170002C6")]
		private int System_002ECollections_002EICollection_002ECount
		{
			[Token(Token = "0x6000CA8")]
			[Address(RVA = "0x62664A0", Offset = "0x62654A0", VA = "0x62664A0", Slot = "5")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170002C7")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x6000CA9")]
			[Address(RVA = "0x62664B0", Offset = "0x62654B0", VA = "0x62664B0", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170002C8")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x6000CAA")]
			[Address(RVA = "0x62664C0", Offset = "0x62654C0", VA = "0x62664C0", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000CA3")]
		[Address(RVA = "0x6265FF0", Offset = "0x6264FF0", VA = "0x6265FF0")]
		public StandardValuesCollection(ICollection values)
		{
		}

		[Token(Token = "0x6000CA6")]
		[Address(RVA = "0x6266360", Offset = "0x6265360", VA = "0x6266360")]
		public void CopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6000CA7")]
		[Address(RVA = "0x6266410", Offset = "0x6265410", VA = "0x6266410")]
		public IEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000CAB")]
		[Address(RVA = "0x62664D0", Offset = "0x62654D0", VA = "0x62664D0", Slot = "4")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6000CAC")]
		[Address(RVA = "0x6266580", Offset = "0x6265580", VA = "0x6266580", Slot = "8")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000701")]
	private const string s_UseCompatibleTypeConverterBehavior = "UseCompatibleTypeConverterBehavior";

	[Token(Token = "0x4000702")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static bool useCompatibleTypeConversion;

	[Token(Token = "0x170002C0")]
	private static bool UseCompatibleTypeConversion
	{
		[Token(Token = "0x6000C73")]
		[Address(RVA = "0x6264860", Offset = "0x6263860", VA = "0x6264860")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000C74")]
	[Address(RVA = "0x62648A0", Offset = "0x62638A0", VA = "0x62648A0")]
	public bool CanConvertFrom(Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C75")]
	[Address(RVA = "0x62648C0", Offset = "0x62638C0", VA = "0x62648C0", Slot = "4")]
	public virtual bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C76")]
	[Address(RVA = "0x6264930", Offset = "0x6263930", VA = "0x6264930")]
	public bool CanConvertTo(Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C77")]
	[Address(RVA = "0x6264950", Offset = "0x6263950", VA = "0x6264950", Slot = "5")]
	public virtual bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x62649A0", Offset = "0x62639A0", VA = "0x62649A0")]
	public object ConvertFrom(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x6264A10", Offset = "0x6263A10", VA = "0x6264A10", Slot = "6")]
	public virtual object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000C7A")]
	[Address(RVA = "0x6264F10", Offset = "0x6263F10", VA = "0x6264F10")]
	public object ConvertFromInvariantString(string text)
	{
		return null;
	}

	[Token(Token = "0x6000C7B")]
	[Address(RVA = "0x6264FA0", Offset = "0x6263FA0", VA = "0x6264FA0")]
	public object ConvertFromInvariantString(ITypeDescriptorContext context, string text)
	{
		return null;
	}

	[Token(Token = "0x6000C7C")]
	[Address(RVA = "0x6265010", Offset = "0x6264010", VA = "0x6265010")]
	public object ConvertFromString(string text)
	{
		return null;
	}

	[Token(Token = "0x6000C7D")]
	[Address(RVA = "0x6265030", Offset = "0x6264030", VA = "0x6265030")]
	public object ConvertFromString(ITypeDescriptorContext context, string text)
	{
		return null;
	}

	[Token(Token = "0x6000C7E")]
	[Address(RVA = "0x6264F80", Offset = "0x6263F80", VA = "0x6264F80")]
	public object ConvertFromString(ITypeDescriptorContext context, CultureInfo culture, string text)
	{
		return null;
	}

	[Token(Token = "0x6000C7F")]
	[Address(RVA = "0x62650A0", Offset = "0x62640A0", VA = "0x62650A0")]
	public object ConvertTo(object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000C80")]
	[Address(RVA = "0x62650C0", Offset = "0x62640C0", VA = "0x62650C0", Slot = "7")]
	public virtual object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000C81")]
	[Address(RVA = "0x6265450", Offset = "0x6264450", VA = "0x6265450")]
	public string ConvertToInvariantString(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C82")]
	[Address(RVA = "0x62655A0", Offset = "0x62645A0", VA = "0x62655A0")]
	public string ConvertToInvariantString(ITypeDescriptorContext context, object value)
	{
		return null;
	}

	[Token(Token = "0x6000C83")]
	[Address(RVA = "0x6265670", Offset = "0x6264670", VA = "0x6265670")]
	public string ConvertToString(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C84")]
	[Address(RVA = "0x6265730", Offset = "0x6264730", VA = "0x6265730")]
	public string ConvertToString(ITypeDescriptorContext context, object value)
	{
		return null;
	}

	[Token(Token = "0x6000C85")]
	[Address(RVA = "0x6265510", Offset = "0x6264510", VA = "0x6265510")]
	public string ConvertToString(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000C86")]
	[Address(RVA = "0x6265800", Offset = "0x6264800", VA = "0x6265800")]
	public object CreateInstance(IDictionary propertyValues)
	{
		return null;
	}

	[Token(Token = "0x6000C87")]
	[Address(RVA = "0x6265820", Offset = "0x6264820", VA = "0x6265820", Slot = "8")]
	public virtual object CreateInstance(ITypeDescriptorContext context, IDictionary propertyValues)
	{
		return null;
	}

	[Token(Token = "0x6000C88")]
	[Address(RVA = "0x6264DE0", Offset = "0x6263DE0", VA = "0x6264DE0")]
	protected Exception GetConvertFromException(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C89")]
	[Address(RVA = "0x62652E0", Offset = "0x62642E0", VA = "0x62652E0")]
	protected Exception GetConvertToException(object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000C8A")]
	[Address(RVA = "0x6265830", Offset = "0x6264830", VA = "0x6265830")]
	public bool GetCreateInstanceSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C8B")]
	[Address(RVA = "0x6265850", Offset = "0x6264850", VA = "0x6265850", Slot = "9")]
	public virtual bool GetCreateInstanceSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C8C")]
	[Address(RVA = "0x6265860", Offset = "0x6264860", VA = "0x6265860")]
	public PropertyDescriptorCollection GetProperties(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C8D")]
	[Address(RVA = "0x6265870", Offset = "0x6264870", VA = "0x6265870")]
	public PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value)
	{
		return null;
	}

	[Token(Token = "0x6000C8E")]
	[Address(RVA = "0x6265970", Offset = "0x6264970", VA = "0x6265970", Slot = "10")]
	public virtual PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000C8F")]
	[Address(RVA = "0x6265980", Offset = "0x6264980", VA = "0x6265980")]
	public bool GetPropertiesSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C90")]
	[Address(RVA = "0x62659A0", Offset = "0x62649A0", VA = "0x62659A0", Slot = "11")]
	public virtual bool GetPropertiesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C91")]
	[Address(RVA = "0x62659B0", Offset = "0x62649B0", VA = "0x62659B0")]
	public ICollection GetStandardValues()
	{
		return null;
	}

	[Token(Token = "0x6000C92")]
	[Address(RVA = "0x62659D0", Offset = "0x62649D0", VA = "0x62659D0", Slot = "12")]
	public virtual StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x6000C93")]
	[Address(RVA = "0x62659E0", Offset = "0x62649E0", VA = "0x62659E0")]
	public bool GetStandardValuesExclusive()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C94")]
	[Address(RVA = "0x6265A00", Offset = "0x6264A00", VA = "0x6265A00", Slot = "13")]
	public virtual bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C95")]
	[Address(RVA = "0x6265A10", Offset = "0x6264A10", VA = "0x6265A10")]
	public bool GetStandardValuesSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C96")]
	[Address(RVA = "0x6265A30", Offset = "0x6264A30", VA = "0x6265A30", Slot = "14")]
	public virtual bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C97")]
	[Address(RVA = "0x6265A40", Offset = "0x6264A40", VA = "0x6265A40")]
	public bool IsValid(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C98")]
	[Address(RVA = "0x6265A60", Offset = "0x6264A60", VA = "0x6265A60", Slot = "15")]
	public virtual bool IsValid(ITypeDescriptorContext context, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C99")]
	[Address(RVA = "0x6265BC0", Offset = "0x6264BC0", VA = "0x6265BC0")]
	protected PropertyDescriptorCollection SortProperties(PropertyDescriptorCollection props, string[] names)
	{
		return null;
	}

	[Token(Token = "0x6000C9A")]
	[Address(RVA = "0x6265BF0", Offset = "0x6264BF0", VA = "0x6265BF0")]
	public TypeConverter()
	{
	}
}
