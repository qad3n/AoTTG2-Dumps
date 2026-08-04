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

[Token(Token = "0x2000200")]
public sealed class fsData
{
	[Token(Token = "0x400098F")]
	[FieldOffset(Offset = "0x10")]
	private object _value;

	[Token(Token = "0x4000990")]
	[FieldOffset(Offset = "0x0")]
	public static readonly fsData True;

	[Token(Token = "0x4000991")]
	[FieldOffset(Offset = "0x8")]
	public static readonly fsData False;

	[Token(Token = "0x4000992")]
	[FieldOffset(Offset = "0x10")]
	public static readonly fsData Null;

	[Token(Token = "0x170001F9")]
	public fsDataType Type
	{
		[Token(Token = "0x600121E")]
		[Address(RVA = "0x4D6A180", Offset = "0x4D6A180", VA = "0x4D6A180")]
		get
		{
			return default(fsDataType);
		}
	}

	[Token(Token = "0x170001FA")]
	public bool IsNull
	{
		[Token(Token = "0x600121F")]
		[Address(RVA = "0x4D7B360", Offset = "0x4D7B360", VA = "0x4D7B360")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001FB")]
	public bool IsDouble
	{
		[Token(Token = "0x6001220")]
		[Address(RVA = "0x4D71A30", Offset = "0x4D71A30", VA = "0x4D71A30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001FC")]
	public bool IsInt64
	{
		[Token(Token = "0x6001221")]
		[Address(RVA = "0x4D6DC70", Offset = "0x4D6DC70", VA = "0x4D6DC70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001FD")]
	public bool IsBool
	{
		[Token(Token = "0x6001222")]
		[Address(RVA = "0x4D73950", Offset = "0x4D73950", VA = "0x4D73950")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001FE")]
	public bool IsString
	{
		[Token(Token = "0x6001223")]
		[Address(RVA = "0x4D6A150", Offset = "0x4D6A150", VA = "0x4D6A150")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001FF")]
	public bool IsDictionary
	{
		[Token(Token = "0x6001224")]
		[Address(RVA = "0x4D6B6E0", Offset = "0x4D6B6E0", VA = "0x4D6B6E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000200")]
	public bool IsList
	{
		[Token(Token = "0x6001225")]
		[Address(RVA = "0x4D6B260", Offset = "0x4D6B260", VA = "0x4D6B260")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000201")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	public double AsDouble
	{
		[Token(Token = "0x6001226")]
		[Address(RVA = "0x4D71A60", Offset = "0x4D71A60", VA = "0x4D71A60")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x17000202")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	public long AsInt64
	{
		[Token(Token = "0x6001227")]
		[Address(RVA = "0x4D6DC90", Offset = "0x4D6DC90", VA = "0x4D6DC90")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000203")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	public bool AsBool
	{
		[Token(Token = "0x6001228")]
		[Address(RVA = "0x4D719F0", Offset = "0x4D719F0", VA = "0x4D719F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000204")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	public string AsString
	{
		[Token(Token = "0x6001229")]
		[Address(RVA = "0x4D6A390", Offset = "0x4D6A390", VA = "0x4D6A390")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000205")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	public Dictionary<string, fsData> AsDictionary
	{
		[Token(Token = "0x600122A")]
		[Address(RVA = "0x4D6B740", Offset = "0x4D6B740", VA = "0x4D6B740")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000206")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	public List<fsData> AsList
	{
		[Token(Token = "0x600122B")]
		[Address(RVA = "0x4D68EA0", Offset = "0x4D68EA0", VA = "0x4D68EA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001211")]
	[Address(RVA = "0x4D7AF60", Offset = "0x4D7AF60", VA = "0x4D7AF60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001212")]
	[Address(RVA = "0x4D7B170", Offset = "0x4D7B170", VA = "0x4D7B170")]
	public fsData()
	{
	}

	[Token(Token = "0x6001213")]
	[Address(RVA = "0x4D70DB0", Offset = "0x4D70DB0", VA = "0x4D70DB0")]
	public fsData(bool boolean)
	{
	}

	[Token(Token = "0x6001214")]
	[Address(RVA = "0x4D710E0", Offset = "0x4D710E0", VA = "0x4D710E0")]
	public fsData(double f)
	{
	}

	[Token(Token = "0x6001215")]
	[Address(RVA = "0x4D6D2B0", Offset = "0x4D6D2B0", VA = "0x4D6D2B0")]
	public fsData(long i)
	{
	}

	[Token(Token = "0x6001216")]
	[Address(RVA = "0x4D69A30", Offset = "0x4D69A30", VA = "0x4D69A30")]
	public fsData(string str)
	{
	}

	[Token(Token = "0x6001217")]
	[Address(RVA = "0x4D6C8C0", Offset = "0x4D6C8C0", VA = "0x4D6C8C0")]
	public fsData(Dictionary<string, fsData> dict)
	{
	}

	[Token(Token = "0x6001218")]
	[Address(RVA = "0x4D7B1A0", Offset = "0x4D7B1A0", VA = "0x4D7B1A0")]
	public fsData(List<fsData> list)
	{
	}

	[Token(Token = "0x6001219")]
	[Address(RVA = "0x4D6C730", Offset = "0x4D6C730", VA = "0x4D6C730")]
	public static fsData CreateDictionary()
	{
		return null;
	}

	[Token(Token = "0x600121A")]
	[Address(RVA = "0x4D7B1D0", Offset = "0x4D7B1D0", VA = "0x4D7B1D0")]
	public static fsData CreateList()
	{
		return null;
	}

	[Token(Token = "0x600121B")]
	[Address(RVA = "0x4D68E00", Offset = "0x4D68E00", VA = "0x4D68E00")]
	public static fsData CreateList(int capacity)
	{
		return null;
	}

	[Token(Token = "0x600121C")]
	[Address(RVA = "0x4D7B270", Offset = "0x4D7B270", VA = "0x4D7B270")]
	internal void BecomeDictionary()
	{
	}

	[Token(Token = "0x600121D")]
	[Address(RVA = "0x4D7B2E0", Offset = "0x4D7B2E0", VA = "0x4D7B2E0")]
	internal fsData Clone()
	{
		return null;
	}

	[Token(Token = "0x600122C")]
	private T Cast<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x600122D")]
	[Address(RVA = "0x4D7B370", Offset = "0x4D7B370", VA = "0x4D7B370", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600122E")]
	[Address(RVA = "0x4D7B3C0", Offset = "0x4D7B3C0", VA = "0x4D7B3C0")]
	public bool Equals(fsData other)
	{
		return default(bool);
	}

	[Token(Token = "0x600122F")]
	[Address(RVA = "0x4D7BAE0", Offset = "0x4D7BAE0", VA = "0x4D7BAE0")]
	public static bool operator ==(fsData a, fsData b)
	{
		return default(bool);
	}

	[Token(Token = "0x6001230")]
	[Address(RVA = "0x4D70410", Offset = "0x4D70410", VA = "0x4D70410")]
	public static bool operator !=(fsData a, fsData b)
	{
		return default(bool);
	}

	[Token(Token = "0x6001231")]
	[Address(RVA = "0x4D7BC10", Offset = "0x4D7BC10", VA = "0x4D7BC10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
