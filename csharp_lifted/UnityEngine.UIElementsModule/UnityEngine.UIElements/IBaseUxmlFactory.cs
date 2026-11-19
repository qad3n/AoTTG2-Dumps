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

[Token(Token = "0x2000506")]
[Obsolete("IUxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
public interface IBaseUxmlFactory
{
	[Token(Token = "0x170009EA")]
	string uxmlQualifiedName
	{
		[Token(Token = "0x60026B2")]
		get;
	}

	[Token(Token = "0x170009EB")]
	Type uxmlType
	{
		[Token(Token = "0x60026B3")]
		get;
	}

	[Token(Token = "0x60026B4")]
	bool AcceptsAttributeBag(IUxmlAttributes bag, CreationContext cc);
}
