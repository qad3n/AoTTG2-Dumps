using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003D0")]
public class FormatterConverter : IFormatterConverter
{
	[Token(Token = "0x6001F3B")]
	[Address(RVA = "0x4EAE430", Offset = "0x4EAE430", VA = "0x4EAE430", Slot = "4")]
	public object Convert(object value, Type type)
	{
		return null;
	}

	[Token(Token = "0x6001F3C")]
	[Address(RVA = "0x4EAE510", Offset = "0x4EAE510", VA = "0x4EAE510", Slot = "5")]
	public bool ToBoolean(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F3D")]
	[Address(RVA = "0x4EAE5A0", Offset = "0x4EAE5A0", VA = "0x4EAE5A0", Slot = "6")]
	public int ToInt32(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6001F3E")]
	[Address(RVA = "0x4EAE630", Offset = "0x4EAE630", VA = "0x4EAE630", Slot = "7")]
	public long ToInt64(object value)
	{
		return default(long);
	}

	[Token(Token = "0x6001F3F")]
	[Address(RVA = "0x4EAE6C0", Offset = "0x4EAE6C0", VA = "0x4EAE6C0", Slot = "8")]
	public float ToSingle(object value)
	{
		return default(float);
	}

	[Token(Token = "0x6001F40")]
	[Address(RVA = "0x4EAE750", Offset = "0x4EAE750", VA = "0x4EAE750", Slot = "9")]
	public string ToString(object value)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001F41")]
	[Address(RVA = "0x4EAE4C0", Offset = "0x4EAE4C0", VA = "0x4EAE4C0")]
	private static void ThrowValueNullException()
	{
	}

	[Token(Token = "0x6001F42")]
	[Address(RVA = "0x4EAE7E0", Offset = "0x4EAE7E0", VA = "0x4EAE7E0")]
	public FormatterConverter()
	{
	}
}
