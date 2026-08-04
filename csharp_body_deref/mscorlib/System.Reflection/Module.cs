// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.Module
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
		[Address(RVA = "0x3BD36E0", Offset = "0x3BD36E0", VA = "0x3BD36E0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004CB")]
	public virtual string FullyQualifiedName
	{
		[Token(Token = "0x600246F")]
		[Address(RVA = "0x3BD3710", Offset = "0x3BD3710", VA = "0x3BD3710", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004CC")]
	public virtual Guid ModuleVersionId
	{
		[Token(Token = "0x6002470")]
		[Address(RVA = "0x3BD3740", Offset = "0x3BD3740", VA = "0x3BD3740", Slot = "10")]
		get
		{
			return default(Guid);
		}
	}

	[Token(Token = "0x170004CD")]
	public virtual string ScopeName
	{
		[Token(Token = "0x6002471")]
		[Address(RVA = "0x3BD3770", Offset = "0x3BD3770", VA = "0x3BD3770", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600246D")]
	[Address(RVA = "0x3BD36D0", Offset = "0x3BD36D0", VA = "0x3BD36D0")]
	protected Module()
	{
	}

	[Token(Token = "0x6002472")]
	[Address(RVA = "0x3BD37A0", Offset = "0x3BD37A0", VA = "0x3BD37A0", Slot = "12")]
	public virtual bool IsResource()
	{
		return default(bool);
	}

	[Token(Token = "0x6002473")]
	[Address(RVA = "0x3BD37D0", Offset = "0x3BD37D0", VA = "0x3BD37D0", Slot = "13")]
	public virtual bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6002474")]
	[Address(RVA = "0x3BD3800", Offset = "0x3BD3800", VA = "0x3BD3800", Slot = "14")]
	public virtual object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002475")]
	[Address(RVA = "0x3BD3830", Offset = "0x3BD3830", VA = "0x3BD3830", Slot = "15")]
	public virtual object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002476")]
	[Address(RVA = "0x3BD3860", Offset = "0x3BD3860", VA = "0x3BD3860", Slot = "16")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002477")]
	[Address(RVA = "0x3BD3890", Offset = "0x3BD3890", VA = "0x3BD3890", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6002478")]
	[Address(RVA = "0x3BD38A0", Offset = "0x3BD38A0", VA = "0x3BD38A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002479")]
	[Address(RVA = "0x3BD38B0", Offset = "0x3BD38B0", VA = "0x3BD38B0")]
	public static bool operator ==(Module left, Module right)
	{
		return default(bool);
	}

	[Token(Token = "0x600247A")]
	[Address(RVA = "0x3BD38E0", Offset = "0x3BD38E0", VA = "0x3BD38E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600247B")]
	[Address(RVA = "0x3BD3900", Offset = "0x3BD3900", VA = "0x3BD3900")]
	private static bool FilterTypeNameImpl(Type cls, object filterCriteria)
	{
		return default(bool);
	}

	[Token(Token = "0x600247C")]
	[Address(RVA = "0x3BD3A20", Offset = "0x3BD3A20", VA = "0x3BD3A20")]
	private static bool FilterTypeNameIgnoreCaseImpl(Type cls, object filterCriteria)
	{
		return default(bool);
	}

	[Token(Token = "0x600247D")]
	[Address(RVA = "0x3BD3B60", Offset = "0x3BD3B60", VA = "0x3BD3B60", Slot = "17")]
	internal virtual Guid GetModuleVersionId()
	{
		return default(Guid);
	}
}
