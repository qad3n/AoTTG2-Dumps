// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.CultureNotFoundException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3C40670", Offset = "0x3C40670", VA = "0x3C40670", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000644")]
	public virtual string InvalidCultureName
	{
		[Token(Token = "0x6002BA4")]
		[Address(RVA = "0x3C40680", Offset = "0x3C40680", VA = "0x3C40680", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000645")]
	private static string DefaultMessage
	{
		[Token(Token = "0x6002BA5")]
		[Address(RVA = "0x3C40370", Offset = "0x3C40370", VA = "0x3C40370")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000646")]
	private string FormatedInvalidCultureId
	{
		[Token(Token = "0x6002BA6")]
		[Address(RVA = "0x3C40690", Offset = "0x3C40690", VA = "0x3C40690")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000647")]
	public override string Message
	{
		[Token(Token = "0x6002BA7")]
		[Address(RVA = "0x3C407B0", Offset = "0x3C407B0", VA = "0x3C407B0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002B9F")]
	[Address(RVA = "0x3C40330", Offset = "0x3C40330", VA = "0x3C40330")]
	public CultureNotFoundException()
	{
	}

	[Token(Token = "0x6002BA0")]
	[Address(RVA = "0x3C403A0", Offset = "0x3C403A0", VA = "0x3C403A0")]
	public CultureNotFoundException(string paramName, string message)
	{
	}

	[Token(Token = "0x6002BA1")]
	[Address(RVA = "0x3C403B0", Offset = "0x3C403B0", VA = "0x3C403B0")]
	protected CultureNotFoundException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002BA2")]
	[Address(RVA = "0x3C40540", Offset = "0x3C40540", VA = "0x3C40540", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
