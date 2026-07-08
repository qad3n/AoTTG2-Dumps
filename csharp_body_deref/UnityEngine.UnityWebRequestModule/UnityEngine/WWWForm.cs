using System.Text;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000003")]
public class WWWForm
{
	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x0")]
	private static byte[] dDash;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x8")]
	private static byte[] crlf;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x10")]
	private static byte[] contentTypeHeader;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x18")]
	private static byte[] dispositionHeader;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x20")]
	private static byte[] endQuote;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x28")]
	private static byte[] fileNameField;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x30")]
	private static byte[] ampersand;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x38")]
	private static byte[] equal;

	[Token(Token = "0x17000001")]
	internal static Encoding DefaultEncoding
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x4DDD770", Offset = "0x4DDD770", VA = "0x4DDD770")]
		get
		{
			return null;
		}
	}
}
