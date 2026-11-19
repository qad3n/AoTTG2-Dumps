// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.MatchSparse
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x20000A5")]
internal class MatchSparse : Match
{
	[Token(Token = "0x4000289")]
	[FieldOffset(Offset = "0x78")]
	internal new readonly Hashtable _caps;

	[Token(Token = "0x170000A8")]
	public override GroupCollection Groups
	{
		[Token(Token = "0x6000320")]
		[Address(RVA = "0x61E1310", Offset = "0x61E0310", VA = "0x61E1310", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x61E1250", Offset = "0x61E0250", VA = "0x61E1250")]
	internal MatchSparse(Regex regex, Hashtable caps, int capcount, string text, int begpos, int len, int startpos)
	{
	}
}
