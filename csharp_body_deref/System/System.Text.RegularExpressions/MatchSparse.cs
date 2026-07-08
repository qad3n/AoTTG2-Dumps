using System.Collections;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x20000A4")]
internal class MatchSparse : Match
{
	[Token(Token = "0x4000286")]
	[FieldOffset(Offset = "0x78")]
	internal new readonly Hashtable _caps;

	[Token(Token = "0x1700009E")]
	public override GroupCollection Groups
	{
		[Token(Token = "0x60002FA")]
		[Address(RVA = "0x45DEC70", Offset = "0x45DEC70", VA = "0x45DEC70", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x45DEBB0", Offset = "0x45DEBB0", VA = "0x45DEBB0")]
	internal MatchSparse(Regex regex, Hashtable caps, int capcount, string text, int begpos, int len, int startpos)
	{
	}
}
