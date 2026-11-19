// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.ProfiledSegmentCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000DC")]
public class ProfiledSegmentCollection : KeyedCollection<string, ProfiledSegment>
{
	[Token(Token = "0x6000533")]
	[Address(RVA = "0x67A8A20", Offset = "0x67A7A20", VA = "0x67A8A20", Slot = "39")]
	protected override string GetKeyForItem(ProfiledSegment item)
	{
		return null;
	}

	[Token(Token = "0x6000534")]
	[Address(RVA = "0x67A8940", Offset = "0x67A7940", VA = "0x67A8940")]
	public ProfiledSegmentCollection()
	{
	}
}
