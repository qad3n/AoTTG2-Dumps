using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Serializable]
[Token(Token = "0x2000431")]
public class ExternalException : SystemException
{
	[Token(Token = "0x1700045D")]
	public virtual int ErrorCode
	{
		[Token(Token = "0x60021AE")]
		[Address(RVA = "0x4ED7180", Offset = "0x4ED7180", VA = "0x4ED7180", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60021A9")]
	[Address(RVA = "0x4ED70D0", Offset = "0x4ED70D0", VA = "0x4ED70D0")]
	public ExternalException()
	{
	}

	[Token(Token = "0x60021AA")]
	[Address(RVA = "0x4ED7110", Offset = "0x4ED7110", VA = "0x4ED7110")]
	public ExternalException(string message)
	{
	}

	[Token(Token = "0x60021AB")]
	[Address(RVA = "0x4ED7130", Offset = "0x4ED7130", VA = "0x4ED7130")]
	public ExternalException(string message, Exception inner)
	{
	}

	[Token(Token = "0x60021AC")]
	[Address(RVA = "0x4ED7150", Offset = "0x4ED7150", VA = "0x4ED7150")]
	public ExternalException(string message, int errorCode)
	{
	}

	[Token(Token = "0x60021AD")]
	[Address(RVA = "0x4ED7170", Offset = "0x4ED7170", VA = "0x4ED7170")]
	protected ExternalException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60021AF")]
	[Address(RVA = "0x4ED7190", Offset = "0x4ED7190", VA = "0x4ED7190", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
