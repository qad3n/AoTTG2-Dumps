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

[Token(Token = "0x2000158")]
public class ComponentCollection : ReadOnlyCollectionBase
{
	[Token(Token = "0x170001A5")]
	public virtual IComponent this[string name]
	{
		[Token(Token = "0x60008B5")]
		[Address(RVA = "0x287C320", Offset = "0x287A920", VA = "0x18287C320", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A6")]
	public virtual IComponent this[int index]
	{
		[Token(Token = "0x60008B6")]
		[Address(RVA = "0x287C290", Offset = "0x287A890", VA = "0x18287C290", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008B4")]
	[Address(RVA = "0x287C240", Offset = "0x287A840", VA = "0x18287C240")]
	public ComponentCollection(IComponent[] components)
	{
	}

	[Token(Token = "0x60008B7")]
	[Address(RVA = "0x287C1F0", Offset = "0x287A7F0", VA = "0x18287C1F0")]
	public void CopyTo(IComponent[] array, int index)
	{
	}
}
