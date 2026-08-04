// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.Group
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4901900", Offset = "0x4901900", VA = "0x4901900")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x4901840", Offset = "0x4901840", VA = "0x4901840")]
	internal Group(string text, int[] caps, int capcount, string name)
	{
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x4901AA0", Offset = "0x4901AA0", VA = "0x4901AA0")]
	internal Group()
	{
	}
}
