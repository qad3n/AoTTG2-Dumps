// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JsonLoadSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(CommentHandling);
		}
		[Token(Token = "0x6000C98")]
		[Address(RVA = "0x1C88390", Offset = "0x1C86990", VA = "0x181C88390")]
		set
		{
		}
	}

	[Token(Token = "0x1700020C")]
	public LineInfoHandling LineInfoHandling
	{
		[Token(Token = "0x6000C99")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		get
		{
			return default(LineInfoHandling);
		}
		[Token(Token = "0x6000C9A")]
		[Address(RVA = "0x1C88470", Offset = "0x1C86A70", VA = "0x181C88470")]
		set
		{
		}
	}

	[Token(Token = "0x1700020D")]
	public DuplicatePropertyNameHandling DuplicatePropertyNameHandling
	{
		[Token(Token = "0x6000C9B")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(DuplicatePropertyNameHandling);
		}
		[Token(Token = "0x6000C9C")]
		[Address(RVA = "0x1C88400", Offset = "0x1C86A00", VA = "0x181C88400")]
		set
		{
		}
	}

	[Token(Token = "0x6000C96")]
	[Address(RVA = "0x1C88360", Offset = "0x1C86960", VA = "0x181C88360")]
	public JsonLoadSettings()
	{
	}
}
