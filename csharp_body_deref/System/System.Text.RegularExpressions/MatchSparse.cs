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

[Token(Token = "0x20000E4")]
internal class MatchSparse : Match
{
	[Token(Token = "0x4000358")]
	[FieldOffset(Offset = "0x78")]
	internal new readonly Hashtable _caps;

	[Token(Token = "0x170000D7")]
	public override GroupCollection Groups
	{
		[Token(Token = "0x60004D4")]
		[Address(RVA = "0x284D470", Offset = "0x284BA70", VA = "0x18284D470", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x284D3D0", Offset = "0x284B9D0", VA = "0x18284D3D0")]
	internal MatchSparse(Regex regex, Hashtable caps, int capcount, string text, int begpos, int len, int startpos)
	{
	}
}
