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

[Token(Token = "0x20006C5")]
internal class HumanStats
{
	[Token(Token = "0x4001FD7")]
	[FieldOffset(Offset = "0x10")]
	public int Speed;

	[Token(Token = "0x4001FD8")]
	[FieldOffset(Offset = "0x14")]
	public int Gas;

	[Token(Token = "0x4001FD9")]
	[FieldOffset(Offset = "0x18")]
	public int Ammunition;

	[Token(Token = "0x4001FDA")]
	[FieldOffset(Offset = "0x1C")]
	public int Acceleration;

	[Token(Token = "0x4001FDB")]
	[FieldOffset(Offset = "0x20")]
	public Dictionary<string, BasePerk> Perks;

	[Token(Token = "0x4001FDC")]
	[FieldOffset(Offset = "0x0")]
	public static int MaxPerkPoints;

	[Token(Token = "0x4001FDD")]
	[FieldOffset(Offset = "0x28")]
	public float CurrentGas;

	[Token(Token = "0x4001FDE")]
	[FieldOffset(Offset = "0x2C")]
	public float MaxGas;

	[Token(Token = "0x4001FDF")]
	[FieldOffset(Offset = "0x30")]
	public float GasUsage;

	[Token(Token = "0x4001FE0")]
	[FieldOffset(Offset = "0x34")]
	public float HorseSpeed;

	[Token(Token = "0x4001FE1")]
	[FieldOffset(Offset = "0x38")]
	public float RunSpeed;

	[Token(Token = "0x4001FE2")]
	[FieldOffset(Offset = "0x40")]
	protected Human _human;

	[Token(Token = "0x4001FE3")]
	[FieldOffset(Offset = "0x48")]
	public VerticalDashPerk VerticalDashPerk;

	[Token(Token = "0x4001FE4")]
	[FieldOffset(Offset = "0x50")]
	public OmniDashPerk OmniDashPerk;

	[Token(Token = "0x60041F8")]
	[Address(RVA = "0x5AF9090", Offset = "0x5AF8090", VA = "0x5AF9090")]
	public HumanStats(Human human)
	{
	}

	[Token(Token = "0x60041F9")]
	[Address(RVA = "0x5AF98A0", Offset = "0x5AF88A0", VA = "0x5AF98A0")]
	public void DisablePerks()
	{
	}

	[Token(Token = "0x60041FA")]
	[Address(RVA = "0x5AF9A10", Offset = "0x5AF8A10", VA = "0x5AF9A10")]
	public int GetPerkPoints()
	{
		return default(int);
	}

	[Token(Token = "0x60041FB")]
	[Address(RVA = "0x5AF97D0", Offset = "0x5AF87D0", VA = "0x5AF97D0")]
	public void UpdateStats()
	{
	}

	[Token(Token = "0x60041FC")]
	[Address(RVA = "0x5AF97B0", Offset = "0x5AF87B0", VA = "0x5AF97B0")]
	public void ResetGas()
	{
	}

	[Token(Token = "0x60041FD")]
	[Address(RVA = "0x5AF9BC0", Offset = "0x5AF8BC0", VA = "0x5AF9BC0")]
	public void UseDashGas()
	{
	}

	[Token(Token = "0x60041FE")]
	[Address(RVA = "0x5AF9C00", Offset = "0x5AF8C00", VA = "0x5AF9C00")]
	public void UseFrameGas()
	{
	}

	[Token(Token = "0x60041FF")]
	[Address(RVA = "0x5AEFBD0", Offset = "0x5AEEBD0", VA = "0x5AEFBD0")]
	public void UseHookGas()
	{
	}

	[Token(Token = "0x6004200")]
	[Address(RVA = "0x5AF9C40", Offset = "0x5AF8C40", VA = "0x5AF9C40")]
	public void UseTSGas()
	{
	}

	[Token(Token = "0x6004201")]
	[Address(RVA = "0x5AF9BE0", Offset = "0x5AF8BE0", VA = "0x5AF9BE0")]
	private void UseGas(float amount)
	{
	}

	[Token(Token = "0x6004202")]
	[Address(RVA = "0x5AF9D50", Offset = "0x5AF8D50", VA = "0x5AF9D50")]
	public static HumanStats Deserialize(HumanStats stats, string str)
	{
		return null;
	}

	[Token(Token = "0x6004203")]
	[Address(RVA = "0x5AFA4E0", Offset = "0x5AF94E0", VA = "0x5AFA4E0")]
	public string Serialize()
	{
		return null;
	}

	[Token(Token = "0x6004204")]
	[Address(RVA = "0x5AFA2D0", Offset = "0x5AF92D0", VA = "0x5AFA2D0")]
	public bool Validate()
	{
		return default(bool);
	}
}
