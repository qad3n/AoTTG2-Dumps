using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Globalization;

[Serializable]
[Token(Token = "0x2000597")]
public class CultureNotFoundException : ArgumentException
{
	[Token(Token = "0x4001777")]
	[FieldOffset(Offset = "0x98")]
	private string _invalidCultureName;

	[Token(Token = "0x4001778")]
	[FieldOffset(Offset = "0xA0")]
	private int? _invalidCultureId;

	[Token(Token = "0x17000643")]
	public virtual int? InvalidCultureId
	{
		[Token(Token = "0x6002BA3")]
		[Address(RVA = "0x4F5AB50", Offset = "0x4F5AB50", VA = "0x4F5AB50", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000644")]
	public virtual string InvalidCultureName
	{
		[Token(Token = "0x6002BA4")]
		[Address(RVA = "0x4F5AB60", Offset = "0x4F5AB60", VA = "0x4F5AB60", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000645")]
	private static string DefaultMessage
	{
		[Token(Token = "0x6002BA5")]
		[Address(RVA = "0x4F5A850", Offset = "0x4F5A850", VA = "0x4F5A850")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000646")]
	private string FormatedInvalidCultureId
	{
		[Token(Token = "0x6002BA6")]
		[Address(RVA = "0x4F5AB70", Offset = "0x4F5AB70", VA = "0x4F5AB70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000647")]
	public override string Message
	{
		[Token(Token = "0x6002BA7")]
		[Address(RVA = "0x4F5AC90", Offset = "0x4F5AC90", VA = "0x4F5AC90", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002B9F")]
	[Address(RVA = "0x4F5A810", Offset = "0x4F5A810", VA = "0x4F5A810")]
	public CultureNotFoundException()
	{
	}

	[Token(Token = "0x6002BA0")]
	[Address(RVA = "0x4F5A880", Offset = "0x4F5A880", VA = "0x4F5A880")]
	public CultureNotFoundException(string paramName, string message)
	{
	}

	[Token(Token = "0x6002BA1")]
	[Address(RVA = "0x4F5A890", Offset = "0x4F5A890", VA = "0x4F5A890")]
	protected CultureNotFoundException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002BA2")]
	[Address(RVA = "0x4F5AA20", Offset = "0x4F5AA20", VA = "0x4F5AA20", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
