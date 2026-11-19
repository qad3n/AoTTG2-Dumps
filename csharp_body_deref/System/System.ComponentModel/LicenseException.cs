// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.LicenseException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Serializable]
[Token(Token = "0x20001CC")]
public class LicenseException : SystemException
{
	[Token(Token = "0x40006BD")]
	[FieldOffset(Offset = "0x90")]
	private Type type;

	[Token(Token = "0x40006BE")]
	[FieldOffset(Offset = "0x98")]
	private object instance;

	[Token(Token = "0x170002A2")]
	public Type LicensedType
	{
		[Token(Token = "0x6000BEA")]
		[Address(RVA = "0x62532B0", Offset = "0x62522B0", VA = "0x62532B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x6252DB0", Offset = "0x6251DB0", VA = "0x6252DB0")]
	public LicenseException(Type type)
	{
	}

	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x6252F40", Offset = "0x6251F40", VA = "0x6252F40")]
	public LicenseException(Type type, object instance)
	{
	}

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x6252EE0", Offset = "0x6251EE0", VA = "0x6252EE0")]
	public LicenseException(Type type, object instance, string message)
	{
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x62530E0", Offset = "0x62520E0", VA = "0x62530E0")]
	public LicenseException(Type type, object instance, string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x6253140", Offset = "0x6252140", VA = "0x6253140")]
	protected LicenseException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x62532C0", Offset = "0x62522C0", VA = "0x62532C0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
