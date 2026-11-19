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
		[Address(RVA = "0x69E9740", Offset = "0x69E8740", VA = "0x69E9740", Slot = "4")]
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
		[Address(RVA = "0x69E9750", Offset = "0x69E8750", VA = "0x69E9750", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001D")]
	public Type ValueType
	{
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x69E9780", Offset = "0x69E8780", VA = "0x69E9780", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x69E97B0", Offset = "0x69E87B0", VA = "0x69E97B0")]
	public PropertyMember(PropertyInfo propertyInfo)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x69E97E0", Offset = "0x69E87E0", VA = "0x69E97E0", Slot = "7")]
	public object GetValue(object obj)
	{
		return null;
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x69E9800", Offset = "0x69E8800", VA = "0x69E9800", Slot = "8")]
	public void SetValue(object obj, object value)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x69E9820", Offset = "0x69E8820", VA = "0x69E9820", Slot = "9")]
	public IEnumerable<Attribute> GetCustomAttributes()
	{
		return null;
	}
}
