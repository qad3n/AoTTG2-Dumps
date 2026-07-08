using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000DC")]
public class ProfiledSegmentCollection : KeyedCollection<string, ProfiledSegment>
{
	[Token(Token = "0x6000529")]
	[Address(RVA = "0x4995350", Offset = "0x4995350", VA = "0x4995350", Slot = "39")]
	protected override string GetKeyForItem(ProfiledSegment item)
	{
		return null;
	}

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x4995270", Offset = "0x4995270", VA = "0x4995270")]
	public ProfiledSegmentCollection()
	{
	}
}
