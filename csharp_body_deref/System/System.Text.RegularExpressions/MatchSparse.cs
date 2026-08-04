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
		[Address(RVA = "0x4903D70", Offset = "0x4903D70", VA = "0x4903D70", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x4903CB0", Offset = "0x4903CB0", VA = "0x4903CB0")]
	internal MatchSparse(Regex regex, Hashtable caps, int capcount, string text, int begpos, int len, int startpos)
	{
	}
}
