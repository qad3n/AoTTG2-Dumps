// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.MemberInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x20004EC")]
public abstract class MemberInfo : ICustomAttributeProvider
{
	[Token(Token = "0x170004B4")]
	public abstract MemberTypes MemberType
	{
		[Token(Token = "0x600247F")]
		get;
	}

	[Token(Token = "0x170004B5")]
	public abstract string Name
	{
		[Token(Token = "0x6002480")]
		get;
	}

	[Token(Token = "0x170004B6")]
	public abstract Type DeclaringType
	{
		[Token(Token = "0x6002481")]
		get;
	}

	[Token(Token = "0x170004B7")]
	public abstract Type ReflectedType
	{
		[Token(Token = "0x6002482")]
		get;
	}

	[Token(Token = "0x170004B8")]
	public virtual Module Module
	{
		[Token(Token = "0x6002483")]
		[Address(RVA = "0x53D95E0", Offset = "0x53D85E0", VA = "0x53D95E0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004B9")]
	public virtual int MetadataToken
	{
		[Token(Token = "0x6002487")]
		[Address(RVA = "0x53D9690", Offset = "0x53D8690", VA = "0x53D9690", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600247E")]
	[Address(RVA = "0x53D7C80", Offset = "0x53D6C80", VA = "0x53D7C80")]
	protected MemberInfo()
	{
	}

	[Token(Token = "0x6002484")]
	public abstract bool IsDefined(Type attributeType, bool inherit);

	[Token(Token = "0x6002485")]
	public abstract object[] GetCustomAttributes(bool inherit);

	[Token(Token = "0x6002486")]
	public abstract object[] GetCustomAttributes(Type attributeType, bool inherit);

	[Token(Token = "0x6002488")]
	[Address(RVA = "0x53D7E00", Offset = "0x53D6E00", VA = "0x53D7E00", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002489")]
	[Address(RVA = "0x53D7E20", Offset = "0x53D6E20", VA = "0x53D7E20", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600248A")]
	[Address(RVA = "0x53D96D0", Offset = "0x53D86D0", VA = "0x53D96D0")]
	public static bool operator ==(MemberInfo left, MemberInfo right)
	{
		return default(bool);
	}

	[Token(Token = "0x600248B")]
	[Address(RVA = "0x53D9C50", Offset = "0x53D8C50", VA = "0x53D9C50")]
	public static bool operator !=(MemberInfo left, MemberInfo right)
	{
		return default(bool);
	}
}
