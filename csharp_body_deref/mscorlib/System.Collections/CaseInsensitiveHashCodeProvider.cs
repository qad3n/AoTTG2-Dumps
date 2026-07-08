using System.Globalization;
using Il2CppDummyDll;

namespace System.Collections;

[Serializable]
[Token(Token = "0x2000609")]
[Obsolete("Please use StringComparer instead.")]
public class CaseInsensitiveHashCodeProvider : IHashCodeProvider
{
	[Token(Token = "0x4001A64")]
	[FieldOffset(Offset = "0x10")]
	private readonly CompareInfo _compareInfo;

	[Token(Token = "0x6002F05")]
	[Address(RVA = "0x4F99560", Offset = "0x4F99560", VA = "0x4F99560")]
	public CaseInsensitiveHashCodeProvider()
	{
	}

	[Token(Token = "0x6002F06")]
	[Address(RVA = "0x4F995E0", Offset = "0x4F995E0", VA = "0x4F995E0")]
	public CaseInsensitiveHashCodeProvider(CultureInfo culture)
	{
	}

	[Token(Token = "0x6002F07")]
	[Address(RVA = "0x4F99670", Offset = "0x4F99670", VA = "0x4F99670", Slot = "4")]
	public int GetHashCode(object obj)
	{
		return default(int);
	}
}
