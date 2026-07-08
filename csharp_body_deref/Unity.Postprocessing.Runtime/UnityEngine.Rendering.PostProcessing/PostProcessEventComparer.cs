using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000066")]
internal struct PostProcessEventComparer : IEqualityComparer<PostProcessEvent>
{
	[Token(Token = "0x6000122")]
	[Address(RVA = "0x482A3E0", Offset = "0x482A3E0", VA = "0x482A3E0", Slot = "4")]
	public bool Equals(PostProcessEvent x, PostProcessEvent y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x482A3F0", Offset = "0x482A3F0", VA = "0x482A3F0", Slot = "5")]
	public int GetHashCode(PostProcessEvent obj)
	{
		return default(int);
	}
}
