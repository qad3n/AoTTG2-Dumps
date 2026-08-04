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

[Token(Token = "0x200050C")]
internal class HumanStats
{
	[Token(Token = "0x400179D")]
	[FieldOffset(Offset = "0x10")]
	public int Speed;

	[Token(Token = "0x400179E")]
	[FieldOffset(Offset = "0x14")]
	public int Gas;

	[Token(Token = "0x400179F")]
	[FieldOffset(Offset = "0x18")]
	public int Ammunition;

	[Token(Token = "0x40017A0")]
	[FieldOffset(Offset = "0x1C")]
	public int Acceleration;

	[Token(Token = "0x40017A1")]
	[FieldOffset(Offset = "0x20")]
	public Dictionary<string, BasePerk> Perks;

	[Token(Token = "0x40017A2")]
	[FieldOffset(Offset = "0x0")]
	public static int MaxPerkPoints;

	[Token(Token = "0x40017A3")]
	[FieldOffset(Offset = "0x28")]
	public float CurrentGas;

	[Token(Token = "0x40017A4")]
	[FieldOffset(Offset = "0x2C")]
	public float MaxGas;

	[Token(Token = "0x40017A5")]
	[FieldOffset(Offset = "0x30")]
	public float GasUsage;

	[Token(Token = "0x40017A6")]
	[FieldOffset(Offset = "0x34")]
	public float HorseSpeed;

	[Token(Token = "0x40017A7")]
	[FieldOffset(Offset = "0x38")]
	public float RunSpeed;

	[Token(Token = "0x40017A8")]
	[FieldOffset(Offset = "0x40")]
	protected Human _human;

	[Token(Token = "0x40017A9")]
	[FieldOffset(Offset = "0x48")]
	public VerticalDashPerk VerticalDashPerk;

	[Token(Token = "0x40017AA")]
	[FieldOffset(Offset = "0x50")]
	public OmniDashPerk OmniDashPerk;

	[Token(Token = "0x6003533")]
	[Address(RVA = "0x41E48A0", Offset = "0x41E48A0", VA = "0x41E48A0")]
	public HumanStats(Human human)
	{
	}

	[Token(Token = "0x6003534")]
	[Address(RVA = "0x41E50A0", Offset = "0x41E50A0", VA = "0x41E50A0")]
	public void DisablePerks()
	{
	}

	[Token(Token = "0x6003535")]
	[Address(RVA = "0x41E5210", Offset = "0x41E5210", VA = "0x41E5210")]
	public int GetPerkPoints()
	{
		return default(int);
	}

	[Token(Token = "0x6003536")]
	[Address(RVA = "0x41E4FE0", Offset = "0x41E4FE0", VA = "0x41E4FE0")]
	public void UpdateStats()
	{
	}

	[Token(Token = "0x6003537")]
	[Address(RVA = "0x41E4FC0", Offset = "0x41E4FC0", VA = "0x41E4FC0")]
	public void ResetGas()
	{
	}

	[Token(Token = "0x6003538")]
	[Address(RVA = "0x41E53D0", Offset = "0x41E53D0", VA = "0x41E53D0")]
	public void UseDashGas()
	{
	}

	[Token(Token = "0x6003539")]
	[Address(RVA = "0x41E5410", Offset = "0x41E5410", VA = "0x41E5410")]
	public void UseFrameGas()
	{
	}

	[Token(Token = "0x600353A")]
	[Address(RVA = "0x41E5450", Offset = "0x41E5450", VA = "0x41E5450")]
	public void UseHookGas()
	{
	}

	[Token(Token = "0x600353B")]
	[Address(RVA = "0x41E5470", Offset = "0x41E5470", VA = "0x41E5470")]
	public void UseTSGas()
	{
	}

	[Token(Token = "0x600353C")]
	[Address(RVA = "0x41E53F0", Offset = "0x41E53F0", VA = "0x41E53F0")]
	private void UseGas(float amount)
	{
	}

	[Token(Token = "0x600353D")]
	[Address(RVA = "0x41E5580", Offset = "0x41E5580", VA = "0x41E5580")]
	public static HumanStats Deserialize(HumanStats stats, string str)
	{
		return null;
	}

	[Token(Token = "0x600353E")]
	[Address(RVA = "0x41E5F20", Offset = "0x41E5F20", VA = "0x41E5F20")]
	public string Serialize()
	{
		return null;
	}

	[Token(Token = "0x600353F")]
	[Address(RVA = "0x41E5CD0", Offset = "0x41E5CD0", VA = "0x41E5CD0")]
	public bool Validate()
	{
		return default(bool);
	}
}
