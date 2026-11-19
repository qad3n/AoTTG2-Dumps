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
[Token(Token = "0x20004F3")]
public abstract class Module : ICustomAttributeProvider, ISerializable, _Module
{
	[Token(Token = "0x400139B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly TypeFilter FilterTypeName;

	[Token(Token = "0x400139C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly TypeFilter FilterTypeNameIgnoreCase;

	[Token(Token = "0x400139D")]
	private const BindingFlags DefaultLookup = BindingFlags.Instance | BindingFlags.Static | BindingFlags.Public;

	[Token(Token = "0x170004CC")]
	public virtual Assembly Assembly
	{
		[Token(Token = "0x60024BE")]
		[Address(RVA = "0x53DA940", Offset = "0x53D9940", VA = "0x53DA940", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004CD")]
	public virtual string FullyQualifiedName
	{
		[Token(Token = "0x60024BF")]
		[Address(RVA = "0x53DA970", Offset = "0x53D9970", VA = "0x53DA970", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004CE")]
	public virtual Guid ModuleVersionId
	{
		[Token(Token = "0x60024C0")]
		[Address(RVA = "0x53DA9A0", Offset = "0x53D99A0", VA = "0x53DA9A0", Slot = "10")]
		get
		{
			return default(Guid);
		}
	}

	[Token(Token = "0x170004CF")]
	public virtual string ScopeName
	{
		[Token(Token = "0x60024C1")]
		[Address(RVA = "0x53DA9D0", Offset = "0x53D99D0", VA = "0x53DA9D0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60024BD")]
	[Address(RVA = "0x53DA930", Offset = "0x53D9930", VA = "0x53DA930")]
	protected Module()
	{
	}

	[Token(Token = "0x60024C2")]
	[Address(RVA = "0x53DAA00", Offset = "0x53D9A00", VA = "0x53DAA00", Slot = "12")]
	public virtual bool IsResource()
	{
		return default(bool);
	}

	[Token(Token = "0x60024C3")]
	[Address(RVA = "0x53DAA30", Offset = "0x53D9A30", VA = "0x53DAA30", Slot = "13")]
	public virtual bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x60024C4")]
	[Address(RVA = "0x53DAA60", Offset = "0x53D9A60", VA = "0x53DAA60", Slot = "14")]
	public virtual object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60024C5")]
	[Address(RVA = "0x53DAA90", Offset = "0x53D9A90", VA = "0x53DAA90", Slot = "15")]
	public virtual object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60024C6")]
	[Address(RVA = "0x53DAAC0", Offset = "0x53D9AC0", VA = "0x53DAAC0", Slot = "16")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60024C7")]
	[Address(RVA = "0x53DAAF0", Offset = "0x53D9AF0", VA = "0x53DAAF0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x60024C8")]
	[Address(RVA = "0x53DAB00", Offset = "0x53D9B00", VA = "0x53DAB00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60024C9")]
	[Address(RVA = "0x53DAB10", Offset = "0x53D9B10", VA = "0x53DAB10")]
	public static bool operator ==(Module left, Module right)
	{
		return default(bool);
	}

	[Token(Token = "0x60024CA")]
	[Address(RVA = "0x53DAB40", Offset = "0x53D9B40", VA = "0x53DAB40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60024CB")]
	[Address(RVA = "0x53DAB60", Offset = "0x53D9B60", VA = "0x53DAB60")]
	private static bool FilterTypeNameImpl(Type cls, object filterCriteria)
	{
		return default(bool);
	}

	[Token(Token = "0x60024CC")]
	[Address(RVA = "0x53DAC70", Offset = "0x53D9C70", VA = "0x53DAC70")]
	private static bool FilterTypeNameIgnoreCaseImpl(Type cls, object filterCriteria)
	{
		return default(bool);
	}

	[Token(Token = "0x60024CD")]
	[Address(RVA = "0x53DADB0", Offset = "0x53D9DB0", VA = "0x53DADB0", Slot = "17")]
	internal virtual Guid GetModuleVersionId()
	{
		return default(Guid);
	}
}
