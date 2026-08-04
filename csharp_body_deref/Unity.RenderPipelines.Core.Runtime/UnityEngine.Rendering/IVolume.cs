// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IVolume
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
