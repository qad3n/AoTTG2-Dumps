// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.IMeshModifier
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x2000085")]
public interface IMeshModifier
{
	[Token(Token = "0x6000533")]
	[Obsolete("use IMeshModifier.ModifyMesh (VertexHelper verts) instead", false)]
	void ModifyMesh(Mesh mesh);

	[Token(Token = "0x6000534")]
	void ModifyMesh(VertexHelper verts);
}
