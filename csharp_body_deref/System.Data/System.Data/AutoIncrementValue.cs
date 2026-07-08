using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000010")]
internal abstract class AutoIncrementValue
{
	[Token(Token = "0x17000038")]
	internal bool Auto
	{
		[Token(Token = "0x60000DB")]
		[Address(RVA = "0x4205040", Offset = "0x4205040", VA = "0x4205040")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000DC")]
		[Address(RVA = "0x4205050", Offset = "0x4205050", VA = "0x4205050")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000039")]
	internal abstract object Current
	{
		[Token(Token = "0x60000DD")]
		get;
		[Token(Token = "0x60000DE")]
		set;
	}

	[Token(Token = "0x1700003A")]
	internal abstract long Seed
	{
		[Token(Token = "0x60000DF")]
		get;
		[Token(Token = "0x60000E0")]
		set;
	}

	[Token(Token = "0x1700003B")]
	internal abstract long Step
	{
		[Token(Token = "0x60000E1")]
		get;
		[Token(Token = "0x60000E2")]
		set;
	}

	[Token(Token = "0x1700003C")]
	internal abstract Type DataType
	{
		[Token(Token = "0x60000E3")]
		get;
	}

	[Token(Token = "0x60000E4")]
	internal abstract void SetCurrent(object value, IFormatProvider formatProvider);

	[Token(Token = "0x60000E5")]
	internal abstract void SetCurrentAndIncrement(object value);

	[Token(Token = "0x60000E6")]
	internal abstract void MoveAfter();

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x4203970", Offset = "0x4203970", VA = "0x4203970")]
	internal AutoIncrementValue Clone()
	{
		return null;
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x4205060", Offset = "0x4205060", VA = "0x4205060")]
	protected AutoIncrementValue()
	{
	}
}
