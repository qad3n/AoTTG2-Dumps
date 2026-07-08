using System.Globalization;
using Il2CppDummyDll;

namespace System.Collections;

[Serializable]
[Token(Token = "0x2000608")]
public class CaseInsensitiveComparer : IComparer
{
	[Token(Token = "0x4001A63")]
	[FieldOffset(Offset = "0x10")]
	private CompareInfo _compareInfo;

	[Token(Token = "0x6002F02")]
	[Address(RVA = "0x4F99380", Offset = "0x4F99380", VA = "0x4F99380")]
	public CaseInsensitiveComparer()
	{
	}

	[Token(Token = "0x6002F03")]
	[Address(RVA = "0x4F99400", Offset = "0x4F99400", VA = "0x4F99400")]
	public CaseInsensitiveComparer(CultureInfo culture)
	{
	}

	[Token(Token = "0x6002F04")]
	[Address(RVA = "0x4F99490", Offset = "0x4F99490", VA = "0x4F99490", Slot = "4")]
	public int Compare(object a, object b)
	{
		return default(int);
	}
}
