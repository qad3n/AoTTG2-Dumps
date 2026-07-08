using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Serializable]
[Token(Token = "0x2000300")]
public class LicenseException : SystemException
{
	[Token(Token = "0x4000E55")]
	[FieldOffset(Offset = "0x90")]
	private Type type;

	[Token(Token = "0x4000E56")]
	[FieldOffset(Offset = "0x98")]
	private object instance;

	[Token(Token = "0x17000462")]
	public Type LicensedType
	{
		[Token(Token = "0x6001362")]
		[Address(RVA = "0x458F0D0", Offset = "0x458F0D0", VA = "0x458F0D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600135D")]
	[Address(RVA = "0x458EBD0", Offset = "0x458EBD0", VA = "0x458EBD0")]
	public LicenseException(Type type)
	{
	}

	[Token(Token = "0x600135E")]
	[Address(RVA = "0x458ED60", Offset = "0x458ED60", VA = "0x458ED60")]
	public LicenseException(Type type, object instance)
	{
	}

	[Token(Token = "0x600135F")]
	[Address(RVA = "0x458ED00", Offset = "0x458ED00", VA = "0x458ED00")]
	public LicenseException(Type type, object instance, string message)
	{
	}

	[Token(Token = "0x6001360")]
	[Address(RVA = "0x458EF00", Offset = "0x458EF00", VA = "0x458EF00")]
	public LicenseException(Type type, object instance, string message, Exception innerException)
	{
	}

	[Token(Token = "0x6001361")]
	[Address(RVA = "0x458EF60", Offset = "0x458EF60", VA = "0x458EF60")]
	protected LicenseException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001363")]
	[Address(RVA = "0x458F0E0", Offset = "0x458F0E0", VA = "0x458F0E0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
