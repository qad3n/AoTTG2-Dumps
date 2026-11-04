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
[Token(Token = "0x200051A")]
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

	[Token(Token = "0x170004CD")]
	public virtual Assembly Assembly
	{
		[Token(Token = "0x60024F0")]
		[Address(RVA = "0x1A4B750", Offset = "0x1A49D50", VA = "0x181A4B750", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004CE")]
	public virtual string FullyQualifiedName
	{
		[Token(Token = "0x60024F1")]
		[Address(RVA = "0x1A4B780", Offset = "0x1A49D80", VA = "0x181A4B780", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004CF")]
	public virtual Guid ModuleVersionId
	{
		[Token(Token = "0x60024F2")]
		[Address(RVA = "0x1A4B7B0", Offset = "0x1A49DB0", VA = "0x181A4B7B0", Slot = "10")]
		get
		{
			return default(Guid);
		}
	}

	[Token(Token = "0x170004D0")]
	public virtual string ScopeName
	{
		[Token(Token = "0x60024F3")]
		[Address(RVA = "0x1A4B7E0", Offset = "0x1A49DE0", VA = "0x181A4B7E0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60024EF")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected Module()
	{
	}

	[Token(Token = "0x60024F4")]
	[Address(RVA = "0x1A4B610", Offset = "0x1A49C10", VA = "0x181A4B610", Slot = "12")]
	public virtual bool IsResource()
	{
		return default(bool);
	}

	[Token(Token = "0x60024F5")]
	[Address(RVA = "0x1A4B5E0", Offset = "0x1A49BE0", VA = "0x181A4B5E0", Slot = "13")]
	public virtual bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x60024F6")]
	[Address(RVA = "0x1A4B540", Offset = "0x1A49B40", VA = "0x181A4B540", Slot = "14")]
	public virtual object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60024F7")]
	[Address(RVA = "0x1A4B510", Offset = "0x1A49B10", VA = "0x181A4B510", Slot = "15")]
	public virtual object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60024F8")]
	[Address(RVA = "0x1A4B5B0", Offset = "0x1A49BB0", VA = "0x181A4B5B0", Slot = "16")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60024F9")]
	[Address(RVA = "0x1A40580", Offset = "0x1A3EB80", VA = "0x181A40580", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x60024FA")]
	[Address(RVA = "0x198AC80", Offset = "0x1989280", VA = "0x18198AC80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60024FB")]
	[Address(RVA = "0x1A41670", Offset = "0x1A3FC70", VA = "0x181A41670")]
	public static bool operator ==(Module left, Module right)
	{
		return default(bool);
	}

	[Token(Token = "0x60024FC")]
	[Address(RVA = "0x1A4B640", Offset = "0x1A49C40", VA = "0x181A4B640", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60024FD")]
	[Address(RVA = "0x1A4B3C0", Offset = "0x1A499C0", VA = "0x181A4B3C0")]
	private static bool FilterTypeNameImpl(Type cls, object filterCriteria)
	{
		return default(bool);
	}

	[Token(Token = "0x60024FE")]
	[Address(RVA = "0x1A4B230", Offset = "0x1A49830", VA = "0x181A4B230")]
	private static bool FilterTypeNameIgnoreCaseImpl(Type cls, object filterCriteria)
	{
		return default(bool);
	}

	[Token(Token = "0x60024FF")]
	[Address(RVA = "0x1A4B570", Offset = "0x1A49B70", VA = "0x181A4B570", Slot = "17")]
	internal virtual Guid GetModuleVersionId()
	{
		return default(Guid);
	}
}
