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
		[Address(RVA = "0x2E600D0", Offset = "0x2E5E6D0", VA = "0x182E600D0")]
		get
		{
			return default(fsDataType);
		}
	}

	[Token(Token = "0x17000207")]
	public bool IsNull
	{
		[Token(Token = "0x6001257")]
		[Address(RVA = "0x2498690", Offset = "0x2496C90", VA = "0x182498690")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000208")]
	public bool IsDouble
	{
		[Token(Token = "0x6001258")]
		[Address(RVA = "0x2E5FFF0", Offset = "0x2E5E5F0", VA = "0x182E5FFF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000209")]
	public bool IsInt64
	{
		[Token(Token = "0x6001259")]
		[Address(RVA = "0x2E60010", Offset = "0x2E5E610", VA = "0x182E60010")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020A")]
	public bool IsBool
	{
		[Token(Token = "0x600125A")]
		[Address(RVA = "0x2E5FF50", Offset = "0x2E5E550", VA = "0x182E5FF50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020B")]
	public bool IsString
	{
		[Token(Token = "0x600125B")]
		[Address(RVA = "0x2E600B0", Offset = "0x2E5E6B0", VA = "0x182E600B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020C")]
	public bool IsDictionary
	{
		[Token(Token = "0x600125C")]
		[Address(RVA = "0x2E5FF70", Offset = "0x2E5E570", VA = "0x182E5FF70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020D")]
	public bool IsList
	{
		[Token(Token = "0x600125D")]
		[Address(RVA = "0x2E60030", Offset = "0x2E5E630", VA = "0x182E60030")]
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
		[Address(RVA = "0x2E5FE50", Offset = "0x2E5E450", VA = "0x182E5FE50")]
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
		[Address(RVA = "0x2E5FE90", Offset = "0x2E5E490", VA = "0x182E5FE90")]
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
		[Address(RVA = "0x2E5FDD0", Offset = "0x2E5E3D0", VA = "0x182E5FDD0")]
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
		[Address(RVA = "0x2E5FF10", Offset = "0x2E5E510", VA = "0x182E5FF10")]
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
		[Address(RVA = "0x2E5FE10", Offset = "0x2E5E410", VA = "0x182E5FE10")]
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
		[Address(RVA = "0x2E5FED0", Offset = "0x2E5E4D0", VA = "0x182E5FED0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001249")]
	[Address(RVA = "0x2E5FB50", Offset = "0x2E5E150", VA = "0x182E5FB50", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600124A")]
	[Address(RVA = "0x2E5FD50", Offset = "0x2E5E350", VA = "0x182E5FD50")]
	public fsData()
	{
	}

	[Token(Token = "0x600124B")]
	[Address(RVA = "0x2E5FCB0", Offset = "0x2E5E2B0", VA = "0x182E5FCB0")]
	public fsData(bool boolean)
	{
	}

	[Token(Token = "0x600124C")]
	[Address(RVA = "0x2E5FD00", Offset = "0x2E5E300", VA = "0x182E5FD00")]
	public fsData(double f)
	{
	}

	[Token(Token = "0x600124D")]
	[Address(RVA = "0x2E5FD80", Offset = "0x2E5E380", VA = "0x182E5FD80")]
	public fsData(long i)
	{
	}

	[Token(Token = "0x600124E")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public fsData(string str)
	{
	}

	[Token(Token = "0x600124F")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public fsData(Dictionary<string, fsData> dict)
	{
	}

	[Token(Token = "0x6001250")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public fsData(List<fsData> list)
	{
	}

	[Token(Token = "0x6001251")]
	[Address(RVA = "0x2E5F350", Offset = "0x2E5D950", VA = "0x182E5F350")]
	public static fsData CreateDictionary()
	{
		return null;
	}

	[Token(Token = "0x6001252")]
	[Address(RVA = "0x2E5F4E0", Offset = "0x2E5DAE0", VA = "0x182E5F4E0")]
	public static fsData CreateList()
	{
		return null;
	}

	[Token(Token = "0x6001253")]
	[Address(RVA = "0x2E5F580", Offset = "0x2E5DB80", VA = "0x182E5F580")]
	public static fsData CreateList(int capacity)
	{
		return null;
	}

	[Token(Token = "0x6001254")]
	[Address(RVA = "0x2E5F260", Offset = "0x2E5D860", VA = "0x182E5F260")]
	internal void BecomeDictionary()
	{
	}

	[Token(Token = "0x6001255")]
	[Address(RVA = "0x2E5F2D0", Offset = "0x2E5D8D0", VA = "0x182E5F2D0")]
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
	[Address(RVA = "0x2E5F620", Offset = "0x2E5DC20", VA = "0x182E5F620", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001266")]
	[Address(RVA = "0x2E5F680", Offset = "0x2E5DC80", VA = "0x182E5F680")]
	public bool Equals(fsData other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001267")]
	[Address(RVA = "0x2E60260", Offset = "0x2E5E860", VA = "0x182E60260")]
	public static bool operator ==(fsData a, fsData b)
	{
		return default(bool);
	}

	[Token(Token = "0x6001268")]
	[Address(RVA = "0x2E60380", Offset = "0x2E5E980", VA = "0x182E60380")]
	public static bool operator !=(fsData a, fsData b)
	{
		return default(bool);
	}

	[Token(Token = "0x6001269")]
	[Address(RVA = "0xC8D900", Offset = "0xC8BF00", VA = "0x180C8D900", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
