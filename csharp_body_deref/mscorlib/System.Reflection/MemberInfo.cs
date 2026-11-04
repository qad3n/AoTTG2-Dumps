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
[Token(Token = "0x2000513")]
public abstract class MemberInfo : ICustomAttributeProvider
{
	[Token(Token = "0x170004B5")]
	public abstract MemberTypes MemberType
	{
		[Token(Token = "0x60024B1")]
		get;
	}

	[Token(Token = "0x170004B6")]
	public abstract string Name
	{
		[Token(Token = "0x60024B2")]
		get;
	}

	[Token(Token = "0x170004B7")]
	public abstract Type DeclaringType
	{
		[Token(Token = "0x60024B3")]
		get;
	}

	[Token(Token = "0x170004B8")]
	public abstract Type ReflectedType
	{
		[Token(Token = "0x60024B4")]
		get;
	}

	[Token(Token = "0x170004B9")]
	public virtual Module Module
	{
		[Token(Token = "0x60024B5")]
		[Address(RVA = "0x1A49EB0", Offset = "0x1A484B0", VA = "0x181A49EB0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004BA")]
	public virtual int MetadataToken
	{
		[Token(Token = "0x60024B9")]
		[Address(RVA = "0x1A49E70", Offset = "0x1A48470", VA = "0x181A49E70", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60024B0")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected MemberInfo()
	{
	}

	[Token(Token = "0x60024B6")]
	public abstract bool IsDefined(Type attributeType, bool inherit);

	[Token(Token = "0x60024B7")]
	public abstract object[] GetCustomAttributes(bool inherit);

	[Token(Token = "0x60024B8")]
	public abstract object[] GetCustomAttributes(Type attributeType, bool inherit);

	[Token(Token = "0x60024BA")]
	[Address(RVA = "0x1A40580", Offset = "0x1A3EB80", VA = "0x181A40580", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60024BB")]
	[Address(RVA = "0x198AC80", Offset = "0x1989280", VA = "0x18198AC80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60024BC")]
	[Address(RVA = "0x1A49F60", Offset = "0x1A48560", VA = "0x181A49F60")]
	public static bool operator ==(MemberInfo left, MemberInfo right)
	{
		return default(bool);
	}

	[Token(Token = "0x60024BD")]
	[Address(RVA = "0x1A4A2F0", Offset = "0x1A488F0", VA = "0x181A4A2F0")]
	public static bool operator !=(MemberInfo left, MemberInfo right)
	{
		return default(bool);
	}
}
