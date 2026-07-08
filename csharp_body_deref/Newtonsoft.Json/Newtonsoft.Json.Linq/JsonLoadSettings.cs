using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq;

[Token(Token = "0x200017D")]
public class JsonLoadSettings
{
	[Token(Token = "0x40006FC")]
	[FieldOffset(Offset = "0x10")]
	private CommentHandling _commentHandling;

	[Token(Token = "0x40006FD")]
	[FieldOffset(Offset = "0x14")]
	private LineInfoHandling _lineInfoHandling;

	[Token(Token = "0x40006FE")]
	[FieldOffset(Offset = "0x18")]
	private DuplicatePropertyNameHandling _duplicatePropertyNameHandling;

	[Token(Token = "0x1700020B")]
	public CommentHandling CommentHandling
	{
		[Token(Token = "0x6000C97")]
		[Address(RVA = "0x3B27390", Offset = "0x3B27390", VA = "0x3B27390")]
		get
		{
			return default(CommentHandling);
		}
		[Token(Token = "0x6000C98")]
		[Address(RVA = "0x3B273A0", Offset = "0x3B273A0", VA = "0x3B273A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700020C")]
	public LineInfoHandling LineInfoHandling
	{
		[Token(Token = "0x6000C99")]
		[Address(RVA = "0x3B27400", Offset = "0x3B27400", VA = "0x3B27400")]
		get
		{
			return default(LineInfoHandling);
		}
		[Token(Token = "0x6000C9A")]
		[Address(RVA = "0x3B27410", Offset = "0x3B27410", VA = "0x3B27410")]
		set
		{
		}
	}

	[Token(Token = "0x1700020D")]
	public DuplicatePropertyNameHandling DuplicatePropertyNameHandling
	{
		[Token(Token = "0x6000C9B")]
		[Address(RVA = "0x3B27470", Offset = "0x3B27470", VA = "0x3B27470")]
		get
		{
			return default(DuplicatePropertyNameHandling);
		}
		[Token(Token = "0x6000C9C")]
		[Address(RVA = "0x3B27480", Offset = "0x3B27480", VA = "0x3B27480")]
		set
		{
		}
	}

	[Token(Token = "0x6000C96")]
	[Address(RVA = "0x3B27360", Offset = "0x3B27360", VA = "0x3B27360")]
	public JsonLoadSettings()
	{
	}
}
