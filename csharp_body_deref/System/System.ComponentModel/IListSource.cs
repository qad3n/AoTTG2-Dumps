// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.IListSource
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200029F")]
[MergableProperty(false)]
public interface IListSource
{
	[Token(Token = "0x170003B6")]
	bool ContainsListCollection
	{
		[Token(Token = "0x60010A4")]
		get;
	}

	[Token(Token = "0x60010A5")]
	IList GetList();
}
