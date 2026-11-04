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
[Token(Token = "0x200051C")]
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

	[Token(Token = "0x170004D1")]
	public virtual ParameterAttributes Attributes
	{
		[Token(Token = "0x6002502")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "8")]
		get
		{
			return default(ParameterAttributes);
		}
	}

	[Token(Token = "0x170004D2")]
	public virtual MemberInfo Member
	{
		[Token(Token = "0x6002503")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D3")]
	public virtual string Name
	{
		[Token(Token = "0x6002504")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D4")]
	public virtual Type ParameterType
	{
		[Token(Token = "0x6002505")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D5")]
	public virtual int Position
	{
		[Token(Token = "0x6002506")]
		[Address(RVA = "0x172E4A0", Offset = "0x172CAA0", VA = "0x18172E4A0", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170004D6")]
	public bool IsIn
	{
		[Token(Token = "0x6002507")]
		[Address(RVA = "0x1A4BEA0", Offset = "0x1A4A4A0", VA = "0x181A4BEA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004D7")]
	public bool IsOptional
	{
		[Token(Token = "0x6002508")]
		[Address(RVA = "0x1A4BEC0", Offset = "0x1A4A4C0", VA = "0x181A4BEC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004D8")]
	public bool IsOut
	{
		[Token(Token = "0x6002509")]
		[Address(RVA = "0x1A4BEE0", Offset = "0x1A4A4E0", VA = "0x181A4BEE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004D9")]
	public virtual object DefaultValue
	{
		[Token(Token = "0x600250A")]
		[Address(RVA = "0x1A4BE40", Offset = "0x1A4A440", VA = "0x181A4BE40", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004DA")]
	public virtual bool HasDefaultValue
	{
		[Token(Token = "0x600250B")]
		[Address(RVA = "0x1A4BE70", Offset = "0x1A4A470", VA = "0x181A4BE70", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002501")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected ParameterInfo()
	{
	}

	[Token(Token = "0x600250C")]
	[Address(RVA = "0x1A4BD30", Offset = "0x1A4A330", VA = "0x181A4BD30", Slot = "15")]
	public virtual bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x600250D")]
	[Address(RVA = "0x1A4B8A0", Offset = "0x1A49EA0", VA = "0x181A4B8A0", Slot = "16")]
	public virtual object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x600250E")]
	[Address(RVA = "0x1A4B8D0", Offset = "0x1A49ED0", VA = "0x181A4B8D0", Slot = "17")]
	public virtual object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x600250F")]
	[Address(RVA = "0x1A4B980", Offset = "0x1A49F80", VA = "0x181A4B980", Slot = "7")]
	public object GetRealObject(StreamingContext context)
	{
		return null;
	}

	[Token(Token = "0x6002510")]
	[Address(RVA = "0x1A4BDB0", Offset = "0x1A4A3B0", VA = "0x181A4BDB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
