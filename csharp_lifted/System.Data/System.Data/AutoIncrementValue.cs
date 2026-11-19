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

[Token(Token = "0x200000A")]
internal abstract class AutoIncrementValue
{
	[Token(Token = "0x1700002B")]
	internal bool Auto
	{
		[Token(Token = "0x600007E")]
		[Address(RVA = "0x5E6AEE0", Offset = "0x5E69EE0", VA = "0x5E6AEE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600007F")]
		[Address(RVA = "0x5E6AEF0", Offset = "0x5E69EF0", VA = "0x5E6AEF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002C")]
	internal abstract object Current
	{
		[Token(Token = "0x6000080")]
		get;
		[Token(Token = "0x6000081")]
		set;
	}

	[Token(Token = "0x1700002D")]
	internal abstract long Seed
	{
		[Token(Token = "0x6000082")]
		get;
		[Token(Token = "0x6000083")]
		set;
	}

	[Token(Token = "0x1700002E")]
	internal abstract long Step
	{
		[Token(Token = "0x6000084")]
		get;
		[Token(Token = "0x6000085")]
		set;
	}

	[Token(Token = "0x1700002F")]
	internal abstract Type DataType
	{
		[Token(Token = "0x6000086")]
		get;
	}

	[Token(Token = "0x6000087")]
	internal abstract void SetCurrent(object value, IFormatProvider formatProvider);

	[Token(Token = "0x6000088")]
	internal abstract void SetCurrentAndIncrement(object value);

	[Token(Token = "0x6000089")]
	internal abstract void MoveAfter();

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x5E69A10", Offset = "0x5E68A10", VA = "0x5E69A10")]
	internal AutoIncrementValue Clone()
	{
		return null;
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x5E6AF00", Offset = "0x5E69F00", VA = "0x5E6AF00")]
	protected AutoIncrementValue()
	{
	}
}
