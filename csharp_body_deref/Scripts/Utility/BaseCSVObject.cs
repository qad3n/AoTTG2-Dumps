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

[Token(Token = "0x2000910")]
public class BaseCSVObject
{
	[Token(Token = "0x4002DC8")]
	[FieldOffset(Offset = "0x0")]
	protected static Dictionary<Type, List<FieldInfo>> _fields;

	[Token(Token = "0x17000EEE")]
	public virtual char Delimiter
	{
		[Token(Token = "0x60055F9")]
		[Address(RVA = "0x5CE1380", Offset = "0x5CE0380", VA = "0x5CE1380", Slot = "4")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000EEF")]
	protected virtual char ParamDelimiter
	{
		[Token(Token = "0x60055FA")]
		[Address(RVA = "0x5CE1390", Offset = "0x5CE0390", VA = "0x5CE1390", Slot = "5")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000EF0")]
	protected virtual char StructDelimiter
	{
		[Token(Token = "0x60055FB")]
		[Address(RVA = "0x5CE13A0", Offset = "0x5CE03A0", VA = "0x5CE13A0", Slot = "6")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000EF1")]
	protected virtual bool NamedParams
	{
		[Token(Token = "0x60055FC")]
		[Address(RVA = "0x5CE13B0", Offset = "0x5CE03B0", VA = "0x5CE13B0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60055FD")]
	[Address(RVA = "0x5CE1020", Offset = "0x5CE0020", VA = "0x5CE1020", Slot = "8")]
	public virtual string Serialize()
	{
		return null;
	}

	[Token(Token = "0x60055FE")]
	[Address(RVA = "0x5CE13C0", Offset = "0x5CE03C0", VA = "0x5CE13C0", Slot = "9")]
	public virtual void Deserialize(string csv)
	{
	}

	[Token(Token = "0x60055FF")]
	[Address(RVA = "0x5CE18A0", Offset = "0x5CE08A0", VA = "0x5CE18A0", Slot = "10")]
	public virtual void Copy(BaseCSVObject other)
	{
	}

	[Token(Token = "0x6005600")]
	[Address(RVA = "0x5CE18E0", Offset = "0x5CE08E0", VA = "0x5CE18E0", Slot = "11")]
	protected virtual List<FieldInfo> GetFields()
	{
		return null;
	}

	[Token(Token = "0x6005601")]
	[Address(RVA = "0x5CE1B30", Offset = "0x5CE0B30", VA = "0x5CE1B30", Slot = "12")]
	protected virtual FieldInfo FindField(string name)
	{
		return null;
	}

	[Token(Token = "0x6005602")]
	[Address(RVA = "0x5CE1D20", Offset = "0x5CE0D20", VA = "0x5CE1D20", Slot = "13")]
	protected virtual bool IsList(FieldInfo field)
	{
		return default(bool);
	}

	[Token(Token = "0x6005603")]
	[Address(RVA = "0x5CE1E00", Offset = "0x5CE0E00", VA = "0x5CE1E00", Slot = "14")]
	protected virtual string SerializeField(FieldInfo info, object instance)
	{
		return null;
	}

	[Token(Token = "0x6005604")]
	[Address(RVA = "0x5CE2470", Offset = "0x5CE1470", VA = "0x5CE2470", Slot = "15")]
	protected virtual void DeserializeField(FieldInfo info, object instance, string value)
	{
	}

	[Token(Token = "0x6005605")]
	[Address(RVA = "0x5CE24E0", Offset = "0x5CE14E0", VA = "0x5CE24E0", Slot = "16")]
	protected virtual string SerializeValue(Type t, object value)
	{
		return null;
	}

	[Token(Token = "0x6005606")]
	[Address(RVA = "0x5CE2B00", Offset = "0x5CE1B00", VA = "0x5CE2B00", Slot = "17")]
	protected virtual object DeserializeValue(Type t, string value)
	{
		return null;
	}

	[Token(Token = "0x6005607")]
	[Address(RVA = "0x5CE1370", Offset = "0x5CE0370", VA = "0x5CE1370")]
	public BaseCSVObject()
	{
	}
}
