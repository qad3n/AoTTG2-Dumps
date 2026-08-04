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

[Token(Token = "0x20003EF")]
internal sealed class SerializationFieldInfo : FieldInfo
{
	[Token(Token = "0x400101B")]
	[FieldOffset(Offset = "0x10")]
	private System.Reflection.RuntimeFieldInfo m_field;

	[Token(Token = "0x400101C")]
	[FieldOffset(Offset = "0x18")]
	private string m_serializationName;

	[Token(Token = "0x1700043C")]
	public override Module Module
	{
		[Token(Token = "0x6001FF5")]
		[Address(RVA = "0x3B9F330", Offset = "0x3B9F330", VA = "0x3B9F330", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700043D")]
	public override int MetadataToken
	{
		[Token(Token = "0x6001FF6")]
		[Address(RVA = "0x3B9F360", Offset = "0x3B9F360", VA = "0x3B9F360", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700043E")]
	public override string Name
	{
		[Token(Token = "0x6001FF8")]
		[Address(RVA = "0x3B9F390", Offset = "0x3B9F390", VA = "0x3B9F390", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700043F")]
	public override Type DeclaringType
	{
		[Token(Token = "0x6001FF9")]
		[Address(RVA = "0x3B9F3A0", Offset = "0x3B9F3A0", VA = "0x3B9F3A0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000440")]
	public override Type ReflectedType
	{
		[Token(Token = "0x6001FFA")]
		[Address(RVA = "0x3B9F3D0", Offset = "0x3B9F3D0", VA = "0x3B9F3D0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000441")]
	public override Type FieldType
	{
		[Token(Token = "0x6001FFE")]
		[Address(RVA = "0x3B9F490", Offset = "0x3B9F490", VA = "0x3B9F490", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000442")]
	internal System.Reflection.RuntimeFieldInfo FieldInfo
	{
		[Token(Token = "0x6002003")]
		[Address(RVA = "0x3B9F520", Offset = "0x3B9F520", VA = "0x3B9F520")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000443")]
	public override RuntimeFieldHandle FieldHandle
	{
		[Token(Token = "0x6002004")]
		[Address(RVA = "0x3B9F530", Offset = "0x3B9F530", VA = "0x3B9F530", Slot = "25")]
		get
		{
			return default(RuntimeFieldHandle);
		}
	}

	[Token(Token = "0x17000444")]
	public override FieldAttributes Attributes
	{
		[Token(Token = "0x6002005")]
		[Address(RVA = "0x3B9F560", Offset = "0x3B9F560", VA = "0x3B9F560", Slot = "16")]
		get
		{
			return default(FieldAttributes);
		}
	}

	[Token(Token = "0x6001FF7")]
	[Address(RVA = "0x3B962F0", Offset = "0x3B962F0", VA = "0x3B962F0")]
	internal SerializationFieldInfo(System.Reflection.RuntimeFieldInfo field, string namePrefix)
	{
	}

	[Token(Token = "0x6001FFB")]
	[Address(RVA = "0x3B9F400", Offset = "0x3B9F400", VA = "0x3B9F400", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6001FFC")]
	[Address(RVA = "0x3B9F430", Offset = "0x3B9F430", VA = "0x3B9F430", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6001FFD")]
	[Address(RVA = "0x3B9F460", Offset = "0x3B9F460", VA = "0x3B9F460", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FFF")]
	[Address(RVA = "0x3B9F4C0", Offset = "0x3B9F4C0", VA = "0x3B9F4C0", Slot = "26")]
	public override object GetValue(object obj)
	{
		return null;
	}

	[Token(Token = "0x6002000")]
	[Address(RVA = "0x3B975D0", Offset = "0x3B975D0", VA = "0x3B975D0")]
	internal object InternalGetValue(object obj)
	{
		return null;
	}

	[Token(Token = "0x6002001")]
	[Address(RVA = "0x3B9F4F0", Offset = "0x3B9F4F0", VA = "0x3B9F4F0", Slot = "28")]
	public override void SetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, CultureInfo culture)
	{
	}

	[Token(Token = "0x6002002")]
	[Address(RVA = "0x3B96E10", Offset = "0x3B96E10", VA = "0x3B96E10")]
	internal void InternalSetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, CultureInfo culture)
	{
	}
}
