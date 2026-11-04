// ==================== AoTTG2 cross-reference ====================
// Type: Characters.HumanStats
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/HumanStats.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/HumanStats.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000666")]
internal class HumanStats
{
	[Token(Token = "0x4001E29")]
	[FieldOffset(Offset = "0x10")]
	public int Speed;

	[Token(Token = "0x4001E2A")]
	[FieldOffset(Offset = "0x14")]
	public int Gas;

	[Token(Token = "0x4001E2B")]
	[FieldOffset(Offset = "0x18")]
	public int Ammunition;

	[Token(Token = "0x4001E2C")]
	[FieldOffset(Offset = "0x1C")]
	public int Acceleration;

	[Token(Token = "0x4001E2D")]
	[FieldOffset(Offset = "0x20")]
	public Dictionary<string, BasePerk> Perks;

	[Token(Token = "0x4001E2E")]
	[FieldOffset(Offset = "0x0")]
	public static int MaxPerkPoints;

	[Token(Token = "0x4001E2F")]
	[FieldOffset(Offset = "0x28")]
	public float CurrentGas;

	[Token(Token = "0x4001E30")]
	[FieldOffset(Offset = "0x2C")]
	public float MaxGas;

	[Token(Token = "0x4001E31")]
	[FieldOffset(Offset = "0x30")]
	public float GasUsage;

	[Token(Token = "0x4001E32")]
	[FieldOffset(Offset = "0x34")]
	public float HorseSpeed;

	[Token(Token = "0x4001E33")]
	[FieldOffset(Offset = "0x38")]
	public float RunSpeed;

	[Token(Token = "0x4001E34")]
	[FieldOffset(Offset = "0x40")]
	protected Human _human;

	[Token(Token = "0x4001E35")]
	[FieldOffset(Offset = "0x48")]
	public VerticalDashPerk VerticalDashPerk;

	[Token(Token = "0x4001E36")]
	[FieldOffset(Offset = "0x50")]
	public OmniDashPerk OmniDashPerk;

	[Token(Token = "0x6003F60")]
	[Address(RVA = "0x2160350", Offset = "0x215E950", VA = "0x182160350")]
	public HumanStats(Human human)
	{
	}

	[Token(Token = "0x6003F61")]
	[Address(RVA = "0x215F790", Offset = "0x215DD90", VA = "0x18215F790")]
	public void DisablePerks()
	{
	}

	[Token(Token = "0x6003F62")]
	[Address(RVA = "0x215F8D0", Offset = "0x215DED0", VA = "0x18215F8D0")]
	public int GetPerkPoints()
	{
		return default(int);
	}

	[Token(Token = "0x6003F63")]
	[Address(RVA = "0x215FE90", Offset = "0x215E490", VA = "0x18215FE90")]
	public void UpdateStats()
	{
	}

	[Token(Token = "0x6003F64")]
	[Address(RVA = "0x215FA50", Offset = "0x215E050", VA = "0x18215FA50")]
	public void ResetGas()
	{
	}

	[Token(Token = "0x6003F65")]
	[Address(RVA = "0x215FF60", Offset = "0x215E560", VA = "0x18215FF60")]
	public void UseDashGas()
	{
	}

	[Token(Token = "0x6003F66")]
	[Address(RVA = "0x215FF80", Offset = "0x215E580", VA = "0x18215FF80")]
	public void UseFrameGas()
	{
	}

	[Token(Token = "0x6003F67")]
	[Address(RVA = "0x215FFE0", Offset = "0x215E5E0", VA = "0x18215FFE0")]
	public void UseHookGas()
	{
	}

	[Token(Token = "0x6003F68")]
	[Address(RVA = "0x2160000", Offset = "0x215E600", VA = "0x182160000")]
	public void UseTSGas()
	{
	}

	[Token(Token = "0x6003F69")]
	[Address(RVA = "0x215FFC0", Offset = "0x215E5C0", VA = "0x18215FFC0")]
	private void UseGas(float amount)
	{
	}

	[Token(Token = "0x6003F6A")]
	[Address(RVA = "0x215F2C0", Offset = "0x215D8C0", VA = "0x18215F2C0")]
	public static HumanStats Deserialize(HumanStats stats, string str)
	{
		return null;
	}

	[Token(Token = "0x6003F6B")]
	[Address(RVA = "0x215FA70", Offset = "0x215E070", VA = "0x18215FA70")]
	public string Serialize()
	{
		return null;
	}

	[Token(Token = "0x6003F6C")]
	[Address(RVA = "0x21600F0", Offset = "0x215E6F0", VA = "0x1821600F0")]
	public bool Validate()
	{
		return default(bool);
	}
}
