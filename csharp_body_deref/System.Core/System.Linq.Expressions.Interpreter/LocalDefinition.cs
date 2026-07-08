using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001B8")]
internal readonly struct LocalDefinition
{
	[Token(Token = "0x170001FA")]
	public int Index
	{
		[Token(Token = "0x60009A5")]
		[Address(RVA = "0x41D2760", Offset = "0x41D2760", VA = "0x41D2760")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001FB")]
	public ParameterExpression Parameter
	{
		[Token(Token = "0x60009A6")]
		[Address(RVA = "0x41D2770", Offset = "0x41D2770", VA = "0x41D2770")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009A4")]
	[Address(RVA = "0x41D2740", Offset = "0x41D2740", VA = "0x41D2740")]
	internal LocalDefinition(int localIndex, ParameterExpression parameter)
	{
	}

	[Token(Token = "0x60009A7")]
	[Address(RVA = "0x41D2780", Offset = "0x41D2780", VA = "0x41D2780", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A8")]
	[Address(RVA = "0x41D27F0", Offset = "0x41D27F0", VA = "0x41D27F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
