using System.Collections.Generic;
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004C7")]
internal class HumanStats
{
	[Token(Token = "0x400168C")]
	[FieldOffset(Offset = "0x10")]
	public int Speed;

	[Token(Token = "0x400168D")]
	[FieldOffset(Offset = "0x14")]
	public int Gas;

	[Token(Token = "0x400168E")]
	[FieldOffset(Offset = "0x18")]
	public int Ammunition;

	[Token(Token = "0x400168F")]
	[FieldOffset(Offset = "0x1C")]
	public int Acceleration;

	[Token(Token = "0x4001690")]
	[FieldOffset(Offset = "0x20")]
	public Dictionary<string, BasePerk> Perks;

	[Token(Token = "0x4001691")]
	[FieldOffset(Offset = "0x0")]
	public static int MaxPerkPoints;

	[Token(Token = "0x4001692")]
	[FieldOffset(Offset = "0x28")]
	public float CurrentGas;

	[Token(Token = "0x4001693")]
	[FieldOffset(Offset = "0x2C")]
	public float MaxGas;

	[Token(Token = "0x4001694")]
	[FieldOffset(Offset = "0x30")]
	public float GasUsage;

	[Token(Token = "0x4001695")]
	[FieldOffset(Offset = "0x34")]
	public float HorseSpeed;

	[Token(Token = "0x4001696")]
	[FieldOffset(Offset = "0x38")]
	public float RunSpeed;

	[Token(Token = "0x4001697")]
	[FieldOffset(Offset = "0x40")]
	protected Human _human;

	[Token(Token = "0x4001698")]
	[FieldOffset(Offset = "0x48")]
	public VerticalDashPerk VerticalDashPerk;

	[Token(Token = "0x4001699")]
	[FieldOffset(Offset = "0x50")]
	public OmniDashPerk OmniDashPerk;

	[Token(Token = "0x6003325")]
	[Address(RVA = "0x3ED7FE0", Offset = "0x3ED7FE0", VA = "0x3ED7FE0")]
	public HumanStats(Human human)
	{
	}

	[Token(Token = "0x6003326")]
	[Address(RVA = "0x3ED87E0", Offset = "0x3ED87E0", VA = "0x3ED87E0")]
	public void DisablePerks()
	{
	}

	[Token(Token = "0x6003327")]
	[Address(RVA = "0x3ED8950", Offset = "0x3ED8950", VA = "0x3ED8950")]
	public int GetPerkPoints()
	{
		return default(int);
	}

	[Token(Token = "0x6003328")]
	[Address(RVA = "0x3ED8720", Offset = "0x3ED8720", VA = "0x3ED8720")]
	public void UpdateStats()
	{
	}

	[Token(Token = "0x6003329")]
	[Address(RVA = "0x3ED8700", Offset = "0x3ED8700", VA = "0x3ED8700")]
	public void ResetGas()
	{
	}

	[Token(Token = "0x600332A")]
	[Address(RVA = "0x3ED8B10", Offset = "0x3ED8B10", VA = "0x3ED8B10")]
	public void UseDashGas()
	{
	}

	[Token(Token = "0x600332B")]
	[Address(RVA = "0x3ED8B50", Offset = "0x3ED8B50", VA = "0x3ED8B50")]
	public void UseFrameGas()
	{
	}

	[Token(Token = "0x600332C")]
	[Address(RVA = "0x3ED8B90", Offset = "0x3ED8B90", VA = "0x3ED8B90")]
	public void UseHookGas()
	{
	}

	[Token(Token = "0x600332D")]
	[Address(RVA = "0x3ED8BB0", Offset = "0x3ED8BB0", VA = "0x3ED8BB0")]
	public void UseTSGas()
	{
	}

	[Token(Token = "0x600332E")]
	[Address(RVA = "0x3ED8B30", Offset = "0x3ED8B30", VA = "0x3ED8B30")]
	private void UseGas(float amount)
	{
	}

	[Token(Token = "0x600332F")]
	[Address(RVA = "0x3ED8CC0", Offset = "0x3ED8CC0", VA = "0x3ED8CC0")]
	public static HumanStats Deserialize(HumanStats stats, string str)
	{
		return null;
	}

	[Token(Token = "0x6003330")]
	[Address(RVA = "0x3ED9660", Offset = "0x3ED9660", VA = "0x3ED9660")]
	public string Serialize()
	{
		return null;
	}

	[Token(Token = "0x6003331")]
	[Address(RVA = "0x3ED9410", Offset = "0x3ED9410", VA = "0x3ED9410")]
	public bool Validate()
	{
		return default(bool);
	}
}
