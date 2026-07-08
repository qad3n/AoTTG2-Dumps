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
		[Address(RVA = "0x4EB9810", Offset = "0x4EB9810", VA = "0x4EB9810", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700043D")]
	public override int MetadataToken
	{
		[Token(Token = "0x6001FF6")]
		[Address(RVA = "0x4EB9840", Offset = "0x4EB9840", VA = "0x4EB9840", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700043E")]
	public override string Name
	{
		[Token(Token = "0x6001FF8")]
		[Address(RVA = "0x4EB9870", Offset = "0x4EB9870", VA = "0x4EB9870", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700043F")]
	public override Type DeclaringType
	{
		[Token(Token = "0x6001FF9")]
		[Address(RVA = "0x4EB9880", Offset = "0x4EB9880", VA = "0x4EB9880", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000440")]
	public override Type ReflectedType
	{
		[Token(Token = "0x6001FFA")]
		[Address(RVA = "0x4EB98B0", Offset = "0x4EB98B0", VA = "0x4EB98B0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000441")]
	public override Type FieldType
	{
		[Token(Token = "0x6001FFE")]
		[Address(RVA = "0x4EB9970", Offset = "0x4EB9970", VA = "0x4EB9970", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000442")]
	internal System.Reflection.RuntimeFieldInfo FieldInfo
	{
		[Token(Token = "0x6002003")]
		[Address(RVA = "0x4EB9A00", Offset = "0x4EB9A00", VA = "0x4EB9A00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000443")]
	public override RuntimeFieldHandle FieldHandle
	{
		[Token(Token = "0x6002004")]
		[Address(RVA = "0x4EB9A10", Offset = "0x4EB9A10", VA = "0x4EB9A10", Slot = "25")]
		get
		{
			return default(RuntimeFieldHandle);
		}
	}

	[Token(Token = "0x17000444")]
	public override FieldAttributes Attributes
	{
		[Token(Token = "0x6002005")]
		[Address(RVA = "0x4EB9A40", Offset = "0x4EB9A40", VA = "0x4EB9A40", Slot = "16")]
		get
		{
			return default(FieldAttributes);
		}
	}

	[Token(Token = "0x6001FF7")]
	[Address(RVA = "0x4EB07D0", Offset = "0x4EB07D0", VA = "0x4EB07D0")]
	internal SerializationFieldInfo(System.Reflection.RuntimeFieldInfo field, string namePrefix)
	{
	}

	[Token(Token = "0x6001FFB")]
	[Address(RVA = "0x4EB98E0", Offset = "0x4EB98E0", VA = "0x4EB98E0", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6001FFC")]
	[Address(RVA = "0x4EB9910", Offset = "0x4EB9910", VA = "0x4EB9910", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6001FFD")]
	[Address(RVA = "0x4EB9940", Offset = "0x4EB9940", VA = "0x4EB9940", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FFF")]
	[Address(RVA = "0x4EB99A0", Offset = "0x4EB99A0", VA = "0x4EB99A0", Slot = "26")]
	public override object GetValue(object obj)
	{
		return null;
	}

	[Token(Token = "0x6002000")]
	[Address(RVA = "0x4EB1AB0", Offset = "0x4EB1AB0", VA = "0x4EB1AB0")]
	internal object InternalGetValue(object obj)
	{
		return null;
	}

	[Token(Token = "0x6002001")]
	[Address(RVA = "0x4EB99D0", Offset = "0x4EB99D0", VA = "0x4EB99D0", Slot = "28")]
	public override void SetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, CultureInfo culture)
	{
	}

	[Token(Token = "0x6002002")]
	[Address(RVA = "0x4EB12F0", Offset = "0x4EB12F0", VA = "0x4EB12F0")]
	internal void InternalSetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, CultureInfo culture)
	{
	}
}
