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
		[Address(RVA = "0x48B41D0", Offset = "0x48B41D0", VA = "0x48B41D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600135D")]
	[Address(RVA = "0x48B3CD0", Offset = "0x48B3CD0", VA = "0x48B3CD0")]
	public LicenseException(Type type)
	{
	}

	[Token(Token = "0x600135E")]
	[Address(RVA = "0x48B3E60", Offset = "0x48B3E60", VA = "0x48B3E60")]
	public LicenseException(Type type, object instance)
	{
	}

	[Token(Token = "0x600135F")]
	[Address(RVA = "0x48B3E00", Offset = "0x48B3E00", VA = "0x48B3E00")]
	public LicenseException(Type type, object instance, string message)
	{
	}

	[Token(Token = "0x6001360")]
	[Address(RVA = "0x48B4000", Offset = "0x48B4000", VA = "0x48B4000")]
	public LicenseException(Type type, object instance, string message, Exception innerException)
	{
	}

	[Token(Token = "0x6001361")]
	[Address(RVA = "0x48B4060", Offset = "0x48B4060", VA = "0x48B4060")]
	protected LicenseException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001363")]
	[Address(RVA = "0x48B41E0", Offset = "0x48B41E0", VA = "0x48B41E0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
