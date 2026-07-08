using System;
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x20006D2")]
public class BaseCSVObject
{
	[Token(Token = "0x40020F5")]
	[FieldOffset(Offset = "0x0")]
	protected static Dictionary<Type, List<FieldInfo>> _fields;

	[Token(Token = "0x17000D30")]
	public virtual char Delimiter
	{
		[Token(Token = "0x60043DE")]
		[Address(RVA = "0x4051AB0", Offset = "0x4051AB0", VA = "0x4051AB0", Slot = "4")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000D31")]
	protected virtual char ParamDelimiter
	{
		[Token(Token = "0x60043DF")]
		[Address(RVA = "0x4051AC0", Offset = "0x4051AC0", VA = "0x4051AC0", Slot = "5")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000D32")]
	protected virtual char StructDelimiter
	{
		[Token(Token = "0x60043E0")]
		[Address(RVA = "0x4051AD0", Offset = "0x4051AD0", VA = "0x4051AD0", Slot = "6")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000D33")]
	protected virtual bool NamedParams
	{
		[Token(Token = "0x60043E1")]
		[Address(RVA = "0x4051AE0", Offset = "0x4051AE0", VA = "0x4051AE0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60043E2")]
	[Address(RVA = "0x4051740", Offset = "0x4051740", VA = "0x4051740", Slot = "8")]
	public virtual string Serialize()
	{
		return null;
	}

	[Token(Token = "0x60043E3")]
	[Address(RVA = "0x4051AF0", Offset = "0x4051AF0", VA = "0x4051AF0", Slot = "9")]
	public virtual void Deserialize(string csv)
	{
	}

	[Token(Token = "0x60043E4")]
	[Address(RVA = "0x4051FC0", Offset = "0x4051FC0", VA = "0x4051FC0", Slot = "10")]
	public virtual void Copy(BaseCSVObject other)
	{
	}

	[Token(Token = "0x60043E5")]
	[Address(RVA = "0x4052000", Offset = "0x4052000", VA = "0x4052000", Slot = "11")]
	protected virtual List<FieldInfo> GetFields()
	{
		return null;
	}

	[Token(Token = "0x60043E6")]
	[Address(RVA = "0x4052260", Offset = "0x4052260", VA = "0x4052260", Slot = "12")]
	protected virtual FieldInfo FindField(string name)
	{
		return null;
	}

	[Token(Token = "0x60043E7")]
	[Address(RVA = "0x4052460", Offset = "0x4052460", VA = "0x4052460", Slot = "13")]
	protected virtual bool IsList(FieldInfo field)
	{
		return default(bool);
	}

	[Token(Token = "0x60043E8")]
	[Address(RVA = "0x4052540", Offset = "0x4052540", VA = "0x4052540", Slot = "14")]
	protected virtual string SerializeField(FieldInfo info, object instance)
	{
		return null;
	}

	[Token(Token = "0x60043E9")]
	[Address(RVA = "0x4052D50", Offset = "0x4052D50", VA = "0x4052D50", Slot = "15")]
	protected virtual void DeserializeField(FieldInfo info, object instance, string value)
	{
	}

	[Token(Token = "0x60043EA")]
	[Address(RVA = "0x4052DC0", Offset = "0x4052DC0", VA = "0x4052DC0", Slot = "16")]
	protected virtual string SerializeValue(Type t, object value)
	{
		return null;
	}

	[Token(Token = "0x60043EB")]
	[Address(RVA = "0x40534C0", Offset = "0x40534C0", VA = "0x40534C0", Slot = "17")]
	protected virtual object DeserializeValue(Type t, string value)
	{
		return null;
	}

	[Token(Token = "0x60043EC")]
	[Address(RVA = "0x4051AA0", Offset = "0x4051AA0", VA = "0x4051AA0")]
	public BaseCSVObject()
	{
	}
}
