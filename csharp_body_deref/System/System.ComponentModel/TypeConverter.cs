using System.Collections;
using System.Globalization;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000309")]
[ComVisible(true)]
public class TypeConverter
{
	[Token(Token = "0x200030A")]
	protected abstract class SimplePropertyDescriptor : PropertyDescriptor
	{
		[Token(Token = "0x4000E9B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		private Type componentType;

		[Token(Token = "0x4000E9C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
		private Type propertyType;

		[Token(Token = "0x17000481")]
		public override Type ComponentType
		{
			[Token(Token = "0x6001415")]
			[Address(RVA = "0x45A2E20", Offset = "0x45A2E20", VA = "0x45A2E20", Slot = "17")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000482")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001416")]
			[Address(RVA = "0x45A2E30", Offset = "0x45A2E30", VA = "0x45A2E30", Slot = "20")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000483")]
		public override Type PropertyType
		{
			[Token(Token = "0x6001417")]
			[Address(RVA = "0x45A2EB0", Offset = "0x45A2EB0", VA = "0x45A2EB0", Slot = "21")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001413")]
		[Address(RVA = "0x45A2D40", Offset = "0x45A2D40", VA = "0x45A2D40")]
		protected SimplePropertyDescriptor(Type componentType, string name, Type propertyType)
		{
		}

		[Token(Token = "0x6001414")]
		[Address(RVA = "0x45A2DD0", Offset = "0x45A2DD0", VA = "0x45A2DD0")]
		protected SimplePropertyDescriptor(Type componentType, string name, Type propertyType, Attribute[] attributes)
		{
		}

		[Token(Token = "0x6001418")]
		[Address(RVA = "0x45A2EC0", Offset = "0x45A2EC0", VA = "0x45A2EC0", Slot = "23")]
		public override bool CanResetValue(object component)
		{
			return default(bool);
		}

		[Token(Token = "0x6001419")]
		[Address(RVA = "0x45A3000", Offset = "0x45A3000", VA = "0x45A3000", Slot = "29")]
		public override void ResetValue(object component)
		{
		}

		[Token(Token = "0x600141A")]
		[Address(RVA = "0x45A3120", Offset = "0x45A3120", VA = "0x45A3120", Slot = "31")]
		public override bool ShouldSerializeValue(object component)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200030B")]
	public class StandardValuesCollection : ICollection, IEnumerable
	{
		[Token(Token = "0x4000E9D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private ICollection values;

		[Token(Token = "0x4000E9E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private Array valueArray;

		[Token(Token = "0x17000484")]
		public int Count
		{
			[Token(Token = "0x600141C")]
			[Address(RVA = "0x45A31E0", Offset = "0x45A31E0", VA = "0x45A31E0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000485")]
		public object this[int index]
		{
			[Token(Token = "0x600141D")]
			[Address(RVA = "0x45A3290", Offset = "0x45A3290", VA = "0x45A3290")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000486")]
		private int System_002ECollections_002EICollection_002ECount
		{
			[Token(Token = "0x6001420")]
			[Address(RVA = "0x45A35E0", Offset = "0x45A35E0", VA = "0x45A35E0", Slot = "5")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000487")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x6001421")]
			[Address(RVA = "0x45A35F0", Offset = "0x45A35F0", VA = "0x45A35F0", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000488")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x6001422")]
			[Address(RVA = "0x45A3600", Offset = "0x45A3600", VA = "0x45A3600", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600141B")]
		[Address(RVA = "0x45A3130", Offset = "0x45A3130", VA = "0x45A3130")]
		public StandardValuesCollection(ICollection values)
		{
		}

		[Token(Token = "0x600141E")]
		[Address(RVA = "0x45A34A0", Offset = "0x45A34A0", VA = "0x45A34A0")]
		public void CopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x600141F")]
		[Address(RVA = "0x45A3550", Offset = "0x45A3550", VA = "0x45A3550")]
		public IEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6001423")]
		[Address(RVA = "0x45A3610", Offset = "0x45A3610", VA = "0x45A3610", Slot = "4")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6001424")]
		[Address(RVA = "0x45A36C0", Offset = "0x45A36C0", VA = "0x45A36C0", Slot = "8")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000E99")]
	private const string s_UseCompatibleTypeConverterBehavior = "UseCompatibleTypeConverterBehavior";

	[Token(Token = "0x4000E9A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static bool useCompatibleTypeConversion;

	[Token(Token = "0x17000480")]
	private static bool UseCompatibleTypeConversion
	{
		[Token(Token = "0x60013EB")]
		[Address(RVA = "0x45A1940", Offset = "0x45A1940", VA = "0x45A1940")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60013EC")]
	[Address(RVA = "0x45A1980", Offset = "0x45A1980", VA = "0x45A1980")]
	public bool CanConvertFrom(Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x60013ED")]
	[Address(RVA = "0x45A19A0", Offset = "0x45A19A0", VA = "0x45A19A0", Slot = "4")]
	public virtual bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x60013EE")]
	[Address(RVA = "0x45A1A10", Offset = "0x45A1A10", VA = "0x45A1A10")]
	public bool CanConvertTo(Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x60013EF")]
	[Address(RVA = "0x45A1A30", Offset = "0x45A1A30", VA = "0x45A1A30", Slot = "5")]
	public virtual bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x60013F0")]
	[Address(RVA = "0x45A1A80", Offset = "0x45A1A80", VA = "0x45A1A80")]
	public object ConvertFrom(object value)
	{
		return null;
	}

	[Token(Token = "0x60013F1")]
	[Address(RVA = "0x45A1AF0", Offset = "0x45A1AF0", VA = "0x45A1AF0", Slot = "6")]
	public virtual object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x60013F2")]
	[Address(RVA = "0x45A2020", Offset = "0x45A2020", VA = "0x45A2020")]
	public object ConvertFromInvariantString(string text)
	{
		return null;
	}

	[Token(Token = "0x60013F3")]
	[Address(RVA = "0x45A20B0", Offset = "0x45A20B0", VA = "0x45A20B0")]
	public object ConvertFromInvariantString(ITypeDescriptorContext context, string text)
	{
		return null;
	}

	[Token(Token = "0x60013F4")]
	[Address(RVA = "0x45A2120", Offset = "0x45A2120", VA = "0x45A2120")]
	public object ConvertFromString(string text)
	{
		return null;
	}

	[Token(Token = "0x60013F5")]
	[Address(RVA = "0x45A2140", Offset = "0x45A2140", VA = "0x45A2140")]
	public object ConvertFromString(ITypeDescriptorContext context, string text)
	{
		return null;
	}

	[Token(Token = "0x60013F6")]
	[Address(RVA = "0x45A2090", Offset = "0x45A2090", VA = "0x45A2090")]
	public object ConvertFromString(ITypeDescriptorContext context, CultureInfo culture, string text)
	{
		return null;
	}

	[Token(Token = "0x60013F7")]
	[Address(RVA = "0x45A21B0", Offset = "0x45A21B0", VA = "0x45A21B0")]
	public object ConvertTo(object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60013F8")]
	[Address(RVA = "0x45A21D0", Offset = "0x45A21D0", VA = "0x45A21D0", Slot = "7")]
	public virtual object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60013F9")]
	[Address(RVA = "0x45A2570", Offset = "0x45A2570", VA = "0x45A2570")]
	public string ConvertToInvariantString(object value)
	{
		return null;
	}

	[Token(Token = "0x60013FA")]
	[Address(RVA = "0x45A26C0", Offset = "0x45A26C0", VA = "0x45A26C0")]
	public string ConvertToInvariantString(ITypeDescriptorContext context, object value)
	{
		return null;
	}

	[Token(Token = "0x60013FB")]
	[Address(RVA = "0x45A2790", Offset = "0x45A2790", VA = "0x45A2790")]
	public string ConvertToString(object value)
	{
		return null;
	}

	[Token(Token = "0x60013FC")]
	[Address(RVA = "0x45A2850", Offset = "0x45A2850", VA = "0x45A2850")]
	public string ConvertToString(ITypeDescriptorContext context, object value)
	{
		return null;
	}

	[Token(Token = "0x60013FD")]
	[Address(RVA = "0x45A2630", Offset = "0x45A2630", VA = "0x45A2630")]
	public string ConvertToString(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x60013FE")]
	[Address(RVA = "0x45A2920", Offset = "0x45A2920", VA = "0x45A2920")]
	public object CreateInstance(IDictionary propertyValues)
	{
		return null;
	}

	[Token(Token = "0x60013FF")]
	[Address(RVA = "0x45A2940", Offset = "0x45A2940", VA = "0x45A2940", Slot = "8")]
	public virtual object CreateInstance(ITypeDescriptorContext context, IDictionary propertyValues)
	{
		return null;
	}

	[Token(Token = "0x6001400")]
	[Address(RVA = "0x45A1EE0", Offset = "0x45A1EE0", VA = "0x45A1EE0")]
	protected Exception GetConvertFromException(object value)
	{
		return null;
	}

	[Token(Token = "0x6001401")]
	[Address(RVA = "0x45A23F0", Offset = "0x45A23F0", VA = "0x45A23F0")]
	protected Exception GetConvertToException(object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001402")]
	[Address(RVA = "0x45A2950", Offset = "0x45A2950", VA = "0x45A2950")]
	public bool GetCreateInstanceSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x6001403")]
	[Address(RVA = "0x45A2970", Offset = "0x45A2970", VA = "0x45A2970", Slot = "9")]
	public virtual bool GetCreateInstanceSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6001404")]
	[Address(RVA = "0x45A2980", Offset = "0x45A2980", VA = "0x45A2980")]
	public PropertyDescriptorCollection GetProperties(object value)
	{
		return null;
	}

	[Token(Token = "0x6001405")]
	[Address(RVA = "0x45A2990", Offset = "0x45A2990", VA = "0x45A2990")]
	public PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value)
	{
		return null;
	}

	[Token(Token = "0x6001406")]
	[Address(RVA = "0x45A2A90", Offset = "0x45A2A90", VA = "0x45A2A90", Slot = "10")]
	public virtual PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6001407")]
	[Address(RVA = "0x45A2AA0", Offset = "0x45A2AA0", VA = "0x45A2AA0")]
	public bool GetPropertiesSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x6001408")]
	[Address(RVA = "0x45A2AC0", Offset = "0x45A2AC0", VA = "0x45A2AC0", Slot = "11")]
	public virtual bool GetPropertiesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6001409")]
	[Address(RVA = "0x45A2AD0", Offset = "0x45A2AD0", VA = "0x45A2AD0")]
	public ICollection GetStandardValues()
	{
		return null;
	}

	[Token(Token = "0x600140A")]
	[Address(RVA = "0x45A2AF0", Offset = "0x45A2AF0", VA = "0x45A2AF0", Slot = "12")]
	public virtual StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x600140B")]
	[Address(RVA = "0x45A2B00", Offset = "0x45A2B00", VA = "0x45A2B00")]
	public bool GetStandardValuesExclusive()
	{
		return default(bool);
	}

	[Token(Token = "0x600140C")]
	[Address(RVA = "0x45A2B20", Offset = "0x45A2B20", VA = "0x45A2B20", Slot = "13")]
	public virtual bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x600140D")]
	[Address(RVA = "0x45A2B30", Offset = "0x45A2B30", VA = "0x45A2B30")]
	public bool GetStandardValuesSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x600140E")]
	[Address(RVA = "0x45A2B50", Offset = "0x45A2B50", VA = "0x45A2B50", Slot = "14")]
	public virtual bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x600140F")]
	[Address(RVA = "0x45A2B60", Offset = "0x45A2B60", VA = "0x45A2B60")]
	public bool IsValid(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001410")]
	[Address(RVA = "0x45A2B80", Offset = "0x45A2B80", VA = "0x45A2B80", Slot = "15")]
	public virtual bool IsValid(ITypeDescriptorContext context, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001411")]
	[Address(RVA = "0x45A2D00", Offset = "0x45A2D00", VA = "0x45A2D00")]
	protected PropertyDescriptorCollection SortProperties(PropertyDescriptorCollection props, string[] names)
	{
		return null;
	}

	[Token(Token = "0x6001412")]
	[Address(RVA = "0x45A2D30", Offset = "0x45A2D30", VA = "0x45A2D30")]
	public TypeConverter()
	{
	}
}
