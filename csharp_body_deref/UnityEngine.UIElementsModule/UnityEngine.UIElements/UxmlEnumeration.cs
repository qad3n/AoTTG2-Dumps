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
		[Address(RVA = "0x172DEB0", Offset = "0x172C4B0", VA = "0x18172DEB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60026FB")]
		[Address(RVA = "0x3161FF0", Offset = "0x31605F0", VA = "0x183161FF0")]
		set
		{
		}
	}

	[Token(Token = "0x60026FC")]
	[Address(RVA = "0x3161E10", Offset = "0x3160410", VA = "0x183161E10", Slot = "5")]
	public override bool Equals(UxmlTypeRestriction other)
	{
		return default(bool);
	}

	[Token(Token = "0x60026FD")]
	[Address(RVA = "0x3161F70", Offset = "0x3160570", VA = "0x183161F70")]
	public UxmlEnumeration()
	{
	}
}
