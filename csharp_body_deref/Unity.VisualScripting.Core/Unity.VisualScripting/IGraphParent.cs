// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.IGraphParent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x2000089")]
public interface IGraphParent
{
	[Token(Token = "0x170000F6")]
	IGraph childGraph
	{
		[Token(Token = "0x60003FC")]
		get;
	}

	[Token(Token = "0x170000F7")]
	bool isSerializationRoot
	{
		[Token(Token = "0x60003FD")]
		get;
	}

	[Token(Token = "0x170000F8")]
	Object serializedObject
	{
		[Token(Token = "0x60003FE")]
		get;
	}

	[Token(Token = "0x60003FF")]
	IGraph DefaultGraph();
}
