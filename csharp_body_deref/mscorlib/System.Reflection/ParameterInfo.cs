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
[Token(Token = "0x20004F5")]
public class ParameterInfo : ICustomAttributeProvider, IObjectReference, _ParameterInfo
{
	[Token(Token = "0x40013AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected ParameterAttributes AttrsImpl;

	[Token(Token = "0x40013AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	protected Type ClassImpl;

	[Token(Token = "0x40013AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	protected object DefaultValueImpl;

	[Token(Token = "0x40013AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	protected MemberInfo MemberImpl;

	[Token(Token = "0x40013AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	protected string NameImpl;

	[Token(Token = "0x40013AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected int PositionImpl;

	[Token(Token = "0x40013B0")]
	private const int MetadataToken_ParamDef = 134217728;

	[Token(Token = "0x170004D0")]
	public virtual ParameterAttributes Attributes
	{
		[Token(Token = "0x60024D0")]
		[Address(RVA = "0x53DAFD0", Offset = "0x53D9FD0", VA = "0x53DAFD0", Slot = "8")]
		get
		{
			return default(ParameterAttributes);
		}
	}

	[Token(Token = "0x170004D1")]
	public virtual MemberInfo Member
	{
		[Token(Token = "0x60024D1")]
		[Address(RVA = "0x53DAFE0", Offset = "0x53D9FE0", VA = "0x53DAFE0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D2")]
	public virtual string Name
	{
		[Token(Token = "0x60024D2")]
		[Address(RVA = "0x53DAFF0", Offset = "0x53D9FF0", VA = "0x53DAFF0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D3")]
	public virtual Type ParameterType
	{
		[Token(Token = "0x60024D3")]
		[Address(RVA = "0x53DB000", Offset = "0x53DA000", VA = "0x53DB000", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D4")]
	public virtual int Position
	{
		[Token(Token = "0x60024D4")]
		[Address(RVA = "0x53DB010", Offset = "0x53DA010", VA = "0x53DB010", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170004D5")]
	public bool IsIn
	{
		[Token(Token = "0x60024D5")]
		[Address(RVA = "0x53DB020", Offset = "0x53DA020", VA = "0x53DB020")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004D6")]
	public bool IsOptional
	{
		[Token(Token = "0x60024D6")]
		[Address(RVA = "0x53DB040", Offset = "0x53DA040", VA = "0x53DB040")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004D7")]
	public bool IsOut
	{
		[Token(Token = "0x60024D7")]
		[Address(RVA = "0x53DB060", Offset = "0x53DA060", VA = "0x53DB060")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004D8")]
	public virtual object DefaultValue
	{
		[Token(Token = "0x60024D8")]
		[Address(RVA = "0x53DB080", Offset = "0x53DA080", VA = "0x53DB080", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D9")]
	public virtual bool HasDefaultValue
	{
		[Token(Token = "0x60024D9")]
		[Address(RVA = "0x53DB0B0", Offset = "0x53DA0B0", VA = "0x53DB0B0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60024CF")]
	[Address(RVA = "0x53DAFC0", Offset = "0x53D9FC0", VA = "0x53DAFC0")]
	protected ParameterInfo()
	{
	}

	[Token(Token = "0x60024DA")]
	[Address(RVA = "0x53DB0E0", Offset = "0x53DA0E0", VA = "0x53DB0E0", Slot = "15")]
	public virtual bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x60024DB")]
	[Address(RVA = "0x53DB160", Offset = "0x53DA160", VA = "0x53DB160", Slot = "16")]
	public virtual object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60024DC")]
	[Address(RVA = "0x53DB220", Offset = "0x53DA220", VA = "0x53DB220", Slot = "17")]
	public virtual object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60024DD")]
	[Address(RVA = "0x53DB360", Offset = "0x53DA360", VA = "0x53DB360", Slot = "7")]
	public object GetRealObject(StreamingContext context)
	{
		return null;
	}

	[Token(Token = "0x60024DE")]
	[Address(RVA = "0x53DB630", Offset = "0x53DA630", VA = "0x53DB630", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
