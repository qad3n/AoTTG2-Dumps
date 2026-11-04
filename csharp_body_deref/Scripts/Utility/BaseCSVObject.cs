// ==================== AoTTG2 cross-reference ====================
// Type: Utility.BaseCSVObject
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/BaseCSVObject.c
// Prior real C# source (older reference): Assets/Scripts/Utility/CSV/BaseCSVObject.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x20008A5")]
public class BaseCSVObject
{
	[Token(Token = "0x4002B11")]
	[FieldOffset(Offset = "0x0")]
	protected static Dictionary<Type, List<FieldInfo>> _fields;

	[Token(Token = "0x17000F0B")]
	public virtual char Delimiter
	{
		[Token(Token = "0x60052A2")]
		[Address(RVA = "0x846F90", Offset = "0x845590", VA = "0x180846F90", Slot = "4")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000F0C")]
	protected virtual char ParamDelimiter
	{
		[Token(Token = "0x60052A3")]
		[Address(RVA = "0x232BB20", Offset = "0x232A120", VA = "0x18232BB20", Slot = "5")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000F0D")]
	protected virtual char StructDelimiter
	{
		[Token(Token = "0x60052A4")]
		[Address(RVA = "0x232BB30", Offset = "0x232A130", VA = "0x18232BB30", Slot = "6")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000F0E")]
	protected virtual bool NamedParams
	{
		[Token(Token = "0x60052A5")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60052A6")]
	[Address(RVA = "0x232B8A0", Offset = "0x2329EA0", VA = "0x18232B8A0", Slot = "8")]
	public virtual string Serialize()
	{
		return null;
	}

	[Token(Token = "0x60052A7")]
	[Address(RVA = "0x232A340", Offset = "0x2328940", VA = "0x18232A340", Slot = "9")]
	public virtual void Deserialize(string csv)
	{
	}

	[Token(Token = "0x60052A8")]
	[Address(RVA = "0x2329C70", Offset = "0x2328270", VA = "0x182329C70", Slot = "10")]
	public virtual void Copy(BaseCSVObject other)
	{
	}

	[Token(Token = "0x60052A9")]
	[Address(RVA = "0x232A900", Offset = "0x2328F00", VA = "0x18232A900", Slot = "11")]
	protected virtual List<FieldInfo> GetFields()
	{
		return null;
	}

	[Token(Token = "0x60052AA")]
	[Address(RVA = "0x232A730", Offset = "0x2328D30", VA = "0x18232A730", Slot = "12")]
	protected virtual FieldInfo FindField(string name)
	{
		return null;
	}

	[Token(Token = "0x60052AB")]
	[Address(RVA = "0x232AB70", Offset = "0x2329170", VA = "0x18232AB70", Slot = "13")]
	protected virtual bool IsList(FieldInfo field)
	{
		return default(bool);
	}

	[Token(Token = "0x60052AC")]
	[Address(RVA = "0x232AC50", Offset = "0x2329250", VA = "0x18232AC50", Slot = "14")]
	protected virtual string SerializeField(FieldInfo info, object instance)
	{
		return null;
	}

	[Token(Token = "0x60052AD")]
	[Address(RVA = "0x2329CC0", Offset = "0x23282C0", VA = "0x182329CC0", Slot = "15")]
	protected virtual void DeserializeField(FieldInfo info, object instance, string value)
	{
	}

	[Token(Token = "0x60052AE")]
	[Address(RVA = "0x232B190", Offset = "0x2329790", VA = "0x18232B190", Slot = "16")]
	protected virtual string SerializeValue(Type t, object value)
	{
		return null;
	}

	[Token(Token = "0x60052AF")]
	[Address(RVA = "0x2329D30", Offset = "0x2328330", VA = "0x182329D30", Slot = "17")]
	protected virtual object DeserializeValue(Type t, string value)
	{
		return null;
	}

	[Token(Token = "0x60052B0")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public BaseCSVObject()
	{
	}
}
