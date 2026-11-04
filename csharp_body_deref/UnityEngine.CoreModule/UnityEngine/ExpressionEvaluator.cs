// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ExpressionEvaluator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine;

[Token(Token = "0x20000AF")]
[MovedFrom(true, "UnityEditor", "UnityEditor", null)]
public class ExpressionEvaluator
{
	[Token(Token = "0x20000B0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal class Expression
	{
		[Token(Token = "0x40001D0")]
		[FieldOffset(Offset = "0x10")]
		internal readonly string[] rpnTokens;

		[Token(Token = "0x40001D1")]
		[FieldOffset(Offset = "0x18")]
		internal readonly bool hasVariables;

		[Token(Token = "0x6000358")]
		[Address(RVA = "0x2EC6CE0", Offset = "0x2EC52E0", VA = "0x182EC6CE0")]
		internal Expression(string expression)
		{
		}

		[Token(Token = "0x6000359")]
		public bool Evaluate<T>(ref T value, int index = 0, int count = 1)
		{
			return default(bool);
		}

		[Token(Token = "0x600035A")]
		[Address(RVA = "0x2EC6C00", Offset = "0x2EC5200", VA = "0x182EC6C00", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x600035B")]
		[Address(RVA = "0xC8D900", Offset = "0xC8BF00", VA = "0x180C8D900", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x600035C")]
		[Address(RVA = "0x2EC6CA0", Offset = "0x2EC52A0", VA = "0x182EC6CA0", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[Token(Token = "0x20000B1")]
	private struct PcgRandom
	{
		[Token(Token = "0x40001D2")]
		[FieldOffset(Offset = "0x0")]
		private readonly ulong increment;

		[Token(Token = "0x40001D3")]
		[FieldOffset(Offset = "0x8")]
		private ulong state;

		[Token(Token = "0x600035D")]
		[Address(RVA = "0x2ECDA60", Offset = "0x2ECC060", VA = "0x182ECDA60")]
		public PcgRandom(ulong state = 0uL, ulong sequence = 0uL)
		{
		}

		[Token(Token = "0x600035E")]
		[Address(RVA = "0x2ECD9A0", Offset = "0x2ECBFA0", VA = "0x182ECD9A0")]
		public uint GetUInt()
		{
			return default(uint);
		}

		[Token(Token = "0x600035F")]
		[Address(RVA = "0x2ECD9F0", Offset = "0x2ECBFF0", VA = "0x182ECD9F0")]
		private static uint RotateRight(uint v, int rot)
		{
			return default(uint);
		}

		[Token(Token = "0x6000360")]
		[Address(RVA = "0x2ECDA30", Offset = "0x2ECC030", VA = "0x182ECDA30")]
		private static uint XshRr(ulong s)
		{
			return default(uint);
		}

		[Token(Token = "0x6000361")]
		[Address(RVA = "0x2ECDA10", Offset = "0x2ECC010", VA = "0x182ECDA10")]
		private void Step()
		{
		}
	}

	[Token(Token = "0x20000B2")]
	private enum Op
	{
		[Token(Token = "0x40001D5")]
		Add,
		[Token(Token = "0x40001D6")]
		Sub,
		[Token(Token = "0x40001D7")]
		Mul,
		[Token(Token = "0x40001D8")]
		Div,
		[Token(Token = "0x40001D9")]
		Mod,
		[Token(Token = "0x40001DA")]
		Neg,
		[Token(Token = "0x40001DB")]
		Pow,
		[Token(Token = "0x40001DC")]
		Sqrt,
		[Token(Token = "0x40001DD")]
		Sin,
		[Token(Token = "0x40001DE")]
		Cos,
		[Token(Token = "0x40001DF")]
		Tan,
		[Token(Token = "0x40001E0")]
		Floor,
		[Token(Token = "0x40001E1")]
		Ceil,
		[Token(Token = "0x40001E2")]
		Round,
		[Token(Token = "0x40001E3")]
		Rand,
		[Token(Token = "0x40001E4")]
		Linear
	}

	[Token(Token = "0x20000B3")]
	private enum Associativity
	{
		[Token(Token = "0x40001E6")]
		Left,
		[Token(Token = "0x40001E7")]
		Right
	}

	[Token(Token = "0x20000B4")]
	private class Operator
	{
		[Token(Token = "0x40001E8")]
		[FieldOffset(Offset = "0x10")]
		public readonly Op op;

		[Token(Token = "0x40001E9")]
		[FieldOffset(Offset = "0x14")]
		public readonly int precedence;

		[Token(Token = "0x40001EA")]
		[FieldOffset(Offset = "0x18")]
		public readonly Associativity associativity;

		[Token(Token = "0x40001EB")]
		[FieldOffset(Offset = "0x1C")]
		public readonly int inputs;

		[Token(Token = "0x6000362")]
		[Address(RVA = "0x2ECD960", Offset = "0x2ECBF60", VA = "0x182ECD960")]
		public Operator(Op op, int precedence, int inputs, Associativity associativity)
		{
		}
	}

	[Token(Token = "0x40001CE")]
	[FieldOffset(Offset = "0x0")]
	private static PcgRandom s_Random;

	[Token(Token = "0x40001CF")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<string, Operator> s_Operators;

	[Token(Token = "0x6000348")]
	internal static bool Evaluate<T>(string expression, out T value, out Expression delayed)
	{
		return default(bool);
	}

	[Token(Token = "0x6000349")]
	private static bool EvaluateTokens<T>(string[] tokens, ref T value, int index, int count)
	{
		return default(bool);
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x2EC4D60", Offset = "0x2EC3360", VA = "0x182EC4D60")]
	private static bool EvaluateDouble(string[] tokens, ref double value, int index, int count)
	{
		return default(bool);
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x2EC5B50", Offset = "0x2EC4150", VA = "0x182EC5B50")]
	private static string[] InfixToRPN(string[] tokens)
	{
		return null;
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x2EC6290", Offset = "0x2EC4890", VA = "0x182EC6290")]
	private static bool NeedToPop(Stack<string> operatorStack, Operator newOperator)
	{
		return default(bool);
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x2EC55D0", Offset = "0x2EC3BD0", VA = "0x182EC55D0")]
	private static string[] ExpressionToTokens(string expression, out bool hasVariables)
	{
		return null;
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x2EC60B0", Offset = "0x2EC46B0", VA = "0x182EC60B0")]
	private static bool IsCommand(string token)
	{
		return default(bool);
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x2EC6230", Offset = "0x2EC4830", VA = "0x182EC6230")]
	private static bool IsVariable(string token)
	{
		return default(bool);
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x2EC6140", Offset = "0x2EC4740", VA = "0x182EC6140")]
	private static bool IsDelayedFunction(string token)
	{
		return default(bool);
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x2EC61B0", Offset = "0x2EC47B0", VA = "0x182EC61B0")]
	private static bool IsOperator(string token)
	{
		return default(bool);
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x2EC6530", Offset = "0x2EC4B30", VA = "0x182EC6530")]
	private static Operator TokenToOperator(string token)
	{
		return null;
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x2EC6370", Offset = "0x2EC4970", VA = "0x182EC6370")]
	private static string PreFormatExpression(string expression)
	{
		return null;
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x2EC59D0", Offset = "0x2EC3FD0", VA = "0x182EC59D0")]
	private static string[] FixUnaryOperators(string[] tokens)
	{
		return null;
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x2EC5250", Offset = "0x2EC3850", VA = "0x182EC5250")]
	private static double EvaluateOp(double[] values, Op op, int index, int count)
	{
		return default(double);
	}

	[Token(Token = "0x6000356")]
	private static bool TryParse<T>(string expression, out T result)
	{
		return default(bool);
	}
}
