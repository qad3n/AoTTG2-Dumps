// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceNumInfo
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000A0")]
internal struct InstanceNumInfo
{
	[Token(Token = "0x400030A")]
	[FieldOffset(Offset = "0x0")]
	public unsafe fixed int InstanceNums[2];

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x18191E0", Offset = "0x18177E0", VA = "0x1818191E0")]
	public void InitDefault()
	{
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x2BF0790", Offset = "0x2BEED90", VA = "0x182BF0790")]
	public InstanceNumInfo(InstanceType type, int instanceNum)
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x2BF07A0", Offset = "0x2BEEDA0", VA = "0x182BF07A0")]
	public InstanceNumInfo(int meshRendererNum = 0, int speedTreeNum = 0)
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x867440", Offset = "0x865A40", VA = "0x180867440")]
	public int GetInstanceNum(InstanceType type)
	{
		return default(int);
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x2BF05C0", Offset = "0x2BEEBC0", VA = "0x182BF05C0")]
	public int GetInstanceNumIncludingChildren(InstanceType type)
	{
		return default(int);
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x2BF0780", Offset = "0x2BEED80", VA = "0x182BF0780")]
	public int GetTotalInstanceNum()
	{
		return default(int);
	}
}
