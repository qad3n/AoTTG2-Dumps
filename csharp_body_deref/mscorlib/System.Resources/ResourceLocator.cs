using Il2CppDummyDll;

namespace System.Resources;

[Token(Token = "0x20004BC")]
internal struct ResourceLocator
{
	[Token(Token = "0x400138D")]
	[FieldOffset(Offset = "0x0")]
	internal object _value;

	[Token(Token = "0x400138E")]
	[FieldOffset(Offset = "0x8")]
	internal int _dataPos;

	[Token(Token = "0x17000499")]
	internal int DataPosition
	{
		[Token(Token = "0x6002399")]
		[Address(RVA = "0x4EE5910", Offset = "0x4EE5910", VA = "0x4EE5910")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700049A")]
	internal object Value
	{
		[Token(Token = "0x600239A")]
		[Address(RVA = "0x4EE5920", Offset = "0x4EE5920", VA = "0x4EE5920")]
		get
		{
			return null;
		}
		[Token(Token = "0x600239B")]
		[Address(RVA = "0x4EE5930", Offset = "0x4EE5930", VA = "0x4EE5930")]
		set
		{
		}
	}

	[Token(Token = "0x6002398")]
	[Address(RVA = "0x4EE5900", Offset = "0x4EE5900", VA = "0x4EE5900")]
	internal ResourceLocator(int dataPos, object value)
	{
	}

	[Token(Token = "0x600239C")]
	[Address(RVA = "0x4EE5940", Offset = "0x4EE5940", VA = "0x4EE5940")]
	internal static bool CanCache(System.Resources.ResourceTypeCode value)
	{
		return default(bool);
	}
}
