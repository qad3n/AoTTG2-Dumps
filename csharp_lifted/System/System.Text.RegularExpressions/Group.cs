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
[Token(Token = "0x20000A1")]
public class Group : Capture
{
	[Token(Token = "0x4000275")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Group s_emptyGroup;

	[Token(Token = "0x4000276")]
	[FieldOffset(Offset = "0x20")]
	internal readonly int[] _caps;

	[Token(Token = "0x4000277")]
	[FieldOffset(Offset = "0x28")]
	internal int _capcount;

	[Token(Token = "0x4000278")]
	[FieldOffset(Offset = "0x30")]
	internal CaptureCollection _capcoll;

	[Token(Token = "0x4000279")]
	[FieldOffset(Offset = "0x38")]
	[CompilerGenerated]
	private readonly string _003CName_003Ek__BackingField;

	[Token(Token = "0x1700009A")]
	public bool Success
	{
		[Token(Token = "0x60002E5")]
		[Address(RVA = "0x61DEEB0", Offset = "0x61DDEB0", VA = "0x61DEEB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x61DEDF0", Offset = "0x61DDDF0", VA = "0x61DEDF0")]
	internal Group(string text, int[] caps, int capcount, string name)
	{
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x61DF050", Offset = "0x61DE050", VA = "0x61DF050")]
	internal Group()
	{
	}
}
