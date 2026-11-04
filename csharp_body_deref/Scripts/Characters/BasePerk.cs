// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BasePerk
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BasePerk.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Perks/BasePerk.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000669")]
internal class BasePerk
{
	[Token(Token = "0x4001E3A")]
	[FieldOffset(Offset = "0x10")]
	public bool Enabled;

	[Token(Token = "0x4001E3B")]
	[FieldOffset(Offset = "0x14")]
	public int CurrPoints;

	[Token(Token = "0x4001E3C")]
	[FieldOffset(Offset = "0x18")]
	protected Dictionary<string, int> Requirements;

	[Token(Token = "0x17000B03")]
	public virtual string Name
	{
		[Token(Token = "0x6003F74")]
		[Address(RVA = "0x21469C0", Offset = "0x2144FC0", VA = "0x1821469C0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B04")]
	public virtual int MaxPoints
	{
		[Token(Token = "0x6003F75")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003F76")]
	[Address(RVA = "0x2146930", Offset = "0x2144F30", VA = "0x182146930")]
	public BasePerk()
	{
	}

	[Token(Token = "0x6003F77")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	protected virtual void SetupRequirements()
	{
	}

	[Token(Token = "0x6003F78")]
	[Address(RVA = "0x21466F0", Offset = "0x2144CF0", VA = "0x1821466F0", Slot = "7")]
	public virtual bool HasRequirements(Dictionary<string, BasePerk> perks)
	{
		return default(bool);
	}

	[Token(Token = "0x6003F79")]
	[Address(RVA = "0x21468D0", Offset = "0x2144ED0", VA = "0x1821468D0", Slot = "8")]
	public virtual bool Validate(Dictionary<string, BasePerk> perks)
	{
		return default(bool);
	}
}
