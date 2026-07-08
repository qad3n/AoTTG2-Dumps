using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Serializable]
[Token(Token = "0x2000106")]
[UnityEngine.Bindings.NativeHeader("Runtime/Utilities/Hash128.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Hashing/Hash128.bindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct Hash128 : IComparable, IComparable<Hash128>, IEquatable<Hash128>
{
	[Token(Token = "0x4000356")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal ulong u64_0;

	[Token(Token = "0x4000357")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal ulong u64_1;

	[Token(Token = "0x6000730")]
	[Address(RVA = "0x4ABB0A0", Offset = "0x4ABB0A0", VA = "0x4ABB0A0")]
	public Hash128(ulong u64_0, ulong u64_1)
	{
	}

	[Token(Token = "0x6000731")]
	[Address(RVA = "0x4ABB0B0", Offset = "0x4ABB0B0", VA = "0x4ABB0B0", Slot = "5")]
	public int CompareTo(Hash128 rhs)
	{
		return default(int);
	}

	[Token(Token = "0x6000732")]
	[Address(RVA = "0x4ABB140", Offset = "0x4ABB140", VA = "0x4ABB140", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000733")]
	[Address(RVA = "0x4ABB1E0", Offset = "0x4ABB1E0", VA = "0x4ABB1E0")]
	[UnityEngine.Bindings.FreeFunction("StringToHash128", IsThreadSafe = true)]
	public static Hash128 Parse(string hashString)
	{
		return default(Hash128);
	}

	[Token(Token = "0x6000734")]
	[Address(RVA = "0x4ABB190", Offset = "0x4ABB190", VA = "0x4ABB190")]
	[UnityEngine.Bindings.FreeFunction("Hash128ToString", IsThreadSafe = true)]
	private static string Hash128ToStringImpl(Hash128 hash)
	{
		return null;
	}

	[Token(Token = "0x6000735")]
	[Address(RVA = "0x4ABB2A0", Offset = "0x4ABB2A0", VA = "0x4ABB2A0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000736")]
	[Address(RVA = "0x4ABB320", Offset = "0x4ABB320", VA = "0x4ABB320", Slot = "6")]
	public bool Equals(Hash128 obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000737")]
	[Address(RVA = "0x4ABB330", Offset = "0x4ABB330", VA = "0x4ABB330", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000738")]
	[Address(RVA = "0x4ABB360", Offset = "0x4ABB360", VA = "0x4ABB360", Slot = "4")]
	public int CompareTo(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000739")]
	[Address(RVA = "0x4ABB310", Offset = "0x4ABB310", VA = "0x4ABB310")]
	public static bool operator ==(Hash128 hash1, Hash128 hash2)
	{
		return default(bool);
	}

	[Token(Token = "0x600073A")]
	[Address(RVA = "0x4ABB0F0", Offset = "0x4ABB0F0", VA = "0x4ABB0F0")]
	public static bool operator <(Hash128 x, Hash128 y)
	{
		return default(bool);
	}

	[Token(Token = "0x600073B")]
	[Address(RVA = "0x4ABB110", Offset = "0x4ABB110", VA = "0x4ABB110")]
	public static bool operator >(Hash128 x, Hash128 y)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600073C")]
	[Address(RVA = "0x4ABB230", Offset = "0x4ABB230", VA = "0x4ABB230")]
	private static extern void Parse_Injected(string hashString, out Hash128 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600073D")]
	[Address(RVA = "0x4ABB270", Offset = "0x4ABB270", VA = "0x4ABB270")]
	private static extern string Hash128ToStringImpl_Injected([In] ref Hash128 hash);
}
