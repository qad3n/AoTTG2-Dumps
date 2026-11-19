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

		[Token(Token = "0x600035C")]
		[Address(RVA = "0x68C8DE0", Offset = "0x68C7DE0", VA = "0x68C8DE0")]
		internal Expression(string expression)
		{
		}

		[Token(Token = "0x600035D")]
		public bool Evaluate<T>(ref T value, int index = 0, int count = 1)
		{
			return default(bool);
		}

		[Token(Token = "0x600035E")]
		[Address(RVA = "0x68C8E70", Offset = "0x68C7E70", VA = "0x68C8E70", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x600035F")]
		[Address(RVA = "0x68C8F00", Offset = "0x68C7F00", VA = "0x68C8F00", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000360")]
		[Address(RVA = "0x68C8F30", Offset = "0x68C7F30", VA = "0x68C8F30", Slot = "3")]
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

		[Token(Token = "0x6000361")]
		[Address(RVA = "0x68C8D70", Offset = "0x68C7D70", VA = "0x68C8D70")]
		public PcgRandom(ulong state = 0uL, ulong sequence = 0uL)
		{
		}

		[Token(Token = "0x6000362")]
		[Address(RVA = "0x68C8800", Offset = "0x68C7800", VA = "0x68C8800")]
		public uint GetUInt()
		{
			return default(uint);
		}

		[Token(Token = "0x6000363")]
		[Address(RVA = "0x68C8FB0", Offset = "0x68C7FB0", VA = "0x68C8FB0")]
		private static uint RotateRight(uint v, int rot)
		{
			return default(uint);
		}

		[Token(Token = "0x6000364")]
		[Address(RVA = "0x68C8F90", Offset = "0x68C7F90", VA = "0x68C8F90")]
		private static uint XshRr(ulong s)
		{
			return default(uint);
		}

		[Token(Token = "0x6000365")]
		[Address(RVA = "0x68C8F70", Offset = "0x68C7F70", VA = "0x68C8F70")]
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

		[Token(Token = "0x6000366")]
		[Address(RVA = "0x68C8DA0", Offset = "0x68C7DA0", VA = "0x68C8DA0")]
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

	[Token(Token = "0x600034C")]
	internal static bool Evaluate<T>(string expression, out T value, out Expression delayed)
	{
		return default(bool);
	}

	[Token(Token = "0x600034D")]
	private static bool EvaluateTokens<T>(string[] tokens, ref T value, int index, int count)
	{
		return default(bool);
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x68C6770", Offset = "0x68C5770", VA = "0x68C6770")]
	private static bool EvaluateDouble(string[] tokens, ref double value, int index, int count)
	{
		return default(bool);
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x68C75D0", Offset = "0x68C65D0", VA = "0x68C75D0")]
	private static string[] InfixToRPN(string[] tokens)
	{
		return null;
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x68C7DA0", Offset = "0x68C6DA0", VA = "0x68C7DA0")]
	private static bool NeedToPop(Stack<string> operatorStack, Operator newOperator)
	{
		return default(bool);
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x68C7F40", Offset = "0x68C6F40", VA = "0x68C7F40")]
	private static string[] ExpressionToTokens(string expression, out bool hasVariables)
	{
		return null;
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x68C7050", Offset = "0x68C6050", VA = "0x68C7050")]
	private static bool IsCommand(string token)
	{
		return default(bool);
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x68C7580", Offset = "0x68C6580", VA = "0x68C7580")]
	private static bool IsVariable(string token)
	{
		return default(bool);
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x68C7C60", Offset = "0x68C6C60", VA = "0x68C7C60")]
	private static bool IsDelayedFunction(string token)
	{
		return default(bool);
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x68C6F10", Offset = "0x68C5F10", VA = "0x68C6F10")]
	private static bool IsOperator(string token)
	{
		return default(bool);
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x68C6FB0", Offset = "0x68C5FB0", VA = "0x68C6FB0")]
	private static Operator TokenToOperator(string token)
	{
		return null;
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x68C8450", Offset = "0x68C7450", VA = "0x68C8450")]
	private static string PreFormatExpression(string expression)
	{
		return null;
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x68C8670", Offset = "0x68C7670", VA = "0x68C8670")]
	private static string[] FixUnaryOperators(string[] tokens)
	{
		return null;
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x68C7160", Offset = "0x68C6160", VA = "0x68C7160")]
	private static double EvaluateOp(double[] values, Op op, int index, int count)
	{
		return default(double);
	}

	[Token(Token = "0x600035A")]
	private static bool TryParse<T>(string expression, out T result)
	{
		return default(bool);
	}
}
