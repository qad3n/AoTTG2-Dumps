using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x20004E3")]
public abstract class MemberInfo : ICustomAttributeProvider
{
	[Token(Token = "0x170004B2")]
	public abstract MemberTypes MemberType
	{
		[Token(Token = "0x600242F")]
		get;
	}

	[Token(Token = "0x170004B3")]
	public abstract string Name
	{
		[Token(Token = "0x6002430")]
		get;
	}

	[Token(Token = "0x170004B4")]
	public abstract Type DeclaringType
	{
		[Token(Token = "0x6002431")]
		get;
	}

	[Token(Token = "0x170004B5")]
	public abstract Type ReflectedType
	{
		[Token(Token = "0x6002432")]
		get;
	}

	[Token(Token = "0x170004B6")]
	public virtual Module Module
	{
		[Token(Token = "0x6002433")]
		[Address(RVA = "0x4EEC890", Offset = "0x4EEC890", VA = "0x4EEC890", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004B7")]
	public virtual int MetadataToken
	{
		[Token(Token = "0x6002437")]
		[Address(RVA = "0x4EEC940", Offset = "0x4EEC940", VA = "0x4EEC940", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600242E")]
	[Address(RVA = "0x4EEAF00", Offset = "0x4EEAF00", VA = "0x4EEAF00")]
	protected MemberInfo()
	{
	}

	[Token(Token = "0x6002434")]
	public abstract bool IsDefined(Type attributeType, bool inherit);

	[Token(Token = "0x6002435")]
	public abstract object[] GetCustomAttributes(bool inherit);

	[Token(Token = "0x6002436")]
	public abstract object[] GetCustomAttributes(Type attributeType, bool inherit);

	[Token(Token = "0x6002438")]
	[Address(RVA = "0x4EEB080", Offset = "0x4EEB080", VA = "0x4EEB080", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002439")]
	[Address(RVA = "0x4EEB0A0", Offset = "0x4EEB0A0", VA = "0x4EEB0A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600243A")]
	[Address(RVA = "0x4EEC980", Offset = "0x4EEC980", VA = "0x4EEC980")]
	public static bool operator ==(MemberInfo left, MemberInfo right)
	{
		return default(bool);
	}

	[Token(Token = "0x600243B")]
	[Address(RVA = "0x4EECF50", Offset = "0x4EECF50", VA = "0x4EECF50")]
	public static bool operator !=(MemberInfo left, MemberInfo right)
	{
		return default(bool);
	}
}
