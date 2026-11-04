// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BinningConfig
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200003C")]
internal struct BinningConfig
{
	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x0")]
	public int viewCount;

	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x4")]
	public bool supportsCrossFade;

	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0x5")]
	public bool supportsMotionCheck;

	[Token(Token = "0x17000021")]
	public int visibilityConfigCount
	{
		[Token(Token = "0x600012B")]
		[Address(RVA = "0x2BBC870", Offset = "0x2BBAE70", VA = "0x182BBC870")]
		get
		{
			return default(int);
		}
	}
}
