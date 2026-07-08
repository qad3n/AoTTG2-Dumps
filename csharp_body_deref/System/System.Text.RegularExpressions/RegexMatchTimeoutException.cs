using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Serializable]
[Token(Token = "0x20000B5")]
public class RegexMatchTimeoutException : TimeoutException, ISerializable
{
	[Token(Token = "0x170000AE")]
	public string Input
	{
		[Token(Token = "0x60003CC")]
		[Address(RVA = "0x45F2800", Offset = "0x45F2800", VA = "0x45F2800")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AF")]
	public string Pattern
	{
		[Token(Token = "0x60003CD")]
		[Address(RVA = "0x45F2810", Offset = "0x45F2810", VA = "0x45F2810")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B0")]
	public TimeSpan MatchTimeout
	{
		[Token(Token = "0x60003CE")]
		[Address(RVA = "0x45F2820", Offset = "0x45F2820", VA = "0x45F2820")]
		[CompilerGenerated]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x45F23E0", Offset = "0x45F23E0", VA = "0x45F23E0")]
	public RegexMatchTimeoutException(string regexInput, string regexPattern, TimeSpan matchTimeout)
	{
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x45F24F0", Offset = "0x45F24F0", VA = "0x45F24F0")]
	public RegexMatchTimeoutException()
	{
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x45F25A0", Offset = "0x45F25A0", VA = "0x45F25A0")]
	protected RegexMatchTimeoutException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x45F2710", Offset = "0x45F2710", VA = "0x45F2710", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
