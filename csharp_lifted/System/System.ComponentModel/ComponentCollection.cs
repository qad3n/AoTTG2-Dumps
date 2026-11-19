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

[Token(Token = "0x2000119")]
public class ComponentCollection : ReadOnlyCollectionBase
{
	[Token(Token = "0x17000176")]
	public virtual IComponent this[string name]
	{
		[Token(Token = "0x60006F5")]
		[Address(RVA = "0x6221BF0", Offset = "0x6220BF0", VA = "0x6221BF0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000177")]
	public virtual IComponent this[int index]
	{
		[Token(Token = "0x60006F6")]
		[Address(RVA = "0x62221E0", Offset = "0x62211E0", VA = "0x62221E0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x6221BA0", Offset = "0x6220BA0", VA = "0x6221BA0")]
	public ComponentCollection(IComponent[] components)
	{
	}

	[Token(Token = "0x60006F7")]
	[Address(RVA = "0x6222270", Offset = "0x6221270", VA = "0x6222270")]
	public void CopyTo(IComponent[] array, int index)
	{
	}
}
