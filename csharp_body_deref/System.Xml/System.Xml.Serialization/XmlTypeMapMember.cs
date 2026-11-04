// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlTypeMapMember
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E9F")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x170003AE")]
	public object DefaultValue
	{
		[Token(Token = "0x6000EA0")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EA1")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		set
		{
		}
	}

	[Token(Token = "0x170003AF")]
	public TypeData TypeData
	{
		[Token(Token = "0x6000EA8")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EA9")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		set
		{
		}
	}

	[Token(Token = "0x170003B0")]
	public int Index
	{
		[Token(Token = "0x6000EAA")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000EAB")]
		[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0")]
		set
		{
		}
	}

	[Token(Token = "0x170003B1")]
	public int GlobalIndex
	{
		[Token(Token = "0x6000EAC")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000EAD")]
		[Address(RVA = "0xD23F80", Offset = "0xD22580", VA = "0x180D23F80")]
		set
		{
		}
	}

	[Token(Token = "0x170003B2")]
	public bool IsOptionalValueType
	{
		[Token(Token = "0x6000EAE")]
		[Address(RVA = "0x1A16070", Offset = "0x1A14670", VA = "0x181A16070")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EAF")]
		[Address(RVA = "0x278EEB0", Offset = "0x278D4B0", VA = "0x18278EEB0")]
		set
		{
		}
	}

	[Token(Token = "0x170003B3")]
	public bool IsReturnValue
	{
		[Token(Token = "0x6000EB0")]
		[Address(RVA = "0x1A16050", Offset = "0x1A14650", VA = "0x181A16050")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EB1")]
		[Address(RVA = "0x278EED0", Offset = "0x278D4D0", VA = "0x18278EED0")]
		set
		{
		}
	}

	[Token(Token = "0x6000E9D")]
	[Address(RVA = "0x278EE30", Offset = "0x278D430", VA = "0x18278EE30")]
	public XmlTypeMapMember()
	{
	}

	[Token(Token = "0x6000EA2")]
	[Address(RVA = "0x278E6B0", Offset = "0x278CCB0", VA = "0x18278E6B0")]
	public bool IsReadOnly(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EA3")]
	[Address(RVA = "0x278E270", Offset = "0x278C870", VA = "0x18278E270")]
	public static object GetValue(object ob, string name)
	{
		return null;
	}

	[Token(Token = "0x6000EA4")]
	[Address(RVA = "0x278E100", Offset = "0x278C700", VA = "0x18278E100")]
	public object GetValue(object ob)
	{
		return null;
	}

	[Token(Token = "0x6000EA5")]
	[Address(RVA = "0x278EAD0", Offset = "0x278D0D0", VA = "0x18278EAD0")]
	public void SetValue(object ob, object value)
	{
	}

	[Token(Token = "0x6000EA6")]
	[Address(RVA = "0x278EC70", Offset = "0x278D270", VA = "0x18278EC70")]
	public static void SetValue(object ob, string name, object value)
	{
	}

	[Token(Token = "0x6000EA7")]
	[Address(RVA = "0x278E410", Offset = "0x278CA10", VA = "0x18278E410")]
	private void InitMember(Type type)
	{
	}

	[Token(Token = "0x6000EB2")]
	[Address(RVA = "0x278DD80", Offset = "0x278C380", VA = "0x18278DD80")]
	public void CheckOptionalValueType(Type type)
	{
	}

	[Token(Token = "0x6000EB3")]
	[Address(RVA = "0x278DE00", Offset = "0x278C400", VA = "0x18278DE00")]
	public bool GetValueSpecified(object ob)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EB4")]
	[Address(RVA = "0x278E790", Offset = "0x278CD90", VA = "0x18278E790")]
	public void SetValueSpecified(object ob, bool value)
	{
	}
}
