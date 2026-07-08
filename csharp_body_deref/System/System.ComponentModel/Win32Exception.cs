using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Serializable]
[Token(Token = "0x200031B")]
public class Win32Exception : ExternalException, ISerializable
{
	[Token(Token = "0x4000EC2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private readonly int nativeErrorCode;

	[Token(Token = "0x1700048E")]
	public int NativeErrorCode
	{
		[Token(Token = "0x60014E5")]
		[Address(RVA = "0x45B9690", Offset = "0x45B9690", VA = "0x45B9690")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60014DF")]
	[Address(RVA = "0x45B8A90", Offset = "0x45B8A90", VA = "0x45B8A90")]
	public Win32Exception()
	{
	}

	[Token(Token = "0x60014E0")]
	[Address(RVA = "0x45B8B00", Offset = "0x45B8B00", VA = "0x45B8B00")]
	public Win32Exception(int error)
	{
	}

	[Token(Token = "0x60014E1")]
	[Address(RVA = "0x45B9520", Offset = "0x45B9520", VA = "0x45B9520")]
	public Win32Exception(int error, string message)
	{
	}

	[Token(Token = "0x60014E2")]
	[Address(RVA = "0x45B9540", Offset = "0x45B9540", VA = "0x45B9540")]
	public Win32Exception(string message)
	{
	}

	[Token(Token = "0x60014E3")]
	[Address(RVA = "0x45B95A0", Offset = "0x45B95A0", VA = "0x45B95A0")]
	public Win32Exception(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60014E4")]
	[Address(RVA = "0x45B9610", Offset = "0x45B9610", VA = "0x45B9610")]
	protected Win32Exception(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60014E6")]
	[Address(RVA = "0x45B96A0", Offset = "0x45B96A0", VA = "0x45B96A0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60014E7")]
	[Address(RVA = "0x45B8B30", Offset = "0x45B8B30", VA = "0x45B8B30")]
	internal static string GetErrorMessage(int error)
	{
		return null;
	}
}
