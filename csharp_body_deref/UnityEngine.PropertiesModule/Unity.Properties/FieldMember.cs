// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.FieldMember
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
		[Address(RVA = "0x4E86510", Offset = "0x4E86510", VA = "0x4E86510", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000D")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x4E86540", Offset = "0x4E86540", VA = "0x4E86540", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000E")]
	public Type ValueType
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x4E86560", Offset = "0x4E86560", VA = "0x4E86560", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x4E86500", Offset = "0x4E86500", VA = "0x4E86500")]
	public FieldMember(FieldInfo fieldInfo)
	{
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x4E86590", Offset = "0x4E86590", VA = "0x4E86590", Slot = "7")]
	public IEnumerable<Attribute> GetCustomAttributes()
	{
		return null;
	}
}
