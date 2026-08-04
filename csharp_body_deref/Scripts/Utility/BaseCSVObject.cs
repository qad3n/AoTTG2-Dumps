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

[Token(Token = "0x200072E")]
public class BaseCSVObject
{
	[Token(Token = "0x4002290")]
	[FieldOffset(Offset = "0x0")]
	protected static Dictionary<Type, List<FieldInfo>> _fields;

	[Token(Token = "0x17000DB5")]
	public virtual char Delimiter
	{
		[Token(Token = "0x600469D")]
		[Address(RVA = "0x438CC20", Offset = "0x438CC20", VA = "0x438CC20", Slot = "4")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000DB6")]
	protected virtual char ParamDelimiter
	{
		[Token(Token = "0x600469E")]
		[Address(RVA = "0x438CC30", Offset = "0x438CC30", VA = "0x438CC30", Slot = "5")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000DB7")]
	protected virtual char StructDelimiter
	{
		[Token(Token = "0x600469F")]
		[Address(RVA = "0x438CC40", Offset = "0x438CC40", VA = "0x438CC40", Slot = "6")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000DB8")]
	protected virtual bool NamedParams
	{
		[Token(Token = "0x60046A0")]
		[Address(RVA = "0x438CC50", Offset = "0x438CC50", VA = "0x438CC50", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60046A1")]
	[Address(RVA = "0x438C8B0", Offset = "0x438C8B0", VA = "0x438C8B0", Slot = "8")]
	public virtual string Serialize()
	{
		return null;
	}

	[Token(Token = "0x60046A2")]
	[Address(RVA = "0x438CC60", Offset = "0x438CC60", VA = "0x438CC60", Slot = "9")]
	public virtual void Deserialize(string csv)
	{
	}

	[Token(Token = "0x60046A3")]
	[Address(RVA = "0x438D130", Offset = "0x438D130", VA = "0x438D130", Slot = "10")]
	public virtual void Copy(BaseCSVObject other)
	{
	}

	[Token(Token = "0x60046A4")]
	[Address(RVA = "0x438D170", Offset = "0x438D170", VA = "0x438D170", Slot = "11")]
	protected virtual List<FieldInfo> GetFields()
	{
		return null;
	}

	[Token(Token = "0x60046A5")]
	[Address(RVA = "0x438D3D0", Offset = "0x438D3D0", VA = "0x438D3D0", Slot = "12")]
	protected virtual FieldInfo FindField(string name)
	{
		return null;
	}

	[Token(Token = "0x60046A6")]
	[Address(RVA = "0x438D5D0", Offset = "0x438D5D0", VA = "0x438D5D0", Slot = "13")]
	protected virtual bool IsList(FieldInfo field)
	{
		return default(bool);
	}

	[Token(Token = "0x60046A7")]
	[Address(RVA = "0x438D6B0", Offset = "0x438D6B0", VA = "0x438D6B0", Slot = "14")]
	protected virtual string SerializeField(FieldInfo info, object instance)
	{
		return null;
	}

	[Token(Token = "0x60046A8")]
	[Address(RVA = "0x438DEC0", Offset = "0x438DEC0", VA = "0x438DEC0", Slot = "15")]
	protected virtual void DeserializeField(FieldInfo info, object instance, string value)
	{
	}

	[Token(Token = "0x60046A9")]
	[Address(RVA = "0x438DF30", Offset = "0x438DF30", VA = "0x438DF30", Slot = "16")]
	protected virtual string SerializeValue(Type t, object value)
	{
		return null;
	}

	[Token(Token = "0x60046AA")]
	[Address(RVA = "0x438E630", Offset = "0x438E630", VA = "0x438E630", Slot = "17")]
	protected virtual object DeserializeValue(Type t, string value)
	{
		return null;
	}

	[Token(Token = "0x60046AB")]
	[Address(RVA = "0x438CC10", Offset = "0x438CC10", VA = "0x438CC10")]
	public BaseCSVObject()
	{
	}
}
