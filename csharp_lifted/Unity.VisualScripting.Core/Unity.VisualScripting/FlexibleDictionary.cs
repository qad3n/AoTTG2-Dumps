// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FlexibleDictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000017")]
public class FlexibleDictionary<TKey, TValue> : Dictionary<TKey, TValue>
{
	[Token(Token = "0x1700001D")]
	public new TValue this[TKey key]
	{
		[Token(Token = "0x600008B")]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x600008C")]
		set
		{
		}
	}

	[Token(Token = "0x600008D")]
	public FlexibleDictionary()
	{
	}
}
