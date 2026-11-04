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
[Token(Token = "0x20000E0")]
public class Group : Capture
{
	[Token(Token = "0x4000344")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Group s_emptyGroup;

	[Token(Token = "0x4000345")]
	[FieldOffset(Offset = "0x20")]
	internal readonly int[] _caps;

	[Token(Token = "0x4000346")]
	[FieldOffset(Offset = "0x28")]
	internal int _capcount;

	[Token(Token = "0x4000347")]
	[FieldOffset(Offset = "0x30")]
	internal CaptureCollection _capcoll;

	[Token(Token = "0x4000348")]
	[FieldOffset(Offset = "0x38")]
	[CompilerGenerated]
	private readonly string _003CName_003Ek__BackingField;

	[Token(Token = "0x170000C9")]
	public bool Success
	{
		[Token(Token = "0x6000499")]
		[Address(RVA = "0x284C380", Offset = "0x284A980", VA = "0x18284C380")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x284C2C0", Offset = "0x284A8C0", VA = "0x18284C2C0")]
	internal Group(string text, int[] caps, int capcount, string name)
	{
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x284C290", Offset = "0x284A890", VA = "0x18284C290")]
	internal Group()
	{
	}
}
