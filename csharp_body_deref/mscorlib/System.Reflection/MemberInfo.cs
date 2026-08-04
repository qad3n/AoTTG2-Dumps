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
		[Address(RVA = "0x3BD23B0", Offset = "0x3BD23B0", VA = "0x3BD23B0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004B7")]
	public virtual int MetadataToken
	{
		[Token(Token = "0x6002437")]
		[Address(RVA = "0x3BD2460", Offset = "0x3BD2460", VA = "0x3BD2460", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600242E")]
	[Address(RVA = "0x3BD0A20", Offset = "0x3BD0A20", VA = "0x3BD0A20")]
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
	[Address(RVA = "0x3BD0BA0", Offset = "0x3BD0BA0", VA = "0x3BD0BA0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002439")]
	[Address(RVA = "0x3BD0BC0", Offset = "0x3BD0BC0", VA = "0x3BD0BC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600243A")]
	[Address(RVA = "0x3BD24A0", Offset = "0x3BD24A0", VA = "0x3BD24A0")]
	public static bool operator ==(MemberInfo left, MemberInfo right)
	{
		return default(bool);
	}

	[Token(Token = "0x600243B")]
	[Address(RVA = "0x3BD2A70", Offset = "0x3BD2A70", VA = "0x3BD2A70")]
	public static bool operator !=(MemberInfo left, MemberInfo right)
	{
		return default(bool);
	}
}
