using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001D3")]
public interface IVolume
{
	[Token(Token = "0x1700018C")]
	bool isGlobal
	{
		[Token(Token = "0x6000D48")]
		get;
		[Token(Token = "0x6000D49")]
		set;
	}

	[Token(Token = "0x1700018D")]
	List<Collider> colliders
	{
		[Token(Token = "0x6000D4A")]
		get;
	}
}
