// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.FieldMember
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

[Token(Token = "0x200001E")]
internal readonly struct FieldMember : IMemberInfo
{
	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x0")]
	internal readonly FieldInfo m_FieldInfo;

	[Token(Token = "0x17000018")]
	public string Name
	{
		[Token(Token = "0x6000071")]
		[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000019")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x2FEAC90", Offset = "0x2FE9290", VA = "0x182FEAC90", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001A")]
	public Type ValueType
	{
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x2FEACB0", Offset = "0x2FE92B0", VA = "0x182FEACB0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x2FEAC60", Offset = "0x2FE9260", VA = "0x182FEAC60")]
	public FieldMember(FieldInfo fieldInfo)
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x2FEAC10", Offset = "0x2FE9210", VA = "0x182FEAC10", Slot = "7")]
	public object GetValue(object obj)
	{
		return null;
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x2FEAC40", Offset = "0x2FE9240", VA = "0x182FEAC40", Slot = "8")]
	public void SetValue(object obj, object value)
	{
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x2FEAC00", Offset = "0x2FE9200", VA = "0x182FEAC00", Slot = "9")]
	public IEnumerable<Attribute> GetCustomAttributes()
	{
		return null;
	}
}
