using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Serializable]
[Token(Token = "0x20000A0")]
public class Group : Capture
{
	[Token(Token = "0x4000272")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Group s_emptyGroup;

	[Token(Token = "0x4000273")]
	[FieldOffset(Offset = "0x20")]
	internal readonly int[] _caps;

	[Token(Token = "0x4000274")]
	[FieldOffset(Offset = "0x28")]
	internal int _capcount;

	[Token(Token = "0x4000275")]
	[FieldOffset(Offset = "0x30")]
	internal CaptureCollection _capcoll;

	[Token(Token = "0x4000276")]
	[FieldOffset(Offset = "0x38")]
	[CompilerGenerated]
	private readonly string _003CName_003Ek__BackingField;

	[Token(Token = "0x17000090")]
	public bool Success
	{
		[Token(Token = "0x60002BF")]
		[Address(RVA = "0x45DC800", Offset = "0x45DC800", VA = "0x45DC800")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x45DC740", Offset = "0x45DC740", VA = "0x45DC740")]
	internal Group(string text, int[] caps, int capcount, string name)
	{
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x45DC9A0", Offset = "0x45DC9A0", VA = "0x45DC9A0")]
	internal Group()
	{
	}
}
