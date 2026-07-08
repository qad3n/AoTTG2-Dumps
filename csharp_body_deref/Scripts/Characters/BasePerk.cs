using System.Collections.Generic;
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004CA")]
internal class BasePerk
{
	[Token(Token = "0x400169D")]
	[FieldOffset(Offset = "0x10")]
	public bool Enabled;

	[Token(Token = "0x400169E")]
	[FieldOffset(Offset = "0x14")]
	public int CurrPoints;

	[Token(Token = "0x400169F")]
	[FieldOffset(Offset = "0x18")]
	protected Dictionary<string, int> Requirements;

	[Token(Token = "0x17000969")]
	public virtual string Name
	{
		[Token(Token = "0x6003339")]
		[Address(RVA = "0x3EDA2D0", Offset = "0x3EDA2D0", VA = "0x3EDA2D0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700096A")]
	public virtual int MaxPoints
	{
		[Token(Token = "0x600333A")]
		[Address(RVA = "0x3EDA300", Offset = "0x3EDA300", VA = "0x3EDA300", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600333B")]
	[Address(RVA = "0x3EDA240", Offset = "0x3EDA240", VA = "0x3EDA240")]
	public BasePerk()
	{
	}

	[Token(Token = "0x600333C")]
	[Address(RVA = "0x3EDA310", Offset = "0x3EDA310", VA = "0x3EDA310", Slot = "6")]
	protected virtual void SetupRequirements()
	{
	}

	[Token(Token = "0x600333D")]
	[Address(RVA = "0x3EDA320", Offset = "0x3EDA320", VA = "0x3EDA320", Slot = "7")]
	public virtual bool HasRequirements(Dictionary<string, BasePerk> perks)
	{
		return default(bool);
	}

	[Token(Token = "0x600333E")]
	[Address(RVA = "0x3EDA5B0", Offset = "0x3EDA5B0", VA = "0x3EDA5B0", Slot = "8")]
	public virtual bool Validate(Dictionary<string, BasePerk> perks)
	{
		return default(bool);
	}
}
