// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.CaseInsensitiveComparer
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.Collections;

[Serializable]
[Token(Token = "0x20005DC")]
public class CaseInsensitiveComparer : IComparer
{
	[Token(Token = "0x400187E")]
	[FieldOffset(Offset = "0x10")]
	private CompareInfo _compareInfo;

	[Token(Token = "0x170006CD")]
	public static CaseInsensitiveComparer Default
	{
		[Token(Token = "0x6002C13")]
		[Address(RVA = "0x1AB7EC0", Offset = "0x1AB64C0", VA = "0x181AB7EC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002C11")]
	[Address(RVA = "0x1AB7D90", Offset = "0x1AB6390", VA = "0x181AB7D90")]
	public CaseInsensitiveComparer()
	{
	}

	[Token(Token = "0x6002C12")]
	[Address(RVA = "0x1AB7E20", Offset = "0x1AB6420", VA = "0x181AB7E20")]
	public CaseInsensitiveComparer(CultureInfo culture)
	{
	}

	[Token(Token = "0x6002C14")]
	[Address(RVA = "0x1AB7B60", Offset = "0x1AB6160", VA = "0x181AB7B60", Slot = "4")]
	public int Compare(object a, object b)
	{
		return default(int);
	}
}
