// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IBaseUxmlFactory
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000439")]
public interface IBaseUxmlFactory
{
	[Token(Token = "0x1700071B")]
	string uxmlQualifiedName
	{
		[Token(Token = "0x6001AE3")]
		get;
	}

	[Token(Token = "0x1700071C")]
	Type uxmlType
	{
		[Token(Token = "0x6001AE4")]
		get;
	}

	[Token(Token = "0x6001AE5")]
	bool AcceptsAttributeBag(IUxmlAttributes bag, CreationContext cc);
}
