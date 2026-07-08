using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x20004EA")]
public abstract class Module : ICustomAttributeProvider, ISerializable, _Module
{
	[Token(Token = "0x400143B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly TypeFilter FilterTypeName;

	[Token(Token = "0x400143C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly TypeFilter FilterTypeNameIgnoreCase;

	[Token(Token = "0x400143D")]
	private const BindingFlags DefaultLookup = BindingFlags.Instance | BindingFlags.Static | BindingFlags.Public;

	[Token(Token = "0x170004CA")]
	public virtual Assembly Assembly
	{
		[Token(Token = "0x600246E")]
		[Address(RVA = "0x4EEDBC0", Offset = "0x4EEDBC0", VA = "0x4EEDBC0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004CB")]
	public virtual string FullyQualifiedName
	{
		[Token(Token = "0x600246F")]
		[Address(RVA = "0x4EEDBF0", Offset = "0x4EEDBF0", VA = "0x4EEDBF0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004CC")]
	public virtual Guid ModuleVersionId
	{
		[Token(Token = "0x6002470")]
		[Address(RVA = "0x4EEDC20", Offset = "0x4EEDC20", VA = "0x4EEDC20", Slot = "10")]
		get
		{
			return default(Guid);
		}
	}

	[Token(Token = "0x170004CD")]
	public virtual string ScopeName
	{
		[Token(Token = "0x6002471")]
		[Address(RVA = "0x4EEDC50", Offset = "0x4EEDC50", VA = "0x4EEDC50", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600246D")]
	[Address(RVA = "0x4EEDBB0", Offset = "0x4EEDBB0", VA = "0x4EEDBB0")]
	protected Module()
	{
	}

	[Token(Token = "0x6002472")]
	[Address(RVA = "0x4EEDC80", Offset = "0x4EEDC80", VA = "0x4EEDC80", Slot = "12")]
	public virtual bool IsResource()
	{
		return default(bool);
	}

	[Token(Token = "0x6002473")]
	[Address(RVA = "0x4EEDCB0", Offset = "0x4EEDCB0", VA = "0x4EEDCB0", Slot = "13")]
	public virtual bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6002474")]
	[Address(RVA = "0x4EEDCE0", Offset = "0x4EEDCE0", VA = "0x4EEDCE0", Slot = "14")]
	public virtual object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002475")]
	[Address(RVA = "0x4EEDD10", Offset = "0x4EEDD10", VA = "0x4EEDD10", Slot = "15")]
	public virtual object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002476")]
	[Address(RVA = "0x4EEDD40", Offset = "0x4EEDD40", VA = "0x4EEDD40", Slot = "16")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002477")]
	[Address(RVA = "0x4EEDD70", Offset = "0x4EEDD70", VA = "0x4EEDD70", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6002478")]
	[Address(RVA = "0x4EEDD80", Offset = "0x4EEDD80", VA = "0x4EEDD80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002479")]
	[Address(RVA = "0x4EEDD90", Offset = "0x4EEDD90", VA = "0x4EEDD90")]
	public static bool operator ==(Module left, Module right)
	{
		return default(bool);
	}

	[Token(Token = "0x600247A")]
	[Address(RVA = "0x4EEDDC0", Offset = "0x4EEDDC0", VA = "0x4EEDDC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600247B")]
	[Address(RVA = "0x4EEDDE0", Offset = "0x4EEDDE0", VA = "0x4EEDDE0")]
	private static bool FilterTypeNameImpl(Type cls, object filterCriteria)
	{
		return default(bool);
	}

	[Token(Token = "0x600247C")]
	[Address(RVA = "0x4EEDF00", Offset = "0x4EEDF00", VA = "0x4EEDF00")]
	private static bool FilterTypeNameIgnoreCaseImpl(Type cls, object filterCriteria)
	{
		return default(bool);
	}

	[Token(Token = "0x600247D")]
	[Address(RVA = "0x4EEE040", Offset = "0x4EEE040", VA = "0x4EEE040", Slot = "17")]
	internal virtual Guid GetModuleVersionId()
	{
		return default(Guid);
	}
}
