// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.BuddyAllocation
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Mathematics;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000EC")]
internal struct BuddyAllocation
{
	[Token(Token = "0x400056A")]
	[FieldOffset(Offset = "0x0")]
	public int level;

	[Token(Token = "0x400056B")]
	[FieldOffset(Offset = "0x4")]
	public int index;

	[Token(Token = "0x170001C0")]
	public uint2 index2D
	{
		[Token(Token = "0x600066C")]
		[Address(RVA = "0x2C541F0", Offset = "0x2C527F0", VA = "0x182C541F0")]
		get
		{
			return default(uint2);
		}
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0xACCA30", Offset = "0xACB030", VA = "0x180ACCA30")]
	public BuddyAllocation(int level, int index)
	{
	}
}
