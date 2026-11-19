// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x2000207")]
public sealed class fsData
{
	[Token(Token = "0x400099F")]
	[FieldOffset(Offset = "0x10")]
	private object _value;

	[Token(Token = "0x40009A0")]
	[FieldOffset(Offset = "0x0")]
	public static readonly fsData True;

	[Token(Token = "0x40009A1")]
	[FieldOffset(Offset = "0x8")]
	public static readonly fsData False;

	[Token(Token = "0x40009A2")]
	[FieldOffset(Offset = "0x10")]
	public static readonly fsData Null;

	[Token(Token = "0x17000206")]
	public fsDataType Type
	{
		[Token(Token = "0x6001256")]
		[Address(RVA = "0x68585B0", Offset = "0x68575B0", VA = "0x68585B0")]
		get
		{
			return default(fsDataType);
		}
	}

	[Token(Token = "0x17000207")]
	public bool IsNull
	{
		[Token(Token = "0x6001257")]
		[Address(RVA = "0x6864570", Offset = "0x6863570", VA = "0x6864570")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000208")]
	public bool IsDouble
	{
		[Token(Token = "0x6001258")]
		[Address(RVA = "0x685F9C0", Offset = "0x685E9C0", VA = "0x685F9C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000209")]
	public bool IsInt64
	{
		[Token(Token = "0x6001259")]
		[Address(RVA = "0x685BC70", Offset = "0x685AC70", VA = "0x685BC70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020A")]
	public bool IsBool
	{
		[Token(Token = "0x600125A")]
		[Address(RVA = "0x6860D60", Offset = "0x685FD60", VA = "0x6860D60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020B")]
	public bool IsString
	{
		[Token(Token = "0x600125B")]
		[Address(RVA = "0x6858580", Offset = "0x6857580", VA = "0x6858580")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020C")]
	public bool IsDictionary
	{
		[Token(Token = "0x600125C")]
		[Address(RVA = "0x68597D0", Offset = "0x68587D0", VA = "0x68597D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020D")]
	public bool IsList
	{
		[Token(Token = "0x600125D")]
		[Address(RVA = "0x6859340", Offset = "0x6858340", VA = "0x6859340")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020E")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	public double AsDouble
	{
		[Token(Token = "0x600125E")]
		[Address(RVA = "0x685F9F0", Offset = "0x685E9F0", VA = "0x685F9F0")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x1700020F")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	public long AsInt64
	{
		[Token(Token = "0x600125F")]
		[Address(RVA = "0x685BC90", Offset = "0x685AC90", VA = "0x685BC90")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000210")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	public bool AsBool
	{
		[Token(Token = "0x6001260")]
		[Address(RVA = "0x685F980", Offset = "0x685E980", VA = "0x685F980")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000211")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	public string AsString
	{
		[Token(Token = "0x6001261")]
		[Address(RVA = "0x68586E0", Offset = "0x68576E0", VA = "0x68586E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000212")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	public Dictionary<string, fsData> AsDictionary
	{
		[Token(Token = "0x6001262")]
		[Address(RVA = "0x6859830", Offset = "0x6858830", VA = "0x6859830")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000213")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	public List<fsData> AsList
	{
		[Token(Token = "0x6001263")]
		[Address(RVA = "0x6856D50", Offset = "0x6855D50", VA = "0x6856D50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001249")]
	[Address(RVA = "0x68641E0", Offset = "0x68631E0", VA = "0x68641E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600124A")]
	[Address(RVA = "0x6864390", Offset = "0x6863390", VA = "0x6864390")]
	public fsData()
	{
	}

	[Token(Token = "0x600124B")]
	[Address(RVA = "0x685EE10", Offset = "0x685DE10", VA = "0x685EE10")]
	public fsData(bool boolean)
	{
	}

	[Token(Token = "0x600124C")]
	[Address(RVA = "0x685F140", Offset = "0x685E140", VA = "0x685F140")]
	public fsData(double f)
	{
	}

	[Token(Token = "0x600124D")]
	[Address(RVA = "0x685B2B0", Offset = "0x685A2B0", VA = "0x685B2B0")]
	public fsData(long i)
	{
	}

	[Token(Token = "0x600124E")]
	[Address(RVA = "0x6857E90", Offset = "0x6856E90", VA = "0x6857E90")]
	public fsData(string str)
	{
	}

	[Token(Token = "0x600124F")]
	[Address(RVA = "0x685A900", Offset = "0x6859900", VA = "0x685A900")]
	public fsData(Dictionary<string, fsData> dict)
	{
	}

	[Token(Token = "0x6001250")]
	[Address(RVA = "0x68643C0", Offset = "0x68633C0", VA = "0x68643C0")]
	public fsData(List<fsData> list)
	{
	}

	[Token(Token = "0x6001251")]
	[Address(RVA = "0x685A730", Offset = "0x6859730", VA = "0x685A730")]
	public static fsData CreateDictionary()
	{
		return null;
	}

	[Token(Token = "0x6001252")]
	[Address(RVA = "0x68643F0", Offset = "0x68633F0", VA = "0x68643F0")]
	public static fsData CreateList()
	{
		return null;
	}

	[Token(Token = "0x6001253")]
	[Address(RVA = "0x6856CB0", Offset = "0x6855CB0", VA = "0x6856CB0")]
	public static fsData CreateList(int capacity)
	{
		return null;
	}

	[Token(Token = "0x6001254")]
	[Address(RVA = "0x6864490", Offset = "0x6863490", VA = "0x6864490")]
	internal void BecomeDictionary()
	{
	}

	[Token(Token = "0x6001255")]
	[Address(RVA = "0x6864500", Offset = "0x6863500", VA = "0x6864500")]
	internal fsData Clone()
	{
		return null;
	}

	[Token(Token = "0x6001264")]
	private T Cast<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6001265")]
	[Address(RVA = "0x6864580", Offset = "0x6863580", VA = "0x6864580", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001266")]
	[Address(RVA = "0x68645E0", Offset = "0x68635E0", VA = "0x68645E0")]
	public bool Equals(fsData other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001267")]
	[Address(RVA = "0x6864C70", Offset = "0x6863C70", VA = "0x6864C70")]
	public static bool operator ==(fsData a, fsData b)
	{
		return default(bool);
	}

	[Token(Token = "0x6001268")]
	[Address(RVA = "0x685E470", Offset = "0x685D470", VA = "0x685E470")]
	public static bool operator !=(fsData a, fsData b)
	{
		return default(bool);
	}

	[Token(Token = "0x6001269")]
	[Address(RVA = "0x6864DA0", Offset = "0x6863DA0", VA = "0x6864DA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
