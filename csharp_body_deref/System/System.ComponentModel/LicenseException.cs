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
[Token(Token = "0x200020B")]
public class LicenseException : SystemException
{
	[Token(Token = "0x400078C")]
	[FieldOffset(Offset = "0x90")]
	private Type type;

	[Token(Token = "0x400078D")]
	[FieldOffset(Offset = "0x98")]
	private object instance;

	[Token(Token = "0x170002D1")]
	public Type LicensedType
	{
		[Token(Token = "0x6000DAA")]
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000DA5")]
	[Address(RVA = "0x28B4340", Offset = "0x28B2940", VA = "0x1828B4340")]
	public LicenseException(Type type)
	{
	}

	[Token(Token = "0x6000DA6")]
	[Address(RVA = "0x28B4000", Offset = "0x28B2600", VA = "0x1828B4000")]
	public LicenseException(Type type, object instance)
	{
	}

	[Token(Token = "0x6000DA7")]
	[Address(RVA = "0x28B3F90", Offset = "0x28B2590", VA = "0x1828B3F90")]
	public LicenseException(Type type, object instance, string message)
	{
	}

	[Token(Token = "0x6000DA8")]
	[Address(RVA = "0x28B3F20", Offset = "0x28B2520", VA = "0x1828B3F20")]
	public LicenseException(Type type, object instance, string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000DA9")]
	[Address(RVA = "0x28B41B0", Offset = "0x28B27B0", VA = "0x1828B41B0")]
	protected LicenseException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000DAB")]
	[Address(RVA = "0x28B3E30", Offset = "0x28B2430", VA = "0x1828B3E30", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
