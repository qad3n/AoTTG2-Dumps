// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.SerializationFieldInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x200041E")]
internal sealed class SerializationFieldInfo : FieldInfo
{
	[Token(Token = "0x4001020")]
	[FieldOffset(Offset = "0x10")]
	private System.Reflection.RuntimeFieldInfo m_field;

	[Token(Token = "0x4001021")]
	[FieldOffset(Offset = "0x18")]
	private string m_serializationName;

	[Token(Token = "0x1700043E")]
	public override Module Module
	{
		[Token(Token = "0x6002064")]
		[Address(RVA = "0x1A1F3F0", Offset = "0x1A1D9F0", VA = "0x181A1F3F0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700043F")]
	public override int MetadataToken
	{
		[Token(Token = "0x6002065")]
		[Address(RVA = "0x1A1F3C0", Offset = "0x1A1D9C0", VA = "0x181A1F3C0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000440")]
	public override string Name
	{
		[Token(Token = "0x6002067")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000441")]
	public override Type DeclaringType
	{
		[Token(Token = "0x6002068")]
		[Address(RVA = "0x1A1F330", Offset = "0x1A1D930", VA = "0x181A1F330", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000442")]
	public override Type ReflectedType
	{
		[Token(Token = "0x6002069")]
		[Address(RVA = "0x1A1F420", Offset = "0x1A1DA20", VA = "0x181A1F420", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000443")]
	public override Type FieldType
	{
		[Token(Token = "0x600206D")]
		[Address(RVA = "0x1A1F390", Offset = "0x1A1D990", VA = "0x181A1F390", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000444")]
	internal System.Reflection.RuntimeFieldInfo FieldInfo
	{
		[Token(Token = "0x6002072")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000445")]
	public override RuntimeFieldHandle FieldHandle
	{
		[Token(Token = "0x6002073")]
		[Address(RVA = "0x1A1F360", Offset = "0x1A1D960", VA = "0x181A1F360", Slot = "25")]
		get
		{
			return default(RuntimeFieldHandle);
		}
	}

	[Token(Token = "0x17000446")]
	public override FieldAttributes Attributes
	{
		[Token(Token = "0x6002074")]
		[Address(RVA = "0x1A1F300", Offset = "0x1A1D900", VA = "0x181A1F300", Slot = "16")]
		get
		{
			return default(FieldAttributes);
		}
	}

	[Token(Token = "0x6002066")]
	[Address(RVA = "0x1A1F250", Offset = "0x1A1D850", VA = "0x181A1F250")]
	internal SerializationFieldInfo(System.Reflection.RuntimeFieldInfo field, string namePrefix)
	{
	}

	[Token(Token = "0x600206A")]
	[Address(RVA = "0x1A1F030", Offset = "0x1A1D630", VA = "0x181A1F030", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x600206B")]
	[Address(RVA = "0x1A1F060", Offset = "0x1A1D660", VA = "0x181A1F060", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x600206C")]
	[Address(RVA = "0x1A1F1F0", Offset = "0x1A1D7F0", VA = "0x181A1F1F0", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x600206E")]
	[Address(RVA = "0x8F67D0", Offset = "0x8F4DD0", VA = "0x1808F67D0", Slot = "26")]
	public override object GetValue(object obj)
	{
		return null;
	}

	[Token(Token = "0x600206F")]
	[Address(RVA = "0x1A1F090", Offset = "0x1A1D690", VA = "0x181A1F090")]
	internal object InternalGetValue(object obj)
	{
		return null;
	}

	[Token(Token = "0x6002070")]
	[Address(RVA = "0x1A1F220", Offset = "0x1A1D820", VA = "0x181A1F220", Slot = "28")]
	public override void SetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, CultureInfo culture)
	{
	}

	[Token(Token = "0x6002071")]
	[Address(RVA = "0x1A1F130", Offset = "0x1A1D730", VA = "0x181A1F130")]
	internal void InternalSetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, CultureInfo culture)
	{
	}
}
