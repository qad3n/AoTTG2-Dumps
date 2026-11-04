// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.PropertyMember
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x200001F")]
internal readonly struct PropertyMember : IMemberInfo
{
	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0x0")]
	internal readonly PropertyInfo m_PropertyInfo;

	[Token(Token = "0x1700001B")]
	public string Name
	{
		[Token(Token = "0x6000077")]
		[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001C")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000078")]
		[Address(RVA = "0x2FED6D0", Offset = "0x2FEBCD0", VA = "0x182FED6D0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001D")]
	public Type ValueType
	{
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x2FED700", Offset = "0x2FEBD00", VA = "0x182FED700", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x2FEAC60", Offset = "0x2FE9260", VA = "0x182FEAC60")]
	public PropertyMember(PropertyInfo propertyInfo)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x2FED690", Offset = "0x2FEBC90", VA = "0x182FED690", Slot = "7")]
	public object GetValue(object obj)
	{
		return null;
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x2FED6B0", Offset = "0x2FEBCB0", VA = "0x182FED6B0", Slot = "8")]
	public void SetValue(object obj, object value)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x2FEAC00", Offset = "0x2FE9200", VA = "0x182FEAC00", Slot = "9")]
	public IEnumerable<Attribute> GetCustomAttributes()
	{
		return null;
	}
}
