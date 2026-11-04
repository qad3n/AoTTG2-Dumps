// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Virtualization.GisketchVirtualRange
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualRange.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Virtualization;

[Token(Token = "0x200000D")]
public readonly struct GisketchVirtualRange
{
	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x0")]
	public readonly int Start;

	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x4")]
	public readonly int End;

	[Token(Token = "0x1700000F")]
	public int Count
	{
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x189E2F0", Offset = "0x189C8F0", VA = "0x18189E2F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000010")]
	public bool IsValid
	{
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x189E310", Offset = "0x189C910", VA = "0x18189E310")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0xACCA30", Offset = "0xACB030", VA = "0x180ACCA30")]
	public GisketchVirtualRange(int start, int end)
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x189E2E0", Offset = "0x189C8E0", VA = "0x18189E2E0")]
	public bool Contains(int index)
	{
		return default(bool);
	}
}
