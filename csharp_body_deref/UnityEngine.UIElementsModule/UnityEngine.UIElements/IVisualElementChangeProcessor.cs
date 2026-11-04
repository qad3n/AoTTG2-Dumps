// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IVisualElementChangeProcessor
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x200000B")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIToolkitAuthoringModule" })]
internal interface IVisualElementChangeProcessor
{
	[Token(Token = "0x600002C")]
	void BeginProcessing(BaseVisualElementPanel panel);

	[Token(Token = "0x600002D")]
	void ProcessChanges(BaseVisualElementPanel panel, AuthoringChanges changes);

	[Token(Token = "0x600002E")]
	void EndProcessing(BaseVisualElementPanel panel);
}
