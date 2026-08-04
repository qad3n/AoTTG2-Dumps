// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.RegexMatchTimeoutException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4917900", Offset = "0x4917900", VA = "0x4917900")]
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
		[Address(RVA = "0x4917910", Offset = "0x4917910", VA = "0x4917910")]
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
		[Address(RVA = "0x4917920", Offset = "0x4917920", VA = "0x4917920")]
		[CompilerGenerated]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x49174E0", Offset = "0x49174E0", VA = "0x49174E0")]
	public RegexMatchTimeoutException(string regexInput, string regexPattern, TimeSpan matchTimeout)
	{
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x49175F0", Offset = "0x49175F0", VA = "0x49175F0")]
	public RegexMatchTimeoutException()
	{
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x49176A0", Offset = "0x49176A0", VA = "0x49176A0")]
	protected RegexMatchTimeoutException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x4917810", Offset = "0x4917810", VA = "0x4917810", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
