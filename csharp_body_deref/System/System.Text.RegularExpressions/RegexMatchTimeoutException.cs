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
[Token(Token = "0x20000B6")]
public class RegexMatchTimeoutException : TimeoutException, ISerializable
{
	[Token(Token = "0x170000B8")]
	public string Input
	{
		[Token(Token = "0x60003F3")]
		[Address(RVA = "0x61F4980", Offset = "0x61F3980", VA = "0x61F4980")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B9")]
	public string Pattern
	{
		[Token(Token = "0x60003F4")]
		[Address(RVA = "0x61F4990", Offset = "0x61F3990", VA = "0x61F4990")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BA")]
	public TimeSpan MatchTimeout
	{
		[Token(Token = "0x60003F5")]
		[Address(RVA = "0x61F49A0", Offset = "0x61F39A0", VA = "0x61F49A0")]
		[CompilerGenerated]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x61F4560", Offset = "0x61F3560", VA = "0x61F4560")]
	public RegexMatchTimeoutException(string regexInput, string regexPattern, TimeSpan matchTimeout)
	{
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x61F4670", Offset = "0x61F3670", VA = "0x61F4670")]
	public RegexMatchTimeoutException()
	{
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x61F4720", Offset = "0x61F3720", VA = "0x61F4720")]
	protected RegexMatchTimeoutException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x61F4890", Offset = "0x61F3890", VA = "0x61F4890", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
