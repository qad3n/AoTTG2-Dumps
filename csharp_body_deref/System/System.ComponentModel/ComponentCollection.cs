// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ComponentCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200024D")]
public class ComponentCollection : ReadOnlyCollectionBase
{
	[Token(Token = "0x17000336")]
	public virtual IComponent this[string name]
	{
		[Token(Token = "0x6000E6D")]
		[Address(RVA = "0x4880FE0", Offset = "0x4880FE0", VA = "0x4880FE0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000337")]
	public virtual IComponent this[int index]
	{
		[Token(Token = "0x6000E6E")]
		[Address(RVA = "0x4881690", Offset = "0x4881690", VA = "0x4881690", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E6C")]
	[Address(RVA = "0x4880F90", Offset = "0x4880F90", VA = "0x4880F90")]
	public ComponentCollection(IComponent[] components)
	{
	}

	[Token(Token = "0x6000E6F")]
	[Address(RVA = "0x4881720", Offset = "0x4881720", VA = "0x4881720")]
	public void CopyTo(IComponent[] array, int index)
	{
	}
}
