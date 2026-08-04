// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.IVertexModifier
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.ComponentModel;
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x2000084")]
[EditorBrowsable(EditorBrowsableState.Never)]
[Obsolete("Use IMeshModifier instead", true)]
public interface IVertexModifier
{
	[Token(Token = "0x6000532")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("use IMeshModifier.ModifyMesh (VertexHelper verts)  instead", true)]
	void ModifyVertices(List<UIVertex> verts);
}
