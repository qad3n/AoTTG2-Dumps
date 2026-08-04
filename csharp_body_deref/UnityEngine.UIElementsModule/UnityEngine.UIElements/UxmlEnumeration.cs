// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UxmlEnumeration
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000445")]
public class UxmlEnumeration : UxmlTypeRestriction
{
	[Token(Token = "0x4000CAC")]
	[FieldOffset(Offset = "0x10")]
	private List<string> m_Values;

	[Token(Token = "0x17000726")]
	public IEnumerable<string> values
	{
		[Token(Token = "0x6001B00")]
		[Address(RVA = "0x4F6C1F0", Offset = "0x4F6C1F0", VA = "0x4F6C1F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001B01")]
		[Address(RVA = "0x4F6C200", Offset = "0x4F6C200", VA = "0x4F6C200")]
		set
		{
		}
	}

	[Token(Token = "0x6001B02")]
	[Address(RVA = "0x4F6C260", Offset = "0x4F6C260", VA = "0x4F6C260", Slot = "5")]
	public override bool Equals(UxmlTypeRestriction other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B03")]
	[Address(RVA = "0x4F6C390", Offset = "0x4F6C390", VA = "0x4F6C390")]
	public UxmlEnumeration()
	{
	}
}
