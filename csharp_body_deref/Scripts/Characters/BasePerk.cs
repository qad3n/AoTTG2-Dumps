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

[Token(Token = "0x20006C8")]
internal class BasePerk
{
	[Token(Token = "0x4001FE8")]
	[FieldOffset(Offset = "0x10")]
	public bool Enabled;

	[Token(Token = "0x4001FE9")]
	[FieldOffset(Offset = "0x14")]
	public int CurrPoints;

	[Token(Token = "0x4001FEA")]
	[FieldOffset(Offset = "0x18")]
	protected Dictionary<string, int> Requirements;

	[Token(Token = "0x17000B4D")]
	public virtual string Name
	{
		[Token(Token = "0x600420C")]
		[Address(RVA = "0x5AFB0E0", Offset = "0x5AFA0E0", VA = "0x5AFB0E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B4E")]
	public virtual int MaxPoints
	{
		[Token(Token = "0x600420D")]
		[Address(RVA = "0x5AFB110", Offset = "0x5AFA110", VA = "0x5AFB110", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600420E")]
	[Address(RVA = "0x5AFB050", Offset = "0x5AFA050", VA = "0x5AFB050")]
	public BasePerk()
	{
	}

	[Token(Token = "0x600420F")]
	[Address(RVA = "0x5AFB120", Offset = "0x5AFA120", VA = "0x5AFB120", Slot = "6")]
	protected virtual void SetupRequirements()
	{
	}

	[Token(Token = "0x6004210")]
	[Address(RVA = "0x5AFB130", Offset = "0x5AFA130", VA = "0x5AFB130", Slot = "7")]
	public virtual bool HasRequirements(Dictionary<string, BasePerk> perks)
	{
		return default(bool);
	}

	[Token(Token = "0x6004211")]
	[Address(RVA = "0x5AFB370", Offset = "0x5AFA370", VA = "0x5AFB370", Slot = "8")]
	public virtual bool Validate(Dictionary<string, BasePerk> perks)
	{
		return default(bool);
	}
}
