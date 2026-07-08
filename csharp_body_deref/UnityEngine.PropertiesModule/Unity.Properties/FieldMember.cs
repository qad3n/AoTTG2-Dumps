using System;
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x200000F")]
internal readonly struct FieldMember : IMemberInfo
{
	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x0")]
	internal readonly FieldInfo m_FieldInfo;

	[Token(Token = "0x1700000C")]
	public string Name
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x4B5EBE0", Offset = "0x4B5EBE0", VA = "0x4B5EBE0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000D")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x4B5EC10", Offset = "0x4B5EC10", VA = "0x4B5EC10", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000E")]
	public Type ValueType
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x4B5EC30", Offset = "0x4B5EC30", VA = "0x4B5EC30", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x4B5EBD0", Offset = "0x4B5EBD0", VA = "0x4B5EBD0")]
	public FieldMember(FieldInfo fieldInfo)
	{
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x4B5EC60", Offset = "0x4B5EC60", VA = "0x4B5EC60", Slot = "7")]
	public IEnumerable<Attribute> GetCustomAttributes()
	{
		return null;
	}
}
