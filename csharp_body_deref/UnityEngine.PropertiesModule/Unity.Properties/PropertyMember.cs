// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.PropertyMember
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4E865A0", Offset = "0x4E865A0", VA = "0x4E865A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000010")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x4E865D0", Offset = "0x4E865D0", VA = "0x4E865D0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000011")]
	public Type ValueType
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x4E86600", Offset = "0x4E86600", VA = "0x4E86600", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x4E86630", Offset = "0x4E86630", VA = "0x4E86630")]
	public PropertyMember(PropertyInfo propertyInfo)
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x4E86640", Offset = "0x4E86640", VA = "0x4E86640", Slot = "7")]
	public IEnumerable<Attribute> GetCustomAttributes()
	{
		return null;
	}
}
