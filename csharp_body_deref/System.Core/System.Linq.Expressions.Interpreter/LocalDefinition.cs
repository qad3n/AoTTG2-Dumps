// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LocalDefinition
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001B8")]
internal readonly struct LocalDefinition
{
	[Token(Token = "0x170001FA")]
	public int Index
	{
		[Token(Token = "0x60009A4")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001FB")]
	public ParameterExpression Parameter
	{
		[Token(Token = "0x60009A5")]
		[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009A3")]
	[Address(RVA = "0x1028B90", Offset = "0x1027190", VA = "0x181028B90")]
	internal LocalDefinition(int localIndex, ParameterExpression parameter)
	{
	}

	[Token(Token = "0x60009A6")]
	[Address(RVA = "0x2473010", Offset = "0x2471610", VA = "0x182473010", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A7")]
	[Address(RVA = "0x24730A0", Offset = "0x24716A0", VA = "0x1824730A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
