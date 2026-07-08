using System.Reflection;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000149")]
internal class XmlTypeMapMember
{
	[Token(Token = "0x40006DA")]
	[FieldOffset(Offset = "0x10")]
	private string _name;

	[Token(Token = "0x40006DB")]
	[FieldOffset(Offset = "0x18")]
	private int _index;

	[Token(Token = "0x40006DC")]
	[FieldOffset(Offset = "0x1C")]
	private int _globalIndex;

	[Token(Token = "0x40006DD")]
	[FieldOffset(Offset = "0x20")]
	private int _specifiedGlobalIndex;

	[Token(Token = "0x40006DE")]
	[FieldOffset(Offset = "0x28")]
	private TypeData _typeData;

	[Token(Token = "0x40006DF")]
	[FieldOffset(Offset = "0x30")]
	private MemberInfo _member;

	[Token(Token = "0x40006E0")]
	[FieldOffset(Offset = "0x38")]
	private MemberInfo _specifiedMember;

	[Token(Token = "0x40006E1")]
	[FieldOffset(Offset = "0x40")]
	private MethodInfo _shouldSerialize;

	[Token(Token = "0x40006E2")]
	[FieldOffset(Offset = "0x48")]
	private object _defaultValue;

	[Token(Token = "0x40006E3")]
	[FieldOffset(Offset = "0x50")]
	private int _flags;

	[Token(Token = "0x170003AD")]
	public string Name
	{
		[Token(Token = "0x6000E9E")]
		[Address(RVA = "0x44FAAB0", Offset = "0x44FAAB0", VA = "0x44FAAB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E9F")]
		[Address(RVA = "0x44FAAC0", Offset = "0x44FAAC0", VA = "0x44FAAC0")]
		set
		{
		}
	}

	[Token(Token = "0x170003AE")]
	public object DefaultValue
	{
		[Token(Token = "0x6000EA0")]
		[Address(RVA = "0x44FAAD0", Offset = "0x44FAAD0", VA = "0x44FAAD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EA1")]
		[Address(RVA = "0x44FAAE0", Offset = "0x44FAAE0", VA = "0x44FAAE0")]
		set
		{
		}
	}

	[Token(Token = "0x170003AF")]
	public TypeData TypeData
	{
		[Token(Token = "0x6000EA8")]
		[Address(RVA = "0x44FB1C0", Offset = "0x44FB1C0", VA = "0x44FB1C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EA9")]
		[Address(RVA = "0x44FB1D0", Offset = "0x44FB1D0", VA = "0x44FB1D0")]
		set
		{
		}
	}

	[Token(Token = "0x170003B0")]
	public int Index
	{
		[Token(Token = "0x6000EAA")]
		[Address(RVA = "0x44FB1E0", Offset = "0x44FB1E0", VA = "0x44FB1E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000EAB")]
		[Address(RVA = "0x44FB1F0", Offset = "0x44FB1F0", VA = "0x44FB1F0")]
		set
		{
		}
	}

	[Token(Token = "0x170003B1")]
	public int GlobalIndex
	{
		[Token(Token = "0x6000EAC")]
		[Address(RVA = "0x44FB200", Offset = "0x44FB200", VA = "0x44FB200")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000EAD")]
		[Address(RVA = "0x44FB210", Offset = "0x44FB210", VA = "0x44FB210")]
		set
		{
		}
	}

	[Token(Token = "0x170003B2")]
	public bool IsOptionalValueType
	{
		[Token(Token = "0x6000EAE")]
		[Address(RVA = "0x44F6DB0", Offset = "0x44F6DB0", VA = "0x44F6DB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EAF")]
		[Address(RVA = "0x44FB220", Offset = "0x44FB220", VA = "0x44FB220")]
		set
		{
		}
	}

	[Token(Token = "0x170003B3")]
	public bool IsReturnValue
	{
		[Token(Token = "0x6000EB0")]
		[Address(RVA = "0x44FB250", Offset = "0x44FB250", VA = "0x44FB250")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EB1")]
		[Address(RVA = "0x44FB260", Offset = "0x44FB260", VA = "0x44FB260")]
		set
		{
		}
	}

	[Token(Token = "0x6000E9D")]
	[Address(RVA = "0x44FAA40", Offset = "0x44FAA40", VA = "0x44FAA40")]
	public XmlTypeMapMember()
	{
	}

	[Token(Token = "0x6000EA2")]
	[Address(RVA = "0x44FAAF0", Offset = "0x44FAAF0", VA = "0x44FAAF0")]
	public bool IsReadOnly(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EA3")]
	[Address(RVA = "0x44FADF0", Offset = "0x44FADF0", VA = "0x44FADF0")]
	public static object GetValue(object ob, string name)
	{
		return null;
	}

	[Token(Token = "0x6000EA4")]
	[Address(RVA = "0x44F2FB0", Offset = "0x44F2FB0", VA = "0x44F2FB0")]
	public object GetValue(object ob)
	{
		return null;
	}

	[Token(Token = "0x6000EA5")]
	[Address(RVA = "0x44FAF30", Offset = "0x44FAF30", VA = "0x44FAF30")]
	public void SetValue(object ob, object value)
	{
	}

	[Token(Token = "0x6000EA6")]
	[Address(RVA = "0x44FB070", Offset = "0x44FB070", VA = "0x44FB070")]
	public static void SetValue(object ob, string name, object value)
	{
	}

	[Token(Token = "0x6000EA7")]
	[Address(RVA = "0x44FAB90", Offset = "0x44FAB90", VA = "0x44FAB90")]
	private void InitMember(Type type)
	{
	}

	[Token(Token = "0x6000EB2")]
	[Address(RVA = "0x44FB290", Offset = "0x44FB290", VA = "0x44FB290")]
	public void CheckOptionalValueType(Type type)
	{
	}

	[Token(Token = "0x6000EB3")]
	[Address(RVA = "0x44F6DC0", Offset = "0x44F6DC0", VA = "0x44F6DC0")]
	public bool GetValueSpecified(object ob)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EB4")]
	[Address(RVA = "0x44FB300", Offset = "0x44FB300", VA = "0x44FB300")]
	public void SetValueSpecified(object ob, bool value)
	{
	}
}
