// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.AutoIncrementValue
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x45427A0", Offset = "0x45427A0", VA = "0x45427A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000DC")]
		[Address(RVA = "0x45427B0", Offset = "0x45427B0", VA = "0x45427B0")]
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
	[Address(RVA = "0x45410D0", Offset = "0x45410D0", VA = "0x45410D0")]
	internal AutoIncrementValue Clone()
	{
		return null;
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x45427C0", Offset = "0x45427C0", VA = "0x45427C0")]
	protected AutoIncrementValue()
	{
	}
}
