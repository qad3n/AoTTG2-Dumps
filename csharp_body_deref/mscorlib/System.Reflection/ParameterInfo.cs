using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x20004EC")]
public class ParameterInfo : ICustomAttributeProvider, IObjectReference, _ParameterInfo
{
	[Token(Token = "0x400144A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected ParameterAttributes AttrsImpl;

	[Token(Token = "0x400144B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	protected Type ClassImpl;

	[Token(Token = "0x400144C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	protected object DefaultValueImpl;

	[Token(Token = "0x400144D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	protected MemberInfo MemberImpl;

	[Token(Token = "0x400144E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	protected string NameImpl;

	[Token(Token = "0x400144F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected int PositionImpl;

	[Token(Token = "0x4001450")]
	private const int MetadataToken_ParamDef = 134217728;

	[Token(Token = "0x170004CE")]
	public virtual ParameterAttributes Attributes
	{
		[Token(Token = "0x6002480")]
		[Address(RVA = "0x4EEE260", Offset = "0x4EEE260", VA = "0x4EEE260", Slot = "8")]
		get
		{
			return default(ParameterAttributes);
		}
	}

	[Token(Token = "0x170004CF")]
	public virtual MemberInfo Member
	{
		[Token(Token = "0x6002481")]
		[Address(RVA = "0x4EEE270", Offset = "0x4EEE270", VA = "0x4EEE270", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D0")]
	public virtual string Name
	{
		[Token(Token = "0x6002482")]
		[Address(RVA = "0x4EEE280", Offset = "0x4EEE280", VA = "0x4EEE280", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D1")]
	public virtual Type ParameterType
	{
		[Token(Token = "0x6002483")]
		[Address(RVA = "0x4EEE290", Offset = "0x4EEE290", VA = "0x4EEE290", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D2")]
	public virtual int Position
	{
		[Token(Token = "0x6002484")]
		[Address(RVA = "0x4EEE2A0", Offset = "0x4EEE2A0", VA = "0x4EEE2A0", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170004D3")]
	public bool IsIn
	{
		[Token(Token = "0x6002485")]
		[Address(RVA = "0x4EEE2B0", Offset = "0x4EEE2B0", VA = "0x4EEE2B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004D4")]
	public bool IsOptional
	{
		[Token(Token = "0x6002486")]
		[Address(RVA = "0x4EEE2D0", Offset = "0x4EEE2D0", VA = "0x4EEE2D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004D5")]
	public bool IsOut
	{
		[Token(Token = "0x6002487")]
		[Address(RVA = "0x4EEE2F0", Offset = "0x4EEE2F0", VA = "0x4EEE2F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004D6")]
	public virtual object DefaultValue
	{
		[Token(Token = "0x6002488")]
		[Address(RVA = "0x4EEE310", Offset = "0x4EEE310", VA = "0x4EEE310", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D7")]
	public virtual bool HasDefaultValue
	{
		[Token(Token = "0x6002489")]
		[Address(RVA = "0x4EEE340", Offset = "0x4EEE340", VA = "0x4EEE340", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600247F")]
	[Address(RVA = "0x4EEE250", Offset = "0x4EEE250", VA = "0x4EEE250")]
	protected ParameterInfo()
	{
	}

	[Token(Token = "0x600248A")]
	[Address(RVA = "0x4EEE370", Offset = "0x4EEE370", VA = "0x4EEE370", Slot = "15")]
	public virtual bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x600248B")]
	[Address(RVA = "0x4EEE3F0", Offset = "0x4EEE3F0", VA = "0x4EEE3F0", Slot = "16")]
	public virtual object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x600248C")]
	[Address(RVA = "0x4EEE4B0", Offset = "0x4EEE4B0", VA = "0x4EEE4B0", Slot = "17")]
	public virtual object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x600248D")]
	[Address(RVA = "0x4EEE5F0", Offset = "0x4EEE5F0", VA = "0x4EEE5F0", Slot = "7")]
	public object GetRealObject(StreamingContext context)
	{
		return null;
	}

	[Token(Token = "0x600248E")]
	[Address(RVA = "0x4EEE940", Offset = "0x4EEE940", VA = "0x4EEE940", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
