// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.CatchBlock
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000074")]
[DebuggerTypeProxy(typeof(Expression.CatchBlockProxy))]
public sealed class CatchBlock
{
	[Token(Token = "0x17000070")]
	public ParameterExpression Variable
	{
		[Token(Token = "0x600030A")]
		[Address(RVA = "0x5DC6160", Offset = "0x5DC5160", VA = "0x5DC6160")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000071")]
	public Type Test
	{
		[Token(Token = "0x600030B")]
		[Address(RVA = "0x5DC6170", Offset = "0x5DC5170", VA = "0x5DC6170")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000072")]
	public Expression Body
	{
		[Token(Token = "0x600030C")]
		[Address(RVA = "0x5DC6180", Offset = "0x5DC5180", VA = "0x5DC6180")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000073")]
	public Expression Filter
	{
		[Token(Token = "0x600030D")]
		[Address(RVA = "0x5DC6190", Offset = "0x5DC5190", VA = "0x5DC6190")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x5DC60F0", Offset = "0x5DC50F0", VA = "0x5DC60F0")]
	internal CatchBlock(Type test, ParameterExpression variable, Expression body, Expression filter)
	{
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x5DC61A0", Offset = "0x5DC51A0", VA = "0x5DC61A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x5DC6270", Offset = "0x5DC5270", VA = "0x5DC6270")]
	public CatchBlock Update(ParameterExpression variable, Expression filter, Expression body)
	{
		return null;
	}
}
