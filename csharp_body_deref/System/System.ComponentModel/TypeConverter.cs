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
			[Address(RVA = "0x48C7F20", Offset = "0x48C7F20", VA = "0x48C7F20", Slot = "17")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000482")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001416")]
			[Address(RVA = "0x48C7F30", Offset = "0x48C7F30", VA = "0x48C7F30", Slot = "20")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000483")]
		public override Type PropertyType
		{
			[Token(Token = "0x6001417")]
			[Address(RVA = "0x48C7FB0", Offset = "0x48C7FB0", VA = "0x48C7FB0", Slot = "21")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001413")]
		[Address(RVA = "0x48C7E40", Offset = "0x48C7E40", VA = "0x48C7E40")]
		protected SimplePropertyDescriptor(Type componentType, string name, Type propertyType)
		{
		}

		[Token(Token = "0x6001414")]
		[Address(RVA = "0x48C7ED0", Offset = "0x48C7ED0", VA = "0x48C7ED0")]
		protected SimplePropertyDescriptor(Type componentType, string name, Type propertyType, Attribute[] attributes)
		{
		}

		[Token(Token = "0x6001418")]
		[Address(RVA = "0x48C7FC0", Offset = "0x48C7FC0", VA = "0x48C7FC0", Slot = "23")]
		public override bool CanResetValue(object component)
		{
			return default(bool);
		}

		[Token(Token = "0x6001419")]
		[Address(RVA = "0x48C8100", Offset = "0x48C8100", VA = "0x48C8100", Slot = "29")]
		public override void ResetValue(object component)
		{
		}

		[Token(Token = "0x600141A")]
		[Address(RVA = "0x48C8220", Offset = "0x48C8220", VA = "0x48C8220", Slot = "31")]
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
			[Address(RVA = "0x48C82E0", Offset = "0x48C82E0", VA = "0x48C82E0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000485")]
		public object this[int index]
		{
			[Token(Token = "0x600141D")]
			[Address(RVA = "0x48C8390", Offset = "0x48C8390", VA = "0x48C8390")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000486")]
		private int System_002ECollections_002EICollection_002ECount
		{
			[Token(Token = "0x6001420")]
			[Address(RVA = "0x48C86E0", Offset = "0x48C86E0", VA = "0x48C86E0", Slot = "5")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000487")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x6001421")]
			[Address(RVA = "0x48C86F0", Offset = "0x48C86F0", VA = "0x48C86F0", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000488")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x6001422")]
			[Address(RVA = "0x48C8700", Offset = "0x48C8700", VA = "0x48C8700", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600141B")]
		[Address(RVA = "0x48C8230", Offset = "0x48C8230", VA = "0x48C8230")]
		public StandardValuesCollection(ICollection values)
		{
		}

		[Token(Token = "0x600141E")]
		[Address(RVA = "0x48C85A0", Offset = "0x48C85A0", VA = "0x48C85A0")]
		public void CopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x600141F")]
		[Address(RVA = "0x48C8650", Offset = "0x48C8650", VA = "0x48C8650")]
		public IEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6001423")]
		[Address(RVA = "0x48C8710", Offset = "0x48C8710", VA = "0x48C8710", Slot = "4")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6001424")]
		[Address(RVA = "0x48C87C0", Offset = "0x48C87C0", VA = "0x48C87C0", Slot = "8")]
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
		[Address(RVA = "0x48C6A40", Offset = "0x48C6A40", VA = "0x48C6A40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60013EC")]
	[Address(RVA = "0x48C6A80", Offset = "0x48C6A80", VA = "0x48C6A80")]
	public bool CanConvertFrom(Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x60013ED")]
	[Address(RVA = "0x48C6AA0", Offset = "0x48C6AA0", VA = "0x48C6AA0", Slot = "4")]
	public virtual bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x60013EE")]
	[Address(RVA = "0x48C6B10", Offset = "0x48C6B10", VA = "0x48C6B10")]
	public bool CanConvertTo(Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x60013EF")]
	[Address(RVA = "0x48C6B30", Offset = "0x48C6B30", VA = "0x48C6B30", Slot = "5")]
	public virtual bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x60013F0")]
	[Address(RVA = "0x48C6B80", Offset = "0x48C6B80", VA = "0x48C6B80")]
	public object ConvertFrom(object value)
	{
		return null;
	}

	[Token(Token = "0x60013F1")]
	[Address(RVA = "0x48C6BF0", Offset = "0x48C6BF0", VA = "0x48C6BF0", Slot = "6")]
	public virtual object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x60013F2")]
	[Address(RVA = "0x48C7120", Offset = "0x48C7120", VA = "0x48C7120")]
	public object ConvertFromInvariantString(string text)
	{
		return null;
	}

	[Token(Token = "0x60013F3")]
	[Address(RVA = "0x48C71B0", Offset = "0x48C71B0", VA = "0x48C71B0")]
	public object ConvertFromInvariantString(ITypeDescriptorContext context, string text)
	{
		return null;
	}

	[Token(Token = "0x60013F4")]
	[Address(RVA = "0x48C7220", Offset = "0x48C7220", VA = "0x48C7220")]
	public object ConvertFromString(string text)
	{
		return null;
	}

	[Token(Token = "0x60013F5")]
	[Address(RVA = "0x48C7240", Offset = "0x48C7240", VA = "0x48C7240")]
	public object ConvertFromString(ITypeDescriptorContext context, string text)
	{
		return null;
	}

	[Token(Token = "0x60013F6")]
	[Address(RVA = "0x48C7190", Offset = "0x48C7190", VA = "0x48C7190")]
	public object ConvertFromString(ITypeDescriptorContext context, CultureInfo culture, string text)
	{
		return null;
	}

	[Token(Token = "0x60013F7")]
	[Address(RVA = "0x48C72B0", Offset = "0x48C72B0", VA = "0x48C72B0")]
	public object ConvertTo(object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60013F8")]
	[Address(RVA = "0x48C72D0", Offset = "0x48C72D0", VA = "0x48C72D0", Slot = "7")]
	public virtual object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60013F9")]
	[Address(RVA = "0x48C7670", Offset = "0x48C7670", VA = "0x48C7670")]
	public string ConvertToInvariantString(object value)
	{
		return null;
	}

	[Token(Token = "0x60013FA")]
	[Address(RVA = "0x48C77C0", Offset = "0x48C77C0", VA = "0x48C77C0")]
	public string ConvertToInvariantString(ITypeDescriptorContext context, object value)
	{
		return null;
	}

	[Token(Token = "0x60013FB")]
	[Address(RVA = "0x48C7890", Offset = "0x48C7890", VA = "0x48C7890")]
	public string ConvertToString(object value)
	{
		return null;
	}

	[Token(Token = "0x60013FC")]
	[Address(RVA = "0x48C7950", Offset = "0x48C7950", VA = "0x48C7950")]
	public string ConvertToString(ITypeDescriptorContext context, object value)
	{
		return null;
	}

	[Token(Token = "0x60013FD")]
	[Address(RVA = "0x48C7730", Offset = "0x48C7730", VA = "0x48C7730")]
	public string ConvertToString(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x60013FE")]
	[Address(RVA = "0x48C7A20", Offset = "0x48C7A20", VA = "0x48C7A20")]
	public object CreateInstance(IDictionary propertyValues)
	{
		return null;
	}

	[Token(Token = "0x60013FF")]
	[Address(RVA = "0x48C7A40", Offset = "0x48C7A40", VA = "0x48C7A40", Slot = "8")]
	public virtual object CreateInstance(ITypeDescriptorContext context, IDictionary propertyValues)
	{
		return null;
	}

	[Token(Token = "0x6001400")]
	[Address(RVA = "0x48C6FE0", Offset = "0x48C6FE0", VA = "0x48C6FE0")]
	protected Exception GetConvertFromException(object value)
	{
		return null;
	}

	[Token(Token = "0x6001401")]
	[Address(RVA = "0x48C74F0", Offset = "0x48C74F0", VA = "0x48C74F0")]
	protected Exception GetConvertToException(object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001402")]
	[Address(RVA = "0x48C7A50", Offset = "0x48C7A50", VA = "0x48C7A50")]
	public bool GetCreateInstanceSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x6001403")]
	[Address(RVA = "0x48C7A70", Offset = "0x48C7A70", VA = "0x48C7A70", Slot = "9")]
	public virtual bool GetCreateInstanceSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6001404")]
	[Address(RVA = "0x48C7A80", Offset = "0x48C7A80", VA = "0x48C7A80")]
	public PropertyDescriptorCollection GetProperties(object value)
	{
		return null;
	}

	[Token(Token = "0x6001405")]
	[Address(RVA = "0x48C7A90", Offset = "0x48C7A90", VA = "0x48C7A90")]
	public PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value)
	{
		return null;
	}

	[Token(Token = "0x6001406")]
	[Address(RVA = "0x48C7B90", Offset = "0x48C7B90", VA = "0x48C7B90", Slot = "10")]
	public virtual PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6001407")]
	[Address(RVA = "0x48C7BA0", Offset = "0x48C7BA0", VA = "0x48C7BA0")]
	public bool GetPropertiesSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x6001408")]
	[Address(RVA = "0x48C7BC0", Offset = "0x48C7BC0", VA = "0x48C7BC0", Slot = "11")]
	public virtual bool GetPropertiesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6001409")]
	[Address(RVA = "0x48C7BD0", Offset = "0x48C7BD0", VA = "0x48C7BD0")]
	public ICollection GetStandardValues()
	{
		return null;
	}

	[Token(Token = "0x600140A")]
	[Address(RVA = "0x48C7BF0", Offset = "0x48C7BF0", VA = "0x48C7BF0", Slot = "12")]
	public virtual StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x600140B")]
	[Address(RVA = "0x48C7C00", Offset = "0x48C7C00", VA = "0x48C7C00")]
	public bool GetStandardValuesExclusive()
	{
		return default(bool);
	}

	[Token(Token = "0x600140C")]
	[Address(RVA = "0x48C7C20", Offset = "0x48C7C20", VA = "0x48C7C20", Slot = "13")]
	public virtual bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x600140D")]
	[Address(RVA = "0x48C7C30", Offset = "0x48C7C30", VA = "0x48C7C30")]
	public bool GetStandardValuesSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x600140E")]
	[Address(RVA = "0x48C7C50", Offset = "0x48C7C50", VA = "0x48C7C50", Slot = "14")]
	public virtual bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x600140F")]
	[Address(RVA = "0x48C7C60", Offset = "0x48C7C60", VA = "0x48C7C60")]
	public bool IsValid(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001410")]
	[Address(RVA = "0x48C7C80", Offset = "0x48C7C80", VA = "0x48C7C80", Slot = "15")]
	public virtual bool IsValid(ITypeDescriptorContext context, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001411")]
	[Address(RVA = "0x48C7E00", Offset = "0x48C7E00", VA = "0x48C7E00")]
	protected PropertyDescriptorCollection SortProperties(PropertyDescriptorCollection props, string[] names)
	{
		return null;
	}

	[Token(Token = "0x6001412")]
	[Address(RVA = "0x48C7E30", Offset = "0x48C7E30", VA = "0x48C7E30")]
	public TypeConverter()
	{
	}
}
