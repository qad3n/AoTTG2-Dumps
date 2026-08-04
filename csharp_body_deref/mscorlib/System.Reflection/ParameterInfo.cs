// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.ParameterInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3BD3D80", Offset = "0x3BD3D80", VA = "0x3BD3D80", Slot = "8")]
		get
		{
			return default(ParameterAttributes);
		}
	}

	[Token(Token = "0x170004CF")]
	public virtual MemberInfo Member
	{
		[Token(Token = "0x6002481")]
		[Address(RVA = "0x3BD3D90", Offset = "0x3BD3D90", VA = "0x3BD3D90", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D0")]
	public virtual string Name
	{
		[Token(Token = "0x6002482")]
		[Address(RVA = "0x3BD3DA0", Offset = "0x3BD3DA0", VA = "0x3BD3DA0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D1")]
	public virtual Type ParameterType
	{
		[Token(Token = "0x6002483")]
		[Address(RVA = "0x3BD3DB0", Offset = "0x3BD3DB0", VA = "0x3BD3DB0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D2")]
	public virtual int Position
	{
		[Token(Token = "0x6002484")]
		[Address(RVA = "0x3BD3DC0", Offset = "0x3BD3DC0", VA = "0x3BD3DC0", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170004D3")]
	public bool IsIn
	{
		[Token(Token = "0x6002485")]
		[Address(RVA = "0x3BD3DD0", Offset = "0x3BD3DD0", VA = "0x3BD3DD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004D4")]
	public bool IsOptional
	{
		[Token(Token = "0x6002486")]
		[Address(RVA = "0x3BD3DF0", Offset = "0x3BD3DF0", VA = "0x3BD3DF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004D5")]
	public bool IsOut
	{
		[Token(Token = "0x6002487")]
		[Address(RVA = "0x3BD3E10", Offset = "0x3BD3E10", VA = "0x3BD3E10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004D6")]
	public virtual object DefaultValue
	{
		[Token(Token = "0x6002488")]
		[Address(RVA = "0x3BD3E30", Offset = "0x3BD3E30", VA = "0x3BD3E30", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D7")]
	public virtual bool HasDefaultValue
	{
		[Token(Token = "0x6002489")]
		[Address(RVA = "0x3BD3E60", Offset = "0x3BD3E60", VA = "0x3BD3E60", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600247F")]
	[Address(RVA = "0x3BD3D70", Offset = "0x3BD3D70", VA = "0x3BD3D70")]
	protected ParameterInfo()
	{
	}

	[Token(Token = "0x600248A")]
	[Address(RVA = "0x3BD3E90", Offset = "0x3BD3E90", VA = "0x3BD3E90", Slot = "15")]
	public virtual bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x600248B")]
	[Address(RVA = "0x3BD3F10", Offset = "0x3BD3F10", VA = "0x3BD3F10", Slot = "16")]
	public virtual object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x600248C")]
	[Address(RVA = "0x3BD3FD0", Offset = "0x3BD3FD0", VA = "0x3BD3FD0", Slot = "17")]
	public virtual object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x600248D")]
	[Address(RVA = "0x3BD4110", Offset = "0x3BD4110", VA = "0x3BD4110", Slot = "7")]
	public object GetRealObject(StreamingContext context)
	{
		return null;
	}

	[Token(Token = "0x600248E")]
	[Address(RVA = "0x3BD4460", Offset = "0x3BD4460", VA = "0x3BD4460", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
