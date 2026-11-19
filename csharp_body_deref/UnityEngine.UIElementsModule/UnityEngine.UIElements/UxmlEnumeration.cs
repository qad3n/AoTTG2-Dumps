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

[Token(Token = "0x2000517")]
public class UxmlEnumeration : UxmlTypeRestriction
{
	[Token(Token = "0x4001117")]
	[FieldOffset(Offset = "0x10")]
	private List<string> m_Values;

	[Token(Token = "0x170009FD")]
	public IEnumerable<string> values
	{
		[Token(Token = "0x60026FA")]
		[Address(RVA = "0x6B5CE30", Offset = "0x6B5BE30", VA = "0x6B5CE30")]
		get
		{
			return null;
		}
		[Token(Token = "0x60026FB")]
		[Address(RVA = "0x6B5CE40", Offset = "0x6B5BE40", VA = "0x6B5CE40")]
		set
		{
		}
	}

	[Token(Token = "0x60026FC")]
	[Address(RVA = "0x6B5CEA0", Offset = "0x6B5BEA0", VA = "0x6B5CEA0", Slot = "5")]
	public override bool Equals(UxmlTypeRestriction other)
	{
		return default(bool);
	}

	[Token(Token = "0x60026FD")]
	[Address(RVA = "0x6B5CFC0", Offset = "0x6B5BFC0", VA = "0x6B5CFC0")]
	public UxmlEnumeration()
	{
	}
}
