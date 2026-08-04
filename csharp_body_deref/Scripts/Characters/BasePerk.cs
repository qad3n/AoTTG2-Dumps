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

[Token(Token = "0x200050F")]
internal class BasePerk
{
	[Token(Token = "0x40017AE")]
	[FieldOffset(Offset = "0x10")]
	public bool Enabled;

	[Token(Token = "0x40017AF")]
	[FieldOffset(Offset = "0x14")]
	public int CurrPoints;

	[Token(Token = "0x40017B0")]
	[FieldOffset(Offset = "0x18")]
	protected Dictionary<string, int> Requirements;

	[Token(Token = "0x170009D3")]
	public virtual string Name
	{
		[Token(Token = "0x6003547")]
		[Address(RVA = "0x41E6B90", Offset = "0x41E6B90", VA = "0x41E6B90", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009D4")]
	public virtual int MaxPoints
	{
		[Token(Token = "0x6003548")]
		[Address(RVA = "0x41E6BC0", Offset = "0x41E6BC0", VA = "0x41E6BC0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003549")]
	[Address(RVA = "0x41E6B00", Offset = "0x41E6B00", VA = "0x41E6B00")]
	public BasePerk()
	{
	}

	[Token(Token = "0x600354A")]
	[Address(RVA = "0x41E6BD0", Offset = "0x41E6BD0", VA = "0x41E6BD0", Slot = "6")]
	protected virtual void SetupRequirements()
	{
	}

	[Token(Token = "0x600354B")]
	[Address(RVA = "0x41E6BE0", Offset = "0x41E6BE0", VA = "0x41E6BE0", Slot = "7")]
	public virtual bool HasRequirements(Dictionary<string, BasePerk> perks)
	{
		return default(bool);
	}

	[Token(Token = "0x600354C")]
	[Address(RVA = "0x41E6E70", Offset = "0x41E6E70", VA = "0x41E6E70", Slot = "8")]
	public virtual bool Validate(Dictionary<string, BasePerk> perks)
	{
		return default(bool);
	}
}
