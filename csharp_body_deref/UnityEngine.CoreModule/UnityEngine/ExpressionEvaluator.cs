using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine;

[Token(Token = "0x200008F")]
[MovedFrom(true, "UnityEditor", "UnityEditor", null)]
public class ExpressionEvaluator
{
	[Token(Token = "0x2000090")]
	internal class Expression
	{
		[Token(Token = "0x400017D")]
		[FieldOffset(Offset = "0x10")]
		internal readonly string[] rpnTokens;

		[Token(Token = "0x400017E")]
		[FieldOffset(Offset = "0x18")]
		internal readonly bool hasVariables;

		[Token(Token = "0x600024C")]
		[Address(RVA = "0x4A93D40", Offset = "0x4A93D40", VA = "0x4A93D40")]
		internal Expression(string expression)
		{
		}

		[Token(Token = "0x600024D")]
		public bool Evaluate<T>(ref T value, int index = 0, int count = 1)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000091")]
	private struct PcgRandom
	{
		[Token(Token = "0x400017F")]
		[FieldOffset(Offset = "0x0")]
		private readonly ulong increment;

		[Token(Token = "0x4000180")]
		[FieldOffset(Offset = "0x8")]
		private ulong state;

		[Token(Token = "0x600024E")]
		[Address(RVA = "0x4A93CD0", Offset = "0x4A93CD0", VA = "0x4A93CD0")]
		public PcgRandom(ulong state = 0uL, ulong sequence = 0uL)
		{
		}

		[Token(Token = "0x600024F")]
		[Address(RVA = "0x4A93760", Offset = "0x4A93760", VA = "0x4A93760")]
		public uint GetUInt()
		{
			return default(uint);
		}

		[Token(Token = "0x6000250")]
		[Address(RVA = "0x4A93E10", Offset = "0x4A93E10", VA = "0x4A93E10")]
		private static uint RotateRight(uint v, int rot)
		{
			return default(uint);
		}

		[Token(Token = "0x6000251")]
		[Address(RVA = "0x4A93DF0", Offset = "0x4A93DF0", VA = "0x4A93DF0")]
		private static uint XshRr(ulong s)
		{
			return default(uint);
		}

		[Token(Token = "0x6000252")]
		[Address(RVA = "0x4A93DD0", Offset = "0x4A93DD0", VA = "0x4A93DD0")]
		private void Step()
		{
		}
	}

	[Token(Token = "0x2000092")]
	private enum Op
	{
		[Token(Token = "0x4000182")]
		Add,
		[Token(Token = "0x4000183")]
		Sub,
		[Token(Token = "0x4000184")]
		Mul,
		[Token(Token = "0x4000185")]
		Div,
		[Token(Token = "0x4000186")]
		Mod,
		[Token(Token = "0x4000187")]
		Neg,
		[Token(Token = "0x4000188")]
		Pow,
		[Token(Token = "0x4000189")]
		Sqrt,
		[Token(Token = "0x400018A")]
		Sin,
		[Token(Token = "0x400018B")]
		Cos,
		[Token(Token = "0x400018C")]
		Tan,
		[Token(Token = "0x400018D")]
		Floor,
		[Token(Token = "0x400018E")]
		Ceil,
		[Token(Token = "0x400018F")]
		Round,
		[Token(Token = "0x4000190")]
		Rand,
		[Token(Token = "0x4000191")]
		Linear
	}

	[Token(Token = "0x2000093")]
	private enum Associativity
	{
		[Token(Token = "0x4000193")]
		Left,
		[Token(Token = "0x4000194")]
		Right
	}

	[Token(Token = "0x2000094")]
	private class Operator
	{
		[Token(Token = "0x4000195")]
		[FieldOffset(Offset = "0x10")]
		public readonly Op op;

		[Token(Token = "0x4000196")]
		[FieldOffset(Offset = "0x14")]
		public readonly int precedence;

		[Token(Token = "0x4000197")]
		[FieldOffset(Offset = "0x18")]
		public readonly Associativity associativity;

		[Token(Token = "0x4000198")]
		[FieldOffset(Offset = "0x1C")]
		public readonly int inputs;

		[Token(Token = "0x6000253")]
		[Address(RVA = "0x4A93D00", Offset = "0x4A93D00", VA = "0x4A93D00")]
		public Operator(Op op, int precedence, int inputs, Associativity associativity)
		{
		}
	}

	[Token(Token = "0x400017B")]
	[FieldOffset(Offset = "0x0")]
	private static PcgRandom s_Random;

	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<string, Operator> s_Operators;

	[Token(Token = "0x600023C")]
	internal static bool Evaluate<T>(string expression, out T value, out Expression delayed)
	{
		return default(bool);
	}

	[Token(Token = "0x600023D")]
	private static bool EvaluateTokens<T>(string[] tokens, ref T value, int index, int count)
	{
		return default(bool);
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x4A91780", Offset = "0x4A91780", VA = "0x4A91780")]
	private static bool EvaluateDouble(string[] tokens, ref double value, int index, int count)
	{
		return default(bool);
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x4A924D0", Offset = "0x4A924D0", VA = "0x4A924D0")]
	private static string[] InfixToRPN(string[] tokens)
	{
		return null;
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x4A92CA0", Offset = "0x4A92CA0", VA = "0x4A92CA0")]
	private static bool NeedToPop(Stack<string> operatorStack, Operator newOperator)
	{
		return default(bool);
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x4A92E40", Offset = "0x4A92E40", VA = "0x4A92E40")]
	private static string[] ExpressionToTokens(string expression, out bool hasVariables)
	{
		return null;
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x4A91F50", Offset = "0x4A91F50", VA = "0x4A91F50")]
	private static bool IsCommand(string token)
	{
		return default(bool);
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x4A92480", Offset = "0x4A92480", VA = "0x4A92480")]
	private static bool IsVariable(string token)
	{
		return default(bool);
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x4A92B60", Offset = "0x4A92B60", VA = "0x4A92B60")]
	private static bool IsDelayedFunction(string token)
	{
		return default(bool);
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x4A91E10", Offset = "0x4A91E10", VA = "0x4A91E10")]
	private static bool IsOperator(string token)
	{
		return default(bool);
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x4A91EB0", Offset = "0x4A91EB0", VA = "0x4A91EB0")]
	private static Operator TokenToOperator(string token)
	{
		return null;
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x4A93360", Offset = "0x4A93360", VA = "0x4A93360")]
	private static string PreFormatExpression(string expression)
	{
		return null;
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x4A935A0", Offset = "0x4A935A0", VA = "0x4A935A0")]
	private static string[] FixUnaryOperators(string[] tokens)
	{
		return null;
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x4A92060", Offset = "0x4A92060", VA = "0x4A92060")]
	private static double EvaluateOp(double[] values, Op op, int index, int count)
	{
		return default(double);
	}

	[Token(Token = "0x600024A")]
	private static bool TryParse<T>(string expression, out T result)
	{
		return default(bool);
	}
}
