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

[Token(Token = "0x20003F7")]
internal sealed class SerializationFieldInfo : FieldInfo
{
	[Token(Token = "0x4000F80")]
	[FieldOffset(Offset = "0x10")]
	private System.Reflection.RuntimeFieldInfo m_field;

	[Token(Token = "0x4000F81")]
	[FieldOffset(Offset = "0x18")]
	private string m_serializationName;

	[Token(Token = "0x1700043D")]
	public override Module Module
	{
		[Token(Token = "0x600203A")]
		[Address(RVA = "0x53A6800", Offset = "0x53A5800", VA = "0x53A6800", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700043E")]
	public override int MetadataToken
	{
		[Token(Token = "0x600203B")]
		[Address(RVA = "0x53A6830", Offset = "0x53A5830", VA = "0x53A6830", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700043F")]
	public override string Name
	{
		[Token(Token = "0x600203D")]
		[Address(RVA = "0x53A6860", Offset = "0x53A5860", VA = "0x53A6860", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000440")]
	public override Type DeclaringType
	{
		[Token(Token = "0x600203E")]
		[Address(RVA = "0x53A6870", Offset = "0x53A5870", VA = "0x53A6870", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000441")]
	public override Type ReflectedType
	{
		[Token(Token = "0x600203F")]
		[Address(RVA = "0x53A68A0", Offset = "0x53A58A0", VA = "0x53A68A0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000442")]
	public override Type FieldType
	{
		[Token(Token = "0x6002043")]
		[Address(RVA = "0x53A6960", Offset = "0x53A5960", VA = "0x53A6960", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000443")]
	internal System.Reflection.RuntimeFieldInfo FieldInfo
	{
		[Token(Token = "0x6002048")]
		[Address(RVA = "0x53A69F0", Offset = "0x53A59F0", VA = "0x53A69F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000444")]
	public override RuntimeFieldHandle FieldHandle
	{
		[Token(Token = "0x6002049")]
		[Address(RVA = "0x53A6A00", Offset = "0x53A5A00", VA = "0x53A6A00", Slot = "25")]
		get
		{
			return default(RuntimeFieldHandle);
		}
	}

	[Token(Token = "0x17000445")]
	public override FieldAttributes Attributes
	{
		[Token(Token = "0x600204A")]
		[Address(RVA = "0x53A6A30", Offset = "0x53A5A30", VA = "0x53A6A30", Slot = "16")]
		get
		{
			return default(FieldAttributes);
		}
	}

	[Token(Token = "0x600203C")]
	[Address(RVA = "0x539DB90", Offset = "0x539CB90", VA = "0x539DB90")]
	internal SerializationFieldInfo(System.Reflection.RuntimeFieldInfo field, string namePrefix)
	{
	}

	[Token(Token = "0x6002040")]
	[Address(RVA = "0x53A68D0", Offset = "0x53A58D0", VA = "0x53A68D0", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002041")]
	[Address(RVA = "0x53A6900", Offset = "0x53A5900", VA = "0x53A6900", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002042")]
	[Address(RVA = "0x53A6930", Offset = "0x53A5930", VA = "0x53A6930", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6002044")]
	[Address(RVA = "0x53A6990", Offset = "0x53A5990", VA = "0x53A6990", Slot = "26")]
	public override object GetValue(object obj)
	{
		return null;
	}

	[Token(Token = "0x6002045")]
	[Address(RVA = "0x539EE70", Offset = "0x539DE70", VA = "0x539EE70")]
	internal object InternalGetValue(object obj)
	{
		return null;
	}

	[Token(Token = "0x6002046")]
	[Address(RVA = "0x53A69C0", Offset = "0x53A59C0", VA = "0x53A69C0", Slot = "28")]
	public override void SetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, CultureInfo culture)
	{
	}

	[Token(Token = "0x6002047")]
	[Address(RVA = "0x539E6C0", Offset = "0x539D6C0", VA = "0x539E6C0")]
	internal void InternalSetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, CultureInfo culture)
	{
	}
}
