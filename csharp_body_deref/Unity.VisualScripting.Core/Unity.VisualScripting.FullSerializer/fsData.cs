using System.Collections.Generic;
using System.Diagnostics;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x2000207")]
public sealed class fsData
{
	[Token(Token = "0x40009A1")]
	[FieldOffset(Offset = "0x10")]
	private object _value;

	[Token(Token = "0x40009A2")]
	[FieldOffset(Offset = "0x0")]
	public static readonly fsData True;

	[Token(Token = "0x40009A3")]
	[FieldOffset(Offset = "0x8")]
	public static readonly fsData False;

	[Token(Token = "0x40009A4")]
	[FieldOffset(Offset = "0x10")]
	public static readonly fsData Null;

	[Token(Token = "0x17000203")]
	public fsDataType Type
	{
		[Token(Token = "0x6001249")]
		[Address(RVA = "0x4A49AD0", Offset = "0x4A49AD0", VA = "0x4A49AD0")]
		get
		{
			return default(fsDataType);
		}
	}

	[Token(Token = "0x17000204")]
	public bool IsNull
	{
		[Token(Token = "0x600124A")]
		[Address(RVA = "0x4A55EA0", Offset = "0x4A55EA0", VA = "0x4A55EA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000205")]
	public bool IsDouble
	{
		[Token(Token = "0x600124B")]
		[Address(RVA = "0x4A512E0", Offset = "0x4A512E0", VA = "0x4A512E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000206")]
	public bool IsInt64
	{
		[Token(Token = "0x600124C")]
		[Address(RVA = "0x4A4D3D0", Offset = "0x4A4D3D0", VA = "0x4A4D3D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000207")]
	public bool IsBool
	{
		[Token(Token = "0x600124D")]
		[Address(RVA = "0x4A52690", Offset = "0x4A52690", VA = "0x4A52690")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000208")]
	public bool IsString
	{
		[Token(Token = "0x600124E")]
		[Address(RVA = "0x4A49AA0", Offset = "0x4A49AA0", VA = "0x4A49AA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000209")]
	public bool IsDictionary
	{
		[Token(Token = "0x600124F")]
		[Address(RVA = "0x4A4AE10", Offset = "0x4A4AE10", VA = "0x4A4AE10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020A")]
	public bool IsList
	{
		[Token(Token = "0x6001250")]
		[Address(RVA = "0x4A4A990", Offset = "0x4A4A990", VA = "0x4A4A990")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020B")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	public double AsDouble
	{
		[Token(Token = "0x6001251")]
		[Address(RVA = "0x4A51310", Offset = "0x4A51310", VA = "0x4A51310")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x1700020C")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	public long AsInt64
	{
		[Token(Token = "0x6001252")]
		[Address(RVA = "0x4A4D3F0", Offset = "0x4A4D3F0", VA = "0x4A4D3F0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700020D")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	public bool AsBool
	{
		[Token(Token = "0x6001253")]
		[Address(RVA = "0x4A512A0", Offset = "0x4A512A0", VA = "0x4A512A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020E")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	public string AsString
	{
		[Token(Token = "0x6001254")]
		[Address(RVA = "0x4A49BF0", Offset = "0x4A49BF0", VA = "0x4A49BF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020F")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	public Dictionary<string, fsData> AsDictionary
	{
		[Token(Token = "0x6001255")]
		[Address(RVA = "0x4A4AE70", Offset = "0x4A4AE70", VA = "0x4A4AE70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000210")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	public List<fsData> AsList
	{
		[Token(Token = "0x6001256")]
		[Address(RVA = "0x4A481F0", Offset = "0x4A481F0", VA = "0x4A481F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600123C")]
	[Address(RVA = "0x4A55AA0", Offset = "0x4A55AA0", VA = "0x4A55AA0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600123D")]
	[Address(RVA = "0x4A55CB0", Offset = "0x4A55CB0", VA = "0x4A55CB0")]
	public fsData()
	{
	}

	[Token(Token = "0x600123E")]
	[Address(RVA = "0x4A50760", Offset = "0x4A50760", VA = "0x4A50760")]
	public fsData(bool boolean)
	{
	}

	[Token(Token = "0x600123F")]
	[Address(RVA = "0x4A50A90", Offset = "0x4A50A90", VA = "0x4A50A90")]
	public fsData(double f)
	{
	}

	[Token(Token = "0x6001240")]
	[Address(RVA = "0x4A4CA10", Offset = "0x4A4CA10", VA = "0x4A4CA10")]
	public fsData(long i)
	{
	}

	[Token(Token = "0x6001241")]
	[Address(RVA = "0x4A49380", Offset = "0x4A49380", VA = "0x4A49380")]
	public fsData(string str)
	{
	}

	[Token(Token = "0x6001242")]
	[Address(RVA = "0x4A4BE50", Offset = "0x4A4BE50", VA = "0x4A4BE50")]
	public fsData(Dictionary<string, fsData> dict)
	{
	}

	[Token(Token = "0x6001243")]
	[Address(RVA = "0x4A55CE0", Offset = "0x4A55CE0", VA = "0x4A55CE0")]
	public fsData(List<fsData> list)
	{
	}

	[Token(Token = "0x6001244")]
	[Address(RVA = "0x4A4BCC0", Offset = "0x4A4BCC0", VA = "0x4A4BCC0")]
	public static fsData CreateDictionary()
	{
		return null;
	}

	[Token(Token = "0x6001245")]
	[Address(RVA = "0x4A55D10", Offset = "0x4A55D10", VA = "0x4A55D10")]
	public static fsData CreateList()
	{
		return null;
	}

	[Token(Token = "0x6001246")]
	[Address(RVA = "0x4A48150", Offset = "0x4A48150", VA = "0x4A48150")]
	public static fsData CreateList(int capacity)
	{
		return null;
	}

	[Token(Token = "0x6001247")]
	[Address(RVA = "0x4A55DB0", Offset = "0x4A55DB0", VA = "0x4A55DB0")]
	internal void BecomeDictionary()
	{
	}

	[Token(Token = "0x6001248")]
	[Address(RVA = "0x4A55E20", Offset = "0x4A55E20", VA = "0x4A55E20")]
	internal fsData Clone()
	{
		return null;
	}

	[Token(Token = "0x6001257")]
	private T Cast<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6001258")]
	[Address(RVA = "0x4A55EB0", Offset = "0x4A55EB0", VA = "0x4A55EB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001259")]
	[Address(RVA = "0x4A55F00", Offset = "0x4A55F00", VA = "0x4A55F00")]
	public bool Equals(fsData other)
	{
		return default(bool);
	}

	[Token(Token = "0x600125A")]
	[Address(RVA = "0x4A56620", Offset = "0x4A56620", VA = "0x4A56620")]
	public static bool operator ==(fsData a, fsData b)
	{
		return default(bool);
	}

	[Token(Token = "0x600125B")]
	[Address(RVA = "0x4A4FDC0", Offset = "0x4A4FDC0", VA = "0x4A4FDC0")]
	public static bool operator !=(fsData a, fsData b)
	{
		return default(bool);
	}

	[Token(Token = "0x600125C")]
	[Address(RVA = "0x4A56750", Offset = "0x4A56750", VA = "0x4A56750", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
