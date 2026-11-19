// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Virtualization.GisketchVirtualRange
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualRange.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Virtualization;

[Token(Token = "0x200000D")]
public readonly struct GisketchVirtualRange
{
	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x0")]
	public readonly int Start;

	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x4")]
	public readonly int End;

	[Token(Token = "0x1700000F")]
	public int Count
	{
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x5220810", Offset = "0x521F810", VA = "0x5220810")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000010")]
	public bool IsValid
	{
		[Token(Token = "0x6000074")]
		[Address(RVA = "0x521F540", Offset = "0x521E540", VA = "0x521F540")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x521E780", Offset = "0x521D780", VA = "0x521E780")]
	public GisketchVirtualRange(int start, int end)
	{
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x5220110", Offset = "0x521F110", VA = "0x5220110")]
	public bool Contains(int index)
	{
		return default(bool);
	}
}
