// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceNumInfo
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x65E4980", Offset = "0x65E3980", VA = "0x65E4980")]
	public void InitDefault()
	{
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x65E4990", Offset = "0x65E3990", VA = "0x65E4990")]
	public InstanceNumInfo(InstanceType type, int instanceNum)
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x65E49A0", Offset = "0x65E39A0", VA = "0x65E49A0")]
	public InstanceNumInfo(int meshRendererNum = 0, int speedTreeNum = 0)
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x65E49B0", Offset = "0x65E39B0", VA = "0x65E49B0")]
	public int GetInstanceNum(InstanceType type)
	{
		return default(int);
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x65E49C0", Offset = "0x65E39C0", VA = "0x65E49C0")]
	public int GetInstanceNumIncludingChildren(InstanceType type)
	{
		return default(int);
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x65E4BB0", Offset = "0x65E3BB0", VA = "0x65E4BB0")]
	public int GetTotalInstanceNum()
	{
		return default(int);
	}
}
