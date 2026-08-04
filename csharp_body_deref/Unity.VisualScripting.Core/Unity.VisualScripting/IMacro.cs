// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.IMacro
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x20000CC")]
public interface IMacro : IGraphRoot, IGraphParent, ISerializationDependency, ISerializationCallbackReceiver, IAotStubbable
{
	[Token(Token = "0x17000109")]
	IGraph graph
	{
		[Token(Token = "0x60004E7")]
		get;
		[Token(Token = "0x60004E8")]
		set;
	}
}
