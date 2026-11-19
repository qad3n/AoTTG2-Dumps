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
		[Address(RVA = "0x69E9680", Offset = "0x69E8680", VA = "0x69E9680", Slot = "4")]
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
		[Address(RVA = "0x69E9690", Offset = "0x69E8690", VA = "0x69E9690", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001A")]
	public Type ValueType
	{
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x69E96B0", Offset = "0x69E86B0", VA = "0x69E96B0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x69E9560", Offset = "0x69E8560", VA = "0x69E9560")]
	public FieldMember(FieldInfo fieldInfo)
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x69E96E0", Offset = "0x69E86E0", VA = "0x69E96E0", Slot = "7")]
	public object GetValue(object obj)
	{
		return null;
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x69E9710", Offset = "0x69E8710", VA = "0x69E9710", Slot = "8")]
	public void SetValue(object obj, object value)
	{
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x69E9730", Offset = "0x69E8730", VA = "0x69E9730", Slot = "9")]
	public IEnumerable<Attribute> GetCustomAttributes()
	{
		return null;
	}
}
