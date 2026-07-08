using System;
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000010")]
internal readonly struct PropertyMember : IMemberInfo
{
	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x0")]
	internal readonly PropertyInfo m_PropertyInfo;

	[Token(Token = "0x1700000F")]
	public string Name
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x4B5EC70", Offset = "0x4B5EC70", VA = "0x4B5EC70", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000010")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x4B5ECA0", Offset = "0x4B5ECA0", VA = "0x4B5ECA0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000011")]
	public Type ValueType
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x4B5ECD0", Offset = "0x4B5ECD0", VA = "0x4B5ECD0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x4B5ED00", Offset = "0x4B5ED00", VA = "0x4B5ED00")]
	public PropertyMember(PropertyInfo propertyInfo)
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x4B5ED10", Offset = "0x4B5ED10", VA = "0x4B5ED10", Slot = "7")]
	public IEnumerable<Attribute> GetCustomAttributes()
	{
		return null;
	}
}
